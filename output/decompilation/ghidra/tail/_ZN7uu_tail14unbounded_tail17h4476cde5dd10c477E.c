void _ZN7uu_tail14unbounded_tail17h4476cde5dd10c477E(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined auStack_2088 [64];
  undefined8 local_2048 [3];
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_2048[0] = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_0027d3a8)();
  uVar1 = (*(code *)PTR__ZN3std2io5stdio6Stderr4lock17h0a4e4370fd1671bbE_0027d858)(local_2048);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17h263c6123d9aad573E
            (auStack_2088,uVar1);
                    /* WARNING: Could not recover jumptable at 0x001a7a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_0012324c + *(int *)(&DAT_0012324c + *param_2 * 4)))();
  return;
}