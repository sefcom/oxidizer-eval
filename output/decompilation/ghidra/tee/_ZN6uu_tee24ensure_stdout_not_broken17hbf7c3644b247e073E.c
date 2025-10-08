undefined2 * _ZN6uu_tee24ensure_stdout_not_broken17hbf7c3644b247e073E(undefined2 *param_1)

{
  code *pcVar1;
  byte bVar2;
  undefined uVar3;
  undefined2 *puVar4;
  undefined auVar5 [16];
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 **local_a0;
  uint local_88;
  
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f0d78)();
  (*(code *)PTR__ZN3nix3sys4stat5fstat17h932ea0f7705da4a5E_001f0ec8)(&local_a8,1);
  if ((int)local_a8 == 1) {
    *(ulong *)(param_1 + 4) = (ulong)local_a8 & 0xffffffff00000000 | 2;
    *(undefined *)param_1 = 1;
  }
  else if ((local_88 & 0x1000) == 0) {
    *param_1 = 0x100;
  }
  else {
    local_b0 = 0x8000000001;
    auVar5 = _ZN3nix4poll4poll17h39db83bcc35c5ee5E(&local_b0);
    if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      if (auVar5._8_4_ < 1) {
        (*(code *)PTR__ZN4core9panicking5panic17h85d6dd562679980cE_001f0d48)
                  ("internal error: entered unreachable code",0x28,
                   &PTR_s_src_uu_tee_src_tee_rs__001ea5b0);
        pcVar1 = (code *)swi(3);
        puVar4 = (undefined2 *)(*pcVar1)();
        return puVar4;
      }
      local_a0 = &local_a8;
      local_a8 = &local_b0;
      bVar2 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hdd04b6cc49b12deaE
                        (&local_a8);
      *(byte *)((long)param_1 + 1) = bVar2 ^ 1;
      uVar3 = 0;
    }
    else {
      *(ulong *)(param_1 + 4) = auVar5._8_8_ << 0x20 | 2;
      uVar3 = 1;
    }
    *(undefined *)param_1 = uVar3;
  }
  return param_1;
}