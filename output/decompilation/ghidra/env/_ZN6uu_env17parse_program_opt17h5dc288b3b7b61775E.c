undefined8 _ZN6uu_env17parse_program_opt17h5dc288b3b7b61775E(long param_1)

{
  undefined8 uVar1;
  undefined auStack_28 [24];
  undefined4 local_10;
  
  if (*(char *)(param_1 + 0x99) == '\0') {
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17he132dab3b8589a55E
              (auStack_28,&DAT_0012449b,0x27);
    local_10 = 0x7d;
    uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17ha5ed2421d13baa8bE(auStack_28);
  }
  else {
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h98294152d1093a7cE(param_1 + 0x48);
    uVar1 = 0;
  }
  return uVar1;
}