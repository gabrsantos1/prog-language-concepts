let x = 10

function f() {
  console.log("Valor de X:", x)
}

function g() {
  let x = 20
  f()
}

g()