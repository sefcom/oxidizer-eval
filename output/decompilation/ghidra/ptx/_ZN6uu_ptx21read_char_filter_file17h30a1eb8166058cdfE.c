void _ZN6uu_ptx21read_char_filter_file17h30a1eb8166058cdfE(uint *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined auVar5 [16];
  undefined8 local_60;
  long local_58;
  long local_50;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches11try_get_one17h88d1a3ba1868cd68E
            (&local_48,param_2,"break-file",10);
  lVar2 = _ZN12clap_builder6parser5error12MatchesError6unwrap17h04f490a5ade46ed0E
                    ("break-file",10,&local_48);
  if (lVar2 == 0) {
    uVar3 = (*(code *)PTR__ZN4core6option13expect_failed17h3f620cfb8545dc61E_0037ff10)
                      ("parsing options failed!",0x17,&PTR_s_src_uu_ptx_src_ptx_rs_00351730);
                    /* catch() { ... } // from try @ 0022ac92 with catch @ 0022ad18 */
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(&local_60);
                    /* try { // try from 0022ad25 to 0022ad2f has its CatchHandler @ 0022ad38 */
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hb97f5b2b08127d60E
              (&local_48,"break-file");
    _Unwind_Resume(uVar3);
    return;
  }
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hc639eb17d6278023E
                    (*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),"-",1);
  if (cVar1 == '\0') {
    _ZN3std2fs4File4open17h695eaf09d3a17d8cE(&local_48,lVar2);
    if ((local_48 & 1) != 0) {
      *(ulong *)(param_1 + 2) = CONCAT44(uStack_3c,uStack_40);
      param_1[0] = 0;
      param_1[1] = 0;
      return;
    }
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h78f68dd9e7792e5eE(uStack_44);
    ppuVar4 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h1597f39cce541ee6E_00351680;
  }
  else {
    uVar3 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00380290)();
    uVar3 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h16f26c34398979dfE(uVar3);
    ppuVar4 = (undefined **)&DAT_003516d8;
  }
  local_60 = 0;
  local_58 = 1;
  local_50 = 0;
                    /* try { // try from 0022ac92 to 0022acc5 has its CatchHandler @ 0022ad18 */
  auVar5 = (*(code *)ppuVar4[7])(uVar3,&local_60);
  if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    _ZN4core4iter6traits8iterator8Iterator7collect17h2fd460d760df1a12E
              (&local_48,local_58,local_50 + local_58);
    *(undefined8 *)(param_1 + 8) = local_28;
    *(undefined8 *)(param_1 + 10) = uStack_20;
    *(undefined8 *)(param_1 + 4) = local_38;
    *(undefined8 *)(param_1 + 6) = uStack_30;
    *param_1 = local_48;
    param_1[1] = uStack_44;
    param_1[2] = uStack_40;
    param_1[3] = uStack_3c;
  }
  else {
    *(long *)(param_1 + 2) = auVar5._8_8_;
    param_1[0] = 0;
    param_1[1] = 0;
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdf1f386795eaa8a5E(&local_60);
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hb97f5b2b08127d60E
            (uVar3,ppuVar4);
  return;
}