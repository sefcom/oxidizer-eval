void _ZN7uu_sort8tokenize17hb47c688654b41b2eE(long param_1,ulong param_2,int param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  int iStack_54;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  int *piStack_38;
  
  if (*(long *)(param_4 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    _ZN4core9panicking5panic17h8c3a660c3523e4a4E
              ("assertion failed: token_buffer.is_empty()",0x29,
               &PTR_s_src_uu_sort_src_sort_rs_002ff9f8);
  }
  if (param_3 != 0x110000) {
    lStack_48 = param_1 + param_2;
    uStack_40 = 0;
    piStack_38 = &iStack_54;
    iStack_54 = param_3;
    lStack_50 = param_1;
    auVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hafeb71a2c09695d3E
                       (&lStack_50,&piStack_38);
    lVar1 = auVar3._8_8_;
    if (auVar3._0_8_ == 0) {
      uVar2 = 0;
      if (param_2 == 0) {
        return;
      }
    }
    else {
      uVar2 = 0;
      do {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0ef512be9be90a46E(param_4,uVar2,lVar1);
        uVar2 = lVar1 + 1;
        auVar3 = _ZN4core4iter6traits8iterator8Iterator8try_fold17hafeb71a2c09695d3E
                           (&lStack_50,&piStack_38);
        lVar1 = auVar3._8_8_;
      } while (auVar3._0_8_ != 0);
      if (param_2 <= uVar2) {
        return;
      }
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h0ef512be9be90a46E(param_4,uVar2,param_2);
    return;
  }
  _ZN7uu_sort16tokenize_default17hbd8e160b62a3efd1E(param_1,param_2,param_4);
  return;
}