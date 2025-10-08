undefined8 *
_ZN4just8function12canonicalize17hfe002d29e7de8b87E
          (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  _ZN4just17execution_context16ExecutionContext17working_directory17hcc9cc51d43cb6ad6E
            (local_70,*(undefined8 *)(*param_2 + 0x10),*(undefined8 *)(*param_2 + 0x18));
                    /* try { // try from 00369a59 to 00369a92 has its CatchHandler @ 00369b94 */
  _ZN3std4path4Path4join17h1eac0ae5e7efa361E(&local_a0,local_68,local_60,param_3,param_4);
  _ZN3std2fs12canonicalize17h0e68419a5b222fcbE(&local_88,&local_a0);
  local_58 = local_88;
  uStack_54 = uStack_84;
  uStack_50 = uStack_80;
  uStack_4c = uStack_7c;
  local_48 = local_78;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_70);
                    /* try { // try from 00369af2 to 00369b48 has its CatchHandler @ 00369b7e */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
            (&local_a0,CONCAT44(uStack_7c,uStack_80),local_78);
  if (local_a0 == 1) {
    _ZN4just8function12canonicalize28__u7b__u7b_closure_u7d__u7d_17h5fc101f594e3c7cdE
              (&local_a0,CONCAT44(uStack_7c,uStack_80),local_78);
    param_1[3] = CONCAT44(uStack_8c,local_90);
    *(int *)(param_1 + 1) = local_a0;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_9c;
    *(undefined4 *)(param_1 + 2) = uStack_98;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_94;
    *param_1 = 1;
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_a0,CONCAT44(uStack_94,uStack_98),CONCAT44(uStack_8c,local_90));
    *(undefined4 *)(param_1 + 2) = uStack_98;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_94;
    *(undefined4 *)(param_1 + 3) = local_90;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_8c;
    param_1[1] = CONCAT44(uStack_9c,local_a0);
    *param_1 = 0;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_88);
  return param_1;
}