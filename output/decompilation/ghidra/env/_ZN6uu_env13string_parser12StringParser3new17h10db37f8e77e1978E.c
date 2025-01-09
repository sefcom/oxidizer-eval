undefined8 * __rustcall
uu_env::string_parser::StringParser::new(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_30 = param_2;
  uStack_28 = param_3;
  local_20 = param_2;
  uStack_18 = param_3;
  set_pointer(&local_30,0);
  param_1[4] = local_10;
  param_1[2] = local_20;
  param_1[3] = uStack_18;
  *param_1 = local_30;
  param_1[1] = uStack_28;
  return param_1;
}