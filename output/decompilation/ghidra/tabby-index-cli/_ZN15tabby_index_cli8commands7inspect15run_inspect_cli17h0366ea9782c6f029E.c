void _ZN15tabby_index_cli8commands7inspect15run_inspect_cli17h0366ea9782c6f029E
               (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long **pplVar4;
  long lVar5;
  long lVar6;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1e8;
  undefined8 uStack_1e0;
  long local_1d8;
  undefined8 local_1d0;
  long *local_1c8;
  undefined *local_1c0;
  long *local_1b8;
  code *local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  long lStack_178;
  long local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  long local_138;
  long local_130;
  long local_128 [3];
  long *local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined **local_e8;
  long **local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_c8 = param_2;
  local_c0 = param_3;
  _ZN7tantivy5index5index5Index11open_in_dir17h5f3e90e10edff988E(&local_1a8);
  local_1d8 = local_170;
  local_208 = (undefined **)uStack_1a0;
  pplVar4 = (long **)local_208;
  uStack_200 = (code *)uStack_198;
  puVar3 = uStack_200;
  local_1f8 = (long **)uStack_190;
  plVar1 = (long *)local_1f8;
  uStack_1f0 = uStack_188;
  lVar5 = uStack_1f0;
  local_1e8 = CONCAT44(uStack_17c,local_180);
  uStack_1e0 = lStack_178;
  lVar6 = uStack_1e0;
  if (local_1a8 == (undefined **)0x8000000000000001) {
    param_1[6] = local_170;
    param_1[4] = local_1e8;
    param_1[5] = lStack_178;
    param_1[2] = (long)uStack_190;
    param_1[3] = uStack_188;
    *param_1 = (long)uStack_1a0;
    param_1[1] = (long)uStack_198;
    return;
  }
  local_40 = local_148;
  uStack_38 = uStack_140;
  local_50 = local_158;
  uStack_48 = uStack_150;
  local_60 = local_168;
  uStack_58 = uStack_160;
  local_208._0_4_ = SUB84(uStack_1a0,0);
  local_208._4_4_ = (undefined4)((ulong)uStack_1a0 >> 0x20);
  uStack_200._0_4_ = SUB84(uStack_198,0);
  uStack_200._4_4_ = (undefined4)((ulong)uStack_198 >> 0x20);
  local_1f8._0_4_ = SUB84(uStack_190,0);
  local_1f8._4_4_ = (undefined4)((ulong)uStack_190 >> 0x20);
  uStack_1f0._0_4_ = (undefined4)uStack_188;
  uStack_1f0._4_4_ = (undefined4)((ulong)uStack_188 >> 0x20);
  uStack_1e0._0_4_ = (undefined4)lStack_178;
  uStack_1e0._4_4_ = (undefined4)((ulong)lStack_178 >> 0x20);
  local_98 = (undefined4)local_208;
  uStack_94 = local_208._4_4_;
  uStack_90 = (undefined4)uStack_200;
  uStack_8c = uStack_200._4_4_;
  local_88 = (undefined4)local_1f8;
  uStack_84 = local_1f8._4_4_;
  uStack_80 = (undefined4)uStack_1f0;
  uStack_7c = uStack_1f0._4_4_;
  local_78 = local_180;
  uStack_74 = uStack_17c;
  uStack_70 = (undefined4)uStack_1e0;
  uStack_6c = uStack_1e0._4_4_;
  local_68 = local_170;
  local_a0 = local_1a8;
                    /* try { // try from 00373e89 to 00373e96 has its CatchHandler @ 00374964 */
  local_208 = (undefined **)pplVar4;
  uStack_200 = (code *)puVar3;
  local_1f8 = (long **)plVar1;
  uStack_1f0 = lVar5;
  uStack_1e0 = lVar6;
  local_1d0 = (*(code *)PTR__ZN7tantivy5index5index5Index6schema17he6a02a11604cdee7E_006dfd28)
                        (&local_a0);
                    /* try { // try from 00373e9c to 00373eae has its CatchHandler @ 0037495f */
  (*(code *)PTR__ZN7tantivy5index5index5Index6reader17h7031a20a933df984E_006dfd18)
            (&local_1a8,&local_a0);
  if (local_1a8 == (undefined **)0x12) {
    local_208 = (undefined **)uStack_1a0;
    uStack_200 = (code *)uStack_198;
                    /* try { // try from 00373ed1 to 00373ed9 has its CatchHandler @ 00374950 */
    local_138 = (*(code *)PTR__ZN7tantivy6reader11IndexReader8searcher17h4b3b284570bbf106E_006dfd20)
                          (&local_208);
                    /* try { // try from 00373ee2 to 003740f9 has its CatchHandler @ 0037497b */
    _ZN4core3ptr49drop_in_place_LT_tantivy__reader__IndexReader_GT_17hd5b87e325d8c0232E(&local_208);
    local_108 = *(long *)(local_138 + 0x18);
    plVar1 = *(long **)(local_138 + 0x20);
    local_1a8 = &PTR_DAT_00684c38;
    uStack_1a0 = (long **)0x1;
    uStack_198 = (undefined8 *)0x8;
    uStack_190 = (long *)0x0;
    uStack_188 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
    local_1a8 = &PTR_s__________________________________00684c48;
    uStack_1a0 = (long **)0x1;
    uStack_198 = (undefined8 *)0x8;
    uStack_190 = (long *)0x0;
    uStack_188 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
    local_1a8 = &PTR_s_Inspect_index_report_00684c58;
    uStack_1a0 = (long **)0x1;
    uStack_198 = (undefined8 *)0x8;
    uStack_190 = (long *)0x0;
    uStack_188 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
    local_1a8 = &PTR_s__________________________________00684c68;
    uStack_1a0 = (long **)0x1;
    uStack_198 = (undefined8 *)0x8;
    uStack_190 = (long *)0x0;
    uStack_188 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
    local_1a8 = &PTR_s_1__General_infos_00684c78;
    uStack_1a0 = (long **)0x1;
    uStack_198 = (undefined8 *)0x8;
    uStack_190 = (long *)0x0;
    uStack_188 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
    local_1a8 = &PTR_s__________________________________00684c48;
    uStack_1a0 = (long **)0x1;
    uStack_198 = (undefined8 *)0x8;
    uStack_190 = (long *)0x0;
    uStack_188 = 0;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
    local_208 = (undefined **)&local_c8;
    uStack_200 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17hbfe63e20f2d6a900E;
    local_1a8 = &PTR_s_Index_directory__00684c88;
    uStack_1a0 = (long **)0x2;
    uStack_188 = 0;
    uStack_190 = (long *)0x1;
    uStack_198 = &local_208;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
    uStack_200 = (code *)
                 PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_006df968
    ;
    local_1a8 = &PTR_s_Number_of_segments__00684ca8;
    uStack_1a0 = (long **)0x2;
    uStack_188 = 0;
    uStack_190 = (long *)&DAT_00000001;
    local_208 = (undefined **)&local_1c8;
    local_1c8 = plVar1;
    uStack_198 = &local_208;
    (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
    (*(code *)PTR__ZN7tantivy4core8searcher8Searcher11space_usage17h963aad9fdc655044E_006dfd80)
              (&local_1a8,&local_138);
    pplVar4 = uStack_1a0;
    puVar3 = 
    PTR__ZN76__LT_tantivy_common__byte_count__ByteCount_u20_as_u20_core__fmt__Display_GT_3fmt17h1804e424f0a7a9d4E_006dfd90
    ;
    if (local_1a8 != (undefined **)0x8000000000000000) {
      local_d8 = (undefined4)uStack_198;
      uStack_d4 = uStack_198._4_4_;
      uStack_d0 = (undefined4)uStack_190;
      uStack_cc = uStack_190._4_4_;
      local_e8 = local_1a8;
      local_e0 = uStack_1a0;
      local_1c8 = uStack_190;
      uStack_200 = (code *)
                   PTR__ZN76__LT_tantivy_common__byte_count__ByteCount_u20_as_u20_core__fmt__Display_GT_3fmt17h1804e424f0a7a9d4E_006dfd90
      ;
      local_1a8 = &PTR_s_Total_bytes____Space_usage_for_s_00684cc8;
      uStack_1a0 = (long **)0x2;
      uStack_188 = 0;
      uStack_190 = (long *)0x1;
                    /* try { // try from 003741d9 to 00374214 has its CatchHandler @ 0037495d */
      local_208 = (undefined **)&local_1c8;
      uStack_198 = &local_208;
      local_110 = param_1;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
      local_1a8 = &PTR_DAT_00684c38;
      uStack_1a0 = (long **)0x1;
      uStack_198 = (undefined8 *)0x8;
      uStack_190 = (long *)0x0;
      uStack_188 = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
      _ZN4core4iter6traits8iterator8Iterator3zip17h3215d1bcb8bba5d9E
                (&local_1a8,local_108,(long)plVar1 * 400 + local_108,pplVar4,
                 pplVar4 + CONCAT44(uStack_d4,local_d8) * 0x28);
      local_170 = 0;
      _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdea7f97c7ab42b6eE
                (&local_100,&local_1a8);
      puVar2 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10;
      if (local_f8 != 0) {
        do {
          lVar5 = local_f0;
          local_130 = local_100 + 2;
          local_b8 = *(undefined4 *)(local_f8 + 0x148);
          uStack_b4 = *(undefined4 *)(local_f8 + 0x14c);
          uStack_b0 = *(undefined4 *)(local_f8 + 0x150);
          uStack_ac = *(undefined4 *)(local_f8 + 0x154);
                    /* try { // try from 003742bb to 003742cb has its CatchHandler @ 00374980 */
          (*(code *)
            PTR__ZN7tantivy5index10segment_id9SegmentId11uuid_string17hd63ba28c4e352875E_006dfd98)
                    (local_128,&local_b8);
          local_1c8 = &local_130;
          local_1c0 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_006df968
          ;
          local_1b0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
          local_208 = (undefined **)&DAT_00684ce8;
          uStack_200 = (code *)0x3;
          local_1e8 = 0;
          uStack_1f0 = 2;
          local_1f8 = &local_1c8;
          local_1b8 = local_128;
                    /* try { // try from 00374321 to 00374326 has its CatchHandler @ 00374969 */
          (*(code *)puVar2)(&local_208);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h7534eb9f84494b15E(local_128);
          local_208 = &PTR_s__________________________________00684d18;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
                    /* try { // try from 00374354 to 00374878 has its CatchHandler @ 00374980 */
          (*(code *)puVar2)(&local_208);
          local_128[0] = CONCAT44(local_128[0]._4_4_,*(undefined4 *)(lVar5 + 0x138));
          local_1c0 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u32_GT_3fmt17h4ee7c3ea607dee75E_006df950
          ;
          local_208 = &PTR_s_Num_docs__00684d28;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          local_1c8 = local_128;
          (*(code *)puVar2)(&local_208);
          local_208 = &PTR_s_Store_space_usage__00684d48;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_128[0] = *(long *)(lVar5 + 0x120) + *(long *)(lVar5 + 0x118);
          local_1c0 = puVar3;
          local_208 = &PTR_s_Total_bytes____Space_usage_for_s_00684cc8;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          local_1c8 = local_128;
          (*(code *)puVar2)(&local_208);
          local_128[0] = *(long *)(lVar5 + 0x120);
          local_1c0 = puVar3;
          local_208 = &PTR_s_Offset_bytes__00684d58;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          local_1c8 = local_128;
          (*(code *)puVar2)(&local_208);
          local_208 = &PTR_DAT_00684c38;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_1c8 = &local_130;
          local_1c0 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_006df968
          ;
          local_208 = (undefined **)&DAT_00684d78;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          (*(code *)puVar2)(&local_208);
          local_208 = &PTR_s__________________________________00684d98;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_128[0] = *(long *)(lVar5 + 0x30);
          local_1c0 = puVar3;
          local_208 = &PTR_s_Total_bytes____Space_usage_for_s_00684cc8;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          local_1c8 = local_128;
          (*(code *)puVar2)(&local_208);
          _ZN15tabby_index_cli8commands7inspect24print_fields_space_usage17h5ca46c29abb1f1fdE
                    (&local_1d0,lVar5);
          local_208 = &PTR_DAT_00684c38;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_1c8 = &local_130;
          local_1c0 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_006df968
          ;
          local_208 = (undefined **)&DAT_00684da8;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          (*(code *)puVar2)(&local_208);
          local_208 = &PTR_s__________________________________00684d98;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_128[0] = *(long *)(lVar5 + 0xd8);
          local_1c0 = puVar3;
          local_208 = &PTR_s_Total_bytes____Space_usage_for_s_00684cc8;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          local_1c8 = local_128;
          (*(code *)puVar2)(&local_208);
          _ZN15tabby_index_cli8commands7inspect24print_fields_space_usage17h5ca46c29abb1f1fdE
                    (&local_1d0,lVar5 + 0xa8);
          local_208 = &PTR_DAT_00684c38;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_1c8 = &local_130;
          local_1c0 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_006df968
          ;
          local_208 = (undefined **)&DAT_00684dc8;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          (*(code *)puVar2)(&local_208);
          local_208 = &PTR_s__________________________________00684d98;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_128[0] = *(long *)(lVar5 + 0x68);
          local_1c0 = puVar3;
          local_208 = &PTR_s_Total_bytes____Space_usage_for_s_00684cc8;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          local_1c8 = local_128;
          (*(code *)puVar2)(&local_208);
          _ZN15tabby_index_cli8commands7inspect24print_fields_space_usage17h5ca46c29abb1f1fdE
                    (&local_1d0,lVar5 + 0x38);
          local_208 = &PTR_DAT_00684c38;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_1c8 = &local_130;
          local_1c0 = 
          PTR__ZN4core3fmt3num3imp52__LT_impl_u20_core__fmt__Display_u20_for_u20_u64_GT_3fmt17h3bef13756113ac7bE_006df968
          ;
          local_208 = (undefined **)&DAT_00684de8;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          (*(code *)puVar2)(&local_208);
          local_208 = &PTR_s__________________________________00684d98;
          uStack_200 = (code *)0x1;
          local_1f8 = (long **)0x8;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          local_128[0] = *(long *)(lVar5 + 0xa0);
          local_1c0 = puVar3;
          local_208 = &PTR_s_Total_bytes____Space_usage_for_s_00684cc8;
          uStack_200 = (code *)0x2;
          local_1e8 = 0;
          uStack_1f0 = 1;
          local_1f8 = &local_1c8;
          local_1c8 = local_128;
          (*(code *)puVar2)(&local_208);
          _ZN15tabby_index_cli8commands7inspect24print_fields_space_usage17h5ca46c29abb1f1fdE
                    (&local_1d0,lVar5 + 0x70);
          local_208 = &PTR_DAT_00684c38;
          uStack_200 = (code *)&DAT_00000001;
          local_1f8 = (long **)&DAT_00000008;
          uStack_1f0 = 0;
          local_1e8 = 0;
          (*(code *)puVar2)(&local_208);
          _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdea7f97c7ab42b6eE
                    (&local_100,&local_1a8);
        } while (local_f8 != 0);
      }
      local_1a8 = &PTR_DAT_00684c38;
      uStack_1a0 = (long **)0x1;
      uStack_198 = (undefined8 *)0x8;
      uStack_190 = (long *)0x0;
      uStack_188 = 0;
                    /* try { // try from 003748c2 to 003748fd has its CatchHandler @ 0037495d */
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
      local_1a8 = &PTR_s_______________________________EN_00684e08;
      uStack_1a0 = (long **)&DAT_00000001;
      uStack_198 = (undefined8 *)&DAT_00000008;
      uStack_190 = (long *)0x0;
      uStack_188 = 0;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_006dfd10)(&local_1a8);
      *local_110 = 0x12;
      _ZN4core3ptr61drop_in_place_LT_tantivy__space_usage__SearcherSpaceUsage_GT_17h939054cea33c3374E
                (&local_e8);
                    /* try { // try from 0037491a to 00374926 has its CatchHandler @ 0037495f */
      _ZN4core3ptr54drop_in_place_LT_tantivy__core__searcher__Searcher_GT_17hfcc0968019ce3a8eE
                (&local_138);
                    /* try { // try from 00374927 to 00374930 has its CatchHandler @ 00374964 */
      _ZN4core3ptr52drop_in_place_LT_tantivy__schema__schema__Schema_GT_17he9a2cad772194c13E
                (&local_1d0);
      goto LAB_00374931;
    }
    (*(code *)
      PTR__ZN97__LT_tantivy__error__TantivyError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17he271a6cf793f0e2cE_006dfd88
    )(&local_1a8,uStack_1a0);
    param_1[6] = lStack_178;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_188;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_188._4_4_;
    *(undefined4 *)(param_1 + 5) = local_180;
    *(undefined4 *)((long)param_1 + 0x2c) = uStack_17c;
    *(undefined4 *)(param_1 + 2) = (undefined4)uStack_198;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_198._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_190;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_190._4_4_;
    *(undefined4 *)param_1 = (undefined4)local_1a8;
    *(undefined4 *)((long)param_1 + 4) = local_1a8._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1a0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_1a0._4_4_;
                    /* try { // try from 00374127 to 00374133 has its CatchHandler @ 0037495f */
    _ZN4core3ptr54drop_in_place_LT_tantivy__core__searcher__Searcher_GT_17hfcc0968019ce3a8eE
              (&local_138);
  }
  else {
    param_1[5] = CONCAT44(uStack_17c,local_180);
    param_1[6] = lStack_178;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_190;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_190._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_188;
    *(undefined4 *)((long)param_1 + 0x24) = uStack_188._4_4_;
    *param_1 = (long)local_1a8;
    param_1[1] = (long)uStack_1a0;
    param_1[2] = (long)uStack_198;
  }
                    /* try { // try from 00374159 to 00374162 has its CatchHandler @ 00374964 */
  _ZN4core3ptr52drop_in_place_LT_tantivy__schema__schema__Schema_GT_17he9a2cad772194c13E(&local_1d0)
  ;
LAB_00374931:
  _ZN4core3ptr49drop_in_place_LT_tantivy__index__index__Index_GT_17hc2911d178059c5dcE(&local_a0);
  return;
}