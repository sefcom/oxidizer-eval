undefined8 _ZN6uu_tee3tee17hf98133f44c3e9f72E(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  char local_78;
  byte bStack_77;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long local_68;
  undefined8 local_58;
  undefined *local_50;
  undefined local_48 [16];
  long local_38;
  
  uVar6 = 0x2800000003;
  if ((*(char *)(param_1 + 0x19) != '\0') &&
     (iVar3 = (*(code *)
                PTR__ZN6uucore8features7signals17ignore_interrupts17hf118497e1fc87746E_001f0e90)(),
     iVar3 != 0x86)) {
    return 0x2800000003;
  }
  cVar2 = *(char *)(param_1 + 0x1b);
  if ((cVar2 == '\x04') &&
     (iVar3 = (*(code *)
                PTR__ZN6uucore8features7signals18enable_pipe_errors17he7938a115a9dd81bE_001f0e98)(),
     iVar3 != 0x86)) {
    return 0x2800000003;
  }
  local_a8 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_a0 = local_a8 + lVar5 * 0x18;
  local_98 = param_1;
  _ZN4core4iter6traits8iterator8Iterator7collect17h2d2d7e3943ff2072E(&local_78,&local_a8);
  lVar1 = local_68;
  local_38 = local_68;
                    /* try { // try from 0015cfb2 to 0015cfc5 has its CatchHandler @ 0015d14b */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hbc1a098f16dd279eE
            (&local_a8,"\'standard output\'",0x11);
  local_68 = local_98;
  local_78 = (char)local_a8;
  bStack_77 = (byte)((ulong)local_a8 >> 8);
  uStack_76 = (undefined2)((ulong)local_a8 >> 0x10);
  uStack_74 = local_a8._4_4_;
  uStack_70 = (undefined4)uStack_a0;
  uStack_6c = uStack_a0._4_4_;
                    /* try { // try from 0015cfd9 to 0015cfe6 has its CatchHandler @ 0015d150 */
  uVar4 = (*(code *)PTR__ZN3std2io5stdio6stdout17hb6a8e10bcccf3287E_001f0d78)();
  local_90 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4b8c53d49d3f6ca5E(uVar4);
  local_88 = &DAT_001ea430;
  local_a8 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(bStack_77,local_78)));
  uStack_a0 = CONCAT44(uStack_6c,uStack_70);
  local_98 = local_68;
                    /* try { // try from 0015d00b to 0015d017 has its CatchHandler @ 0015d14b */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h3b5bb7d6ffbbcb54E(local_48,&local_a8);
  local_98 = local_38;
  local_88 = (undefined *)CONCAT71(local_88._1_7_,cVar2);
  local_90 = 0;
                    /* try { // try from 0015d039 to 0015d046 has its CatchHandler @ 0015d169 */
  uVar4 = (*(code *)PTR__ZN3std2io5stdio5stdin17h9a05a2c3e7544b2aE_001f0ea0)();
  uVar4 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h4b8c53d49d3f6ca5E(uVar4);
  local_50 = &DAT_001ea498;
  local_58 = uVar4;
  if (*(char *)(param_1 + 0x1a) != '\0') {
                    /* try { // try from 0015d061 to 0015d06b has its CatchHandler @ 0015d137 */
    (*(code *)PTR__ZN6uu_tee24ensure_stdout_not_broken17hbf7c3644b247e073E_001f0ea8)(&local_78);
    if (local_78 == '\0') {
      if (((bStack_77 & 1) != 0) || (local_98 != 1)) goto LAB_0015d0a0;
      uVar6 = 0;
    }
    else {
      uVar6 = CONCAT44(uStack_6c,uStack_70);
    }
                    /* try { // try from 0015d078 to 0015d086 has its CatchHandler @ 0015d169 */
    _ZN4core3ptr40drop_in_place_LT_uu_tee__NamedReader_GT_17h7015718fc3fc73d4E(uVar4,&DAT_001ea498);
    goto LAB_0015d111;
  }
LAB_0015d0a0:
                    /* try { // try from 0015d0a0 to 0015d0ac has its CatchHandler @ 0015d137 */
  auVar7 = _ZN3std2io4copy12generic_copy17h3f7e0ce8fd9cd2d0E(&local_58,&local_a8);
  uVar4 = auVar7._8_8_;
  if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
LAB_0015d0c8:
    if (lVar1 == lVar5) {
      lVar5 = (*(code *)
                PTR__ZN54__LT_uu_tee__MultiWriter_u20_as_u20_std__io__Write_GT_5flush17h7fdc70565f7a6de0E_001f0eb0
              )(&local_a8);
      if (lVar5 == 0) {
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17h31caf6d465b21618E
                  (0);
        if (local_90 == 0) {
          uVar6 = 0;
        }
      }
      else {
        _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17h31caf6d465b21618E
                  (lVar5);
      }
    }
    uVar4 = 0;
  }
  else {
    cVar2 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(uVar4);
    if (cVar2 == '(') {
                    /* try { // try from 0015d0c0 to 0015d0eb has its CatchHandler @ 0015d12b */
      _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc399f132f0256091E(uVar4);
      goto LAB_0015d0c8;
    }
  }
                    /* try { // try from 0015d0fa to 0015d101 has its CatchHandler @ 0015d137 */
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17h31caf6d465b21618E
            (uVar4);
                    /* try { // try from 0015d10c to 0015d110 has its CatchHandler @ 0015d169 */
  _ZN4core3ptr40drop_in_place_LT_uu_tee__NamedReader_GT_17h7015718fc3fc73d4E(local_58,local_50);
LAB_0015d111:
  _ZN4core3ptr40drop_in_place_LT_uu_tee__MultiWriter_GT_17he3a50c3c154937d9E(&local_a8);
  return uVar6;
}