void _ZN11firecracker10api_server7request8snapshot23parse_put_snapshot_load17ha6addff4be7448a3E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  undefined4 local_198;
  undefined3 uStack_194;
  undefined *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined uStack_90;
  undefined uStack_8f;
  undefined6 uStack_8e;
  undefined8 local_88;
  undefined8 uStack_80;
  
  local_178 = 0;
  local_188 = param_2;
  uStack_180 = param_3;
  _ZN10serde_json2de10from_trait17h39ecb7e000ed83b6E(&local_e8,&local_188);
  lVar1 = uStack_a0;
  local_128 = local_88;
  uStack_120 = uStack_80;
  uVar4 = uStack_120;
  uStack_130 = CONCAT62(uStack_8e,CONCAT11(uStack_8f,uStack_90));
  local_138 = local_98;
  local_148 = (undefined4)local_a8;
  uStack_144 = local_a8._4_4_;
  uStack_140 = (undefined4)uStack_a0;
  uStack_13c = uStack_a0._4_4_;
  local_158 = local_b8;
  uStack_154 = uStack_b4;
  uStack_150 = uStack_b0;
  uStack_14c = uStack_ac;
  local_168 = local_c8;
  uStack_164 = uStack_c4;
  uStack_160 = uStack_c0;
  uStack_15c = uStack_bc;
  local_178 = uStack_d8;
  uStack_170 = (undefined4)uStack_d0;
  uStack_16c = uStack_d0._4_4_;
  local_188 = local_e8;
  uStack_180 = local_e0;
  lVar7 = CONCAT44(uStack_b4,local_b8);
  if (uStack_a0 == -0x8000000000000000) {
    if (lVar7 == -0x8000000000000000) {
      puVar5 = &DAT_0013827c;
      uVar4 = 0x42;
LAB_00256bce:
      uVar4 = _ZN66__LT_serde_json__error__Error_u20_as_u20_serde_core__de__Error_GT_6custom17h0845cebe398fb0d3E
                        (puVar5,uVar4);
      *(undefined *)(param_1 + 1) = 4;
      param_1[2] = uVar4;
      *param_1 = 1;
      _ZN4core3ptr66drop_in_place_LT_vmm__vmm_config__snapshot__LoadSnapshotConfig_GT_17h7ab30e2fd0caebdbE
                (&local_188);
      return;
    }
    (*(code *)
      PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
    )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x350,1);
    local_118 = CONCAT44(uStack_14c,uStack_150);
    uStack_110 = CONCAT44(uStack_144,local_148);
    local_190 = &DAT_0013830e;
    bVar3 = (byte)uStack_120;
    bVar6 = 1;
    uVar2 = 0;
  }
  else {
    if (lVar7 != -0x8000000000000000) {
      puVar5 = &DAT_001382be;
      uVar4 = 0x50;
      goto LAB_00256bce;
    }
    uStack_120._0_1_ = (byte)uStack_80;
    bVar3 = (byte)uStack_120;
    uStack_120 = uVar4;
    if ((byte)uStack_120 == 1) {
      (*(code *)
        PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
      )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x350,1);
      local_190 = &DAT_0013830e;
    }
    else {
      local_190 = (undefined *)0x0;
    }
    local_118 = local_138;
    uStack_110 = uStack_130;
    uStack_194 = (undefined3)((ulong)local_128 >> 0x28);
    lVar7 = -0x8000000000000000;
    bVar6 = bVar3;
    uVar2 = (undefined)local_128;
    local_198 = local_128._1_4_;
  }
  uStack_d0 = local_178;
  local_e0 = local_188;
  uStack_d8 = uStack_180;
  uStack_90 = 1;
  if ((bVar3 & 1) == 0) {
    uStack_90 = uStack_120._1_1_;
  }
  local_a8 = CONCAT44(uStack_16c,uStack_170);
  uStack_a0 = CONCAT44(uStack_164,local_168);
  local_98 = CONCAT44(uStack_15c,uStack_160);
  uStack_c0 = (undefined4)local_118;
  uStack_bc = local_118._4_4_;
  local_b8 = (undefined4)uStack_110;
  uStack_b4 = uStack_110._4_4_;
  uStack_ac = CONCAT31(uStack_194,local_198._3_1_);
  uStack_b0 = CONCAT31((int3)local_198,uVar2);
  uStack_8f = uStack_120._2_1_;
  local_e8 = 0x13;
  _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
            (&local_108,&local_e8);
  if (bVar6 != 0) {
    _ZN11firecracker10api_server14parsed_request11ParsingInfo26append_deprecation_message17h908cdac1c9c60287E
              (&local_108,local_190,0x52);
  }
  *(undefined4 *)(param_1 + 3) = local_f8;
  *(undefined4 *)((long)param_1 + 0x1c) = uStack_f4;
  *(undefined4 *)(param_1 + 4) = uStack_f0;
  *(undefined4 *)((long)param_1 + 0x24) = uStack_ec;
  *(undefined4 *)(param_1 + 1) = local_108;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_104;
  *(undefined4 *)(param_1 + 2) = uStack_100;
  *(undefined4 *)((long)param_1 + 0x14) = uStack_fc;
  *param_1 = 0;
  if (lVar1 == -0x8000000000000000) {
    return;
  }
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h1485ca768f6a6c3cE
            (lVar7,CONCAT44(uStack_14c,uStack_150));
  return;
}