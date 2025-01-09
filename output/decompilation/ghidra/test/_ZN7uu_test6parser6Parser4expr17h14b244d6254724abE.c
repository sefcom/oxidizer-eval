void __rustcall uu_test::parser::Parser::expr(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  cVar1 = peek_is_boolop(param_2);
  if (((cVar1 != '\0') || (term(&local_30,param_2), local_30 == 7)) &&
     (maybe_boolop(&local_30,param_2), local_30 == 7)) {
    *param_1 = 7;
    return;
  }
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  *param_1 = CONCAT44(uStack_2c,local_30);
  param_1[1] = uStack_28;
  return;
}