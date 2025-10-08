undefined  [16] _ZN6uu_env16load_config_file17he01b7851b1bda2a1E(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined extraout_DL;
  undefined8 *local_288;
  undefined *local_280;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  ulong local_238;
  undefined8 local_230;
  undefined local_228 [40];
  undefined local_200 [32];
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined local_190 [16];
  long local_180;
  long local_178;
  long lStack_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 uStack_158;
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
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  ulong local_d8;
  undefined8 local_d0;
  long local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar3 = 
  PTR__ZN76__LT_ini__PropertyIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h578d705864b3efa6E_00219560
  ;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar8 = *(undefined8 **)(param_1 + 8);
    puVar7 = puVar8 + *(long *)(param_1 + 0x10) * 2;
    do {
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      cVar6 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h1e3c3d7f0695123eE
                        (uVar1,uVar2,&DAT_0011e8a6,1);
      if (cVar6 == '\0') {
        _ZN3ini3Ini18load_from_file_opt17h4049ee98f0c71d18E(&local_e0,uVar1,uVar2);
      }
      else {
        local_178 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00219568)();
        local_240 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_00219570)
                              (&local_178);
        local_238 = CONCAT71(local_238._1_7_,extraout_DL) & 0xffffffffffffff01;
                    /* try { // try from 001727fe to 0017280f has its CatchHandler @ 00172a0c */
        _ZN3ini3Ini13read_from_opt17hdafb0393949e35e7E(&local_e0,&local_240);
        _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h608b5571d6d78c42E
                  (local_240,local_238 & 0xffffffff);
      }
      uVar2 = local_d0;
      uVar5 = local_d8;
      uVar1 = local_e0;
      puVar4 = 
      PTR__ZN75__LT_ini__SectionIter_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17ha182df54595ace07E_00219578
      ;
      puVar8 = puVar8 + 2;
      local_168 = local_b8;
      local_178 = local_c8;
      lStack_170 = lStack_c0;
      local_f0 = local_40;
      uStack_e8 = uStack_38;
      local_100 = local_50;
      uStack_f8 = uStack_48;
      local_110 = local_60;
      uStack_108 = uStack_58;
      local_120 = local_70;
      uStack_118 = uStack_68;
      local_130 = local_80;
      uStack_12c = uStack_7c;
      uStack_128 = uStack_78;
      uStack_124 = uStack_74;
      local_140 = local_90;
      uStack_13c = uStack_8c;
      uStack_138 = uStack_88;
      uStack_134 = uStack_84;
      local_150 = local_a0;
      uStack_14c = uStack_9c;
      uStack_148 = uStack_98;
      uStack_144 = uStack_94;
      uStack_160 = local_b0;
      uStack_15c = uStack_ac;
      uStack_158 = CONCAT44(uStack_a4,uStack_a8);
      (*(code *)PTR_memcpy_002191a0)(local_228,&local_178,0x98);
      local_240 = uVar1;
      local_238 = uVar5;
      local_230 = uVar2;
      local_280 = local_200;
      local_278 = local_1e0;
      uStack_274 = uStack_1dc;
      uStack_270 = uStack_1d8;
      uStack_26c = uStack_1d4;
      local_268 = local_1d0;
      local_288 = &local_240;
                    /* try { // try from 00172940 to 0017294d has its CatchHandler @ 00172a2b */
      while ((*(code *)puVar4)(local_190,&local_288), local_180 != 0) {
        lStack_170 = local_180 + 0x40;
        uStack_158 = *(undefined8 *)(local_180 + 0x70);
        local_178 = local_180;
        local_168 = *(undefined8 *)(local_180 + 0x60);
        uStack_160 = *(undefined4 *)(local_180 + 0x68);
        uStack_15c = *(undefined4 *)(local_180 + 0x6c);
                    /* try { // try from 00172990 to 001729b6 has its CatchHandler @ 00172a2d */
        while ((*(code *)puVar3)(&local_260,&local_178), local_260 != 0) {
          _ZN3std3env7set_var17h09da1a9546dab808E(local_260,local_258,local_250,local_248);
        }
      }
      _ZN4core3ptr29drop_in_place_LT_ini__Ini_GT_17h63a28054a6428a59E(&local_240);
    } while (puVar8 != puVar7);
  }
  return ZEXT816(0x2108a8) << 0x40;
}