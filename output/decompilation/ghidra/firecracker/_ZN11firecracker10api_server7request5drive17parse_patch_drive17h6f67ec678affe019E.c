void _ZN11firecracker10api_server7request5drive17parse_patch_drive17h6f67ec678affe019E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  char cVar2;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined uStack_154;
  undefined uStack_153;
  undefined2 uStack_152;
  undefined4 uStack_150;
  undefined2 uStack_14c;
  undefined2 uStack_14a;
  undefined4 uStack_148;
  undefined2 uStack_144;
  undefined2 uStack_142;
  undefined4 uStack_140;
  undefined2 uStack_13c;
  undefined2 uStack_13a;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  long local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0;
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0,1);
  if (param_4 == 0) {
    (*(code *)
      PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
    )(puVar1 + 0x10,1);
    *(undefined *)(param_1 + 1) = 0;
  }
  else {
    _ZN11firecracker10api_server14parsed_request10checked_id17hc78530a21c875bb9E
              (&local_158,param_4,param_5);
    if ((char)local_158 == '\x05') {
      local_1d0 = 0;
      local_1e0 = param_2;
      local_1d8 = param_3;
      _ZN10serde_json2de10from_trait17h0c95b441fcdb8800E(&local_158,&local_1e0);
      _ZN4core6result19Result_LT_T_C_E_GT_11inspect_err17hc7b3c2374764fef6E(&local_a0,&local_158);
      if (local_a0 != 4) {
        local_168 = local_40;
        uStack_160 = uStack_38;
        local_178 = local_50;
        uStack_170 = uStack_48;
        local_188 = local_60;
        uStack_184 = uStack_5c;
        uStack_180 = uStack_58;
        uStack_17c = uStack_54;
        local_198 = local_70;
        uStack_194 = uStack_6c;
        uStack_190 = uStack_68;
        uStack_18c = uStack_64;
        local_1a8 = local_80;
        uStack_1a4 = uStack_7c;
        uStack_1a0 = uStack_78;
        uStack_19c = uStack_74;
        local_1b8 = local_90;
        uStack_1b4 = uStack_8c;
        uStack_1b0 = uStack_88;
        uStack_1ac = uStack_84;
        local_1c8 = local_a0;
        uStack_1c0 = uStack_98;
        cVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                          (CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150)),
                           CONCAT26(uStack_142,CONCAT24(uStack_144,uStack_148)),
                           CONCAT44(uStack_54,uStack_58),local_50);
        if (cVar2 != '\0') {
          local_f0 = local_168;
          uStack_e8 = uStack_160;
          local_100 = local_178;
          uStack_f8 = uStack_170;
          local_110 = CONCAT44(uStack_184,local_188);
          uStack_108 = CONCAT44(uStack_17c,uStack_180);
          local_120 = local_198;
          uStack_11c = uStack_194;
          uStack_118 = uStack_190;
          uStack_114 = uStack_18c;
          local_130 = local_1a8;
          uStack_12c = uStack_1a4;
          uStack_128 = uStack_1a0;
          uStack_124 = uStack_19c;
          uStack_140 = local_1b8;
          uStack_13c = (undefined2)uStack_1b4;
          uStack_13a = (undefined2)((uint)uStack_1b4 >> 0x10);
          uStack_138 = uStack_1b0;
          uStack_134 = uStack_1ac;
          uStack_150 = (undefined4)local_1c8;
          uStack_14c = (undefined2)((ulong)local_1c8 >> 0x20);
          uStack_14a = (undefined2)((ulong)local_1c8 >> 0x30);
          uStack_148 = (undefined4)uStack_1c0;
          uStack_144 = (undefined2)((ulong)uStack_1c0 >> 0x20);
          uStack_142 = (undefined2)((ulong)uStack_1c0 >> 0x30);
          local_158 = 0x21;
          uStack_154 = 0;
          uStack_153 = 0;
          uStack_152 = 0;
          _ZN11firecracker10api_server14parsed_request13ParsedRequest8new_sync17h3bce1d2f92bd31b1E
                    (param_1 + 1,&local_158);
          *param_1 = 0;
          return;
        }
        (*(code *)
          PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
        )(puVar1 + 0x10,1);
        _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
                  (&local_a0,&DAT_00138134,0x39);
        uStack_142 = (undefined2)local_90;
        uStack_140 = (undefined4)(CONCAT44(uStack_8c,local_90) >> 0x10);
        uStack_13c = (undefined2)((uint)uStack_8c >> 0x10);
        uStack_152 = (undefined2)local_a0;
        uStack_150 = (undefined4)((ulong)local_a0 >> 0x10);
        uStack_14c = (undefined2)((ulong)local_a0 >> 0x30);
        uStack_14a = (undefined2)uStack_98;
        uStack_148 = (undefined4)((ulong)uStack_98 >> 0x10);
        uStack_144 = (undefined2)((ulong)uStack_98 >> 0x30);
        *(undefined2 *)(param_1 + 1) = 0x301;
        *(undefined4 *)((long)param_1 + 10) = local_158;
        *(uint *)((long)param_1 + 0xe) = CONCAT22(uStack_152,CONCAT11(uStack_153,uStack_154));
        *(undefined4 *)((long)param_1 + 0x12) = uStack_150;
        *(uint *)((long)param_1 + 0x16) = CONCAT22(uStack_14a,uStack_14c);
        param_1[3] = uStack_98;
        param_1[4] = CONCAT26(uStack_13c,CONCAT42(uStack_140,uStack_142));
        *param_1 = 1;
        _ZN4core3ptr68drop_in_place_LT_vmm__vmm_config__drive__BlockDeviceUpdateConfig_GT_17h3f0fc5844b47c722E
                  (&local_1c8);
        return;
      }
      *(undefined *)(param_1 + 1) = 4;
      param_1[2] = uStack_98;
    }
    else {
      *(uint *)((long)param_1 + 0xc) = CONCAT22(uStack_152,CONCAT11(uStack_153,uStack_154));
      *(uint *)((long)param_1 + 9) = CONCAT13(uStack_154,local_158._1_3_);
      *(char *)(param_1 + 1) = (char)local_158;
      param_1[2] = CONCAT26(uStack_14a,CONCAT24(uStack_14c,uStack_150));
      param_1[3] = CONCAT26(uStack_142,CONCAT24(uStack_144,uStack_148));
      param_1[4] = CONCAT26(uStack_13a,CONCAT24(uStack_13c,uStack_140));
    }
  }
  *param_1 = 1;
  return;
}