void _ZN13metal_crusher3fun26put_random_shit_on_desktop17h71399300085ae3fdE(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  int iVar3;
  undefined4 local_114;
  long local_110;
  int local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 *local_d8;
  undefined *local_d0;
  long local_c8 [3];
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined **local_78;
  undefined8 local_70;
  undefined4 **local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_48 [24];
  
  (*(code *)PTR__ZN8xdg_user7desktop17h614cf66f1d7224d2E_006b40f0)(local_c8);
  if (local_c8[0] == -0x7fffffffffffffff) {
    _ZN4core3ptr113drop_in_place_LT_core__result__Result_LT_core__option__Option_LT_std__path__PathBuf_GT__C_xdg_user__Error_GT__GT_17hbe0068b1d48531b0E
              (local_c8);
  }
  else {
    _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3a56540e264e2a44E(&local_b0,local_c8);
    puVar1 = PTR__ZN3std6thread5sleep17h8814a255f2a81eccE_006b40e0;
    if (local_b0 == -0x8000000000000000) {
      _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h0d830685c6326d8bE
                (&local_b0);
    }
    else {
      local_e8 = local_a8;
      uStack_e0 = uStack_a0;
      local_f0 = local_b0;
      iVar3 = 0xc;
      do {
                    /* try { // try from 00487280 to 00487285 has its CatchHandler @ 004873cd */
        local_110 = (*(code *)PTR__ZN4rand4rngs6thread3rng17hf0f1cc4222ade925E_006b4078)();
                    /* try { // try from 0048728f to 004872fb has its CatchHandler @ 004873b0 */
        local_114 = _ZN74__LT_rand_core__block__BlockRng_LT_R_GT__u20_as_u20_rand_core__RngCore_GT_8next_u3217he2e9b6f72cd26557E
                              (local_110 + 0x10);
        local_d8 = &local_114;
        local_d0 = 
        PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17hda47c80aa3624aabE_006b40f8
        ;
        local_78 = &PTR_DAT_00696658;
        local_70 = 1;
        local_58 = 0;
        local_68 = &local_d8;
        local_60 = 1;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h1648c532ac184ddcE(&local_108,&local_78);
                    /* try { // try from 004872fc to 00487305 has its CatchHandler @ 004873a1 */
        _ZN4core3ptr50drop_in_place_LT_rand__rngs__thread__ThreadRng_GT_17h85086739cd9d0457E
                  (&local_110);
        local_98 = local_108;
        uStack_94 = uStack_104;
        uStack_90 = uStack_100;
        uStack_8c = uStack_fc;
        local_88 = local_f8;
                    /* try { // try from 0048732a to 0048734c has its CatchHandler @ 004873cd */
        _ZN3std4path4Path4join17h6ef86eed301427f8E(local_48,local_e8,uStack_e0,&local_98);
        _ZN3std2fs4File6create17h8f0853b0f7d1d60aE(&local_78,local_48);
        local_108 = _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h9fccde28408fd899E(&local_78);
                    /* try { // try from 00487351 to 00487372 has its CatchHandler @ 004873bf */
        uVar2 = _ZN3std2io5Write9write_all17h4b2e9365d0d65c5eE(&local_108,"METAL CRUSHER",0xd);
        _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hc325c4c602580c72E(uVar2);
        (*(code *)puVar1)(0,500000000);
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h7b86064f9658cd3aE(local_108);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h3d4a59f8b713a426E(&local_f0);
    }
  }
  return;
}