undefined8 _ZN3uvx3run17he42f7266f97e898dE(undefined4 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined local_150 [8];
  undefined8 local_148;
  undefined8 local_140;
  undefined local_138 [24];
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  
  (*(code *)PTR__ZN3std3env11current_exe17h5073ac412771085bE_00165e80)(&local_110);
  uVar3 = CONCAT44(uStack_10c,local_110);
  uVar1 = CONCAT44(uStack_104,uStack_108);
                    /* try { // try from 0011b0a6 to 0011b11a has its CatchHandler @ 0011b22b */
  auVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00165e88)
                     (uVar1,CONCAT44(uStack_fc,local_100));
  if (auVar4._0_8_ == 0) {
    uVar2 = (*(code *)PTR__ZN3std2io5error5Error3new17h31653b416e5e1c98E_00165e90)
                      (0,"Could not determine the location of the `uvx` binary",0x34);
    *(undefined8 *)(param_1 + 2) = uVar2;
    *param_1 = 1;
  }
  else {
    auVar5 = _ZN3uvx14get_uvx_suffix17h9d58d2b7efa33399E(uVar1,CONCAT44(uStack_fc,local_100));
    _ZN3uvx11get_uv_path17h0750ce6cdeed20acE
              (&local_110,auVar4._0_8_,auVar4._8_8_,auVar5._0_8_,auVar5._8_8_);
    if (CONCAT44(uStack_10c,local_110) == -0x8000000000000000) {
      *(ulong *)(param_1 + 2) = CONCAT44(uStack_104,uStack_108);
      *param_1 = 1;
    }
    else {
                    /* try { // try from 0011b134 to 0011b17a has its CatchHandler @ 0011b21b */
      (*(code *)PTR__ZN3std3env7args_os17h5ff0cf6a45e392f2E_00165e98)(&local_110);
      uStack_120 = uStack_f8;
      uStack_11c = uStack_f4;
      local_118 = 1;
      _ZN4core4iter6traits8iterator8Iterator5chain17h3b964aa301fd32ebE(&local_110,local_138);
      _ZN4core4iter6traits8iterator8Iterator7collect17h4b4a40ddc3abafd2E(local_150,&local_110);
                    /* try { // try from 0011b18e to 0011b19c has its CatchHandler @ 0011b1f7 */
      _ZN3std7process7Command3new17hef36664ffd6e47a7E(&local_110,local_138);
                    /* try { // try from 0011b1a7 to 0011b1ba has its CatchHandler @ 0011b1fc */
      _ZN3std7process7Command4args17h65a6d9d11bdbf24dE(&local_110,local_148,local_140);
      uVar2 = _ZN3uvx10exec_spawn17h8a36b7e310b79222E(&local_110);
      *(undefined8 *)(param_1 + 2) = uVar2;
      *param_1 = 1;
                    /* try { // try from 0011b1c6 to 0011b1cf has its CatchHandler @ 0011b1f7 */
      _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h5b45e6faf5c9c67eE(&local_110);
      _ZN4core3ptr70drop_in_place_LT_alloc__vec__Vec_LT_std__ffi__os_str__OsString_GT__GT_17h90397a10563f40d7E
                (local_150);
    }
  }
  uVar3 = _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h8f4b31d99210b02cE(uVar3,uVar1);
  return uVar3;
}