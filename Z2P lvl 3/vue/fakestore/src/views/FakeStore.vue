<template>
    <div class="store">
        <h1>Fake Store</h1>

        <div class="card-group">
            <div class="row p-5 g-5">
                <div class="card col-lg-3 col-md-4 col-sm-6 col-12" v-for="(item, index) in items" :key="index">
                    <img :src="item.image" class="card-img-top">
                    <div class="card-body text-start lh-base">
                        <h3 class="card-title">{{ item.title }}</h3>
                        <p class="card-text">
                            {{ item.description }}
                        </p>
                    </div>
                    <div class="card-footer bg-white">
                        <router-link :to="{ name: 'detail', params: { id: item.id } }">
                            <button type="button" class="btn btn-dark">View</button>
                        </router-link>
                    </div>
                </div>
            </div>
        </div>

    </div>
</template>

<script>
const axios = require('axios');

export default {
    name: 'FakeStore',
    data() {
        return {
            items: [],
        }
    },

    methods: {

    },

    mounted() {
        axios.get('https://fakestoreapi.com/products')
            .then(response => {
                this.items = response.data;
            })
    },
}
</script>