context("expr-sym")

test_that("ensym() fails with calls", {
  capture_sym <- function(arg) ensym(arg)
  expect_identical(capture_sym(foo), quote(foo))
  expect_error(capture_sym(foo(bar)), "Must supply a symbol")
})

test_that("empty string is treated as the missing argument", {
  expect_identical(sym(""), missing_arg())
})

test_that("syms() supports symbols as well", {
  expect_identical(syms(list(quote(a), "b")), list(quote(a), quote(b)))
})
