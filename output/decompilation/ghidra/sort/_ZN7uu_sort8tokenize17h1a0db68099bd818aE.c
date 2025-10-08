void _ZN7uu_sort8tokenize17h1a0db68099bd818aE(long param_1,ulong param_2,int param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined auVar4 [16];
  int iStack_5c;
  ulong uStack_58;
  long lStack_50;
  long lStack_48;
  undefined8 uStack_40;
  int *piStack_38;
  
  if (*(long *)(param_4 + 0x10) != 0) {
    (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_002970c8)
              ("assertion failed: token_buffer.is_empty()",0x29,
               &PTR_s_src_uu_sort_src_sort_rs_0028cf70);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_3 != 0x110000) {
    lStack_48 = param_1 + param_2;
    uStack_40 = 0;
    piStack_38 = &iStack_5c;
    iStack_5c = param_3;
    uStack_58 = param_2;
    lStack_50 = param_1;
    auVar4 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h6349d0229f81716eE
                       (&lStack_50,&piStack_38);
    lVar2 = auVar4._8_8_;
    if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      uVar3 = 0;
      if (uStack_58 == 0) {
        return;
      }
    }
    else {
      uVar3 = 0;
      do {
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5e09b1a2e814c1b4E
                  (param_4,uVar3,lVar2,&PTR_s_src_uu_sort_src_sort_rs_0028d000);
        uVar3 = lVar2 + 1;
        auVar4 = _ZN4core4iter6traits8iterator8Iterator8try_fold17h6349d0229f81716eE
                           (&lStack_50,&piStack_38);
        lVar2 = auVar4._8_8_;
      } while ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0);
      if (uStack_58 <= uVar3) {
        return;
      }
    }
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h5e09b1a2e814c1b4E
              (param_4,uVar3,uStack_58,&PTR_s_src_uu_sort_src_sort_rs_0028cfe8);
    return;
  }
  _ZN7uu_sort16tokenize_default17h6d5287f081d7f5edE(param_1,param_2,param_4);
  return;
}