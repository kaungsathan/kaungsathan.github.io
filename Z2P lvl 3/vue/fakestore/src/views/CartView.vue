<template>
    <div class="cart container">
        <div v-if="productStr == null">
            <h1>Cart is empty</h1>
        </div>

        <table class="table table-striped" v-if="productStr != null">
            <thead>
                <tr>
                    <th>No</th>
                    <th>Name</th>
                    <th>Price</th>
                    <th>Qty</th>
                    <th>Total</th>
                </tr>
            </thead>

            <tbody>
                <tr v-for="(item, index) in productArr" :key="index">
                    <td>{{ index + 1 }}</td>
                    <td>{{ item.title }}</td>
                    <td>{{ item.price }}</td>
                    <td>
                        <button type="button" class="btn btn-dark" @click="sub(index)">-</button>
                        {{ item.qty }}
                        <button type="button" class="btn btn-dark" @click="adding(index)">+</button>
                    </td>
                    <td>{{ (item.price) * (item.qty) }}</td>
                </tr>
            </tbody>

            <tfoot>
                <tr>
                    <td colspan="4">Total</td>
                    <td>{{ totalPrice }}</td>
                </tr>
            </tfoot>
        </table>
    </div>
</template>

<script>

export default {
    name: 'CartView',
    data() {
        return {
            productArr: [],
            totalPrice: 0,
            productStr: '',
        }
    },

    mounted() {
        this.get();
    },

    methods: {
        get() {
            let productStr = localStorage.getItem('cart');
            this.productStr = productStr;

            if (productStr == null) {
                this.productArr = JSON.parse(productStr);
            } else {
                this.productArr = JSON.parse(productStr);

                let total = 0;
                for (const item of this.productArr) {
                    total += (item.price) * (item.qty);
                }
                this.totalPrice = total;

            }

        },

        adding(no) {

            let item = localStorage.getItem('cart');
            let addingQty = JSON.parse(item);

            (addingQty[no].qty)++;

            localStorage.setItem('cart', JSON.stringify(addingQty));
            this.get();
        },

        sub(no) {

            let item = localStorage.getItem('cart');
            let addingQty = JSON.parse(item);

            (addingQty[no].qty)--;

            if (addingQty[no].qty == 0) {
                addingQty.splice(no, 1);
            }

            localStorage.setItem('cart', JSON.stringify(addingQty));
            if (addingQty.length == 0) {
                localStorage.clear();
                this.totalPrice = 0;
            }
            this.get();
        },

    },
}
</script>
