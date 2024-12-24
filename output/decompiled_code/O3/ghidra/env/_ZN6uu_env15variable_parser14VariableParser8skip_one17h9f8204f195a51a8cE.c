void __rustcall uu_env::variable_parser::VariableParser::skip_one(undefined4 *param_1)

{
  undefined4 uVar1;
  long local_20;
  undefined8 local_18;
  undefined local_10;
  
  string_parser::StringParser::consume_chunk(&local_20);
  if (local_20 == 0) {
    uVar1 = 8;
  }
  else {
    *(undefined8 *)(param_1 + 2) = local_18;
    *(undefined8 *)(param_1 + 4) = local_18;
    *(undefined *)(param_1 + 6) = local_10;
    uVar1 = 5;
  }
  *param_1 = uVar1;
  return;
}