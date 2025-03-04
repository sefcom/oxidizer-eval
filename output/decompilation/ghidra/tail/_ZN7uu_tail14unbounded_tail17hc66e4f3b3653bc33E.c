void _ZN7uu_tail14unbounded_tail17hc66e4f3b3653bc33E(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  undefined local_2090 [64];
  undefined8 local_2050 [4];
  undefined8 local_2030;
  undefined8 local_1030;
  
  local_1030 = 0;
  local_2030 = 0;
  local_2050[0] = _ZN3std2io5stdio6stdout17h077da66234850927E();
  uVar1 = _ZN3std2io5stdio6Stderr4lock17h890f7962a170fc90E(local_2050);
  _ZN3std2io8buffered9bufwriter18BufWriter_LT_W_GT_13with_capacity17haf7bea51889604aaE
            (local_2090,0x2000,uVar1);
                    /* WARNING: Could not recover jumptable at 0x002013ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00128f3c + *(int *)(&DAT_00128f3c + *param_2 * 4)))();
  return;
}