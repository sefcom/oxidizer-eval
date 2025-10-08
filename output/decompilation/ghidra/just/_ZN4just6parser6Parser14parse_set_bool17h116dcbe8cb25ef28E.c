void _ZN4just6parser6Parser14parse_set_bool17h116dcbe8cb25ef28E(byte *param_1,undefined8 param_2)

{
  code *pcVar1;
  byte bVar2;
  char cVar3;
  undefined2 *puVar4;
  undefined auVar5 [16];
  byte local_170;
  undefined7 uStack_16f;
  undefined uStack_168;
  undefined7 uStack_167;
  undefined local_160;
  undefined7 uStack_15f;
  undefined uStack_158;
  undefined7 uStack_157;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
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
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN4just6parser6Parser8accepted17h762a87b5f98dff30E(&local_170,param_2,0xe);
  if ((byte)uStack_128 == 0x25) {
    if ((local_170 & 1) == 0) {
      *param_1 = 1;
    }
    else {
      _ZN4just6parser6Parser6expect17h35e1151927597ac7E(&local_170,param_2,0x18);
      local_78 = CONCAT44(uStack_12c,local_130);
      if ((byte)uStack_128 != 0x25) {
        *(undefined4 *)(param_1 + 0x4c) = uStack_124;
        *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_124,uStack_128._1_3_);
        *(undefined8 *)(param_1 + 0x40) = local_78;
        *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_13c,local_140);
        *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_134,uStack_138);
        *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_14c,local_150);
        *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_144,uStack_148);
        *(ulong *)(param_1 + 0x10) = CONCAT71(uStack_15f,local_160);
        *(ulong *)(param_1 + 0x18) = CONCAT71(uStack_157,uStack_158);
        *(ulong *)param_1 = CONCAT71(uStack_16f,local_170);
        *(ulong *)(param_1 + 8) = CONCAT71(uStack_167,uStack_168);
        param_1[0x48] = (byte)uStack_128;
        return;
      }
      local_108 = (undefined4)CONCAT71(uStack_16f,local_170);
      uStack_104 = (undefined4)((uint7)uStack_16f >> 0x18);
      uStack_100 = (undefined4)CONCAT71(uStack_167,uStack_168);
      uStack_fc = (undefined4)((uint7)uStack_167 >> 0x18);
      local_f8 = (undefined4)CONCAT71(uStack_15f,local_160);
      uStack_f4 = (undefined4)((uint7)uStack_15f >> 0x18);
      uStack_f0 = (undefined4)CONCAT71(uStack_157,uStack_158);
      uStack_ec = (undefined4)((uint7)uStack_157 >> 0x18);
      local_b8 = local_108;
      uStack_b4 = uStack_104;
      uStack_b0 = uStack_100;
      uStack_ac = uStack_fc;
      local_a8 = local_f8;
      uStack_a4 = uStack_f4;
      uStack_a0 = uStack_f0;
      uStack_9c = uStack_ec;
      local_98 = local_150;
      uStack_94 = uStack_14c;
      uStack_90 = uStack_148;
      uStack_8c = uStack_144;
      local_88 = local_140;
      uStack_84 = uStack_13c;
      uStack_80 = uStack_138;
      uStack_7c = uStack_134;
      local_68 = local_108;
      uStack_64 = uStack_104;
      uStack_60 = uStack_100;
      uStack_5c = uStack_fc;
      local_58 = local_f8;
      uStack_54 = uStack_f4;
      uStack_50 = uStack_f0;
      uStack_4c = uStack_ec;
      local_48 = local_150;
      uStack_44 = uStack_14c;
      uStack_40 = uStack_148;
      uStack_3c = uStack_144;
      local_38 = local_140;
      uStack_34 = uStack_13c;
      uStack_30 = uStack_138;
      uStack_2c = uStack_134;
      auVar5 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(&local_68);
      local_170 = auVar5[0];
      uStack_16f = auVar5._1_7_;
      uStack_168 = auVar5[8];
      uStack_167 = auVar5._9_7_;
      bVar2 = (*(code *)
                PTR__ZN78__LT_just__keyword__Keyword_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17h72387ea6ad90b2efE_00566c50
              )(&DAT_0016e88e,&local_170);
      if (bVar2 == 0) {
        auVar5 = (*(code *)PTR__ZN4just5token5Token6lexeme17h66587cdf67f63270E_00566a10)(&local_68);
        local_170 = auVar5[0];
        uStack_16f = auVar5._1_7_;
        uStack_168 = auVar5[8];
        uStack_167 = auVar5._9_7_;
        cVar3 = (*(code *)
                  PTR__ZN78__LT_just__keyword__Keyword_u20_as_u20_core__cmp__PartialEq_LT__RF_str_GT__GT_2eq17h72387ea6ad90b2efE_00566c50
                )(&DAT_0016e311,&local_170);
        if (cVar3 == '\0') {
          puVar4 = (undefined2 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(1,2);
          if (puVar4 != (undefined2 *)0x0) {
            *puVar4 = 0xc18;
            uStack_168 = 2;
            uStack_167 = 0;
            local_160 = SUB81(puVar4,0);
            uStack_15f = (undefined7)((ulong)puVar4 >> 8);
            uStack_158 = 2;
            uStack_157 = 0;
            local_150 = local_b8;
            uStack_14c = uStack_b4;
            uStack_148 = uStack_b0;
            uStack_144 = uStack_ac;
            local_140 = local_a8;
            uStack_13c = uStack_a4;
            uStack_138 = uStack_a0;
            uStack_134 = uStack_9c;
            local_130 = local_98;
            uStack_12c = uStack_94;
            uStack_128 = uStack_90;
            uStack_124 = uStack_8c;
            local_120 = local_88;
            uStack_11c = uStack_84;
            uStack_118 = uStack_80;
            uStack_114 = uStack_7c;
            local_110 = local_78;
            local_170 = 0x21;
            uStack_16f = 0x80000000000000;
            _ZN4just5token5Token5error17h986494da066a4455E(param_1,&local_68,&local_170);
            return;
          }
          (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00566740)(1,2);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      *param_1 = bVar2;
    }
    param_1[0x48] = 0x25;
  }
  else {
    *(ulong *)(param_1 + 0x40) = CONCAT44(uStack_12c,local_130);
    *(ulong *)(param_1 + 0x31) =
         CONCAT17((undefined)uStack_138,CONCAT43(uStack_13c,local_140._1_3_));
    *(ulong *)(param_1 + 0x39) =
         CONCAT17((undefined)local_130,CONCAT43(uStack_134,uStack_138._1_3_));
    *(ulong *)(param_1 + 0x21) =
         CONCAT17((undefined)uStack_148,CONCAT43(uStack_14c,local_150._1_3_));
    *(ulong *)(param_1 + 0x29) =
         CONCAT17((undefined)local_140,CONCAT43(uStack_144,uStack_148._1_3_));
    *(ulong *)(param_1 + 0x11) = CONCAT17(uStack_158,uStack_15f);
    *(ulong *)(param_1 + 0x19) = CONCAT17((undefined)local_150,uStack_157);
    *(ulong *)(param_1 + 1) = CONCAT17(uStack_168,uStack_16f);
    *(ulong *)(param_1 + 9) = CONCAT17(local_160,uStack_167);
    *(uint *)(param_1 + 0x49) = CONCAT13((undefined)uStack_124,uStack_128._1_3_);
    *(undefined4 *)(param_1 + 0x4c) = uStack_124;
    *param_1 = local_170;
    param_1[0x48] = (byte)uStack_128;
  }
  return;
}