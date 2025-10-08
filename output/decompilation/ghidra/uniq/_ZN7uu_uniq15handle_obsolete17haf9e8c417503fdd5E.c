void _ZN7uu_uniq15handle_obsolete17haf9e8c417503fdd5E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong extraout_RDX;
  undefined8 unaff_R15;
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined local_a2;
  undefined local_a1;
  long *local_a0;
  long *plStack_98;
  undefined *local_90;
  undefined *local_88;
  long local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68 [3];
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_80 = -0x8000000000000000;
  local_68[0] = -0x8000000000000000;
  local_a2 = 0;
  local_a1 = 0;
  local_a0 = &local_80;
  plStack_98 = local_68;
  local_90 = &local_a2;
  local_88 = &local_a1;
  _ZN4core4iter6traits8iterator8Iterator10filter_map17h2424cec6f5fbd74fE
            (&local_50,param_2,param_3,&local_a0);
                    /* try { // try from 0015ccb9 to 0015ccc5 has its CatchHandler @ 0015cd53 */
  _ZN4core4iter6traits8iterator8Iterator7collect17h1eec4f759b0db5a3E(&local_a0,&local_50);
  if (local_80 == -0x8000000000000000) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = extraout_RDX;
    auVar2 = auVar2 << 0x40;
  }
  else {
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_50 = local_80;
    auVar2 = _ZN7uu_uniq15handle_obsolete28__u7b__u7b_closure_u7d__u7d_17h8d9ea62ae7968a62E
                       (&local_50);
    unaff_R15 = auVar2._8_8_;
  }
  if (local_68[0] == -0x8000000000000000) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = auVar2._8_8_;
    auVar1 = auVar1 << 0x40;
  }
  else {
    local_50 = local_68[0];
    auVar1 = _ZN7uu_uniq15handle_obsolete28__u7b__u7b_closure_u7d__u7d_17h8d9ea62ae7968a62E
                       (&local_50);
  }
  param_1[4] = local_90;
  param_1[2] = local_a0;
  param_1[3] = plStack_98;
  *param_1 = auVar2._0_8_;
  param_1[1] = unaff_R15;
  *(undefined (*) [16])(param_1 + 5) = auVar1;
  return;
}