$(document).ready(function () {
  getItem();

  $("button").on("click", function () {
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
    console.log(itemArr);
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
    if (!cartStr) {
      data += "Your cart is empty";
    } else {
      table();
      $("table").attr("border", "1");
      var itemArr = JSON.parse(cartStr);
      $(itemArr).each(function (i, v) {
        data += `
              <tr>
                <td>${i + 1}</td>
                <td>${v.name}</td>
                <td>${v.price}</td>
                <td>${v.qty}</td>
                <td>${v.qty * v.price}</td>
              </tr>
              `;
        total += v.qty * v.price;
      });

      data += `
        <tr>
          <td colspan="4">Total</td>
          <td>${total}</td>
        </tr>
      `;
    }

    $(".cartItem").html(data);
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
