<template>
  <div class="contact">
    <h1 class="text-danger">This is an contact page</h1>

    <div class="row" v-if="memes.length > 0">
      <div class="col-md-3" v-for="(item,index) in memes" :key="index">
        <div class="card" style="width: 18rem;">
          <img :src="item.url" class="card-img-top" alt="...">
          <div class="card-body">
            <h5 class="card-title">{{ item.name }}</h5>
            <router-link :to="{ name: 'detail', params: { id: item.id } }">Detail</router-link>
          </div>
        </div>
      </div>
    </div>
  </div>
</template>

<script>
const axios = require('axios');

export default {
  name: 'ContactView',
  data() {
    return {
      memes: [],
    }
  },

  mounted() {
    axios.get('https://api.imgflip.com/get_memes')
      .then(response => {
        console.log(response.data.data.memes);
        this.memes = response.data.data.memes;
      })
  },
}
</script>
