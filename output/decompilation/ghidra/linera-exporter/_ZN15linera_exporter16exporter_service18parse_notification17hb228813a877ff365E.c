void _ZN15linera_exporter16exporter_service18parse_notification17hb228813a877ff365E
               (undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar13 = 0x8000000000000010;
  lVar1 = *(long *)(param_2 + 0x18);
  local_138 = -0x7ffffffffffffff0;
  if (lVar1 == -0x8000000000000000) {
    uVar12 = CONCAT44(uStack_12c,uStack_130);
  }
  else {
                    /* try { // try from 009e2d38 to 009e2ed0 has its CatchHandler @ 009e2ee7 */
    _ZN4core3ptr65drop_in_place_LT_linera_exporter__common__BadNotificationKind_GT_17hd47c197dc7cf225bE
              (&local_138);
    local_58 = *(undefined4 *)(param_2 + 0x20);
    uStack_54 = *(undefined4 *)(param_2 + 0x24);
    uStack_50 = *(undefined4 *)(param_2 + 0x28);
    uStack_4c = *(undefined4 *)(param_2 + 0x2c);
    local_60 = lVar1;
    (*(code *)
      PTR__ZN10linera_rpc4grpc11conversions124__LT_impl_u20_core__convert__TryFrom_LT_linera_rpc__grpc__api__ChainId_GT__u20_for_u20_linera_base__identifiers__ChainId_GT_8try_from17h05b59a1d3da9949eE_01594828
    )(&local_f0,&local_60);
    local_a8 = local_e8;
    uVar13 = local_a8;
    uStack_a0 = uStack_e0;
    uVar12 = uStack_a0;
    local_98 = local_d8;
    uVar10 = local_98;
    uStack_90 = uStack_d0;
    uVar11 = uStack_90;
    local_a8._0_4_ = (undefined4)local_e8;
    local_a8._4_4_ = (undefined4)((ulong)local_e8 >> 0x20);
    uStack_a0._0_4_ = (undefined4)uStack_e0;
    uStack_a0._4_4_ = (undefined4)((ulong)uStack_e0 >> 0x20);
    local_a8 = uVar13;
    uStack_a0 = uVar12;
    if (local_f0 != -0x7ffffffffffffff0) {
      local_48 = (undefined4)local_a8;
      uStack_44 = local_a8._4_4_;
      uStack_40 = (undefined4)uStack_a0;
      uStack_3c = uStack_a0._4_4_;
      local_38 = local_d8;
      uStack_30 = uStack_d0;
      param_1[4] = local_d8;
      param_1[5] = uStack_d0;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_a8;
      *(undefined4 *)((long)param_1 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_a0;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_a0._4_4_;
      param_1[1] = local_f0;
      param_1[6] = local_c8;
      *param_1 = 1;
      goto LAB_009e2ed1;
    }
    local_98._0_4_ = (undefined4)local_d8;
    local_98._4_4_ = (undefined4)((ulong)local_d8 >> 0x20);
    uStack_90._0_4_ = (undefined4)uStack_d0;
    uStack_90._4_4_ = (undefined4)((ulong)uStack_d0 >> 0x20);
    local_88 = (undefined4)local_a8;
    uStack_84 = local_a8._4_4_;
    uStack_80 = (undefined4)uStack_a0;
    uStack_7c = uStack_a0._4_4_;
    local_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = (undefined4)uStack_90;
    uStack_6c = uStack_90._4_4_;
    local_98 = uVar10;
    uStack_90 = uVar11;
    _ZN7bincode8internal16deserialize_seed17h56655e365010d04eE
              (&local_138,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
    uVar9 = uStack_10c;
    uVar8 = uStack_110;
    uVar7 = uStack_114;
    uVar6 = uStack_118;
    uVar5 = uStack_11c;
    uVar4 = uStack_120;
    uVar3 = uStack_124;
    uVar2 = local_128;
    if (local_138 != 4) {
      uVar13 = CONCAT44(uStack_12c,uStack_130);
      local_b8 = local_100;
      uStack_b4 = uStack_fc;
      uStack_b0 = uStack_f8;
      uStack_ac = uStack_f4;
      local_f0 = local_138;
      if (local_138 == 0) {
        local_128 = uStack_118;
        uStack_124 = uStack_114;
        uStack_120 = uStack_110;
        uStack_11c = uStack_10c;
        local_138 = CONCAT44(uVar3,uVar2);
        uStack_130 = uVar4;
        uStack_12c = uVar5;
        uStack_118 = local_88;
        uStack_114 = uStack_84;
        uStack_110 = uStack_80;
        uStack_10c = uStack_7c;
        uStack_108 = local_78;
        uStack_104 = uStack_74;
        local_100 = uStack_70;
        uStack_fc = uStack_6c;
        *(undefined4 *)(param_1 + 7) = local_78;
        *(undefined4 *)((long)param_1 + 0x3c) = uStack_74;
        *(undefined4 *)(param_1 + 8) = uStack_70;
        *(undefined4 *)((long)param_1 + 0x44) = uStack_6c;
        *(undefined4 *)(param_1 + 5) = local_88;
        *(undefined4 *)((long)param_1 + 0x2c) = uStack_84;
        *(undefined4 *)(param_1 + 6) = uStack_80;
        *(undefined4 *)((long)param_1 + 0x34) = uStack_7c;
        *(undefined4 *)(param_1 + 3) = uVar6;
        *(undefined4 *)((long)param_1 + 0x1c) = uVar7;
        *(undefined4 *)(param_1 + 4) = uVar8;
        *(undefined4 *)((long)param_1 + 0x24) = uVar9;
        *(undefined4 *)(param_1 + 1) = uVar2;
        *(undefined4 *)((long)param_1 + 0xc) = uVar3;
        *(undefined4 *)(param_1 + 2) = uVar4;
        *(undefined4 *)((long)param_1 + 0x14) = uVar5;
        param_1[9] = uVar13;
        *param_1 = 0;
        _ZN4core3ptr48drop_in_place_LT_linera_core__worker__Reason_GT_17h1b0a763d229ce9f4E
                  (&local_f0);
      }
      else {
        param_1[1] = 0x8000000000000011;
        param_1[2] = 0;
        *param_1 = 1;
        _ZN4core3ptr48drop_in_place_LT_linera_core__worker__Reason_GT_17h1b0a763d229ce9f4E
                  (&local_f0);
      }
      goto LAB_009e2ed1;
    }
    uVar12 = CONCAT44(uStack_12c,uStack_130);
    uVar13 = 0x8000000000000011;
  }
  param_1[1] = uVar13;
  param_1[2] = uVar12;
  *param_1 = 1;
LAB_009e2ed1:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h70e1efe7f3e0917cE(param_2);
  return;
}