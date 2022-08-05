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

const ex2 = Vue.createApp({
    data() {
        return {
            age: Number,
            isButtonDisable: true,
            age: Number,
        }
    },

    methods: {
        btn() {
            if (this.age >= 18) {
                this.isButtonDisable = false;
            } else {
                this.isButtonDisable = true;
            }
        },

        validate() {
            alert("validate");
        }
    },
});

const table = Vue.createApp({
    data() {
        return {
            students: [
                { name: 'Mg Mg', age: 23, gender: 'male' },
                { name: 'Su Su', age: 20, gender: 'female' },
                { name: 'Bo Bo', age: 22, gender: 'male' },
            ],
            message: '',
        }
    },

    methods: {
        detail(index) {
            this.message = `My name is ${this.students[index].name} and I'm ${this.students[index].age} years old.`;
            alert(this.message);
        }
    },
});