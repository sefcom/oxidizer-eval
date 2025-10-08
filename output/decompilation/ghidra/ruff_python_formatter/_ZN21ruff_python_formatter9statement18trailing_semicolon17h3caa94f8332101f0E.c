void _ZN21ruff_python_formatter9statement18trailing_semicolon17h3caa94f8332101f0E
               (uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined4 extraout_EDX;
  undefined8 local_78;
  char local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [48];
  undefined local_28;
  
  local_68 = param_2;
  local_60 = param_3;
  (*(code *)
    PTR__ZN89__LT_ruff_python_ast__generated__AnyNodeRef_u20_as_u20_ruff_text_size__traits__Ranged_GT_5range17h63c57de0951e4c55E_006bd7f8
  )(&local_68);
  (*(code *)
    PTR__ZN18ruff_python_trivia9tokenizer15SimpleTokenizer9starts_at17h166ec428bdd164b3E_006bdc78)
            (local_58,extraout_EDX,param_4,param_5);
  local_28 = 0;
  _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17had9a8a3d821e7462E
            (&local_78,local_58);
  if (local_70 == '\r') {
    *(undefined8 *)(param_1 + 1) = local_78;
  }
  *param_1 = (uint)(local_70 == '\r');
  return;
}