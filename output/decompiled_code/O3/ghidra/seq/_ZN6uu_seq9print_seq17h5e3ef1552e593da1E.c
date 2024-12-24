long __rustcall
uu_seq::print_seq(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,char param_7,long param_8,long *param_9)

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
                    /* try { // try from 001c8f07 to 001c8f22 has its CatchHandler @ 001c9546 */
  local_118[0] = std::io::stdio::stdout();
  local_200 = std::io::stdio::Stderr::lock(local_118);
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
                    /* try { // try from 001c8fca to 001c8fe3 has its CatchHandler @ 001c953f */
  cVar1 = done_printing(&local_1f8,&local_188,&local_f8);
  if (cVar1 == '\0') {
    local_190 = 0x8000000000000000;
    if (local_130 != -0x8000000000000000) {
      lVar2 = 0;
      if (local_1f8 < -0x7ffffffffffffffc) {
        lVar2 = local_1f8 + -0x7fffffffffffffff;
      }
                    /* WARNING: Could not emulate address calculation at 0x001c907f */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*(code *)(&DAT_00123dc8 + *(int *)(&DAT_00123dc8 + lVar2 * 4)))();
      return lVar2;
    }
                    /* try { // try from 001c9052 to 001c9099 has its CatchHandler @ 001c953f */
    lVar2 = write_value_float(&local_200,&local_1f8,lVar3,param_2);
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
                    /* WARNING: Could not emulate address calculation at 0x001c9167 */
                    /* WARNING: Treating indirect jump as call */
      lVar2 = (*(code *)(&DAT_00123ddc + *(int *)(&DAT_00123ddc + lVar2 * 4)))();
      return lVar2;
    }
  }
  else {
                    /* try { // try from 001c8fe8 to 001c8ff2 has its CatchHandler @ 001c9531 */
    lVar2 = _<std::io::stdio::StdoutLock_as_std::io::Write>::flush(&local_200);
    if (lVar2 == 0) {
                    /* try { // try from 001c8fff to 001c9008 has its CatchHandler @ 001c953d */
      core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&local_1f8);
                    /* try { // try from 001c9009 to 001c9015 has its CatchHandler @ 001c9538 */
      core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&local_f8);
                    /* try { // try from 001c9016 to 001c9022 has its CatchHandler @ 001c9533 */
      core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&local_188);
      core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_200);
      return 0;
    }
  }
                    /* try { // try from 001c90ec to 001c90f5 has its CatchHandler @ 001c953d */
  core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&local_1f8);
                    /* try { // try from 001c90f6 to 001c9102 has its CatchHandler @ 001c9538 */
  core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&local_f8);
                    /* try { // try from 001c9103 to 001c910f has its CatchHandler @ 001c9533 */
  core::ptr::drop_in_place<uu_seq::extendedbigdecimal::ExtendedBigDecimal>(&local_188);
  core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_200);
  return lVar2;
}