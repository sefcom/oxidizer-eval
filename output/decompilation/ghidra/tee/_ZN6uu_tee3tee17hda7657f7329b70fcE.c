undefined8 _ZN6uu_tee3tee17hda7657f7329b70fcE(long param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long local_40;
  long local_38;
  long local_30;
  
  uVar6 = 0x2700000003;
  if ((*(char *)(param_1 + 0x19) != '\0') &&
     (iVar3 = _ZN6uucore8features7signals17ignore_interrupts17h3324c21a6f8249abE(), iVar3 != 0x86))
  {
    return 0x2700000003;
  }
  cVar2 = *(char *)(param_1 + 0x1a);
  if ((cVar2 == '\x04') &&
     (iVar3 = _ZN6uucore8features7signals18enable_pipe_errors17hea9713d91b5b8a8cE(), iVar3 != 0x86))
  {
    return 0x2700000003;
  }
  local_40 = *(long *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  local_38 = local_40 + lVar5 * 0x18;
  local_30 = param_1;
  _ZN4core4iter8adapters11try_process17hf63c6a42b517bf3cE(&local_a8,&local_40);
  lVar1 = local_98;
  local_58 = CONCAT44(uStack_a4,local_a8);
  uStack_50 = CONCAT44(uStack_9c,uStack_a0);
  if (local_58 == -0x8000000000000000) {
    return uStack_50;
  }
  local_48 = local_98;
                    /* try { // try from 001b32f1 to 001b3304 has its CatchHandler @ 001b343a */
  _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17h02ba9e8c78156205E
            (&local_a8,"\'standard output\': \nstdin: ",0x11);
  local_68 = local_98;
  local_78._0_4_ = local_a8;
  local_78._4_4_ = uStack_a4;
  uStack_70._0_4_ = uStack_a0;
  uStack_70._4_4_ = uStack_9c;
                    /* try { // try from 001b3318 to 001b3325 has its CatchHandler @ 001b343f */
  uVar4 = _ZN3std2io5stdio6stdout17h077da66234850927E();
  local_90 = _ZN5alloc5boxed12Box_LT_T_GT_3new17hc984d48e7fdf5f95E(uVar4);
  local_88 = &DAT_0021f900;
  local_a8 = (undefined4)local_78;
  uStack_a4 = local_78._4_4_;
  uStack_a0 = (undefined4)uStack_70;
  uStack_9c = uStack_70._4_4_;
  local_98 = local_68;
                    /* try { // try from 001b334a to 001b3358 has its CatchHandler @ 001b343a */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17h8d0a4e90cda50b20E(&local_58,0,&local_a8);
  local_98 = local_48;
  local_a8 = (undefined4)local_58;
  uStack_a4 = local_58._4_4_;
  uStack_a0 = (undefined4)uStack_50;
  uStack_9c = uStack_50._4_4_;
  local_88 = (undefined *)CONCAT71(local_88._1_7_,cVar2);
  local_90 = 0;
                    /* try { // try from 001b337a to 001b3387 has its CatchHandler @ 001b3458 */
  uVar4 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
  local_78 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h15cf95ff801ea224E(uVar4);
  uStack_70 = &DAT_0021f950;
                    /* try { // try from 001b3399 to 001b33a5 has its CatchHandler @ 001b3426 */
  auVar7 = _ZN3std2io4copy12generic_copy17h331c05792c6b2829E(&local_78,&local_a8);
  uVar4 = auVar7._8_8_;
  if (auVar7._0_8_ != 0) {
    if ((auVar7._0_8_ == 1) &&
       (cVar2 = _ZN3std2io5error5Error4kind17hb2ff5fa058639b3dE(), cVar2 != '\''))
    goto LAB_001b33f2;
                    /* try { // try from 001b33c3 to 001b33e1 has its CatchHandler @ 001b3424 */
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hb33ceb02c1cf9a1dE(uVar4);
  }
  if (lVar1 == lVar5) {
    lVar5 = _ZN54__LT_uu_tee__MultiWriter_u20_as_u20_std__io__Write_GT_5flush17h5ef7c906ce7a5cbeE
                      (&local_a8);
    if (lVar5 == 0) {
      if (local_90 == 0) {
        uVar6 = 0;
      }
    }
    else {
      _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf4a995236b113dffE
                (lVar5);
    }
  }
  uVar4 = 0;
LAB_001b33f2:
                    /* try { // try from 001b33f5 to 001b33f9 has its CatchHandler @ 001b3426 */
  _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hf4a995236b113dffE
            (uVar4);
                    /* try { // try from 001b3404 to 001b3408 has its CatchHandler @ 001b3458 */
  _ZN4core3ptr40drop_in_place_LT_uu_tee__NamedReader_GT_17hbcd4494a61c61d7cE(local_78,uStack_70);
  _ZN4core3ptr40drop_in_place_LT_uu_tee__MultiWriter_GT_17h7f05ff32ec84ed58E(&local_a8);
  return uVar6;
}