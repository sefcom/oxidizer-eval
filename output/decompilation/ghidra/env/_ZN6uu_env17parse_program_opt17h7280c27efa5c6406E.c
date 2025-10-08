undefined8
_ZN6uu_env17parse_program_opt17h7280c27efa5c6406E
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auStack_28 [24];
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x99) != '\0') {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h6ca0b45f5c80c114E
              (param_1 + 0x48,param_2,param_3,&PTR_DAT_00210850);
    return 0;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf510679057ea9fe7E
            (auStack_28,&DAT_0011e87f,0x27);
  local_10 = 0x7d;
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cd361b0827381d8E(auStack_28);
  return uVar1;
}