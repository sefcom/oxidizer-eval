void _ZN4just8executor8Executor6script17h9615beeece302e47E
               (undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long param_5,
               undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined local_60;
  ulong local_38;
  
  local_b0 = 0;
  uStack_a8 = 1;
  local_a0 = 0;
  lVar7 = param_5 * 0x20 + param_4;
  local_60 = 0;
                    /* try { // try from 00367db6 to 00367df2 has its CatchHandler @ 00367f76 */
  local_78 = param_3;
  local_70 = param_4;
  local_68 = lVar7;
  uVar2 = _ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h3e47d29e0f7959a7E
                    (&local_70);
  local_98 = param_1;
  local_90 = param_4;
  local_88 = lVar7;
  local_80 = param_6;
  if (param_2 != 0) {
    auVar8 = _ZN106__LT_core__ops__range__Range_LT_usize_GT__u20_as_u20_core__slice__index__SliceIndex_LT__u5b_T_u5d__GT__GT_5index17h558ebd0999430957E
                       (uVar2,param_6,param_7,&PTR_s_src_executor_rs_0052fbd8);
    lVar7 = auVar8._0_8_;
    if (lVar7 != 0 && auVar8._8_8_ != 0) {
      uVar4 = 0;
      lVar6 = lVar7;
      do {
        lVar3 = lVar6 + 0x18;
        cVar1 = _ZN4just7shebang7Shebang20include_shebang_line17hfb1111885aa0823aE(param_2,local_78)
        ;
        if (cVar1 != '\0') {
                    /* try { // try from 00367f3f to 00367f53 has its CatchHandler @ 00367f78 */
          _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
                    (&local_b0,*(long *)(lVar6 + 8),*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
        }
        _ZN5alloc6string6String4push17h0ede46164189e411E(&local_b0,10);
        uVar4 = uVar4 + 1;
      } while ((lVar3 != auVar8._8_8_ * 0x18 + lVar7) && (lVar6 = lVar3, lVar3 != 0));
      goto LAB_00367e0c;
    }
  }
  uVar4 = 0;
LAB_00367e0c:
  _ZN4core4iter6traits8iterator8Iterator3zip17h8b9e58f090f14a2cE
            (&local_70,local_90,local_88,local_80,param_7);
  uVar5 = uVar4;
  local_38 = uVar4;
  if (uVar4 == 0) goto LAB_00367ec0;
  do {
    local_38 = 0;
    auVar8 = _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_3nth17haeea1dad52411e3cE
                       (&local_70,uVar4);
    lVar7 = auVar8._0_8_;
    while( true ) {
      if (lVar7 == 0) {
        local_98[2] = local_a0;
        *local_98 = local_b0;
        local_98[1] = uStack_a8;
        return;
      }
      if (uVar5 < *(ulong *)(auVar8._0_8_ + 0x18)) {
        do {
                    /* try { // try from 00367e56 to 00367e62 has its CatchHandler @ 00367f7c */
          _ZN5alloc6string6String4push17h0ede46164189e411E(&local_b0,10);
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(ulong *)(auVar8._0_8_ + 0x18));
      }
      lVar7 = *(long *)(auVar8._8_8_ + 8);
                    /* try { // try from 00367e77 to 00367e8b has its CatchHandler @ 00367f7a */
      _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17hb25a112a407b21ecE
                (&local_b0,lVar7,*(long *)(auVar8._8_8_ + 0x10) + lVar7);
      _ZN5alloc6string6String4push17h0ede46164189e411E(&local_b0,10);
      uVar5 = uVar5 + 1;
      uVar4 = local_38;
      if (local_38 != 0) break;
LAB_00367ec0:
      auVar8 = _ZN111__LT_core__iter__adapters__zip__Zip_LT_A_C_B_GT__u20_as_u20_core__iter__adapters__zip__ZipImpl_LT_A_C_B_GT__GT_4next17h4686d31f18b82adfE
                         (&local_70);
      lVar7 = auVar8._0_8_;
    }
  } while( true );
}