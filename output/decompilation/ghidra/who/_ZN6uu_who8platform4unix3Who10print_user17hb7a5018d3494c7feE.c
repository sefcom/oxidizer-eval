undefined  [16]
_ZN6uu_who8platform4unix3Who10print_user17hb7a5018d3494c7feE(long param_1,long param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined8 **ppuVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 **ppuVar6;
  undefined auVar7 [16];
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 **local_1d8;
  undefined4 local_1d0;
  undefined4 uStack_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined8 **local_1c0;
  undefined8 **local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined8 **local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 **local_158;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined local_128 [8];
  undefined8 local_120;
  undefined8 local_118;
  undefined local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  byte local_b0;
  long local_80;
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hdbc64a9c3b715b62E
            (&local_1b0,&DAT_001192a4,4);
                    /* try { // try from 00168730 to 00168740 has its CatchHandler @ 00168c26 */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10tty_device17h164f6e4ca04cfddcE_00205fa8)
            (&local_e8,param_2);
                    /* try { // try from 00168751 to 0016875d has its CatchHandler @ 00168c02 */
  _ZN3std4path7PathBuf4push17h73b92207671fa87eE(&local_1b0,uStack_e0,local_d8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_e8);
                    /* try { // try from 0016877b to 00168803 has its CatchHandler @ 00168c26 */
  _ZN3std2fs8metadata17ha1d25b3542fa29b7E(&local_e8,local_1a8,local_1a0);
  if (local_e8 == (undefined *)0x2) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6d0772277f38ed34E
              (2,uStack_e0);
    cVar5 = '?';
LAB_00168886:
    local_190 = "  ?()failed to canonicalize ";
    local_188 = 3;
    local_198 = 0x8000000000000000;
    if (*(char *)(param_1 + 0x18) == '\0') goto LAB_001688b4;
LAB_0016880f:
                    /* try { // try from 0016880f to 001688c1 has its CatchHandler @ 00168c14 */
    (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10canon_host17h6d7ae94323da986cE_00205fe0)
              (&local_e8,param_2);
    _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h20da148c3d372166E
              (&local_1d0,&local_e8,param_2);
    local_1e8 = CONCAT44(uStack_1cc,local_1d0);
    uVar4 = CONCAT44(uStack_1c4,uStack_1c8);
    ppuVar6 = local_1c0;
    if (local_1e8 == -0x8000000000000000) goto LAB_00168b54;
    local_1d8 = local_1c0;
    uStack_1e0 = uVar4;
    if (local_1c0 == (undefined8 **)0x0) goto LAB_00168867;
LAB_001688cc:
    ppuVar6 = local_1d8;
    local_180 = &local_1e8;
    local_178 = (undefined8 **)
                _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E
    ;
    local_e8 = &DAT_001fefa8;
    uStack_e0 = 2;
    local_c8 = 0;
    local_d8 = &local_180;
    local_d0 = 1;
                    /* try { // try from 0016892b to 0016893c has its CatchHandler @ 00168b8e */
    _ZN4core6option15Option_LT_T_GT_11map_or_else17ha4af03a514854fedE(&local_1d0,&local_e8);
    local_168 = local_1d0;
    uStack_164 = uStack_1cc;
    uStack_160 = uStack_1c8;
    uStack_15c = uStack_1c4;
    local_158 = local_1c0;
    local_1b8 = ppuVar6;
  }
  else {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h6d0772277f38ed34E
              (local_e8,uStack_e0);
    cVar5 = ((local_b0 & 0x10) == 0) * '\x02' + '+';
    if (local_80 == 0) goto LAB_00168886;
    _ZN6uu_who8platform4unix11idle_string17hf7cff6d29f8898c5E(&local_198,local_80);
    if (*(char *)(param_1 + 0x18) != '\0') goto LAB_0016880f;
LAB_001688b4:
    (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx4host17hfb1a95bf3e0888e1E_00205fe8)
              (&local_1e8,param_2);
    if (local_1d8 != (undefined8 **)0x0) goto LAB_001688cc;
LAB_00168867:
    local_158 = local_1d8;
    local_168 = (undefined4)local_1e8;
    uStack_164 = local_1e8._4_4_;
    uStack_160 = (undefined4)uStack_1e0;
    uStack_15c = uStack_1e0._4_4_;
    local_1b8 = local_1d8;
  }
                    /* try { // try from 0016895a to 00168972 has its CatchHandler @ 00168bdb */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx4user17h7da4603721cbda8fE_00205fb0)
            (local_128,param_2);
                    /* try { // try from 00168987 to 00168997 has its CatchHandler @ 00168bc9 */
  (*(code *)PTR__ZN6uucore8features5utmpx5Utmpx10tty_device17h164f6e4ca04cfddcE_00205fa8)
            (local_110,param_2);
  local_138 = local_118;
  local_130 = local_120;
  local_140 = local_108;
  local_148 = local_100;
                    /* try { // try from 001689cb to 001689da has its CatchHandler @ 00168bb7 */
  _ZN6uu_who8platform4unix11time_string17hf7b3fb93d48ce0b2E(&local_180,param_2);
  ppuVar6 = local_178;
  uVar4 = local_188;
  pcVar1 = local_190;
  local_1ec = *(undefined4 *)(param_2 + 4);
  local_f8 = &local_1ec;
  local_f0 = 
  PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_i32_GT_3fmt17h6f30f0a695ff7937E_00205fd0
  ;
  local_e8 = &DAT_00118a60;
  uStack_e0 = 1;
  local_c8 = 0;
  local_d8 = (undefined8 **)&local_f8;
  local_d0 = 1;
                    /* try { // try from 00168a62 to 00168a73 has its CatchHandler @ 00168ba5 */
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha4af03a514854fedE(&local_1d0,&local_e8);
  local_d8 = local_1c0;
  ppuVar3 = local_d8;
  local_d8._0_4_ = SUB84(local_1c0,0);
  uVar2 = local_d8._0_4_;
  local_d8 = ppuVar3;
                    /* try { // try from 00168aa1 to 00168afb has its CatchHandler @ 00168b93 */
  _ZN6uu_who8platform4unix3Who10print_line17h48873e2090b4b940E
            (param_1,local_130,local_138,cVar5,local_140,local_148,ppuVar6,local_170,pcVar1,uVar4,
             uStack_1c8,uVar2,uStack_160,local_158._0_4_,1,0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_e8);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_180);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_110);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(local_128);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_168);
  if (local_1b8 != (undefined8 **)0x0) {
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h636c6997ec3ef9f1E(&local_1e8);
  }
  uVar4 = 0;
LAB_00168b54:
  _ZN4core3ptr50drop_in_place_LT_alloc__borrow__Cow_LT_str_GT__GT_17h23cc7d1edb76b1fbE(&local_198);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h9526885fff10d968E(local_1b0,local_1a8);
  auVar7._8_8_ = ppuVar6;
  auVar7._0_8_ = uVar4;
  return auVar7;
}