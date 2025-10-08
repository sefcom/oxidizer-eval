undefined8
_ZN7uu_head31head_backwards_on_seekable_file17h7e88d54791e3601dE(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  int local_c0 [20];
  ulong local_70;
  
  if (*param_2 == 1) {
    auVar6 = _ZN7uu_head22find_nth_line_from_end17h2ab1c0c6df65cb6bE
                       (param_1,param_2[1],*(undefined *)((long)param_2 + 0x2b));
    lVar4 = auVar6._8_8_;
    uVar3 = 1;
    lVar5 = lVar4;
    if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
LAB_00167935:
      uVar3 = _ZN7uu_head12read_n_bytes17haa0958494279c1b2E(param_1,lVar5,lVar4);
      return uVar3;
    }
  }
  else {
    if ((int)*param_2 != 3) {
      (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001fe820)
                ("internal error: entered unreachable code",0x28,
                 &PTR_s_src_uu_head_src_head_rs_001f7d30);
      pcVar2 = (code *)swi(3);
      uVar3 = (*pcVar2)();
      return uVar3;
    }
    uVar1 = param_2[1];
    (*(code *)PTR__ZN3std2fs4File8metadata17h5e84e533705f8c98E_001fe8e8)(local_c0,param_1);
    if (local_c0[0] == 2) {
      uVar3 = 1;
    }
    else {
      lVar4 = 0;
      uVar3 = 0;
      lVar5 = local_70 - uVar1;
      if (uVar1 <= local_70 && lVar5 != 0) goto LAB_00167935;
    }
  }
  return uVar3;
}