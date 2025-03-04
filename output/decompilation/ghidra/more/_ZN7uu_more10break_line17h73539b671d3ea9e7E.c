void _ZN7uu_more10break_line17h73539b671d3ea9e7E
               (undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  long local_168;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined **local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined local_c8;
  undefined4 local_c4;
  undefined local_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_98;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined local_70;
  undefined4 local_6c;
  undefined local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  uVar1 = _ZN13unicode_width9str_width17hf245007b39258182E(param_2,param_3,0);
  local_150 = 0;
  uStack_148 = 8;
  local_140 = 0;
  if (uVar1 < param_4) {
                    /* try { // try from 001ddebb to 001ddeed has its CatchHandler @ 001de12e */
    _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h12e9e4e6512a0ac3E
              (&local_110,param_2,param_3);
    local_128 = local_100;
    local_138 = (undefined4)local_110;
    uStack_134 = local_110._4_4_;
    uStack_130 = uStack_108;
    uStack_12c = uStack_104;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc1013e28eda8a57cE(&local_150,&local_138);
  }
  else {
    local_110 = 0;
    local_100 = 0;
    local_f0 = 0;
    local_e0 = 0;
    local_d0 = 0;
    local_c8 = 2;
    local_c4 = 0x10020001;
    local_c0 = 0x10;
    local_b8 = 0;
    local_a8 = 0;
    local_98 = 0;
    local_78 = 0;
    local_70 = 2;
    local_6c = 0x10020001;
    local_68 = 0x10;
    local_168 = 0;
    local_120 = &PTR_DAT_00262b98;
    uVar1 = 0;
    local_118 = param_1;
    local_d8 = param_3;
    local_88 = param_3;
    local_80 = param_3;
    local_60 = param_2;
    local_58 = param_3;
    local_50 = param_2;
    while( true ) {
                    /* try { // try from 001ddff0 to 001de019 has its CatchHandler @ 001de130 */
      auVar6 = _ZN100__LT_unicode_segmentation__grapheme__Graphemes_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h8ebf6d9da3d275efE
                         (&local_110);
      lVar3 = local_50;
      param_1 = local_118;
      lVar5 = auVar6._0_8_;
      if (lVar5 == 0) break;
      uVar2 = _ZN13unicode_width9str_width17hf245007b39258182E(lVar5,auVar6._8_8_,0);
      uVar1 = uVar1 + uVar2;
      if (param_4 < uVar1) {
        lVar5 = lVar5 - lVar3;
        lVar3 = _ZN4core3str6traits108__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__Range_LT_usize_GT__GT_3get17h3d479bbd9c610d76E
                          (local_168,lVar5,param_2,param_3);
        if (lVar3 == 0) goto LAB_001de110;
                    /* try { // try from 001de047 to 001de07f has its CatchHandler @ 001de12c */
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h12e9e4e6512a0ac3E
                  (&local_138,lVar3);
        local_38 = local_128;
        local_48 = local_138;
        uStack_44 = uStack_134;
        uStack_40 = uStack_130;
        uStack_3c = uStack_12c;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc1013e28eda8a57cE(&local_150,&local_48);
        uVar1 = uVar2;
        local_168 = lVar5;
      }
    }
    if (local_168 != param_3) {
      lVar3 = _ZN4core3str6traits112__LT_impl_u20_core__slice__index__SliceIndex_LT_str_GT__u20_for_u20_core__ops__range__RangeFrom_LT_usize_GT__GT_3get17hccefea64a1916a27E
                        (local_168,param_2,param_3);
      if (lVar3 == 0) {
        local_120 = &PTR_DAT_00262b80;
        lVar5 = param_3;
LAB_001de110:
        uVar4 = _ZN4core3str16slice_error_fail17h5dbb61534404fe7eE
                          (param_2,param_3,local_168,lVar5,local_120);
                    /* catch() { ... } // from try @ 001de047 with catch @ 001de12c */
                    /* catch() { ... } // from try @ 001ddff0 with catch @ 001de130 */
                    /* try { // try from 001de133 to 001de13c has its CatchHandler @ 001de145 */
        _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h54d13806247b6c15E
                  (&local_150);
        _Unwind_Resume(uVar4);
        return;
      }
                    /* try { // try from 001de0b1 to 001de12b has its CatchHandler @ 001de12e */
      _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h12e9e4e6512a0ac3E
                (&local_110,lVar3);
      local_128 = local_100;
      local_138 = (undefined4)local_110;
      uStack_134 = local_110._4_4_;
      uStack_130 = uStack_108;
      uStack_12c = uStack_104;
      _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17hc1013e28eda8a57cE(&local_150,&local_138);
    }
  }
  param_1[2] = local_140;
  *param_1 = local_150;
  param_1[1] = uStack_148;
  return;
}