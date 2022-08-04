// const { createApp } = Vue

const ap = Vue.createApp({
    data() {
        return {
            message: '<p style="color: red;">Hello World</p>',
            name: 'kaungsat',
            age: 21,
            photo: '../bootstrap/sneaker/assets/images/favicon.png',
            count: 1,
            username: '',
            color: ['red', 'green', 'blue'],
            student: [
                { name: 'mgmg', age: 20, gender: 'male' },
                { name: 'mama', age: 20, gender: 'female' }
            ],

        }
    },
    methods: {
        openAlert(msg) {
            alert(this.name);
            alert(msg);
        }
    },
});

const app2 = Vue.createApp({
    data() {
        return {
            feet: '',
            inch: '',
            pound: '',
            totalInch: '',
            semiBmi: '',
            finalBmi: '',
            result: '',
        }
    },
    
    methods: {
        calculate() {
            this.totalInch = (this.feet * 12) + (this.inch);
            this.semiBmi = this.pound * 703;
            this.finalBmi = this.semiBmi / (this.totalInch * this.totalInch);
            this.result = this.finalBmi.toFixed(1);
        }
    },
});