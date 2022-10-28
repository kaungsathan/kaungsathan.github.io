<template>
    <h3>Testing Component</h3>
    <h3>{{name}}</h3>
    <button @click="reverse">Reverse</button>
</template>

<script>
export default {
    name: 'TestingPart',
    data() {
        return {
            name: "kaungsathan",
        }
    },

    methods: {
        reverse() {
            this.name = this.name.split('').reverse().join('');
        }
    },
    
}
</script>

<style></style>