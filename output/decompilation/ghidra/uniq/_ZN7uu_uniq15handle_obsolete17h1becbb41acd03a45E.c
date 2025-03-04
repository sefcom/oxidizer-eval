void _ZN7uu_uniq15handle_obsolete17h1becbb41acd03a45E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong extraout_RDX;
  undefined8 unaff_R15;
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined local_c2;
  undefined local_c1;
  long *local_c0;
  long *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined8 *local_a0 [3];
  undefined8 *local_88 [3];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined local_58 [48];
  
  local_a0[0] = (long *)0x8000000000000000;
  local_88[0] = (long *)0x8000000000000000;
  local_c2 = 0;
  local_c1 = 0;
  local_c0 = (long *)local_a0;
  local_b8 = (long *)local_88;
  puStack_b0 = &local_c2;
  local_a8 = &local_c1;
  _ZN4core4iter6traits8iterator8Iterator10filter_map17hcec70c5cd690a3a4E
            (local_58,param_2,param_3,&local_c0);
                    /* try { // try from 0017029a to 001702a6 has its CatchHandler @ 00170350 */
  _ZN98__LT_alloc__vec__Vec_LT_T_GT__u20_as_u20_alloc__vec__spec_from_iter__SpecFromIter_LT_T_C_I_GT__GT_9from_iter17h5a1dfc9d90ab14e5E
            (&local_70,local_58);
  if (local_a0[0] == (long *)0x8000000000000000) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = extraout_RDX;
    auVar1 = auVar1 << 0x40;
    local_c0 = local_88[0];
  }
  else {
    local_c0 = local_a0[0];
                    /* try { // try from 001702d4 to 00170308 has its CatchHandler @ 0017033a */
    auVar1 = _ZN7uu_uniq15handle_obsolete28__u7b__u7b_closure_u7d__u7d_17h80beacdf87cc02d6E
                       (&local_c0);
    unaff_R15 = auVar1._8_8_;
    local_c0 = local_88[0];
  }
  if (local_c0 == (long *)0x8000000000000000) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = auVar1._8_8_;
    auVar2 = auVar2 << 0x40;
  }
  else {
    local_88[0] = local_c0;
    auVar2 = _ZN7uu_uniq15handle_obsolete28__u7b__u7b_closure_u7d__u7d_17h80beacdf87cc02d6E
                       (&local_c0);
  }
  param_1[4] = local_60;
  param_1[2] = local_70;
  param_1[3] = uStack_68;
  *param_1 = auVar1._0_8_;
  param_1[1] = unaff_R15;
  *(undefined (*) [16])(param_1 + 5) = auVar2;
  return;
}