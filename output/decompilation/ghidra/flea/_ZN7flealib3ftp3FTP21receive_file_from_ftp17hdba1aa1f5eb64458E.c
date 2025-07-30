char * _ZN7flealib3ftp3FTP21receive_file_from_ftp17hdba1aa1f5eb64458E
                 (char *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 local_158;
  undefined uStack_154;
  undefined2 uStack_153;
  undefined uStack_151;
  undefined4 uStack_150;
  undefined uStack_14c;
  undefined2 uStack_14b;
  undefined uStack_149;
  undefined uStack_148;
  undefined6 uStack_147;
  undefined uStack_141;
  undefined7 uStack_140;
  undefined uStack_139;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  long local_100;
  undefined *local_f8;
  code *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined local_c8 [8];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined local_98 [24];
  ulong local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined local_38 [24];
  
  uStack_70 = CONCAT22(uStack_70._2_2_,0x15);
  local_80 = param_3;
  local_78 = param_4;
  _ZN3ftp3ftp9FtpStream7connect17hf1e5995836a208f5E(&local_158,&local_80);
  puVar1 = (undefined *)CONCAT17(uStack_149,CONCAT25(uStack_14b,CONCAT14(uStack_14c,uStack_150)));
  uVar2 = CONCAT17(uStack_141,CONCAT61(uStack_147,uStack_148));
  puVar3 = (undefined *)CONCAT17(uStack_139,uStack_140);
  uStack_110 = uStack_138;
  uVar4 = uStack_110;
  if (CONCAT17(uStack_151,CONCAT25(uStack_153,CONCAT14(uStack_154,local_158))) == 0) {
    *(undefined **)(param_1 + 0x10) = puVar3;
    *(undefined8 *)(param_1 + 0x18) = uStack_138;
    *(undefined **)param_1 = puVar1;
    *(undefined8 *)(param_1 + 8) = uVar2;
    return param_1;
  }
  local_128._4_4_ = (undefined4)((ulong)puVar1 >> 0x20);
  uStack_120._0_4_ = (undefined4)CONCAT61(uStack_147,uStack_148);
  uStack_120._4_4_ = (undefined4)((ulong)uVar2 >> 0x20);
  local_118._0_4_ = (undefined4)uStack_140;
  local_118._4_4_ = (undefined4)((ulong)puVar3 >> 0x20);
  uStack_110._0_4_ = (undefined4)uStack_138;
  uStack_110._4_4_ = (undefined4)((ulong)uStack_138 >> 0x20);
  local_c0 = uStack_150;
  uStack_bc = local_128._4_4_;
  uStack_b8 = (undefined4)uStack_120;
  uStack_b4 = uStack_120._4_4_;
  local_b0 = (undefined4)local_118;
  uStack_ac = local_118._4_4_;
  uStack_a8 = (undefined4)uStack_110;
  uStack_a4 = uStack_110._4_4_;
  local_a0 = local_130;
                    /* try { // try from 004a3bb4 to 004a3cad has its CatchHandler @ 004a4118 */
  local_128 = puVar1;
  uStack_120 = uVar2;
  local_118 = puVar3;
  uStack_110 = uVar4;
  (*(code *)PTR__ZN3ftp3ftp9FtpStream5login17h85964480719ee466E_008288b0)
            (&local_158,local_c8,param_5,param_6,param_7,param_8);
  if ((char)local_158 == '\x04') {
    uVar5 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                      (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
    if (3 < uVar5) {
      local_158 = 0x80ba30;
      uStack_154 = 0;
      uStack_153 = 0;
      uStack_151 = 0;
      uStack_150 = 1;
      uStack_14c = 0;
      uStack_14b = 0;
      uStack_149 = 0;
      uStack_148 = 8;
      uStack_147 = 0;
      uStack_141 = 0;
      uStack_140 = 0;
      uStack_139 = 0;
      uStack_138 = 0;
      local_108 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                            (&PTR_DAT_0080ba70);
      local_128 = &DAT_0016ef14;
      uStack_120 = 0xc;
      local_118 = &DAT_0016ef14;
      uStack_110 = 0xc;
      _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_158,4,&local_128);
    }
    (*(code *)PTR__ZN3ftp3ftp9FtpStream3cwd17h97cbe361f69c5b5dE_008288b8)
              (&local_158,local_c8,param_11,param_12);
    if ((char)local_158 == '\x04') {
      (*(code *)PTR__ZN3ftp3ftp9FtpStream11simple_retr17h796a9e436525ae3aE_008288c0)
                (&local_80,local_c8,param_9,param_10);
      if ((local_80 & 1) == 0) {
        local_d8 = local_68;
        uStack_d4 = uStack_64;
        uStack_d0 = uStack_60;
        uStack_cc = uStack_5c;
        local_e8 = (undefined4)local_78;
        uStack_e4 = local_78._4_4_;
        uStack_e0 = uStack_70;
        uStack_dc = uStack_6c;
                    /* try { // try from 004a3e5b to 004a3e6d has its CatchHandler @ 004a40bb */
        _ZN3std4path4Path4join17h34b2c6dcf923dca6E
                  (local_38,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),param_9,
                   param_10);
        local_48 = CONCAT44(uStack_d4,local_d8);
        local_58 = local_e8;
        uStack_54 = uStack_e4;
        uStack_50 = uStack_e0;
        uStack_4c = uStack_dc;
                    /* try { // try from 004a3e8b to 004a3e9f has its CatchHandler @ 004a40eb */
        lVar6 = _ZN7flealib3ftp3FTP10write_file17h859ae53e9703cadfE(local_38,&local_58);
        if (lVar6 == 0) {
          uVar5 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                            (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
          if (3 < uVar5) {
            local_158 = 0x80ba40;
            uStack_154 = 0;
            uStack_153 = 0;
            uStack_151 = 0;
            uStack_150 = 1;
            uStack_14c = 0;
            uStack_14b = 0;
            uStack_149 = 0;
            uStack_148 = 8;
            uStack_147 = 0;
            uStack_141 = 0;
            uStack_140 = 0;
            uStack_139 = 0;
            uStack_138 = 0;
                    /* try { // try from 004a4029 to 004a406f has its CatchHandler @ 004a40eb */
            local_108 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                  (&PTR_DAT_0080ba88);
            local_128 = &DAT_0016ef14;
            uStack_120 = 0xc;
            local_118 = &DAT_0016ef14;
            uStack_110 = 0xc;
            _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_158,4,&local_128);
          }
                    /* try { // try from 004a4070 to 004a4080 has its CatchHandler @ 004a4118 */
          (*(code *)PTR__ZN3ftp3ftp9FtpStream4quit17hdc9294a3d59b9b89E_008288c8)(param_1,local_c8);
        }
        else {
          local_100 = lVar6;
          lVar6 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                            (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
          if (lVar6 != 0) {
                    /* try { // try from 004a3ec3 to 004a3ed7 has its CatchHandler @ 004a40dc */
            _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                      (local_98,&local_100);
            local_f0 = 
            _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E
            ;
            local_158 = 0x80ba50;
            uStack_154 = 0;
            uStack_153 = 0;
            uStack_151 = 0;
            uStack_150 = 1;
            uStack_14c = 0;
            uStack_14b = 0;
            uStack_149 = 0;
            uStack_138 = 0;
            uStack_148 = SUB81(&local_f8,0);
            uStack_147 = (undefined6)((ulong)&local_f8 >> 8);
            uStack_141 = (undefined)((ulong)&local_f8 >> 0x38);
            uStack_140 = 1;
            uStack_139 = 0;
            local_f8 = local_98;
                    /* try { // try from 004a3f19 to 004a3f5f has its CatchHandler @ 004a40a9 */
            local_108 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                  (&PTR_DAT_0080baa0);
            local_128 = &DAT_0016ef14;
            uStack_120 = 0xc;
            local_118 = &DAT_0016ef14;
            uStack_110 = 0xc;
            _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_158,1,&local_128);
                    /* try { // try from 004a3f60 to 004a3f98 has its CatchHandler @ 004a40dc */
            _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(local_98);
          }
          (*(code *)PTR__ZN3ftp3ftp9FtpStream4quit17hdc9294a3d59b9b89E_008288c8)
                    (&local_158,local_c8);
          if ((char)local_158 == '\x04') {
            _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
                      (&local_128,&local_100);
            uStack_141 = SUB81(local_118,0);
            uStack_140 = (undefined7)((ulong)local_118 >> 8);
            uStack_151 = SUB81(local_128,0);
            uStack_150 = (undefined4)((ulong)local_128 >> 8);
            uStack_14c = (undefined)((ulong)local_128 >> 0x28);
            uStack_14b = (undefined2)((ulong)local_128 >> 0x30);
            uStack_149 = (undefined)uStack_120;
            uStack_148 = (undefined)((ulong)uStack_120 >> 8);
            uStack_147 = (undefined6)((ulong)uStack_120 >> 0x10);
            *param_1 = '\x02';
            *(undefined4 *)(param_1 + 1) = local_158;
            *(uint *)(param_1 + 5) = CONCAT13(uStack_151,CONCAT21(uStack_153,uStack_154));
            *(undefined4 *)(param_1 + 9) = uStack_150;
            *(uint *)(param_1 + 0xd) = CONCAT13(uStack_149,(int3)((ulong)local_128 >> 0x28));
            *(undefined8 *)(param_1 + 0x10) = uStack_120;
            *(undefined **)(param_1 + 0x18) = local_118;
          }
          else {
            *(ulong *)(param_1 + 0x10) = CONCAT17(uStack_141,CONCAT61(uStack_147,uStack_148));
            *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_139,uStack_140);
            *(uint *)(param_1 + 1) = CONCAT13(uStack_154,local_158._1_3_);
            *(uint *)(param_1 + 5) = CONCAT13((undefined)uStack_150,CONCAT12(uStack_151,uStack_153))
            ;
            *(uint *)(param_1 + 9) = CONCAT13(uStack_14c,uStack_150._1_3_);
            *(uint *)(param_1 + 0xd) = CONCAT13(uStack_148,CONCAT12(uStack_149,uStack_14b));
            *param_1 = (char)local_158;
          }
                    /* try { // try from 004a409a to 004a40a3 has its CatchHandler @ 004a40eb */
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(&local_100);
        }
      }
      else {
        local_d8 = local_68;
        uStack_d4 = uStack_64;
        uStack_d0 = uStack_60;
        uStack_cc = uStack_5c;
        local_e8 = (undefined4)local_78;
        uStack_e4 = local_78._4_4_;
        uStack_e0 = uStack_70;
        uStack_dc = uStack_6c;
        lVar6 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                          (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
        if (lVar6 != 0) {
                    /* try { // try from 004a3ced to 004a3d01 has its CatchHandler @ 004a4103 */
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0b760c8a2d7ebf1eE
                    (local_98,&local_e8);
          local_f0 = 
          _ZN60__LT_alloc__string__String_u20_as_u20_core__fmt__Display_GT_3fmt17h9e2c9c436a613463E;
          local_158 = 0x80ba60;
          uStack_154 = 0;
          uStack_153 = 0;
          uStack_151 = 0;
          uStack_150 = 1;
          uStack_14c = 0;
          uStack_14b = 0;
          uStack_149 = 0;
          uStack_138 = 0;
          uStack_148 = SUB81(&local_f8,0);
          uStack_147 = (undefined6)((ulong)&local_f8 >> 8);
          uStack_141 = (undefined)((ulong)&local_f8 >> 0x38);
          uStack_140 = 1;
          uStack_139 = 0;
          local_f8 = local_98;
                    /* try { // try from 004a3d43 to 004a3d89 has its CatchHandler @ 004a40ca */
          local_108 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                                (&PTR_DAT_0080bab8);
          local_128 = &DAT_0016ef14;
          uStack_120 = 0xc;
          local_118 = &DAT_0016ef14;
          uStack_110 = 0xc;
          _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_158,1,&local_128);
                    /* try { // try from 004a3d8a to 004a3dc2 has its CatchHandler @ 004a4103 */
          _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hd935b2ddfd513885E(local_98);
        }
        (*(code *)PTR__ZN3ftp3ftp9FtpStream4quit17hdc9294a3d59b9b89E_008288c8)(&local_158,local_c8);
        if ((char)local_158 == '\x04') {
          _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h0b760c8a2d7ebf1eE
                    (&local_128,&local_e8);
          uStack_141 = SUB81(local_118,0);
          uStack_140 = (undefined7)((ulong)local_118 >> 8);
          uStack_151 = SUB81(local_128,0);
          uStack_150 = (undefined4)((ulong)local_128 >> 8);
          uStack_14c = (undefined)((ulong)local_128 >> 0x28);
          uStack_14b = (undefined2)((ulong)local_128 >> 0x30);
          uStack_149 = (undefined)uStack_120;
          uStack_148 = (undefined)((ulong)uStack_120 >> 8);
          uStack_147 = (undefined6)((ulong)uStack_120 >> 0x10);
          *param_1 = '\x02';
          *(undefined4 *)(param_1 + 1) = local_158;
          *(uint *)(param_1 + 5) = CONCAT13(uStack_151,CONCAT21(uStack_153,uStack_154));
          *(undefined4 *)(param_1 + 9) = uStack_150;
          *(uint *)(param_1 + 0xd) = CONCAT13(uStack_149,(int3)((ulong)local_128 >> 0x28));
          *(undefined8 *)(param_1 + 0x10) = uStack_120;
          *(undefined **)(param_1 + 0x18) = local_118;
        }
        else {
          *(ulong *)(param_1 + 0x10) = CONCAT17(uStack_141,CONCAT61(uStack_147,uStack_148));
          *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_139,uStack_140);
          *(uint *)(param_1 + 1) = CONCAT13(uStack_154,local_158._1_3_);
          *(uint *)(param_1 + 5) = CONCAT13((undefined)uStack_150,CONCAT12(uStack_151,uStack_153));
          *(uint *)(param_1 + 9) = CONCAT13(uStack_14c,uStack_150._1_3_);
          *(uint *)(param_1 + 0xd) = CONCAT13(uStack_148,CONCAT12(uStack_149,uStack_14b));
          *param_1 = (char)local_158;
        }
                    /* try { // try from 004a3fe3 to 004a3fec has its CatchHandler @ 004a4118 */
        _ZN4core3ptr41drop_in_place_LT_ftp__types__FtpError_GT_17hce9715a046caa375E(&local_e8);
      }
      goto LAB_004a3e0d;
    }
  }
  *(ulong *)(param_1 + 0x10) = CONCAT17(uStack_141,CONCAT61(uStack_147,uStack_148));
  *(ulong *)(param_1 + 0x18) = CONCAT17(uStack_139,uStack_140);
  *(uint *)(param_1 + 1) = CONCAT13(uStack_154,local_158._1_3_);
  *(uint *)(param_1 + 5) = CONCAT13((undefined)uStack_150,CONCAT12(uStack_151,uStack_153));
  *(uint *)(param_1 + 9) = CONCAT13(uStack_14c,uStack_150._1_3_);
  *(uint *)(param_1 + 0xd) = CONCAT13(uStack_148,CONCAT12(uStack_149,uStack_14b));
  *param_1 = (char)local_158;
LAB_004a3e0d:
  _ZN4core3ptr40drop_in_place_LT_ftp__ftp__FtpStream_GT_17hc72709d3b445c73cE(local_c8);
  return param_1;
}