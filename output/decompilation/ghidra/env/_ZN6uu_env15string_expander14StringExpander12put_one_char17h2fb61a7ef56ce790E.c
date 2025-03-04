void _ZN6uu_env15string_expander14StringExpander12put_one_char17h2fb61a7ef56ce790E
               (undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_2c;
  undefined local_28 [24];
  
  local_2c = 0;
  uVar1 = _ZN4core4char7methods15encode_utf8_raw17h4a752b0d300141c4E(param_2,&local_2c);
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he132dab3b8589a55E
            (local_28,uVar1);
  _ZN6uu_env15string_expander14StringExpander10put_string17h9dc86166bab9a39eE(param_1,local_28);
  return;
}