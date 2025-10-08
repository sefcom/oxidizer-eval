void _ZN4just6parser6Parser11cook_string17hac60a0f07317bc6bE
               (undefined4 *param_1,undefined8 param_2,long param_3,long param_4)

{
  ulong uVar1;
  ulong local_198 [14];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  
  local_128 = 0;
  uStack_120 = 1;
  local_118 = 0;
  local_198[0] = 0x8000000000000001;
  local_108 = param_4 + param_3;
  local_110 = param_3;
  uVar1 = _ZN4core3str11validations15next_code_point17he89b2cd8a446aa48E(&local_110);
  if ((uVar1 & 1) != 0) {
    uVar1 = 3;
    if ((local_198[0] ^ 0x8000000000000000) < 3) {
      uVar1 = local_198[0] ^ 0x8000000000000000;
    }
                    /* WARNING: Could not recover jumptable at 0x0037e202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0016aadc + *(int *)(&DAT_0016aadc + uVar1 * 4)))();
    return;
  }
  *(undefined8 *)(param_1 + 4) = local_118;
  *param_1 = (undefined4)local_128;
  param_1[1] = local_128._4_4_;
  param_1[2] = (undefined4)uStack_120;
  param_1[3] = uStack_120._4_4_;
  *(undefined *)(param_1 + 0x12) = 0x25;
  _ZN4core3ptr61drop_in_place_LT_just__parser__Parser__cook_string__State_GT_17h7af7b9b7073753e0E
            (local_198);
  return;
}