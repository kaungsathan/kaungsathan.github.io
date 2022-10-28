<template>
  <div class="detail">
    <h1>Product detail</h1>

    <div class="card mb-3 m-auto mt-5" style="max-width: 940px;">
      <div class="row g-5 p-4">
        <div class="col-md-4">
          <img :src="product.image" class="img-fluid rounded-start" alt="...">
        </div>
        <div class="col-md-8">
          <div class="card-body h-100 text-start">
            <h5 class="card-title">{{ product.category }}</h5>
            <p class="card-text">
              Name - {{ product.title }}
            </p>

            <p class="card-text">
              Price - {{ product.price }}
            </p>

            <p class="card-text">
              Description - {{ product.description }}
            </p>

            <p class="card-text">
              Rating - {{ rating }}
            </p>
            <p class="card-text"><small class="text-muted">Last updated 3 mins ago</small></p>

            <router-link to="/store" class="text-white text-decoration-none">
              <button class="btn btn-dark" @click="add">Add to Cart</button>
            </router-link>
          </div>
        </div>
      </div>
    </div>

    <div class="m-auto text-start" style="max-width: 940px;">
      <router-link to="/store">
        <button type="button" class="btn btn-dark">Back</button>
      </router-link>
    </div>

  </div>
</template>

<script>
const axios = require('axios');

export default {
  name: 'DetailView',
  data() {
    return {
      product: {},
      rating: 0,
      addCondition: true,
    }
  },

  mounted() {
    this.showDetail();
  },

  methods: {
    showDetail() {
      let id = this.$route.params.id;
      axios.get('https://fakestoreapi.com/products/' + id)
        .then(response => {

          this.product = response.data;
          this.product['qty'] = 1;
          
          this.product['price'] = this.product['price'].toFixed();
          this.product['price'] = parseInt(this.product['price']);
          
          this.rating = response.data.rating.rate;
        })
    },

    add() {
      let storage = localStorage.getItem('cart');
      let productArr = new Array();
      if (!storage) {
        productArr.push(this.product);
      } else {
        productArr = JSON.parse(storage);

        for (const element of productArr) {
          if (element.id == this.product.id) {
            element.qty += 1;
            this.addCondition = false;

          }
        }

        if (this.addCondition) {
          productArr.push(this.product);
        }

      }

      localStorage.setItem('cart', JSON.stringify(productArr));

    }
  },

}
</script>