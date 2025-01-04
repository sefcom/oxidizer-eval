undefined4 __rustcall uu_expand::is_digit_or_comma(int param_1)

{
  return CONCAT31((int3)(param_1 - 0x30U >> 8),param_1 == 0x2c || param_1 - 0x30U < 10);
}