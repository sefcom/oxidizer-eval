void _ZN6uu_env15variable_parser14VariableParser25check_variable_name_start17hd163d333f3df61ddE
               (undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  iVar2 = _ZN6uu_env15variable_parser14VariableParser16get_current_char17h2461897ac15abcf2E(param_2)
  ;
  uVar4 = 0xc;
  if (iVar2 - 0x30U < 10) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    local_2c = 0;
    uVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(iVar2,&local_2c);
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hf510679057ea9fe7E
              (&local_28,uVar3);
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 4) = local_28;
    *(undefined8 *)(param_1 + 6) = uStack_20;
    *(undefined8 *)(param_1 + 8) = local_18;
    uVar4 = 7;
  }
  *param_1 = uVar4;
  return;
}