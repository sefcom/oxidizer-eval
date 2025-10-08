undefined *
_ZN3bat6output10OutputType9try_pager17h20ac4bd3b0754dfbE
          (undefined *param_1,char param_2,byte param_3,undefined8 param_4,undefined8 param_5)

{
  bool bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined auVar4 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined local_1a0 [24];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  _ZN3bat5pager9get_pager17hd377d976785f18eeE(&local_128,param_4,param_5);
  if (CONCAT44(uStack_124,local_128) == -0x7fffffffffffffff) {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h6553538e39c64234E
              (param_1 + 8,&DAT_002a2bb1,0x1e);
    *param_1 = 0xb;
    return param_1;
  }
  local_38 = uStack_100;
  uStack_34 = uStack_fc;
  uStack_30 = uStack_f8;
  uStack_2c = uStack_f4;
  if (CONCAT44(uStack_124,local_128) == -0x8000000000000000) {
    _ZN3bat6output10OutputType6stdout17h211ec86729b50ed6E(&local_128);
    puVar3 = (undefined *)CONCAT44(uStack_f4,uStack_f8);
    *(undefined **)(param_1 + 0x38) = puVar3;
    *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_104,uStack_108);
    *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_fc,uStack_100);
    *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_114,local_118);
    *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_10c,uStack_110);
    *(ulong *)(param_1 + 8) = CONCAT44(uStack_124,local_128);
    *(ulong *)(param_1 + 0x10) = CONCAT44(uStack_11c,uStack_120);
    *param_1 = 0xd;
  }
  else {
    local_178 = uStack_100;
    uStack_174 = uStack_fc;
    uStack_170 = uStack_f8;
    uVar2 = uStack_170;
    uStack_16c = uStack_f4;
    local_188 = uStack_110;
    uStack_184 = uStack_10c;
    uStack_180 = uStack_108;
    uStack_17c = uStack_104;
    uStack_170._1_1_ = (char)((uint)uStack_f8 >> 8);
    uStack_170 = uVar2;
    if (uStack_170._1_1_ == '\0') {
      *param_1 = 10;
    }
    else if (uStack_170._1_1_ == '\x04') {
                    /* try { // try from 0053cfc6 to 0053d019 has its CatchHandler @ 0053d327 */
      _ZN3bat6output12BuiltinPager3new17h5052a4e4c2ea861dE(&local_128);
      *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_f4,uStack_f8);
      *(ulong *)(param_1 + 0x28) = CONCAT44(uStack_104,uStack_108);
      *(ulong *)(param_1 + 0x30) = CONCAT44(uStack_fc,uStack_100);
      *(ulong *)(param_1 + 0x18) = CONCAT44(uStack_114,local_118);
      *(ulong *)(param_1 + 0x20) = CONCAT44(uStack_10c,uStack_110);
      *(undefined4 *)(param_1 + 8) = local_128;
      *(undefined4 *)(param_1 + 0xc) = uStack_124;
      *(undefined4 *)(param_1 + 0x10) = uStack_120;
      *(undefined4 *)(param_1 + 0x14) = uStack_11c;
      *param_1 = 0xd;
    }
    else {
      _ZN8grep_cli10decompress14resolve_binary17h597f6cd9136011e5E(&local_1d8,local_1a0);
      if (local_1d8 != 1) {
        local_158 = (undefined4)uStack_1c0;
        uStack_154 = (undefined4)((ulong)uStack_1c0 >> 0x20);
        local_168 = (int)uStack_1d0;
        uStack_164 = uStack_1d0._4_4_;
        uStack_160 = (undefined4)uStack_1c8;
        uStack_15c = uStack_1c8._4_4_;
                    /* try { // try from 0053d09b to 0053d0ac has its CatchHandler @ 0053d2d4 */
        _ZN3std7process7Command3new17h3f6cc1aa3e6a6597E(&local_128,&local_168);
        local_138 = CONCAT44(uStack_174,local_178);
        local_148 = local_188;
        uStack_144 = uStack_184;
        uStack_140 = uStack_180;
        uStack_13c = uStack_17c;
        if (uStack_170._1_1_ == '\x01') {
          if (((char)uStack_170 == '\x02') || (local_138 == 0)) {
                    /* try { // try from 0053d133 to 0053d1e4 has its CatchHandler @ 0053d2e8 */
            _ZN3std7process7Command3arg17hd3991715298ce12eE(&local_128,&DAT_002a2bcf,2);
            if (param_2 == '\0') {
              _ZN3std7process7Command3arg17hd3991715298ce12eE(&local_128,&DAT_002a2bd1,2);
            }
            if ((param_3 != 2) && ((param_3 & 1) != 0)) {
              _ZN3std7process7Command3arg17hd3991715298ce12eE(&local_128,&DAT_002a2bd3,2);
            }
            _ZN3std7process7Command3arg17hd3991715298ce12eE(&local_128,&DAT_002a2bd5,2);
            auVar4 = _ZN3bat4less21retrieve_less_version17h21096205fd9a4b87E(local_1a0);
            bVar1 = true;
            if ((auVar4._0_8_ != 2 & (0x211 < auVar4._8_8_ | auVar4[0])) == 0) {
              _ZN3std7process7Command3arg17hd3991715298ce12eE(&local_128,&DAT_002a2bd7,9);
            }
          }
          else {
            uStack_1c8 = CONCAT44(uStack_174,local_178);
            local_1d8 = CONCAT44(uStack_184,local_188);
            uStack_1d0 = CONCAT44(uStack_17c,uStack_180);
                    /* try { // try from 0053d0f5 to 0053d12b has its CatchHandler @ 0053d2ba */
            _ZN3std7process7Command4args17h7fe60a217b1ea562E(&local_128,&local_1d8);
            bVar1 = false;
          }
                    /* try { // try from 0053d1e5 to 0053d225 has its CatchHandler @ 0053d2ed */
          _ZN3std7process7Command3env17h84b104833ce60344E(&local_128);
        }
        else {
          uStack_1c8 = CONCAT44(uStack_174,local_178);
          local_1d8 = CONCAT44(uStack_184,local_188);
          uStack_1d0 = CONCAT44(uStack_17c,uStack_180);
          _ZN3std7process7Command4args17h7fe60a217b1ea562E(&local_128,&local_1d8);
          bVar1 = false;
        }
        _ZN3std7process7Command5stdin17h4542994e6eede617E(&local_128);
        (*(code *)PTR__ZN3std7process7Command5spawn17haea730ea7b05a977E_008088b8)
                  (&local_168,&local_128);
        if (local_168 == 1) {
          _ZN3bat6output10OutputType9try_pager28__u7b__u7b_closure_u7d__u7d_17hb03f43e1a348da60E
                    (&local_1d8,CONCAT44(uStack_15c,uStack_160));
        }
        else {
          uStack_1d0 = CONCAT44(uStack_160,uStack_164);
          uStack_1c8 = CONCAT44(local_158,uStack_15c);
          uStack_1c0 = CONCAT44(uStack_150,uStack_154);
          local_1b8 = local_14c;
          local_1d8 = 3;
        }
        *(undefined8 *)(param_1 + 0x38) = local_1a8;
        *(undefined4 *)(param_1 + 0x28) = local_1b8;
        *(undefined8 *)(param_1 + 0x2c) = local_1b4;
        *(undefined4 *)(param_1 + 0x34) = local_1ac;
        *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_1c8;
        *(undefined4 *)(param_1 + 0x1c) = uStack_1c8._4_4_;
        *(undefined4 *)(param_1 + 0x20) = (undefined4)uStack_1c0;
        *(undefined4 *)(param_1 + 0x24) = uStack_1c0._4_4_;
        *(long *)(param_1 + 8) = local_1d8;
        *(undefined8 *)(param_1 + 0x10) = uStack_1d0;
        *param_1 = 0xd;
        if (bVar1) {
          _ZN4core3ptr65drop_in_place_LT_alloc__vec__Vec_LT_alloc__string__String_GT__GT_17h2f78fa9eb600a3a5E
                    (&local_148);
        }
                    /* try { // try from 0053d29e to 0053d2aa has its CatchHandler @ 0053d2bf */
        _ZN4core3ptr42drop_in_place_LT_std__process__Command_GT_17h096d1de53edcff53E(&local_128);
        puVar3 = (undefined *)
                 _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E
                           (local_1a0);
        return puVar3;
      }
                    /* try { // try from 0053d024 to 0053d030 has its CatchHandler @ 0053d2d6 */
      _ZN3bat6output10OutputType6stdout17h211ec86729b50ed6E(&local_128);
      *(ulong *)(param_1 + 0x38) = CONCAT44(uStack_f4,uStack_f8);
      *(undefined4 *)(param_1 + 0x28) = uStack_108;
      *(undefined4 *)(param_1 + 0x2c) = uStack_104;
      *(undefined4 *)(param_1 + 0x30) = uStack_100;
      *(undefined4 *)(param_1 + 0x34) = uStack_fc;
      *(undefined4 *)(param_1 + 0x18) = local_118;
      *(undefined4 *)(param_1 + 0x1c) = uStack_114;
      *(undefined4 *)(param_1 + 0x20) = uStack_110;
      *(undefined4 *)(param_1 + 0x24) = uStack_10c;
      *(undefined4 *)(param_1 + 8) = local_128;
      *(undefined4 *)(param_1 + 0xc) = uStack_124;
      *(undefined4 *)(param_1 + 0x10) = uStack_120;
      *(undefined4 *)(param_1 + 0x14) = uStack_11c;
      *param_1 = 0xd;
                    /* try { // try from 0053d064 to 0053d06b has its CatchHandler @ 0053d327 */
      _ZN4core3ptr101drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_grep_cli__process__CommandError_GT__GT_17ha008211fea5fe0d4E
                (&local_1d8);
    }
    puVar3 = (undefined *)
             _ZN4core3ptr38drop_in_place_LT_bat__pager__Pager_GT_17h43ee58a3f3e247d6E(local_1a0);
  }
  return puVar3;
}