void _ZN3bat12preprocessor11expand_tabs17hd1e4844dd3a3fe09E
               (undefined (*param_1) [16],long param_2,long param_3)

{
  undefined auVar1 [16];
  long local_b0 [6];
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  undefined8 local_60;
  undefined4 local_50;
  
  auVar1 = _ZN5alloc7raw_vec20RawVecInner_LT_A_GT_16with_capacity_in17h2ab28548f23fa4abE
                     (param_3 * 2,1,1,&PTR_DAT_007cd180);
  local_68 = param_2 + param_3;
  local_60 = 0;
  local_50 = 0x110001;
  local_80 = param_2;
  local_78 = param_3;
  local_70 = param_2;
  (*(code *)
    PTR__ZN102__LT_bat__vscreen__EscapeSequenceOffsetsIterator_u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h292aaa547b62c7bfE_008088c8
  )(local_b0,&local_80);
  if (local_b0[0] != 5) {
                    /* WARNING: Could not recover jumptable at 0x0053daf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0019c380 + *(int *)(&DAT_0019c380 + local_b0[0] * 4)))();
    return;
  }
  *(undefined8 *)param_1[1] = 0;
  *param_1 = auVar1;
  return;
}