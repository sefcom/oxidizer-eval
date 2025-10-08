void _ZN5uu_dd9parseargs16parse_bytes_no_x17h5472f4e3f9be4cacE
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined auVar1 [16];
  long lVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined auVar5 [16];
  undefined auVar6 [16];
  long local_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined2 local_50;
  undefined local_4e;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_50 = 0x101;
  local_4e = 0;
  local_70[0] = 0;
  local_60 = 0;
  local_80 = param_2;
  local_78 = param_3;
  auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_4find17h6461d5410b9c813fE(param_4,param_5);
  auVar5 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17hd52c4edbc17dbe8dE(param_4,param_5,0x77);
  auVar6 = _ZN4core3str21__LT_impl_u20_str_GT_5rfind17hd52c4edbc17dbe8dE(param_4,param_5,0x62);
  if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        (*(code *)
          PTR__ZN6uucore8features6parser10parse_size6Parser9parse_u6417hc6a4e82bc9fca0a2E_00246c40)
                  (&local_a0,local_70,param_4,param_5);
        if (local_a0 == 2) {
          uVar3 = 0xffffffffffffffff;
        }
        else {
          uVar3 = local_98;
          if ((int)local_a0 != 4) {
                    /* try { // try from 0018e371 to 0018e384 has its CatchHandler @ 0018e3ab */
            _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                      (&local_48,local_80,local_78);
            param_1[3] = local_38;
            *(undefined4 *)(param_1 + 1) = local_48;
            *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
            *(undefined4 *)(param_1 + 2) = uStack_40;
            *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
            *param_1 = 0xd;
            _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17haf9c715b0b3262bcE
                      (&local_a0);
            return;
          }
        }
        _ZN4core3ptr107drop_in_place_LT_core__result__Result_LT_u64_C_uucore__features__parser__parse_size__ParseSizeError_GT__GT_17haf9c715b0b3262bcE
                  (&local_a0);
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar3;
        auVar4 = auVar6 * ZEXT816(1);
      }
      else {
        _ZN5uu_dd9parseargs16parse_bytes_only17h06067fef7da3f98fE
                  (&local_a0,param_4,param_5,auVar6._8_8_);
        if (local_a0 != 0xe) {
LAB_0018e2de:
          param_1[2] = local_90;
          param_1[3] = lStack_88;
          *param_1 = local_a0;
          param_1[1] = local_98;
          return;
        }
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_98;
        auVar4 = auVar1 * ZEXT816(0x200);
      }
    }
    else {
      if ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_0018e23e;
      _ZN5uu_dd9parseargs16parse_bytes_only17h06067fef7da3f98fE
                (&local_a0,param_4,param_5,auVar5._8_8_);
      if (local_a0 != 0xe) goto LAB_0018e2de;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_98;
      auVar4 = auVar5 * ZEXT816(2);
    }
  }
  else {
    if (((auVar5 & (undefined  [16])0x1) != (undefined  [16])0x0) ||
       ((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0)) {
LAB_0018e23e:
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
                (param_1 + 1,local_80,local_78);
      *param_1 = 7;
      return;
    }
    _ZN5uu_dd9parseargs16parse_bytes_only17h06067fef7da3f98fE
              (&local_a0,param_4,param_5,auVar4._8_8_);
    if (local_a0 != 0xe) goto LAB_0018e2de;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_98;
    auVar4 = auVar4 * ZEXT816(1);
  }
  if (auVar4._8_8_ == 0) {
    param_1[1] = auVar4._0_8_;
    lVar2 = 0xe;
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h074386e79a8fa9e7E
              (param_1 + 1,local_80,local_78);
    lVar2 = 8;
  }
  *param_1 = lVar2;
  return;
}