void _ZN3bat10controller10Controller22run_with_error_handler17ha104d6fbd377cb43E
               (char *param_1,long *param_2,long param_3,byte *param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined3 uVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  byte extraout_DL;
  undefined *puVar9;
  char local_2a4;
  undefined8 local_290;
  long local_288;
  undefined8 uStack_280;
  undefined *local_278;
  long *local_270;
  long local_268;
  undefined *local_260;
  undefined local_258 [29];
  char local_23b;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  long local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  char local_190;
  undefined7 uStack_18f;
  undefined8 uStack_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  long local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_58 [32];
  undefined8 local_38;
  
  lVar2 = *param_2;
  cVar1 = *(char *)(lVar2 + 0x12a);
  cVar7 = '\x02';
  local_270 = param_2;
  if (cVar1 != '\x02') {
    lVar3 = *(long *)(param_3 + 8);
    uStack_188 = *(long *)(param_3 + 0x10) * 0xa0 + lVar3;
    local_190 = (char)lVar3;
    uStack_18f = (undefined7)((ulong)lVar3 >> 8);
                    /* try { // try from 005370a5 to 005370e6 has its CatchHandler @ 0053765d */
    cVar6 = _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_3any17hba863c598434dc94E
                      (&local_190);
    cVar7 = '\x02';
    if (cVar6 != '\0') {
      cVar7 = cVar1;
    }
  }
  (*(code *)PTR__ZN3bat6output10OutputType9from_mode17h26c543a4809b2489E_00807b08)
            (&local_190,cVar7,*(undefined *)(lVar2 + 0x129),*(undefined8 *)(lVar2 + 0x110),
             *(undefined8 *)(lVar2 + 0x118));
  if (local_190 == '\r') {
    uStack_90 = uStack_180;
    uStack_8c = uStack_17c;
    local_88 = uStack_178;
    uStack_84 = uStack_174;
    uStack_80 = uStack_170;
    uStack_7c = uStack_16c;
    local_78 = local_168;
    uStack_74 = uStack_164;
    uStack_70 = uStack_160;
    uStack_6c = uStack_15c;
    local_68 = local_158;
    local_268 = uStack_188 + -3;
    local_98 = uStack_188;
    if (local_268 == 2) {
                    /* try { // try from 00537157 to 00537160 has its CatchHandler @ 0053763c */
      _ZN7clircle7Clircle6stdout17h838a81d329912014E(local_258);
    }
    else {
      local_23b = '\x02';
    }
    if (param_4 == (byte *)0x0) {
                    /* try { // try from 0053723d to 005372f7 has its CatchHandler @ 00537649 */
      (*(code *)PTR__ZN3bat6output10OutputType6handle17h5316410587048584E_00807b10)
                (&local_190,&local_98);
      if (local_190 != '\r') {
        local_228 = (undefined4)(CONCAT44(uStack_17c,uStack_180) >> 8);
        uVar4 = (undefined3)((uint)uStack_17c >> 8);
        uStack_224._3_1_ = (undefined)uStack_178;
        uStack_224 = CONCAT13(uStack_224._3_1_,uVar4);
        uStack_220 = (undefined4)(CONCAT44(uStack_174,uStack_178) >> 8);
        uStack_21c._0_3_ = (undefined3)((uint)uStack_174 >> 8);
        uStack_230 = (undefined4)((ulong)uStack_188 >> 8);
        uStack_22c = (undefined4)
                     (CONCAT17((undefined)uStack_180,(int7)((ulong)uStack_188 >> 8)) >> 0x20);
        *(undefined8 *)(param_1 + 0x40) = local_150;
        *(undefined8 *)(param_1 + 0x48) = uStack_148;
        *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_15c,uStack_160);
        *(undefined8 *)(param_1 + 0x38) = local_158;
        *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_16c,uStack_170);
        *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_164,local_168);
        *(ulong *)(param_1 + 0x10) = CONCAT35(uVar4,CONCAT41(local_228,(undefined)uStack_180));
        *(ulong *)(param_1 + 0x18) =
             CONCAT35((undefined3)uStack_21c,CONCAT41(uStack_220,uStack_224._3_1_));
        local_238._0_4_ = (undefined4)uStack_18f;
        local_238._4_4_ = (undefined4)(CONCAT17((undefined)uStack_188,uStack_18f) >> 0x20);
        *(undefined4 *)(param_1 + 1) = (undefined4)local_238;
        *(undefined4 *)(param_1 + 5) = local_238._4_4_;
        *(undefined4 *)(param_1 + 9) = uStack_230;
        *(undefined4 *)(param_1 + 0xd) = uStack_22c;
        *param_1 = local_190;
        bVar5 = true;
        local_238 = CONCAT17((undefined)uStack_188,uStack_18f);
LAB_00537612:
        _ZN4core3ptr68drop_in_place_LT_core__option__Option_LT_clircle__Identifier_GT__GT_17h8d51138df6bf183eE
                  (local_258);
                    /* try { // try from 0053761c to 00537628 has its CatchHandler @ 00537644 */
        _ZN4core3ptr44drop_in_place_LT_bat__output__OutputType_GT_17h28c663b98fd21d1fE(&local_98);
        if (!bVar5) {
          return;
        }
        goto LAB_0053721f;
      }
      local_278 = (undefined *)CONCAT44(uStack_174,uStack_178);
      local_288 = uStack_188;
      uStack_280 = (byte *)CONCAT44(uStack_17c,uStack_180);
    }
    else {
      uStack_280 = param_4 + 8;
      if ((*param_4 & 1) == 0) {
        local_278 = &DAT_007ce250;
        local_288 = 0;
      }
      else {
        local_278 = &DAT_007ce2a0;
        local_288 = 1;
      }
    }
    local_260 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_00807b58;
    _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h5d3fd20d11ee0406E
              (local_58,param_3);
    local_38 = 0;
    _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1a2b1fad31897241E
              (&local_190,local_58);
    local_2a4 = '\x01';
    if ((int)uStack_188 != 2) {
      local_2a4 = '\x01';
      do {
        lVar3 = local_100;
        lVar2 = CONCAT71(uStack_18f,local_190);
        puVar9 = local_258;
        if (local_23b == '\x02') {
          puVar9 = (undefined *)0x0;
        }
        if (local_100 == -0x8000000000000000) {
          (*(code *)PTR_memcpy_008074c0)(&local_238,&uStack_188,0x88);
          local_1b0 = -0x8000000000000000;
          local_1a8 = local_f8;
          uStack_1a4 = uStack_f4;
          uStack_1a0 = uStack_f0;
          uStack_19c = uStack_ec;
                    /* try { // try from 005373f8 to 0053740b has its CatchHandler @ 0053767d */
          local_290 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_00807a28)();
          uVar8 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_00808800)
                            (&local_290);
                    /* try { // try from 00537416 to 00537443 has its CatchHandler @ 00537667 */
          _ZN3bat10controller10Controller11print_input17hecfc777da85d890fE
                    (&local_e8,local_270,&local_238,&local_288,uVar8,extraout_DL & 1,puVar9,
                     lVar2 == 0);
        }
        else {
          (*(code *)PTR_memcpy_008074c0)(&local_238,&uStack_188,0x88);
          local_1b0 = lVar3;
          local_1a8 = local_f8;
          uStack_1a4 = uStack_f4;
          uStack_1a0 = uStack_f0;
          uStack_19c = uStack_ec;
                    /* try { // try from 00537493 to 005374ba has its CatchHandler @ 00537678 */
          _ZN3bat10controller10Controller11print_input17h97eac2397f7dbd6aE
                    (&local_e8,local_270,&local_238,&local_288,puVar9,lVar2 == 0);
        }
        if ((char)local_e8 != '\r') {
          local_1f8 = local_a8;
          uStack_1f0 = uStack_a0;
          uStack_230 = uStack_e0;
          uStack_22c = uStack_dc;
          local_228 = local_d8;
          uStack_224 = uStack_d4;
          uStack_220 = uStack_d0;
          uStack_21c = uStack_cc;
          uStack_210 = uStack_c0;
          uStack_20c = uStack_bc;
          local_208 = local_b8;
          uStack_204 = uStack_b4;
          uStack_200 = uStack_b0;
          uStack_1fc = uStack_ac;
          local_218 = CONCAT44(uStack_c4,local_c8);
          local_238 = CONCAT44(uStack_e4,local_e8);
          if ((int)local_288 == 1) {
            *(undefined8 *)(param_1 + 0x40) = local_a8;
            *(undefined8 *)(param_1 + 0x48) = uStack_a0;
            *(undefined4 *)(param_1 + 0x30) = local_b8;
            *(undefined4 *)(param_1 + 0x34) = uStack_b4;
            *(undefined4 *)(param_1 + 0x38) = uStack_b0;
            *(undefined4 *)(param_1 + 0x3c) = uStack_ac;
            *(undefined4 *)(param_1 + 0x20) = local_c8;
            *(undefined4 *)(param_1 + 0x24) = uStack_c4;
            *(undefined4 *)(param_1 + 0x28) = uStack_c0;
            *(undefined4 *)(param_1 + 0x2c) = uStack_bc;
            *(undefined4 *)(param_1 + 0x10) = local_d8;
            *(undefined4 *)(param_1 + 0x14) = uStack_d4;
            *(undefined4 *)(param_1 + 0x18) = uStack_d0;
            *(undefined4 *)(param_1 + 0x1c) = uStack_cc;
            *(undefined4 *)param_1 = local_e8;
            *(undefined4 *)(param_1 + 4) = uStack_e4;
            *(undefined4 *)(param_1 + 8) = uStack_e0;
            *(undefined4 *)(param_1 + 0xc) = uStack_dc;
                    /* try { // try from 00537603 to 0053760f has its CatchHandler @ 00537649 */
            _ZN4core3ptr127drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_bat__input__Input_GT__GT__GT_17h885dc449df84056aE
                      (local_58);
            bVar5 = false;
            goto LAB_00537612;
          }
          if (local_268 == 2) {
                    /* try { // try from 0053752d to 00537537 has its CatchHandler @ 00537669 */
            local_290 = (*(code *)PTR__ZN3std2io5stdio6Stdout4lock17h4a61e9d3dcac90dcE_00807b60)
                                  (&local_260);
                    /* try { // try from 0053753d to 00537550 has its CatchHandler @ 0053764e */
            _ZN4core3ops8function5FnMut8call_mut17h3a289d61134ffcb1E
                      (&local_238,&local_290,
                       &
                       PTR__ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc6778b24ef661503E_007ce2d0
                      );
                    /* try { // try from 00537551 to 00537558 has its CatchHandler @ 00537669 */
            _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StderrLock_GT_17hc6778b24ef661503E
                      (&local_290);
          }
          else {
                    /* try { // try from 00537350 to 00537365 has its CatchHandler @ 00537669 */
            _ZN4core3ops8function5FnMut8call_mut17h3a289d61134ffcb1E
                      (&local_238,&uStack_280,&DAT_007ce250);
          }
                    /* try { // try from 00537366 to 0053736f has its CatchHandler @ 00537678 */
          _ZN4core3ptr38drop_in_place_LT_bat__error__Error_GT_17head773e43869367fE(&local_238);
          local_2a4 = '\0';
        }
        _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h1a2b1fad31897241E
                  (&local_190,local_58);
      } while ((int)uStack_188 != 2);
    }
    _ZN4core3ptr127drop_in_place_LT_core__iter__adapters__enumerate__Enumerate_LT_alloc__vec__into_iter__IntoIter_LT_bat__input__Input_GT__GT__GT_17h885dc449df84056aE
              (local_58);
    param_1[1] = local_2a4;
    *param_1 = '\r';
    _ZN4core3ptr68drop_in_place_LT_core__option__Option_LT_clircle__Identifier_GT__GT_17h8d51138df6bf183eE
              (local_258);
                    /* try { // try from 00537313 to 0053731f has its CatchHandler @ 00537644 */
    _ZN4core3ptr44drop_in_place_LT_bat__output__OutputType_GT_17h28c663b98fd21d1fE(&local_98);
    return;
  }
  local_218 = CONCAT17((undefined)local_168,CONCAT43(uStack_16c,uStack_170._1_3_));
  local_208 = (undefined4)(CONCAT44(uStack_15c,uStack_160) >> 8);
  uVar4 = (undefined3)((uint)uStack_15c >> 8);
  uStack_204._3_1_ = (undefined)local_158;
  uStack_204 = CONCAT13(uStack_204._3_1_,uVar4);
  uStack_200 = (undefined4)((ulong)local_158 >> 8);
  uStack_1fc._0_3_ = (undefined3)((ulong)local_158 >> 0x28);
  uStack_210 = (undefined4)CONCAT43(uStack_164,local_168._1_3_);
  uStack_20c = (undefined4)
               (CONCAT17((undefined)uStack_160,CONCAT43(uStack_164,local_168._1_3_)) >> 0x20);
  local_228 = (undefined4)CONCAT43(uStack_17c,uStack_180._1_3_);
  uStack_224 = (undefined4)
               (CONCAT17((undefined)uStack_178,CONCAT43(uStack_17c,uStack_180._1_3_)) >> 0x20);
  uStack_220 = (undefined4)CONCAT43(uStack_174,uStack_178._1_3_);
  uStack_21c = (undefined4)
               (CONCAT17((undefined)uStack_170,CONCAT43(uStack_174,uStack_178._1_3_)) >> 0x20);
  uStack_230 = (undefined4)((ulong)uStack_188 >> 8);
  uStack_22c = (undefined4)(CONCAT17((undefined)uStack_180,(int7)((ulong)uStack_188 >> 8)) >> 0x20);
  *(undefined8 *)(param_1 + 0x40) = local_150;
  *(undefined8 *)(param_1 + 0x48) = uStack_148;
  *(ulong *)(param_1 + 0x30) = CONCAT35(uVar4,CONCAT41(local_208,(undefined)uStack_160));
  *(undefined8 *)(param_1 + 0x38) = local_158;
  local_238._0_4_ = (undefined4)uStack_18f;
  local_238._4_4_ = (undefined4)(CONCAT17((undefined)uStack_188,uStack_18f) >> 0x20);
  *(undefined8 *)(param_1 + 0x21) = local_218;
  *(ulong *)(param_1 + 0x29) = CONCAT44(uStack_20c,uStack_210);
  *(ulong *)(param_1 + 0x11) = CONCAT44(uStack_224,local_228);
  *(ulong *)(param_1 + 0x19) = CONCAT44(uStack_21c,uStack_220);
  *(undefined4 *)(param_1 + 1) = (undefined4)local_238;
  *(undefined4 *)(param_1 + 5) = local_238._4_4_;
  *(undefined4 *)(param_1 + 9) = uStack_230;
  *(undefined4 *)(param_1 + 0xd) = uStack_22c;
  *param_1 = local_190;
  local_238 = CONCAT17((undefined)uStack_188,uStack_18f);
LAB_0053721f:
  _ZN4core3ptr61drop_in_place_LT_alloc__vec__Vec_LT_bat__input__Input_GT__GT_17h22dfb39698a1c7dcE
            (param_3);
  return;
}