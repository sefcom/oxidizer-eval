void _ZN9uu_numfmt6format27format_and_print_whitespace17ha5007c78915f30adE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  byte bVar8;
  undefined **ppuVar9;
  long lVar10;
  long lVar11;
  undefined auVar12 [16];
  undefined **local_158;
  undefined8 local_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined local_128 [12];
  undefined4 uStack_11c;
  code *local_118;
  undefined8 *local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 *local_a8;
  code *local_a0;
  undefined8 *puStack_98;
  code *local_90;
  undefined8 *local_88;
  code *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined4 *local_60;
  undefined *local_58;
  
  _ZN4core4iter6traits8iterator8Iterator3zip17hc5c51cab09057469E(&local_60);
  _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17hcacff3f450858e3cE
            (&local_d0,&local_60);
  if (local_c8 == 0) {
    bVar8 = *(byte *)(param_4 + 200);
  }
  else {
    local_d8 = *(undefined8 *)(param_4 + 0x60);
    local_e0 = *(undefined8 *)(param_4 + 0x68);
    bVar8 = *(byte *)(param_4 + 200);
    local_f0 = *(long *)(param_4 + 0xb8);
    local_108 = param_1;
    local_e8 = param_4;
    do {
      lVar11 = local_b0;
      uVar7 = local_b8;
      lVar5 = local_c0;
      lVar4 = local_c8;
      auVar2._8_8_ = local_c0;
      auVar2._0_8_ = local_c8;
      auVar12._8_8_ = local_c0;
      auVar12._0_8_ = local_c8;
      uVar1 = CONCAT44(uStack_cc,local_d0);
      local_100 = local_b8;
      local_f8 = local_b0;
      cVar6 = _ZN6uucore8features6ranges7contain17ha2f044f5693f050cE(local_d8,local_e0,uVar1);
      if (cVar6 == '\0') {
        if ((bVar8 & 1) != 0) {
          local_158 = (undefined **)((ulong)local_158 & 0xffffffff00000000);
          uVar7 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(10,&local_158);
          cVar6 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17h436c904482f687d7E
                            (lVar4,lVar5,uVar7);
          auVar12 = auVar2;
          if (cVar6 != '\0') {
            local_158 = &PTR_s___has_no___directive__ends_in____00202540;
            local_150 = 1;
            local_148 = (undefined8 **)&DAT_00000008;
            local_140 = 0;
            uStack_138 = 0;
            (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_158);
            auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                                (1,lVar4,lVar5);
            if (auVar12._0_8_ == 0) {
              ppuVar9 = &PTR_s_src_uu_numfmt_src_format_rs_00202550;
              goto LAB_0016b4c6;
            }
          }
        }
        local_a8 = (undefined8 *)local_128;
        local_a0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17heebe613453956698E;
        puStack_98 = &local_100;
        local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17heebe613453956698E;
        local_158 = (undefined **)&DAT_001195a0;
        local_150 = 2;
        uStack_138 = 0;
        local_148 = &local_a8;
        local_140 = 2;
        _local_128 = auVar12;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_158);
      }
      else {
        lVar10 = lVar5;
        if (1 < uVar1) {
          local_158 = &PTR_s___has_no___directive__ends_in____00202540;
          local_150 = 1;
          local_148 = (undefined8 **)&DAT_00000008;
          local_140 = 0;
          uStack_138 = 0;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_158);
          auVar12 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17h28e9e81c5537bbedE
                              (1,lVar4,lVar5);
          lVar10 = auVar12._8_8_;
          uVar7 = local_100;
          lVar11 = local_f8;
          if (auVar12._0_8_ == 0) {
            ppuVar9 = &PTR_s_src_uu_numfmt_src_format_rs_00202568;
LAB_0016b4c6:
            uVar7 = (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_00209938)
                              (lVar4,lVar5,1,lVar5,ppuVar9);
                    /* catch() { ... } // from try @ 0016b34d with catch @ 0016b4da */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(&local_78);
            _Unwind_Resume(uVar7);
            return;
          }
        }
        _ZN9uu_numfmt6format13format_string17h3b8df337189cc348E
                  (&local_a8,uVar7,lVar11,local_e8,local_f0 == 0 && lVar5 != 0,lVar10 + lVar11);
        local_128._0_8_ = local_a0;
        uVar7 = local_128._0_8_;
        stack0xfffffffffffffee0 = puStack_98;
        puVar3 = stack0xfffffffffffffee0;
        local_118 = local_90;
        if (((ulong)local_a8 & 1) != 0) {
          local_108[2] = local_90;
          *local_108 = local_a0;
          local_108[1] = puStack_98;
          return;
        }
        local_68 = local_90;
        local_128._0_4_ = SUB84(local_a0,0);
        local_128._4_4_ = (undefined4)((ulong)local_a0 >> 0x20);
        local_128._8_4_ = SUB84(puStack_98,0);
        uStack_11c = (undefined4)((ulong)puStack_98 >> 0x20);
        local_78._0_4_ = local_128._0_4_;
        local_78._4_4_ = local_128._4_4_;
        uStack_70 = local_128._8_4_;
        uStack_6c = uStack_11c;
        local_80 = 
        _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h28f4d01eb787df69E;
        local_158 = (undefined **)&DAT_001198c0;
        local_150 = 1;
        uStack_138 = 0;
        local_148 = &local_88;
        local_140 = 1;
        local_128._0_8_ = uVar7;
        unique0x100004c3 = puVar3;
        local_88 = &local_78;
                    /* try { // try from 0016b34d to 0016b355 has its CatchHandler @ 0016b4da */
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_158);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h34fbae09aa78bed8E(&local_78);
      }
      _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17hcacff3f450858e3cE
                (&local_d0,&local_60);
      param_1 = local_108;
    } while (local_c8 != 0);
  }
  local_148 = (undefined8 **)&local_60;
  local_60 = &local_d0;
  local_d0 = 10;
  if ((bVar8 & 1) != 0) {
    local_d0 = 0;
  }
  local_58 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_00209800;
  local_158 = (undefined **)&DAT_001198c0;
  local_150 = 1;
  uStack_138 = 0;
  local_140 = 1;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209808)(&local_158);
  *param_1 = 0x8000000000000000;
  return;
}