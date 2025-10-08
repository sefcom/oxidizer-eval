void _ZN6uu_env15string_expander14StringExpander12put_one_char17h09d64e56b18d506aE
               (undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_2c;
  undefined local_28 [24];
  
  local_2c = 0;
  uVar1 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(param_2,&local_2c);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf510679057ea9fe7E
            (local_28,uVar1);
  _ZN6uu_env15string_expander14StringExpander10put_string17hfe19c27602ea80b0E(param_1,local_28);
  return;
}