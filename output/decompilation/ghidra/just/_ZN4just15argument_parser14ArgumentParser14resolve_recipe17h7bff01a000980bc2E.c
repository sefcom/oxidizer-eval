void _ZN4just15argument_parser14ArgumentParser14resolve_recipe17h7bff01a000980bc2E
               (byte *param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined4 local_d0;
  undefined uStack_cc;
  undefined2 uStack_cb;
  undefined uStack_c9;
  undefined4 uStack_c8;
  undefined uStack_c4;
  undefined2 uStack_c3;
  undefined uStack_c1;
  undefined local_c0;
  undefined6 uStack_bf;
  undefined uStack_b9;
  undefined uStack_b8;
  undefined6 uStack_b7;
  undefined uStack_b1;
  undefined uStack_b0;
  undefined6 uStack_af;
  undefined2 uStack_a9;
  undefined8 uStack_a7;
  undefined8 local_9f;
  undefined8 uStack_97;
  undefined8 local_8f;
  undefined8 uStack_87;
  undefined8 local_7f;
  undefined7 uStack_77;
  undefined uStack_70;
  undefined7 uStack_6f;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  long local_48;
  long local_40;
  undefined8 local_38;
  
  local_110 = 0;
  uStack_108 = 8;
  local_100 = 0;
  local_40 = param_4 * 0x10 + param_3;
  local_38 = 0;
  local_d8 = param_4;
  local_48 = param_3;
  do {
    lVar1 = param_2;
    auVar6 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1433946cae7ad1f0E
                       (&local_48);
    puVar4 = auVar6._8_8_;
    if (puVar4 == (undefined8 *)0x0) {
      if (*(long *)(lVar1 + 0x298) == 0) {
        *param_1 = *(long *)(lVar1 + 0x2c8) == 0 | 0x24;
        goto LAB_00356a5a;
      }
                    /* try { // try from 003568c0 to 0035698e has its CatchHandler @ 00356a98 */
      _ZN4just6recipe15Recipe_LT_D_GT_27check_can_be_default_recipe17hbdbea57edf4aea7bE
                (&local_d0,*(long *)(lVar1 + 0x298) + 0x10);
      if ((byte)local_d0 == 0x38) {
        uVar3 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)
                          (*(long *)(lVar1 + 0x298) + 0xa0);
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                  (&local_d0,uVar3);
        local_f8 = local_d0;
        uStack_f0 = uStack_c8;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E
                  (&local_110,&local_f8,&PTR_DAT_0052dae8);
        lVar1 = *(long *)(lVar1 + 0x298);
        *(undefined8 *)(param_1 + 0x18) = local_100;
        *(undefined8 *)(param_1 + 8) = local_110;
        *(undefined8 *)(param_1 + 0x10) = uStack_108;
        *(long *)(param_1 + 0x20) = lVar1 + 0x10;
        *(long *)(param_1 + 0x28) = local_d8;
        goto LAB_0035694e;
      }
      *(ulong *)(param_1 + 0x60) = CONCAT71(uStack_6f,uStack_70);
      *(undefined8 *)(param_1 + 0x51) = local_7f;
      *(ulong *)(param_1 + 0x59) = CONCAT17(uStack_70,uStack_77);
      *(undefined8 *)(param_1 + 0x41) = local_8f;
      *(undefined8 *)(param_1 + 0x49) = uStack_87;
      *(undefined8 *)(param_1 + 0x31) = local_9f;
      *(undefined8 *)(param_1 + 0x39) = uStack_97;
      *(ulong *)(param_1 + 0x21) = CONCAT26(uStack_a9,uStack_af);
      *(undefined8 *)(param_1 + 0x29) = uStack_a7;
      *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_b8,CONCAT16(uStack_b9,uStack_bf));
      *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_b0,CONCAT16(uStack_b1,uStack_b7));
      *(uint *)(param_1 + 1) = CONCAT13(uStack_cc,local_d0._1_3_);
      *(uint *)(param_1 + 5) = CONCAT13((undefined)uStack_c8,CONCAT12(uStack_c9,uStack_cb));
      *(uint *)(param_1 + 9) = CONCAT13(uStack_c4,uStack_c8._1_3_);
      *(uint *)(param_1 + 0xd) = CONCAT13(local_c0,CONCAT12(uStack_c1,uStack_c3));
      *param_1 = (byte)local_d0;
      goto LAB_00356a5a;
    }
    auVar7 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h108b88534797670aE
                       (*puVar4,puVar4[1]);
    uVar5 = auVar7._8_8_;
    uVar3 = auVar7._0_8_;
                    /* try { // try from 0035681e to 00356850 has its CatchHandler @ 00356a9a */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_d0,uVar3);
    local_e8 = CONCAT17(uStack_b9,CONCAT61(uStack_bf,local_c0));
    uStack_f4 = CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc));
    uStack_ec = CONCAT13(uStack_c1,CONCAT21(uStack_c3,uStack_c4));
    local_f8 = local_d0;
    uStack_f0 = uStack_c8;
    _ZN5alloc3vec16Vec_LT_T_C_A_GT_4push17h2be7ee32b7c9f397E(&local_110,&local_f8,&PTR_DAT_0052db00)
    ;
    param_2 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17he9fea18cadddca02E
                        (*(undefined8 *)(lVar1 + 0x2a0),*(undefined8 *)(lVar1 + 0x2a8),uVar3,uVar5);
  } while (param_2 != 0);
  lVar2 = _ZN4just8justfile8Justfile10get_recipe17h2487a07572812fbdE(lVar1,uVar3,uVar5);
  if (lVar2 == 0) {
    _ZN5alloc3str17join_generic_copy17haa9e8db24d47c2b5E
              (&local_d0,uStack_108,local_100,&DAT_0016e4f0,1);
    local_58 = CONCAT17(uStack_b9,CONCAT61(uStack_bf,local_c0));
    uStack_64 = CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc));
    uStack_5c = CONCAT13(uStack_c1,CONCAT21(uStack_c3,uStack_c4));
    local_68 = local_d0;
    uStack_60 = uStack_c8;
                    /* try { // try from 003569a9 to 003569bb has its CatchHandler @ 00356a76 */
    _ZN4just8justfile8Justfile14suggest_recipe17hb59653753af09818E(&local_f8,lVar1,uVar3,uVar5);
    *(undefined8 *)(param_1 + 0x38) = local_58;
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_64,local_68);
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_5c,uStack_60);
    uStack_c9 = (undefined)local_f8;
    uStack_c8 = (undefined4)(CONCAT44(uStack_f4,local_f8) >> 8);
    uStack_c4 = (undefined)((uint)uStack_f4 >> 8);
    uStack_c3 = (undefined2)((uint)uStack_f4 >> 0x10);
    uStack_c1 = (undefined)uStack_f0;
    local_c0 = (undefined)((uint)uStack_f0 >> 8);
    uStack_bf = (undefined6)(CONCAT44(uStack_ec,uStack_f0) >> 0x10);
    uStack_b9 = (undefined)local_e8;
    uStack_b8 = (undefined)((ulong)local_e8 >> 8);
    uStack_b7 = (undefined6)((ulong)local_e8 >> 0x10);
    uStack_b1 = (undefined)uStack_e0;
    uStack_b0 = (undefined)((ulong)uStack_e0 >> 8);
    uStack_af = (undefined6)((ulong)uStack_e0 >> 0x10);
    *param_1 = 0x34;
    *(undefined4 *)(param_1 + 1) = local_d0;
    *(uint *)(param_1 + 5) = CONCAT13(uStack_c9,CONCAT21(uStack_cb,uStack_cc));
    *(undefined4 *)(param_1 + 9) = uStack_c8;
    *(uint *)(param_1 + 0xd) = CONCAT13(uStack_c1,(int3)((uint)uStack_f4 >> 8));
    *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_b9,CONCAT61(uStack_bf,local_c0));
    *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_b1,(int7)((ulong)local_e8 >> 8));
    *(undefined8 *)(param_1 + 0x20) = uStack_e0;
LAB_00356a5a:
    _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h766f1f48926327acE
              (&local_110);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = local_100;
    *(undefined8 *)(param_1 + 8) = local_110;
    *(undefined8 *)(param_1 + 0x10) = uStack_108;
    *(long *)(param_1 + 0x20) = lVar2;
    *(long *)(param_1 + 0x28) = auVar6._0_8_ + 1;
LAB_0035694e:
    *param_1 = 0x38;
  }
  return;
}