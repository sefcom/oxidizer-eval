void _ZN6uu_env14split_iterator13SplitIterator17push_char_to_word17hcc09ef0ffa883c76E
               (undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 uStack_2c;
  undefined auStack_28 [24];
  
  uStack_2c = 0;
  uVar1 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(param_2,&uStack_2c);
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf510679057ea9fe7E
            (auStack_28,uVar1);
  _ZN6uu_env15string_expander14StringExpander10put_string17hfe19c27602ea80b0E(param_1,auStack_28);
  return;
}