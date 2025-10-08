void _ZN4just6loader6Loader4load17hbf3396d2a4dee187E
               (undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  long local_108;
  long local_100;
  long local_f0;
  long local_e8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  
  auVar6._8_8_ = param_6;
  auVar6._0_8_ = param_5;
  _ZN3std2fs14read_to_string17hb6ecb2222cef5a14E(&local_140,param_5,param_6);
  local_b8 = local_140;
  uStack_b4 = uStack_13c;
  uStack_b0 = uStack_138;
  uStack_ac = uStack_134;
  local_a8 = local_130;
                    /* try { // try from 003752fd to 0037538e has its CatchHandler @ 003753fc */
  auVar7 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(param_3,param_4);
  if (auVar7._0_8_ == 0) {
                    /* try { // try from 003753ed to 003753f9 has its CatchHandler @ 003753fc */
    (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&PTR_DAT_005305a0);
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  auVar7 = _ZN3std4path4Path12strip_prefix17h70061c692fa4f661E
                     (param_5,param_6,auVar7._0_8_,auVar7._8_8_);
  if (auVar7._0_8_ != 0) {
    auVar6 = auVar7;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
            (&local_98,auVar6._0_8_,auVar6._8_8_);
  local_118 = uStack_88;
  local_128 = local_98;
  uStack_124 = uStack_94;
  uStack_120 = uStack_90;
  uStack_11c = uStack_8c;
  _ZN11typed_arena14Arena_LT_T_GT_15alloc_fast_path17h1f3b99d14e4ec411E
            (&local_108,param_2,&local_128);
  if (local_108 != -0x8000000000000000) {
    local_100 = _ZN11typed_arena14Arena_LT_T_GT_15alloc_slow_path17h6b47dd704f26473dE
                          (param_2,&local_108);
  }
  uVar1 = *(undefined8 *)(local_100 + 8);
  uVar2 = *(undefined8 *)(local_100 + 0x10);
  _ZN11typed_arena14Arena_LT_T_GT_15alloc_fast_path17h21eb0f638a8fb3e5E
            (&local_f0,param_2 + 0x38,&local_140);
  if (local_f0 != -0x8000000000000000) {
    local_e8 = _ZN11typed_arena14Arena_LT_T_GT_15alloc_slow_path17hfb9bbf67b7dfa37dE
                         (param_2 + 0x38,&local_f0);
  }
  uVar4 = *(undefined8 *)(local_e8 + 8);
  uVar5 = *(undefined8 *)(local_e8 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *param_1 = 0x38;
  return;
}