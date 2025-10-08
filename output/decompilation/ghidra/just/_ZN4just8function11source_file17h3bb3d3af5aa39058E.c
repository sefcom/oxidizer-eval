undefined8 * _ZN4just8function11source_file17h3bb3d3af5aa39058E(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined auVar5 [16];
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  auVar5 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)
                     (*(undefined8 *)(*(long *)(*param_2 + 0x18) + 8),
                      *(undefined8 *)(*(long *)(*param_2 + 0x18) + 0x10));
  if (auVar5._0_8_ != 0) {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    _ZN3std4path4Path4join17h1eac0ae5e7efa361E(local_30,auVar5._0_8_,auVar5._8_8_,lVar1,lVar2);
                    /* try { // try from 0036c4c2 to 0036c50a has its CatchHandler @ 0036c547 */
    (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
              (&local_48,local_28,local_20);
    if (local_48 == 1) {
      _ZN4just8function11source_file28__u7b__u7b_closure_u7d__u7d_17hcf6ded2bba2f6f75E
                (&local_48,lVar1,lVar2);
      param_1[3] = CONCAT44(uStack_34,local_38);
      *(int *)(param_1 + 1) = local_48;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_44;
      *(undefined4 *)(param_1 + 2) = uStack_40;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
      *param_1 = 1;
    }
    else {
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
                (&local_48,CONCAT44(uStack_3c,uStack_40),CONCAT44(uStack_34,local_38));
      *(undefined4 *)(param_1 + 2) = uStack_40;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_3c;
      *(undefined4 *)(param_1 + 3) = local_38;
      *(undefined4 *)((long)param_1 + 0x1c) = uStack_34;
      param_1[1] = CONCAT44(uStack_44,local_48);
      *param_1 = 0;
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_30);
    return param_1;
  }
  uVar3 = (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00565e68)(&DAT_005300a0);
                    /* catch() { ... } // from try @ 0036c4c2 with catch @ 0036c547 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_30);
  puVar4 = (undefined8 *)_Unwind_Resume(uVar3);
  return puVar4;
}