void _ZN9alacritty11message_bar7Message4text17hdf58328cea9791ebE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined4 *puVar5;
  ulong extraout_RDX;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  float fVar10;
  undefined auVar11 [16];
  undefined8 local_100;
  long lStack_f8;
  ulong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long local_c8;
  long lStack_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  long local_78;
  undefined8 *local_70;
  ulong local_68;
  ulong local_60;
  long local_58;
  long local_50;
  long local_48;
  long lStack_40;
  long local_38;
  
  fVar10 = (*(float *)(param_4 + 0x14) - (*(float *)(param_4 + 0x24) + *(float *)(param_4 + 0x24)))
           / *(float *)(param_4 + 0x1c);
  uVar7 = (long)(fVar10 - DAT_001ec664) & (long)fVar10 >> 0x3f | (long)fVar10;
  if (fVar10 < 0.0) {
    uVar7 = 0;
  }
  uVar4 = 0xffffffffffffffff;
  if (fVar10 <= DAT_001ec668) {
    uVar4 = uVar7;
  }
  uVar7 = *(ulong *)(param_4 + 8);
  local_68 = uVar4 - 3;
  if (uVar4 < 3) {
    local_68 = 0;
  }
  local_70 = param_1;
  local_b0 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                       ("[X]","ALACRITTY_SOCKET=; export ALACRITTY_SOCKET\n");
  local_100 = 0;
  lStack_f8 = 8;
  local_f0 = 0;
  local_c8 = 0;
  lStack_c0 = 1;
  local_b8 = 0;
  auVar11 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17he66bed476250953dE(param_2,param_3);
  local_58 = auVar11._0_8_;
  local_50 = auVar11._8_8_ + local_58;
  bVar2 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(&local_58);
  if (((int)extraout_RDX != 0x110000 & bVar2) == 1) {
    uVar4 = 0;
    local_60 = uVar7 - (local_b0 + 1);
    if (uVar7 < local_b0 + 1) {
      local_60 = uVar4;
    }
    uVar6 = extraout_RDX;
    do {
      uVar9 = uVar6 & 0xffffffff;
      uVar8 = (uint)uVar6;
      if (((uVar8 == 10) || (uVar4 == uVar7)) ||
         ((local_b0 <= uVar7 && ((local_f0 == 0 && (uVar4 == local_60)))))) {
        cVar3 = '\x01';
        if ((4 < uVar8 - 9) && (uVar8 != 0x20)) {
          if (uVar8 < 0x80) {
            cVar3 = '\0';
          }
          else {
            cVar3 = _ZN4core7unicode12unicode_data11white_space6lookup17hae563f9e204d99aeE(uVar9);
          }
        }
        local_a8 = 0;
        lStack_a0 = 1;
        local_98 = 0;
        auVar11 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17h936671229704d993E(lStack_c0,local_b8);
        auVar11 = _ZN4core6option15Option_LT_T_GT_6filter17h331fd28735869f3bE
                            (auVar11._0_8_,auVar11._8_8_,cVar3);
        if ((auVar11 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                    /* try { // try from 0055e313 to 0055e322 has its CatchHandler @ 0055e5e6 */
          _ZN5alloc6string6String9split_off17hb414f7fc7cd130c9E
                    (&local_48,&local_c8,auVar11._8_8_ + 1);
          _ZN5alloc6string6String3pop17h86cb5b5bb86d0e70E(&local_c8);
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(&local_a8);
          local_98 = local_38;
          local_a8 = local_48;
          lStack_a0 = lStack_40;
        }
        local_d8 = local_b8;
        local_e8 = local_c8;
        uStack_e0 = lStack_c0;
                    /* try { // try from 0055e363 to 0055e386 has its CatchHandler @ 0055e60e */
        _ZN9alacritty11message_bar7Message8pad_text17ha652db38986a3243E(&local_88,&local_e8,uVar7);
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h38b165b64b8cca91E(&local_100,&local_88,&DAT_00983250)
        ;
        local_c8 = local_a8;
        lStack_c0 = lStack_a0;
        local_b8 = local_98;
                    /* try { // try from 0055e3a3 to 0055e3a7 has its CatchHandler @ 0055e5fa */
        uVar4 = _ZN81__LT_core__str__iter__Chars_u20_as_u20_core__iter__traits__iterator__Iterator_GT_5count17h41a8767c0185b7ecE
                          (lStack_a0,local_98 + lStack_a0);
        if (cVar3 == '\0') goto LAB_0055e3b4;
      }
      else {
LAB_0055e3b4:
                    /* try { // try from 0055e3b4 to 0055e406 has its CatchHandler @ 0055e604 */
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_c8,uVar9);
        if (uVar8 < 0x7f) {
          uVar6 = (ulong)(0x1f < uVar8);
        }
        else if (uVar8 < 0xa0) {
          uVar6 = 0;
        }
        else {
          bVar2 = _ZN13unicode_width6tables12lookup_width17hf99baf8c7b02f1d5E(uVar9);
          if (bVar2 == 2) {
            uVar6 = 2;
            _ZN5alloc6string6String4push17h0ede46164189e411E(&local_c8,0x20);
          }
          else {
            uVar6 = (ulong)bVar2;
          }
        }
        uVar4 = uVar4 + uVar6;
      }
      auVar11 = _ZN4core3str11validations15next_code_point17h6519aaf344192553E(&local_58);
      uVar6 = auVar11._8_8_;
    } while (((auVar11 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
            (auVar11._8_4_ != 0x110000));
  }
  local_d8 = local_b8;
  local_e8 = local_c8;
  uStack_e0 = lStack_c0;
                    /* try { // try from 0055e480 to 0055e5a5 has its CatchHandler @ 0055e5d1 */
  _ZN9alacritty11message_bar7Message8pad_text17ha652db38986a3243E(&local_88,&local_e8,uVar7);
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h38b165b64b8cca91E(&local_100,&local_88,&DAT_00983238);
  if (local_68 < local_f0) {
    local_f0 = local_68;
    _ZN4core3ptr52drop_in_place_LT__u5b_alloc__string__String_u5d__GT_17h4c02c27e478db80bE
              (local_68 * 0x18 + lStack_f8);
    if (0x12 < uVar7) {
      uStack_e0 = lStack_f8 + local_f0 * 0x18;
      local_e8 = lStack_f8;
      puVar5 = (undefined4 *)
               _ZN106__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__double_ended__DoubleEndedIterator_GT_9next_back17h2076e72540d77e9fE
                         (&local_e8);
      if (puVar5 != (undefined4 *)0x0) {
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h4cfefc754dbf8feeE
                  (&local_e8,"[MESSAGE TRUNCATED]",0x13);
        local_78 = local_d8;
        local_88 = (undefined4)local_e8;
        uStack_84 = local_e8._4_4_;
        uStack_80 = (undefined4)uStack_e0;
        uStack_7c = uStack_e0._4_4_;
        _ZN9alacritty11message_bar7Message8pad_text17ha652db38986a3243E(&local_e8,&local_88,uVar7);
        _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hcb6d23ea7ad1ac3aE(puVar5);
        *(long *)(puVar5 + 4) = local_d8;
        *puVar5 = (undefined4)local_e8;
        puVar5[1] = local_e8._4_4_;
        puVar5[2] = (undefined4)uStack_e0;
        puVar5[3] = uStack_e0._4_4_;
      }
    }
  }
  lVar1 = lStack_f8;
  if ((local_b0 <= uVar7) && (local_f0 != 0)) {
    _ZN5alloc6string6String8truncate17h4c9243e558c5f483E(lStack_f8,uVar7 - local_b0);
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h219f3b3c50208c25E
              (lVar1,"[X]","ALACRITTY_SOCKET=; export ALACRITTY_SOCKET\n");
  }
  local_70[2] = local_f0;
  *local_70 = local_100;
  local_70[1] = lStack_f8;
  return;
}