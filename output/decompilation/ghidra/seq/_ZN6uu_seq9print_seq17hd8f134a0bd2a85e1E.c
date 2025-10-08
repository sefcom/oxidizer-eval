long _ZN6uu_seq9print_seq17hd8f134a0bd2a85e1E
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,char param_7,undefined8 param_8)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  undefined8 local_298;
  undefined8 uStack_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  long local_278;
  long local_268;
  long lStack_260;
  long local_258;
  long lStack_250;
  long local_248;
  undefined local_238 [2] [16];
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  long local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  long local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  long local_128;
  long lStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  long local_108;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined local_a0 [112];
  
  local_1f0 = param_2;
                    /* try { // try from 001720b8 to 001720dd has its CatchHandler @ 00172800 */
  local_238[0]._0_8_ = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_00223a40)();
  uVar4 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_00223b88)(local_238);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17hb195a1a5c425c698E
            (&local_1b8,uVar4);
  local_108 = param_1[4];
  local_128 = *param_1;
  lStack_120 = param_1[1];
  local_118 = param_1[2];
  uStack_110 = param_1[3];
  local_248 = param_1[9];
  local_268 = param_1[5];
  lStack_260 = param_1[6];
  local_258 = param_1[7];
  lStack_250 = param_1[8];
  local_168 = param_1[0xe];
  local_188 = *(undefined4 *)(param_1 + 10);
  uStack_184 = *(undefined4 *)((long)param_1 + 0x54);
  uStack_180 = *(undefined4 *)(param_1 + 0xb);
  uStack_17c = *(undefined4 *)((long)param_1 + 0x5c);
  local_178 = *(undefined4 *)(param_1 + 0xc);
  uStack_174 = *(undefined4 *)((long)param_1 + 100);
  uStack_170 = *(undefined4 *)(param_1 + 0xd);
  uStack_16c = *(undefined4 *)((long)param_1 + 0x6c);
  if (param_7 == '\0') {
LAB_0017221b:
    local_278 = local_108;
    local_288 = (undefined4)local_118;
    uStack_284 = local_118._4_4_;
    uStack_280 = (undefined4)uStack_110;
    uStack_27c = uStack_110._4_4_;
    local_298 = local_128;
    uStack_290 = lStack_120;
                    /* try { // try from 00172241 to 00172255 has its CatchHandler @ 001727f9 */
    cVar3 = _ZN6uu_seq13done_printing17he8fe76a3e6ee8b49E(&local_298,&local_268,&local_188);
    if (cVar3 == '\0') {
                    /* try { // try from 001722a6 to 001722b8 has its CatchHandler @ 001727f9 */
      lVar5 = _ZN6uucore8features6format19Format_LT_F_C_T_GT_3fmt17h3b174014f29225b6E
                        (param_6,&local_1b8,&local_298);
      if (lVar5 == 0) {
        local_1c8 = local_278;
        local_1d8 = local_288;
        uStack_1d4 = uStack_284;
        uStack_1d0 = uStack_280;
        uStack_1cc = uStack_27c;
        lVar5 = 0;
        if (local_268 < -0x7ffffffffffffffb) {
          lVar5 = local_268 + -0x7fffffffffffffff;
        }
        local_1e8 = (undefined4)local_298;
        uStack_1e4 = local_298._4_4_;
        uStack_1e0 = (undefined4)uStack_290;
        uStack_1dc = uStack_290._4_4_;
                    /* WARNING: Could not emulate address calculation at 0x00172463 */
                    /* WARNING: Treating indirect jump as call */
        lVar5 = (*(code *)(&DAT_0011bde0 + *(int *)(&DAT_0011bde0 + lVar5 * 4)))();
        return lVar5;
      }
    }
    else {
                    /* try { // try from 0017225a to 00172266 has its CatchHandler @ 001727d7 */
      lVar5 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17hfb65489923a70636E
                        (&local_1b8);
      if (lVar5 == 0) {
        _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
                  (local_298,uStack_290);
        _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
                  (CONCAT44(uStack_184,local_188),CONCAT44(uStack_17c,uStack_180));
        _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
                  (local_268,lStack_260);
        lVar5 = 0;
        goto LAB_00172319;
      }
    }
    _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
              (local_298,uStack_290);
    bVar2 = true;
    bVar1 = false;
  }
  else {
                    /* try { // try from 00172156 to 0017216b has its CatchHandler @ 001727d2 */
    (*(code *)
      PTR__ZN6uucore8features18extendedbigdecimal18ExtendedBigDecimal10to_biguint17h199f185febb80ccdE_00223b90
    )(&local_1e8,&local_128);
                    /* try { // try from 0017216c to 001721b4 has its CatchHandler @ 001727d9 */
    (*(code *)
      PTR__ZN6uucore8features18extendedbigdecimal18ExtendedBigDecimal10to_biguint17h199f185febb80ccdE_00223b90
    )(local_a0,&local_268);
    auVar6 = _ZN6uu_seq9print_seq28__u7b__u7b_closure_u7d__u7d_17hceaf328ac0b91332E(local_a0);
    (*(code *)
      PTR__ZN6uucore8features18extendedbigdecimal18ExtendedBigDecimal10to_biguint17h199f185febb80ccdE_00223b90
    )(&local_b8,&local_188);
    local_288 = local_1d8;
    uStack_284 = uStack_1d4;
    local_298 = CONCAT44(uStack_1e4,local_1e8);
    uStack_290 = CONCAT44(uStack_1dc,uStack_1e0);
    local_210 = local_b8;
    uStack_20c = uStack_b4;
    uStack_208 = uStack_b0;
    uStack_204 = uStack_ac;
    local_200 = local_a8;
    local_238[0] = auVar6;
    if (((local_298 == -0x8000000000000000) ||
        ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0)) ||
       (CONCAT44(uStack_b4,local_b8) == -0x8000000000000000)) {
      _ZN4core3ptr178drop_in_place_LT__LP_core__option__Option_LT_num_bigint__biguint__BigUint_GT__C_core__option__Option_LT_u64_GT__C_core__option__Option_LT_num_bigint__biguint__BigUint_GT__RP__GT_17h6005f4f1af417868E
                (local_238);
      goto LAB_0017221b;
    }
    local_148 = local_a8;
    local_158 = CONCAT44(uStack_b4,local_b8);
    uStack_150 = CONCAT44(uStack_ac,uStack_b0);
    local_1c8 = local_198;
    local_1d8 = local_1a8;
    uStack_1d4 = uStack_1a4;
    uStack_1d0 = uStack_1a0;
    uStack_1cc = uStack_19c;
    local_1e8 = local_1b8;
    uStack_1e4 = uStack_1b4;
    uStack_1e0 = uStack_1b0;
    uStack_1dc = uStack_1ac;
                    /* try { // try from 001723c0 to 001723f3 has its CatchHandler @ 0017278b */
    lVar5 = _ZN6uu_seq14fast_print_seq17h4eb9a89ecd42b36aE
                      (&local_1e8,&local_298,auVar6._8_8_,&local_158,local_1f0,param_3,param_4,
                       param_5,param_8);
    _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h190a37287d4c5f59E
              (local_158,uStack_150);
    _ZN4core3ptr49drop_in_place_LT_num_bigint__biguint__BigUint_GT_17h190a37287d4c5f59E
              (local_298,uStack_290);
    bVar1 = true;
    bVar2 = false;
  }
  _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
            (CONCAT44(uStack_184,local_188),CONCAT44(uStack_17c,uStack_180));
  _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
            (local_268,lStack_260);
  if (bVar1) {
    _ZN4core3ptr77drop_in_place_LT_uucore__features__extendedbigdecimal__ExtendedBigDecimal_GT_17hb99107a2a8b00042E
              (local_128,lStack_120);
  }
  if (!bVar2) {
    return lVar5;
  }
LAB_00172319:
  _ZN4core3ptr94drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_std__io__stdio__StdoutLock_GT__GT_17h68c34cef8e3ce886E
            (&local_1b8);
  return lVar5;
}