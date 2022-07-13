$(document).ready(function () {
  getItem();

  $(".productbtn").on("click", function () {
    var id = $(this).data("id");
    var name = $(this).data("name");
    var price = $(this).data("price");
    var add = true;

    var item = {
      id: id,
      name: name,
      price: price,
      qty: 1,
    };

    var cartStr = localStorage.getItem("cart");

    if (!cartStr) {
      var itemArr = new Array();
    } else {
      itemArr = JSON.parse(cartStr);
    }
    // console.log(itemArr);
    $(itemArr).each(function (i, e) {
      if (e.id == item.id) {
        e.qty += 1;
        add = false;
      }
    });

    if (add) {
      itemArr.push(item);
    }
    localStorage.setItem("cart", JSON.stringify(itemArr));

    getItem();
  });

  function getItem() {
    var cartStr = localStorage.getItem("cart");
    var data = "";
    var total = 0;
    var k = 1;

    if (cartStr == null) {
      data += "Your cart is empty";
      $("table").attr("border", "0");
      $(".thead").hide();
    } else {
      $(".thead").show();
      table();
      $("table").attr("border", "1");
      var itemArr = JSON.parse(cartStr);
      // console.log(itemArr);

      $(itemArr).each(function (i, v) {
        data += `
              <tr>
                <td><button data-index="${i}" class="closebtn">x</button>
                ${k}</td>
                <td>${v.name}</td>
                <td class="price">${v.price}</td>
                <td>
                <button data-index="${i}" data-qty="${
          v.qty
        }" class="deductbtn"><</button>
                ${v.qty}
                <button data-index="${i}" data-qty="${
          v.qty
        }" class="addbtn">></button>
                </td>
                <td class="price">${v.qty * v.price}</td>
              </tr>
              `;
        total += v.qty * v.price;
        k++;
      });

      data += `
        <tr>
          <td colspan="4">Total</td>
          <td class="price">${total}</td>
        </tr>
      `;
    }

    $(".cartItem").html(data);

    $(".price").priceFormat({
      prefix: "",
      suffix: " MMK",
      centsLimit: 3,
      centsSeparator: ",",
    });

    // buttons
    $(".closebtn").on("click", function () {
      var close = $(this).data("index");
      itemArr.splice(close, 1);
      localStorage.setItem("cart", JSON.stringify(itemArr));

      if (itemArr.length == 0) {
        localStorage.clear();
      }
      getItem();
    });

    // add
    $(".addbtn").on("click", function () {
      var arrNo = $(this).data("index");
      var add = itemArr[arrNo].qty;
      add++;
      itemArr[arrNo].qty = add;
      // console.log(itemArr[arrNo]);
      localStorage.setItem("cart", JSON.stringify(itemArr));
      getItem();
    });

    // deduct
    $(".deductbtn").on("click", function () {
      var arrNo = $(this).data("index");
      var deduct = itemArr[arrNo].qty;
      deduct--;
      itemArr[arrNo].qty = deduct;

      if (itemArr[arrNo].qty == 0) {
        itemArr.splice(arrNo, 1);
      }

      localStorage.setItem("cart", JSON.stringify(itemArr));
      if (itemArr.length == 0) {
        localStorage.clear();
      }
      getItem();
    });
  }

  function table() {
    var table = "";
    table = `
      <tr>
        <th>No</th>
        <th>Name</th>
        <th>Price</th>
        <th>Qty</th>
        <th>Total</th>
      </tr>
    `;

    $(".thead").html(table);
  }
});
