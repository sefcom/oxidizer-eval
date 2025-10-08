void _ZN21ruff_python_formatter6string9normalize13UnicodeEscape9normalize17h0df739785c176e43E
               (undefined8 *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  int extraout_EDX;
  ulong uVar4;
  uint uVar5;
  undefined auVar6 [16];
  undefined auVar7 [12];
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 *local_68;
  undefined **local_60;
  ulong local_58;
  long local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  
  local_80 = 0;
  uStack_78 = 1;
  local_70 = 0;
  if ((param_2 & 1) != 0) {
    local_48 = param_4 + param_5;
    local_40 = 0;
    local_68 = param_1;
    local_50 = param_4;
    _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
              (&local_50);
    if (extraout_EDX == 0x7b) {
      local_60 = &PTR_s_crates_ruff_python_formatter_src_0067f7f0;
LAB_004290bf:
      auVar7 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                         (&local_50);
      uVar5 = auVar7._8_4_;
      uVar4 = auVar7._0_8_;
      if ((int)uVar5 < 0x2d) {
        if (uVar5 == 0x20) goto LAB_00429110;
LAB_004290f6:
        if (uVar5 - 0x41 < 0x1a || uVar5 - 0x30 < 10) goto LAB_00429110;
        if (uVar5 - 0x61 < 0x1a) {
          if (local_70 == 0) {
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_7reserve17h95112441ea14ef65E(&local_80,2);
            auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                               (uVar4,param_4,param_5);
            lVar3 = auVar6._0_8_;
            if (lVar3 == 0) goto LAB_00429338;
            _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                      (&local_80,lVar3,auVar6._8_8_ + lVar3);
          }
          uVar5 = uVar5 & 0x5f;
          goto LAB_004290b4;
        }
      }
      else {
        if (uVar5 == 0x2d) goto LAB_00429110;
        if (uVar5 == 0x7d) {
          if (local_70 != 0) {
                    /* try { // try from 004292a3 to 0042934d has its CatchHandler @ 00429354 */
            _ZN5alloc6string6String4push17h0ede46164189e411E(&local_80,0x7d);
          }
          if (2 < uVar4) {
            param_3 = uVar4 + 1;
            puVar2 = local_68;
            goto joined_r0x004292f3;
          }
        }
        else if (uVar5 != 0x110000) goto LAB_004290f6;
      }
    }
    goto LAB_004292b8;
  }
  if (param_5 < param_3) {
    *param_1 = 0x8000000000000001;
  }
  else {
    local_48 = param_4 + param_5;
    local_40 = 0;
    puVar2 = param_1;
    local_58 = param_5;
    local_50 = param_4;
    if (param_3 != 0) {
      local_60 = &PTR_s_crates_ruff_python_formatter_src_0067f7c0;
      local_38 = param_3;
      local_68 = param_1;
      do {
        local_38 = local_38 - 1;
        auVar7 = _ZN87__LT_core__str__iter__CharIndices_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3a48939ae6ec65bfE
                           (&local_50);
        uVar5 = auVar7._8_4_;
        uVar4 = auVar7._0_8_;
        param_5 = local_58;
        puVar2 = local_68;
        if (uVar5 == 0x110000) break;
        if (uVar5 - 0x61 < 6 || uVar5 - 0x30 < 10) {
          if (local_70 != 0) goto LAB_004291d4;
        }
        else {
          if (5 < uVar5 - 0x41) goto LAB_004292b8;
          if (local_70 == 0) {
            _ZN5alloc3vec16Vec_LT_T_C_A_GT_7reserve17h95112441ea14ef65E(&local_80,param_3);
            auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                               (uVar4,param_4,local_58);
            lVar3 = auVar6._0_8_;
            param_5 = local_58;
            if (lVar3 == 0) goto LAB_00429338;
            _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h8450ce9b220d216bE
                      (&local_80,lVar3,auVar6._8_8_ + lVar3);
          }
          uVar5 = uVar5 | 0x20;
LAB_004291d4:
                    /* try { // try from 004291d4 to 00429272 has its CatchHandler @ 00429350 */
          _ZN5alloc6string6String4push17h0ede46164189e411E(&local_80,uVar5);
        }
        param_5 = local_58;
        puVar2 = local_68;
      } while (local_38 != 0);
    }
joined_r0x004292f3:
    uVar4 = param_3;
    if (local_70 != 0) {
      *puVar2 = local_80;
      puVar2[1] = uStack_78;
      puVar2[2] = local_70;
      return;
    }
    local_68 = puVar2;
    auVar6 = _ZN4core3str6traits110__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeTo_LT_usize_GT__GT_3get17hf838fc4d891e0944E
                       (uVar4,param_4,param_5);
    if (auVar6._0_8_ == 0) {
      local_60 = &PTR_s_crates_ruff_python_formatter_src_0067f7d8;
LAB_00429338:
      (*(code *)PTR__ZN4core3str16slice_error_fail17h1a2885084e28d077E_006bd7c8)
                (param_4,param_5,0,uVar4,local_60);
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    *puVar2 = 0x8000000000000000;
    *(undefined (*) [16])(puVar2 + 1) = auVar6;
  }
LAB_004292ca:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hdec1f9eb81adb7adE(&local_80);
  return;
LAB_00429110:
  if (local_70 != 0) {
LAB_004290b4:
                    /* try { // try from 004290b4 to 00429164 has its CatchHandler @ 00429352 */
    _ZN5alloc6string6String4push17h0ede46164189e411E(&local_80,uVar5);
  }
  goto LAB_004290bf;
LAB_004292b8:
  *local_68 = 0x8000000000000001;
  goto LAB_004292ca;
}