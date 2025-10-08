undefined8 * _ZN9uu_expand7Options3new17hf73bd933e2ff5840E(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined uVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined auVar9 [16];
  undefined8 local_148;
  long local_140;
  undefined8 *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0 [8];
  long local_70 [8];
  
  _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h48c8e91afcc97e40E
            (&local_138,param_2,"tabs",4);
  _ZN12clap_builder6parser5error12MatchesError6unwrap17hdf43f15188d1d4f9E
            (local_b0,"tabs",4,&local_138);
  if (local_b0[0] == 0) {
    puVar7 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 8;
      local_148 = 1;
      uVar2 = 0;
      local_140 = 1;
      goto LAB_0015c81f;
    }
    (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001ef0a8)(8,8);
  }
  else {
    _ZN4core4iter6traits8iterator8Iterator7collect17h42202fdc91c71b42E(&local_c8,local_b0);
                    /* try { // try from 0015c75f to 0015c76b has its CatchHandler @ 0015ca77 */
    _ZN5alloc3str17join_generic_copy17h405dd9af099a375fE(&local_e8,local_c0,local_b8);
                    /* try { // try from 0015c77e to 0015c78a has its CatchHandler @ 0015ca67 */
    _ZN9uu_expand14tabstops_parse17h3c9abf62a25c4179E(&local_138,uStack_e0,local_d8);
    if (local_138 != (undefined8 *)0x8000000000000006) {
      *(int *)((long)param_1 + 0x14) = (int)((ulong)uStack_130 >> 0x20);
      *(undefined4 *)((long)param_1 + 0x11) = uStack_130._1_4_;
      param_1[1] = local_138;
      *(undefined *)(param_1 + 2) = (undefined)uStack_130;
      *(undefined4 *)(param_1 + 3) = (undefined4)local_128;
      *(undefined4 *)((long)param_1 + 0x1c) = local_128._4_4_;
      *(undefined4 *)(param_1 + 4) = uStack_120;
      *(undefined4 *)((long)param_1 + 0x24) = uStack_11c;
      *(undefined4 *)(param_1 + 5) = local_118;
      *(undefined4 *)((long)param_1 + 0x2c) = uStack_114;
      *(undefined4 *)(param_1 + 6) = uStack_110;
      *(undefined4 *)((long)param_1 + 0x34) = uStack_10c;
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec05db6bc18b7f0E
                (local_e8,uStack_e0);
      _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h214e5ddb3c709491E
                (local_c8,local_c0);
      return param_1;
    }
    local_148 = local_128;
    puVar7 = (undefined8 *)CONCAT44(uStack_11c,uStack_120);
    local_140 = CONCAT44(uStack_114,local_118);
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec05db6bc18b7f0E(local_e8,uStack_e0)
    ;
    _ZN4core3ptr51drop_in_place_LT_alloc__vec__Vec_LT__RF_str_GT__GT_17h214e5ddb3c709491E
              (local_c8,local_c0);
    uVar2 = (undefined)uStack_130;
LAB_0015c81f:
                    /* try { // try from 0015c81f to 0015c88a has its CatchHandler @ 0015caa4 */
    uVar5 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef2c0
            )(param_2,"initial",7);
    bVar6 = (*(code *)
              PTR__ZN12clap_builder6parser7matches11arg_matches10ArgMatches8get_flag17h0358b00a34050e02E_001ef2c0
            )(param_2,"no-utf8",7);
    uStack_130 = puVar7 + local_140;
    local_128 = 0;
    local_138 = puVar7;
    auVar9 = _ZN4core4iter6traits8iterator8Iterator6reduce17h3b8faf0d8297fae9E(&local_138);
    if ((auVar9 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                    /* try { // try from 0015ca29 to 0015ca35 has its CatchHandler @ 0015caa4 */
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_001ef2c8)
                (&PTR_s_src_uu_expand_src_expand_rs_001e8878);
      goto LAB_0015ca58;
    }
    _ZN5alloc5slice29__LT_impl_u20__u5b_T_u5d__GT_6repeat17h6af23d6fde4d821eE
              (&local_138,auVar9._8_8_);
    uVar4 = local_128;
    puVar3 = local_138;
    local_f0 = uStack_130;
                    /* try { // try from 0015c89f to 0015c8f2 has its CatchHandler @ 0015ca92 */
    _ZN12clap_builder6parser7matches11arg_matches10ArgMatches12try_get_many17h48c8e91afcc97e40E
              (&local_138,param_2,"FILES",5);
    _ZN12clap_builder6parser5error12MatchesError6unwrap17hdf43f15188d1d4f9E
              (local_70,"FILES",5,&local_138);
    if (local_70[0] != 0) {
      _ZN4core4iter6traits8iterator8Iterator7collect17h89ee29b9a9d35654E(&local_138,local_70);
LAB_0015c9bc:
      param_1[2] = local_128;
      *param_1 = local_138;
      param_1[1] = uStack_130;
      param_1[3] = local_148;
      param_1[4] = puVar7;
      param_1[5] = local_140;
      param_1[6] = puVar3;
      param_1[7] = local_f0;
      param_1[8] = uVar4;
      *(undefined *)(param_1 + 9) = uVar5;
      *(byte *)((long)param_1 + 0x49) = bVar6 ^ 1;
      *(undefined *)((long)param_1 + 0x4a) = uVar2;
      return param_1;
    }
    puVar8 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x18);
    if (puVar8 != (undefined8 *)0x0) {
                    /* try { // try from 0015c96b to 0015c983 has its CatchHandler @ 0015ca5a */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h79dbf9cf7e5723faE
                (&local_138,"-",1);
      puVar8[2] = local_128;
      *puVar8 = local_138;
      puVar8[1] = uStack_130;
      local_138 = (undefined8 *)&DAT_00000001;
      local_128 = 1;
      uStack_130 = puVar8;
      goto LAB_0015c9bc;
    }
  }
                    /* try { // try from 0015ca48 to 0015ca57 has its CatchHandler @ 0015ca92 */
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_001ef0a8)(8,0x18);
LAB_0015ca58:
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}