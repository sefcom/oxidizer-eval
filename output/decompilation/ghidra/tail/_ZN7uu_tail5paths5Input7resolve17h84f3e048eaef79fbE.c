undefined8 * _ZN7uu_tail5paths5Input7resolve17h84f3e048eaef79fbE(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
            (&local_48,&DAT_00124c84,10);
  uVar3 = CONCAT44(uStack_44,local_48);
  uVar4 = CONCAT44(uStack_3c,uStack_40);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
                    /* try { // try from 001a6210 to 001a621d has its CatchHandler @ 001a62da */
  cVar5 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h35303d53f5dfabe5E
                    (uVar1,uVar2,uVar4,local_38);
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(uVar3,uVar4);
  if (cVar5 == '\0') {
    _ZN3std2fs12canonicalize17h51813c249f73b0e1E(&local_48,uVar1,uVar2);
    if (CONCAT44(uStack_44,local_48) == -0x8000000000000000) {
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hd5adcfe716321922E
                (&local_48);
    }
    else {
      param_1[2] = local_38;
      *param_1 = CONCAT44(uStack_44,local_48);
      param_1[1] = CONCAT44(uStack_3c,uStack_40);
    }
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17ha6b2ce04d4e70875E
              (&local_48,"/dev/fd/0 <==\n",9);
    uVar1 = CONCAT44(uStack_44,local_48);
    uVar2 = CONCAT44(uStack_3c,uStack_40);
                    /* try { // try from 001a625c to 001a6277 has its CatchHandler @ 001a62f0 */
    _ZN3std2fs12canonicalize17h51813c249f73b0e1E(&local_48,uVar2,local_38);
    if (CONCAT44(uStack_44,local_48) == -0x8000000000000000) {
      *param_1 = 0x8000000000000000;
      _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17hd5adcfe716321922E
                (&local_48);
    }
    else {
      param_1[2] = local_38;
      *(undefined4 *)param_1 = local_48;
      *(undefined4 *)((long)param_1 + 4) = uStack_44;
      *(undefined4 *)(param_1 + 1) = uStack_40;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_3c;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h23581330bde049a4E(uVar1,uVar2);
  }
  return param_1;
}