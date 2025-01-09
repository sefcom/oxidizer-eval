undefined8 __rustcall
uu_numfmt::format::format_and_print
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*(long *)(param_4 + 0x70) == -0x8000000000000000) {
    format_and_print_whitespace(param_1);
  }
  else {
    format_and_print_delimited(param_1);
  }
  return param_1;
}