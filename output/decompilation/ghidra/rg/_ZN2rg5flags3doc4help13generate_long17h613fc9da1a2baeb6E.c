void _ZN2rg5flags3doc4help13generate_long17h613fc9da1a2baeb6E(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined uVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 **local_118;
  long local_108;
  undefined8 local_100;
  long local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined **ppuStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_58;
  code *local_50;
  undefined local_48 [16];
  undefined8 local_38;
  
  local_108 = 0;
  local_f8 = 0;
  local_90 = param_1;
  for (lVar6 = 8; lVar6 != 0x688; lVar6 = lVar6 + 0x10) {
    uVar1 = *(undefined8 *)
             ((long)&
                    PTR__ZN62__LT_rg__flags__defs__SortFiles_u20_as_u20_rg__flags__Flag_GT_6update17h7282604a1dc402acE_004e9300
             + lVar6);
    lVar2 = *(long *)((long)&DAT_004e9308 + lVar6);
    uVar4 = (**(code **)(lVar2 + 0x50))(uVar1);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_5entry17h6f6c449b58a3f2daE
              (&local_f0,&local_108,uVar4);
    local_88 = (undefined **)0x0;
    uStack_80 = 1;
    local_78 = (undefined8 **)0x0;
    lVar5 = _ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_9or_insert17hf539dff045b4cdb4E
                      (&local_f0,&local_88);
    if (*(long *)(lVar5 + 0x10) != 0) {
      local_f0 = &PTR_s__004ea408;
      local_e8 = 1;
      local_e0 = 8;
      local_d8 = 0;
      ppuStack_d0 = (undefined **)0x0;
      uVar4 = _ZN75__LT__RF_mut_u20_W_u20_as_u20_core__fmt__Write__write_fmt__SpecWriteFmt_GT_14spec_write_fmt17hcf32c70c0eda1434E
                        (lVar5,&local_f0);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hd18702de8132f064E
                (uVar4,&PTR_s_crates_core_flags_doc_help_rs_004ea418);
    }
                    /* try { // try from 00349fc4 to 0034a07b has its CatchHandler @ 0034a2c4 */
    _ZN2rg5flags3doc4help18generate_long_flag17h24845516d3a04078E(uVar1,lVar2,lVar5);
  }
                    /* try { // try from 0034a081 to 0034a08a has its CatchHandler @ 0034a2a1 */
  _ZN2rg5flags3doc7version15generate_digits17hfdf8238140a9a514E(&local_f0);
                    /* try { // try from 0034a095 to 0034a0bb has its CatchHandler @ 0034a292 */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (&local_128,
             "ripgrep !!VERSION!!\nAndrew Gallant <jamslam@gmail.com>\n\nripgrep (rg) recursively searches the current directory for lines matching\na regex pattern. By default, ripgrep will respect gitignore rules and\nautomatically skip hidden files/directories and binary files.\n\nUse -h for short descriptions and --help for more details.\n\nProject home page: https://github.com/BurntSushi/ripgrep\n\nUSAGE:\n    rg [OPTIONS] PATTERN [PATH ...]\n    rg [OPTIONS] -e PATTERN ... [PATH ...]\n    rg [OPTIONS] -f PATTERNFILE ... [PATH ...]\n    rg [OPTIONS] --files [PATH ...]\n    rg [OPTIONS] --type-list\n    command | rg [OPTIONS] PATTERN\n    rg [OPTIONS] --help\n    rg [OPTIONS] --version\n\nPOSITIONAL ARGUMENTS:\n    <PATTERN>\n        A regular expression used for searching. To match a pattern beginning\n        with a dash, use the -e/--regexp flag.\n\n        For example, to search for the literal \'-foo\', you can use this flag:\n\n            rg -e -foo\n\n        You can also use the special \'--\' delimiter to indicate that no more\n        flags will be provided. Namely, the following is equivalent to the\n        above:\n\n            rg -- -foo\n\n    <PATH>...\n        A file or directory to search. Directories are searched recursively.\n        File paths specified on the command line override glob and ignore\n        rules.\n\nINPUT OPTIONS:\n!!input!!\n\nSEARCH OPTIONS:\n!!search!!\n\nFILTER OPTIONS:\n!!filter!!\n\nOUTPUT OPTIONS:\n!!output!!\n\nOUTPUT MODES:\n!!output-modes!!\n\nLOGGING OPTIONS:\n!!logging!!\n\nOTHER BEHAVIORS:\n!!other-behaviors!!\n"
             ,0x5ea,"!!VERSION!!",0xb,local_e8,local_e0);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_f0);
  local_f0 = (undefined **)(ulong)(local_108 != 0);
  local_b0 = local_108;
  if (local_108 != 0) {
    local_b0 = local_f8;
  }
  local_e8 = 0;
  local_e0 = local_108;
  local_d8 = local_100;
  local_c8 = 0;
  local_c0 = local_108;
  local_b8 = local_100;
  ppuStack_d0 = local_f0;
  while( true ) {
                    /* try { // try from 0034a150 to 0034a1f0 has its CatchHandler @ 0034a2b5 */
    auVar7 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h22bca23bd226868cE
                       (&local_f0);
    if (auVar7._0_8_ == (byte *)0x0) break;
    uVar3 = (ulong)*auVar7._0_8_;
    local_a8 = (&PTR_s_input_004ebb60)[uVar3];
    uStack_a0 = *(undefined8 *)(&DAT_00188778 + uVar3 * 8);
    local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
    local_88 = &PTR_s____004ea260;
    uStack_80 = 2;
    local_68 = 0;
    local_70 = 1;
    local_78 = &local_58;
    local_58 = &local_a8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (local_48,0,&DAT_00188778,&local_88);
    local_98 = local_38;
                    /* try { // try from 0034a223 to 0034a22d has its CatchHandler @ 0034a2a3 */
    _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h270ebbb9c1c02ce1E
              (&local_88,CONCAT44(uStack_11c,uStack_120),local_118,&local_a8,
               *(undefined8 *)(auVar7._8_8_ + 8),*(undefined8 *)(auVar7._8_8_ + 0x10));
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_128);
    local_118 = local_78;
    local_128 = (undefined4)local_88;
    uStack_124 = local_88._4_4_;
    uStack_120 = (undefined4)uStack_80;
    uStack_11c = uStack_80._4_4_;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_a8);
  }
  *(undefined8 ***)(local_90 + 4) = local_118;
  *local_90 = local_128;
  local_90[1] = uStack_124;
  local_90[2] = uStack_120;
  local_90[3] = uStack_11c;
  _ZN4core3ptr112drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_rg__flags__Category_C_alloc__string__String_GT__GT_17heaa21e3654670fefE
            (&local_108);
  return;
}