undefined  [16] _ZN8uu_nohup11replace_fds17h2e47797ec36e0a94E(void)

{
  undefined auVar1 [16];
  char cVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined8 uVar6;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar7;
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined auVar10 [16];
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  ulong local_28;
  
  (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001e4e48)();
  cVar2 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h046b5b5b5fb1a26bE();
  if (cVar2 != '\0') {
    _ZN3std2fs4File4open17h2416ede482a4a2f7E(&local_40);
    local_28 = (ulong)local_38;
    if ((local_40 & 1) != 0) {
      local_38 = "STDIN";
      local_30 = 5;
      goto LAB_00156b38;
    }
    iVar4 = local_40._4_4_;
    iVar3 = (*(code *)PTR_dup2_001e4e50)(local_40._4_4_,0);
    if (iVar3 != 0) {
      puVar5 = (uint *)(*(code *)PTR___errno_location_001e4e58)();
      local_28 = (ulong)*puVar5 << 0x20 | 2;
      local_38 = "STDIN";
      local_30 = 5;
      local_40 = 0x8000000000000001;
                    /* try { // try from 00156a70 to 00156a79 has its CatchHandler @ 00156bb2 */
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hea0f551513cd90e2E(&local_40);
      goto LAB_00156b94;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h184ce9d8bb619024E(iVar4);
  }
  (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001e4db0)();
  cVar2 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17hcf7d6d4c2f7f995eE();
  if (cVar2 != '\0') {
    _ZN8uu_nohup11find_stdout17hadffd7477f170ba3E(&local_40);
    if (local_40 != 0) {
      auVar8._8_8_ = local_38;
      auVar8._0_8_ = local_40;
      return auVar8;
    }
    iVar4 = (int)local_38;
    iVar3 = (*(code *)PTR_dup2_001e4e50)((ulong)local_38 & 0xffffffff,1);
    if (iVar3 != 1) {
      puVar5 = (uint *)(*(code *)PTR___errno_location_001e4e58)();
      local_28 = (ulong)*puVar5 << 0x20 | 2;
      local_38 = "STDOUT: ";
      local_30 = 6;
      local_40 = 0x8000000000000001;
                    /* try { // try from 00156b8a to 00156b93 has its CatchHandler @ 00156bb0 */
      uVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hea0f551513cd90e2E(&local_40);
LAB_00156b94:
      _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h184ce9d8bb619024E(iVar4);
      auVar10._8_8_ =
           &PTR__ZN4core3ptr41drop_in_place_LT_uu_nohup__NohupError_GT_17h1aac36d21234ba1dE_001debb0
      ;
      auVar10._0_8_ = uVar6;
      return auVar10;
    }
    _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h184ce9d8bb619024E((int)local_38);
  }
  cVar2 = _ZN3std3sys2io11is_terminal6isatty11is_terminal17h8f1b5f7a0186fa4cE();
  uVar7 = extraout_RDX;
  if (cVar2 != '\0') {
    iVar4 = (*(code *)PTR_dup2_001e4e50)(1,2);
    uVar7 = extraout_RDX_00;
    if (iVar4 != 2) {
      puVar5 = (uint *)(*(code *)PTR___errno_location_001e4e58)();
      local_28 = (ulong)*puVar5 << 0x20 | 2;
      local_38 = "STDERR";
      local_30 = 6;
LAB_00156b38:
      local_40 = 0x8000000000000001;
      auVar9._0_8_ = _ZN5alloc5boxed12Box_LT_T_GT_3new17hea0f551513cd90e2E(&local_40);
      auVar9._8_8_ = &
                     PTR__ZN4core3ptr41drop_in_place_LT_uu_nohup__NohupError_GT_17h1aac36d21234ba1dE_001debb0
      ;
      return auVar9;
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar7;
  return auVar1 << 0x40;
}