void _ZN2rg5flags3doc4help14generate_short17hdde8bd32c057b3d4E(undefined4 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 **ppuVar4;
  undefined uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 **local_138;
  undefined **local_128;
  undefined8 uStack_120;
  undefined8 **local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  long local_f8;
  undefined8 local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 *local_a8;
  undefined local_a0 [8];
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 *local_58;
  code *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  local_e0 = 0;
  local_d0 = 0;
  lVar8 = 8;
  uVar7 = 0;
  local_a8 = param_1;
  do {
    uVar1 = *(undefined8 *)
             ((long)&
                    PTR__ZN62__LT_rg__flags__defs__SortFiles_u20_as_u20_rg__flags__Flag_GT_6update17h7282604a1dc402acE_004e9300
             + lVar8);
    lVar2 = *(long *)((long)&DAT_004e9308 + lVar8);
                    /* try { // try from 00349420 to 00349485 has its CatchHandler @ 0034979d */
    uVar5 = (**(code **)(lVar2 + 0x50))(uVar1);
    _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_5entry17h20353abf5702197dE
              (&local_88,&local_e0,uVar5);
    local_128 = (undefined **)0x0;
    uStack_120 = 8;
    local_118 = (undefined8 **)0x0;
    uStack_110 = 0;
    local_108 = (undefined **)0x8;
    local_100 = 0;
    lVar6 = _ZN5alloc11collections5btree3map5entry22Entry_LT_K_C_V_C_A_GT_9or_insert17h0d5a94e64c93cfa2E
                      (&local_88,&local_128);
    _ZN2rg5flags3doc4help19generate_short_flag17h47acb38f05920452E(&local_128,uVar1,lVar2);
    ppuVar4 = local_118;
    local_88 = local_128;
    uStack_80 = uStack_120;
    local_48 = (undefined4)uStack_110;
    uStack_44 = uStack_110._4_4_;
    uStack_40 = (undefined4)local_108;
    uStack_3c = local_108._4_4_;
    local_38 = local_100;
    uVar7 = _ZN4core3cmp3Ord3max17hb0b679126d9186c3E(uVar7,local_118);
    local_78 = ppuVar4;
                    /* try { // try from 003494cb to 003494dc has its CatchHandler @ 0034977a */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
              (lVar6,&local_88,&PTR_s_crates_core_flags_doc_help_rs_004ea280);
                    /* try { // try from 003494e1 to 003494f7 has its CatchHandler @ 0034978c */
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h128a0db80672107eE
              (lVar6 + 0x18,&local_48,&PTR_s_crates_core_flags_doc_help_rs_004ea298);
    lVar8 = lVar8 + 0x10;
  } while (lVar8 != 0x688);
                    /* try { // try from 00349509 to 00349512 has its CatchHandler @ 00349754 */
  _ZN2rg5flags3doc7version15generate_digits17hfdf8238140a9a514E(&local_128);
                    /* try { // try from 0034951d to 00349543 has its CatchHandler @ 00349745 */
  _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17hb0cf9499067250c3E
            (&local_148,
             "ripgrep !!VERSION!!\nAndrew Gallant <jamslam@gmail.com>\n\nripgrep (rg) recursively searches the current directory for lines matching\na regex pattern. By default, ripgrep will respect gitignore rules and\nautomatically skip hidden files/directories and binary files.\n\nUse -h for short descriptions and --help for more details.\n\nProject home page: https://github.com/BurntSushi/ripgrep\n\nUSAGE:\n  rg [OPTIONS] PATTERN [PATH ...]\n\nPOSITIONAL ARGUMENTS:\n  <PATTERN>   A regular expression used for searching.\n  <PATH>...   A file or directory to search.\n\nINPUT OPTIONS:\n!!input!!\n\nSEARCH OPTIONS:\n!!search!!\n\nFILTER OPTIONS:\n!!filter!!\n\nOUTPUT OPTIONS:\n!!output!!\n\nOUTPUT MODES:\n!!output-modes!!\n\nLOGGING OPTIONS:\n!!logging!!\n\nOTHER BEHAVIORS:\n!!other-behaviors!!\n"
             ,0x2f4,"!!VERSION!!",0xb,uStack_120,local_118);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_128);
  local_128 = (undefined **)(ulong)(local_e0 != 0);
  local_e8 = local_e0;
  if (local_e0 != 0) {
    local_e8 = local_d0;
  }
  uStack_120 = 0;
  local_118 = (undefined8 **)local_e0;
  uStack_110 = local_d8;
  local_100 = 0;
  local_f8 = local_e0;
  local_f0 = local_d8;
  local_108 = local_128;
  while( true ) {
                    /* try { // try from 003495d0 to 00349678 has its CatchHandler @ 0034978e */
    auVar9 = _ZN108__LT_alloc__collections__btree__map__Iter_LT_K_C_V_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h674bcfae187260c9E
                       (&local_128);
    lVar8 = auVar9._8_8_;
    if (auVar9._0_8_ == (byte *)0x0) break;
    uVar3 = (ulong)*auVar9._0_8_;
    local_c8 = (&PTR_s_input_004ebb60)[uVar3];
    uStack_c0 = *(undefined8 *)(&DAT_00188778 + uVar3 * 8);
    local_50 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h8797fd25d6434092E;
    local_88 = &PTR_s____004ea260;
    uStack_80 = 2;
    local_68 = 0;
    local_78 = &local_58;
    local_70 = 1;
    local_58 = &local_c8;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17hd29ff726b4b92504E
              (local_a0,0,&DAT_00188778,&local_88);
    local_b8 = local_90;
                    /* try { // try from 003496a9 to 003496b3 has its CatchHandler @ 00349756 */
    _ZN2rg5flags3doc4help20format_short_columns17hb1e7c29dbb65ba0cE
              (local_a0,*(undefined8 *)(lVar8 + 8),*(undefined8 *)(lVar8 + 0x10),
               *(undefined8 *)(lVar8 + 0x20),*(undefined8 *)(lVar8 + 0x28),uVar7);
                    /* try { // try from 003496ce to 003496d8 has its CatchHandler @ 0034975b */
    _ZN5alloc3str21__LT_impl_u20_str_GT_7replace17h270ebbb9c1c02ce1E
              (&local_88,CONCAT44(uStack_13c,uStack_140),local_138,&local_c8,
               CONCAT44(uStack_94,uStack_98),local_90);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_148);
    local_138 = local_78;
    local_148 = (undefined4)local_88;
    uStack_144 = local_88._4_4_;
    uStack_140 = (undefined4)uStack_80;
    uStack_13c = uStack_80._4_4_;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(local_a0);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcf08c90eaee1f556E(&local_c8);
  }
  *(undefined8 ***)(local_a8 + 4) = local_138;
  *local_a8 = local_148;
  local_a8[1] = uStack_144;
  local_a8[2] = uStack_140;
  local_a8[3] = uStack_13c;
  _ZN4core3ptr190drop_in_place_LT_alloc__collections__btree__map__BTreeMap_LT_rg__flags__Category_C__LP_alloc__vec__Vec_LT_alloc__string__String_GT__C_alloc__vec__Vec_LT_alloc__string__String_GT__RP__GT__GT_17h6697156e45d9b6c0E
            (&local_e0);
  return;
}