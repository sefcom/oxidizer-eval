undefined8 *
_ZN5uu_dd14bufferedoutput14BufferedOutput3new17h93483d7819281523E
          (undefined8 *param_1,undefined *param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar1 = *param_2;
  uVar2 = *(undefined4 *)(param_2 + 4);
                    /* try { // try from 001eead0 to 001eeb37 has its CatchHandler @ 001eeb38 */
  _ZN5alloc7raw_vec19RawVec_LT_T_C_A_GT_15try_allocate_in17he1ec86b2283b0e90E
            (&local_38,*(undefined8 *)(*(long *)(param_2 + 0x10) + 0x78),0);
  if (local_38 == 0) {
    *(undefined *)(param_1 + 3) = uVar1;
    *(undefined2 *)((long)param_1 + 0x19) = *(undefined2 *)(param_2 + 1);
    *(undefined *)((long)param_1 + 0x1b) = param_2[3];
    *(undefined4 *)((long)param_1 + 0x1c) = uVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[5] = uVar3;
    *param_1 = local_30;
    param_1[1] = local_28;
    param_1[2] = 0;
    return param_1;
  }
  uVar3 = _ZN5alloc7raw_vec12handle_error17h2372476369f9b8acE(local_30,local_28);
                    /* catch() { ... } // from try @ 001eead0 with catch @ 001eeb38 */
  _ZN4core3ptr34drop_in_place_LT_uu_dd__Output_GT_17hdcd5f9e7ad84b1eeE(uVar1,uVar2);
  puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
  return puVar4;
}