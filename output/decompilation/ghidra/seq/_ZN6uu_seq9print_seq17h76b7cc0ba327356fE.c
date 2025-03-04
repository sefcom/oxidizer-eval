long _ZN6uu_seq9print_seq17h76b7cc0ba327356fE
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
               undefined8 param_6,char param_7,long param_8,long *param_9)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  long local_1d8;
  undefined8 local_190;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  long local_138;
  long local_130;
  undefined8 local_118 [4];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  long local_d8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  local_a8 = param_3;
  local_a0 = param_4;
  local_98 = param_5;
  local_90 = param_6;
                    /* try { // try from 001c7be7 to 001c7c02 has its CatchHandler @ 001c8227 */
  local_118[0] = _ZN3std2io5stdio6stdout17h077da66234850927E();
  local_200 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(local_118);
  local_1d8 = param_1[4];
  local_1f8 = *param_1;
  uStack_1f0 = param_1[1];
  local_1e8 = param_1[2];
  uStack_1e0 = param_1[3];
  local_168 = param_1[9];
  local_188 = param_1[5];
  lStack_180 = param_1[6];
  local_178 = param_1[7];
  lStack_170 = param_1[8];
  local_d8 = param_1[0xe];
  local_f8 = *(undefined4 *)(param_1 + 10);
  uStack_f4 = *(undefined4 *)((long)param_1 + 0x54);
  uStack_f0 = *(undefined4 *)(param_1 + 0xb);
  uStack_ec = *(undefined4 *)((long)param_1 + 0x5c);
  local_e8 = *(undefined4 *)(param_1 + 0xc);
  uStack_e4 = *(undefined4 *)((long)param_1 + 100);
  uStack_e0 = *(undefined4 *)(param_1 + 0xd);
  uStack_dc = *(undefined4 *)((long)param_1 + 0x6c);
  lVar2 = param_2 + 1;
  if (param_2 == 0) {
    lVar2 = 0;
  }
  lVar3 = 0;
  if (param_7 != '\0') {
    lVar3 = lVar2 + param_8;
  }
  local_130 = *param_9;
                    /* try { // try from 001c7caa to 001c7cc3 has its CatchHandler @ 001c8220 */
  cVar1 = _ZN6uu_seq13done_printing17h3afd308e88daff24E(&local_1f8,&local_188,&local_f8);
  if (cVar1 == '\0') {
    local_190 = 0x8000000000000000;
    if (local_130 != -0x8000000000000000) {
      lVar2 = 0;
      if (local_1f8 < -0x7ffffffffffffffc) {
        lVar2 = local_1f8 + -0x7fffffffffffffff;
      }
                    /* WARNING: Could not emulate address calculation at 0x001c7d5f */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*(code *)(&DAT_00123884 + *(int *)(&DAT_00123884 + lVar2 * 4)))();
      return lVar2;
    }
                    /* try { // try from 001c7d32 to 001c7d79 has its CatchHandler @ 001c8220 */
    lVar2 = _ZN6uu_seq17write_value_float17h583f3c53a243a2bfE(&local_200,&local_1f8,lVar3,param_2);
    if (lVar2 == 0) {
      local_138 = local_1d8;
      local_148 = (undefined4)local_1e8;
      uStack_144 = local_1e8._4_4_;
      uStack_140 = (undefined4)uStack_1e0;
      uStack_13c = uStack_1e0._4_4_;
      lVar2 = 0;
      if (local_188 < -0x7ffffffffffffffc) {
        lVar2 = local_188 + -0x7fffffffffffffff;
      }
      local_158 = (undefined4)local_1f8;
      uStack_154 = local_1f8._4_4_;
      uStack_150 = (undefined4)uStack_1f0;
      uStack_14c = uStack_1f0._4_4_;
                    /* WARNING: Could not emulate address calculation at 0x001c7e47 */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*(code *)(&DAT_00123898 + *(int *)(&DAT_00123898 + lVar2 * 4)))();
      return lVar2;
    }
  }
  else {
                    /* try { // try from 001c7cc8 to 001c7cd2 has its CatchHandler @ 001c8212 */
    lVar2 = _ZN61__LT_std__io__stdio__StdoutLock_u20_as_u20_std__io__Write_GT_5flush17hf4899ae455fb37b6E
                      (&local_200);
    if (lVar2 == 0) {
                    /* try { // try from 001c7cdf to 001c7ce8 has its CatchHandler @ 001c821e */
      _ZN4core3ptr67drop_in_place_LT_uu_seq__extendedbigdecimal__ExtendedBigDecimal_GT_17h34bd9961a5e5dc1cE
                (&local_1f8);
                    /* try { // try from 001c7ce9 to 001c7cf5 has its CatchHandler @ 001c8219 */
      _ZN4core3ptr67drop_in_place_LT_uu_seq__extendedbigdecimal__ExtendedBigDecimal_GT_17h34bd9961a5e5dc1cE
                (&local_f8);
                    /* try { // try from 001c7cf6 to 001c7d02 has its CatchHandler @ 001c8214 */
      _ZN4core3ptr67drop_in_place_LT_uu_seq__extendedbigdecimal__ExtendedBigDecimal_GT_17h34bd9961a5e5dc1cE
                (&local_188);
      _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h1972256e3ce050a6E(local_200);
      return 0;
    }
  }
                    /* try { // try from 001c7dcc to 001c7dd5 has its CatchHandler @ 001c821e */
  _ZN4core3ptr67drop_in_place_LT_uu_seq__extendedbigdecimal__ExtendedBigDecimal_GT_17h34bd9961a5e5dc1cE
            (&local_1f8);
                    /* try { // try from 001c7dd6 to 001c7de2 has its CatchHandler @ 001c8219 */
  _ZN4core3ptr67drop_in_place_LT_uu_seq__extendedbigdecimal__ExtendedBigDecimal_GT_17h34bd9961a5e5dc1cE
            (&local_f8);
                    /* try { // try from 001c7de3 to 001c7def has its CatchHandler @ 001c8214 */
  _ZN4core3ptr67drop_in_place_LT_uu_seq__extendedbigdecimal__ExtendedBigDecimal_GT_17h34bd9961a5e5dc1cE
            (&local_188);
  _ZN4core3ptr47drop_in_place_LT_std__io__stdio__StdoutLock_GT_17h1972256e3ce050a6E(local_200);
  return lVar2;
}