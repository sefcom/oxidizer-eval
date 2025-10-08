void _ZN8forc_fmt13get_sway_dirs17h0903804508cd19d8E(undefined4 *param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  undefined8 local_1c8;
  char local_1c0;
  int local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  long local_178;
  undefined8 local_170;
  char local_168;
  undefined4 *local_160;
  long local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined local_140 [8];
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined local_108 [8];
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  
  local_1a0 = 0;
  uStack_198 = 8;
  local_190 = 0;
  local_180 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
  if (local_180 == (undefined8 *)0x0) {
                    /* try { // try from 004d370d to 004d371c has its CatchHandler @ 004d3749 */
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_0096b328)(8,0x18);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  local_180[2] = param_2[2];
  uVar4 = param_2[1];
  *local_180 = *param_2;
  local_180[1] = uVar4;
  local_188 = 1;
  local_178 = 1;
  local_160 = param_1;
  do {
    local_178 = local_178 + -1;
    plVar1 = local_180 + local_178 * 3;
    local_158 = *plVar1;
    uStack_150 = *(undefined4 *)(plVar1 + 1);
    uStack_14c = *(undefined4 *)((long)plVar1 + 0xc);
    local_148 = local_180[local_178 * 3 + 2];
    if (local_158 == -0x8000000000000000) goto LAB_004d36d1;
    puVar2 = local_180 + local_178 * 3;
    local_118 = puVar2[2];
    local_128 = *(undefined4 *)puVar2;
    uStack_124 = *(undefined4 *)((long)puVar2 + 4);
    uStack_120 = *(undefined4 *)(puVar2 + 1);
    uStack_11c = *(undefined4 *)((long)puVar2 + 0xc);
    _ZN3std2fs8read_dir17he4fdf1a64c10550eE(&local_1c8,&local_128);
    if (local_1c0 == '\x02') {
LAB_004d34d0:
                    /* try { // try from 004d34d0 to 004d354c has its CatchHandler @ 004d3729 */
      _ZN4core3ptr89drop_in_place_LT_core__result__Result_LT_std__fs__ReadDir_C_std__io__error__Error_GT__GT_17h8ea57a731913fa78E
                (&local_1c8);
    }
    else {
      local_170 = local_1c8;
      local_168 = local_1c0;
      while (_ZN4core4iter6traits8iterator8Iterator8try_fold17h7f3722e40557a69dE
                       (&local_e0,&local_170), CONCAT44(uStack_dc,local_e0) != 0) {
        local_f0 = local_c8;
        uStack_ec = uStack_c4;
        uStack_e8 = uStack_c0;
        uStack_e4 = uStack_bc;
        local_100 = uStack_d8;
        uStack_fc = uStack_d4;
        uStack_f8 = uStack_d0;
        uStack_f4 = uStack_cc;
                    /* try { // try from 004d35be to 004d35c9 has its CatchHandler @ 004d3730 */
        (*(code *)PTR__ZN3std2fs8DirEntry4path17hc95af67dccb42f03E_0096b440)(local_140,local_108);
        uVar5 = local_130;
        uVar4 = local_138;
                    /* try { // try from 004d35da to 004d3644 has its CatchHandler @ 004d3766 */
        cVar7 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_0096b448)
                          (local_138,local_130);
        if (cVar7 == '\0') {
LAB_004d3570:
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he39d626ec3977c8fE(local_140);
        }
        else {
          _ZN55__LT__RF_str_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0eee6798dc8ee10dE
                    (&local_e0,uVar4,uVar5);
          local_1a8 = CONCAT44(uStack_cc,uStack_d0);
          local_1b8 = local_e0;
          uStack_1b4 = uStack_dc;
          uStack_1b0 = uStack_d8;
          uStack_1ac = uStack_d4;
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3b0815cfe83d17a1E
                    (&local_188,&local_1b8,&PTR_s_forc_plugins_forc_fmt_src_main_r_0090a2f0);
          _ZN3std4path4Path4join17hc5b6364c54a49269E(&local_1b8,uVar4,uVar5,"Forc.toml",9);
                    /* try { // try from 004d364f to 004d3666 has its CatchHandler @ 004d3735 */
          _ZN3std2fs8metadata17h97dab4a00eb77849E
                    (&local_e0,CONCAT44(uStack_1ac,uStack_1b0),local_1a8);
          iVar6 = local_e0;
          _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17h8cfd35c98471ce16E
                    (&local_e0);
          _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he39d626ec3977c8fE(&local_1b8);
          if (iVar6 == 2) goto LAB_004d3570;
                    /* try { // try from 004d367b to 004d368e has its CatchHandler @ 004d372e */
          _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h3b0815cfe83d17a1E
                    (&local_1a0,local_140,&PTR_s_forc_plugins_forc_fmt_src_main_r_0090a308);
        }
                    /* try { // try from 004d3578 to 004d358c has its CatchHandler @ 004d3744 */
        _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h514fcfad11dd4245E(local_108);
      }
                    /* try { // try from 004d36a0 to 004d36a7 has its CatchHandler @ 004d3724 */
      _ZN4core3ptr82drop_in_place_LT_core__ops__control_flow__ControlFlow_LT_std__fs__DirEntry_GT__GT_17hd74c6e31ced06899E
                (&local_e0);
                    /* try { // try from 004d36a8 to 004d36b1 has its CatchHandler @ 004d371f */
      _ZN4core3ptr143drop_in_place_LT_core__iter__adapters__filter_map__FilterMap_LT_std__fs__ReadDir_C_forc_fmt__get_sway_dirs___u7b__u7b_closure_u7d__u7d__GT__GT_17h936e97883cb7423eE
                (&local_170);
      if (local_1c0 == '\x02') goto LAB_004d34d0;
    }
  } while (local_178 != 0);
  local_158 = -0x8000000000000000;
LAB_004d36d1:
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17hb4ce02790f884662E
            (&local_158);
  *(undefined8 *)(local_160 + 4) = local_190;
  *local_160 = (undefined4)local_1a0;
  local_160[1] = local_1a0._4_4_;
  local_160[2] = (undefined4)uStack_198;
  local_160[3] = uStack_198._4_4_;
  _ZN4core3ptr62drop_in_place_LT_alloc__vec__Vec_LT_std__path__PathBuf_GT__GT_17h19296ef7f0436d93E
            (&local_188);
  return;
}