ulong __rustcall uu_test::parser::Parser::peek_is_boolop(undefined8 param_1)

{
  undefined8 unaff_RBP;
  int local_38 [10];
  
  peek(local_38,param_1);
  core::ptr::drop_in_place<uu_test::parser::Symbol>(local_38);
  return CONCAT71((int7)((ulong)unaff_RBP >> 8),local_38[0] == 2) & 0xffffffff;
}