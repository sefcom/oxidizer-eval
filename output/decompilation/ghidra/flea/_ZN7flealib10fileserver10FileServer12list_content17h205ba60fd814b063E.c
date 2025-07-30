undefined8 *
_ZN7flealib10fileserver10FileServer12list_content17h205ba60fd814b063E
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 **local_198;
  code *local_190;
  undefined4 *local_188;
  code *local_180;
  undefined8 *local_178;
  undefined8 local_170;
  undefined4 *puStack_168;
  code *local_160;
  undefined8 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined4 *local_130;
  char local_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 **local_110;
  undefined8 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 *puStack_f8;
  code *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 **local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 *local_b8;
  char local_b0;
  undefined4 *local_a8;
  undefined local_a0 [40];
  undefined local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [24];
  undefined local_48 [24];
  
  local_148 = 0;
  uStack_140 = 8;
  local_138 = 0;
                    /* try { // try from 0047a99f to 0047a9b0 has its CatchHandler @ 0047ad61 */
  local_c8 = param_2;
  _ZN3std2fs8read_dir17h30d54cbcfb526b2bE(&local_178);
  local_130 = (undefined4 *)local_178;
  local_128 = (char)local_170;
  if ((char)local_170 == '\x02') {
    local_a8 = (undefined4 *)local_178;
                    /* try { // try from 0047a9c8 to 0047a9d7 has its CatchHandler @ 0047ad4f */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
              (&local_1a8,&local_a8);
    param_1[3] = local_198;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_1a8;
    *(undefined4 *)((long)param_1 + 0xc) = local_1a8._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_1a0;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_1a0._4_4_;
    *param_1 = 1;
                    /* try { // try from 0047a9f1 to 0047a9fd has its CatchHandler @ 0047ad61 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_a8);
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h361f2a090008fd41E
              (&local_148);
  }
  else {
    local_b8 = (undefined4 *)local_178;
    local_b0 = (char)local_170;
    local_178 = (undefined8 *)((ulong)local_178 & 0xffffffff00000000);
    uVar3 = _ZN4core4char7methods15encode_utf8_raw17hdf17d5a6360402f0E(0x2f,&local_178);
                    /* try { // try from 0047aa38 to 0047aa45 has its CatchHandler @ 0047ad3d */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h76be6af41d2a4859E
              (&local_1a8,uVar3);
    local_d8 = local_198;
    local_e8 = (undefined4)local_1a8;
    uStack_e4 = local_1a8._4_4_;
    uStack_e0 = (undefined4)uStack_1a0;
    uStack_dc = uStack_1a0._4_4_;
    while( true ) {
                    /* try { // try from 0047aa80 to 0047aab0 has its CatchHandler @ 0047ad91 */
      (*(code *)
        PTR__ZN75__LT_std__fs__ReadDir_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd1fca99f815234c7E_008284c8
      )(&local_a8,&local_130);
      if (((ulong)local_a8 & 1) == 0) break;
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hba970de74e19c7ddE(&local_1a8,local_a0);
                    /* try { // try from 0047aab1 to 0047ab07 has its CatchHandler @ 0047ad96 */
      (*(code *)PTR__ZN3std2fs8DirEntry9file_name17h4f3d172d3b241ae5E_008284d0)(local_48,&local_1a8)
      ;
      (*(code *)PTR__ZN3std3sys6os_str5bytes3Buf11into_string17hf77169149873388aE_008284d8)
                (&local_178,local_48);
      local_f0 = local_160;
      uStack_100 = (undefined4)local_170;
      uStack_fc = local_170._4_4_;
      puStack_f8 = puStack_168;
      local_108 = local_178;
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17h3006b5d3fd273ad5E(&local_120,&local_108);
                    /* try { // try from 0047ab08 to 0047aba3 has its CatchHandler @ 0047ad7f */
      _ZN4core3ptr38drop_in_place_LT_std__fs__DirEntry_GT_17h77988a4d3811dfe3E(&local_1a8);
      local_c0 = local_c8;
      local_1a8 = &local_c0;
      uStack_1a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h49740bff2e11fb82E;
      local_198 = (undefined4 **)&local_e8;
      local_190 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
      local_188 = &local_120;
      local_180 = 
      _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
      local_178 = (undefined8 *)&DAT_0016b258;
      local_170 = (code *)0x3;
      local_158 = 0;
      local_160 = (code *)0x3;
      puStack_168 = (undefined4 *)&local_1a8;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(local_78,&local_178);
      uVar1 = local_68;
      uStack_100 = uStack_70;
      uStack_fc = uStack_6c;
      puStack_f8 = (undefined4 *)local_68;
      uVar3 = CONCAT44(uStack_6c,uStack_70);
                    /* try { // try from 0047abcf to 0047acaf has its CatchHandler @ 0047ad68 */
      cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17hfde9fd88058448dcE_008284e0)(uVar3,local_68);
      if (cVar2 == '\0') {
        cVar2 = (*(code *)PTR__ZN3std4path4Path7is_file17hc0b8b22daf7f62b5E_008284e8)(uVar3,uVar1);
        if (cVar2 == '\0') goto LAB_0047acd0;
        local_198 = local_110;
        local_1a8 = (undefined8 *)CONCAT44(uStack_11c,local_120);
        uStack_1a0 = (code *)CONCAT44(uStack_114,uStack_118);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hfb5dc137b94b4742E
                  (&local_148,&local_1a8,&PTR_s_flealib_src_fileserver_rs_008098e0);
                    /* try { // try from 0047acb0 to 0047acbc has its CatchHandler @ 0047ad66 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_108);
      }
      else {
        local_178 = (undefined8 *)&local_e8;
        local_170 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
        puStack_168 = &local_120;
        local_160 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
        local_1a8 = (undefined8 *)&DAT_00150610;
        uStack_1a0 = (code *)0x2;
        local_188 = (undefined4 *)0x0;
        local_198 = (undefined4 **)&local_178;
        local_190 = (code *)0x2;
        _ZN4core6option15Option_LT_T_GT_11map_or_else17h09968eee8a96299bE(local_60,&local_1a8);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hfb5dc137b94b4742E
                  (&local_148,local_60,&PTR_s_flealib_src_fileserver_rs_008098f8);
LAB_0047acd0:
                    /* try { // try from 0047acd0 to 0047acdc has its CatchHandler @ 0047ad7f */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_108);
                    /* try { // try from 0047acdd to 0047ace9 has its CatchHandler @ 0047ad91 */
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_120);
      }
    }
                    /* try { // try from 0047acf2 to 0047acfb has its CatchHandler @ 0047ad38 */
    _ZN4core3ptr37drop_in_place_LT_std__fs__ReadDir_GT_17he13ccf2b86a03b58E(&local_130);
    param_1[3] = local_138;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_148;
    *(undefined4 *)((long)param_1 + 0xc) = local_148._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_140;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_140._4_4_;
    *param_1 = 0;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(&local_e8);
  }
  return param_1;
}