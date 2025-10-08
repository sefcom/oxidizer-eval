void _ZN4just8function3dir17h5f510ce80227e93cE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  int local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_50;
  undefined8 local_48;
  undefined local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  
  local_50 = param_2;
  local_48 = param_3;
  (*param_4)(local_40);
                    /* try { // try from 0036a253 to 0036a2ae has its CatchHandler @ 0036a2dc */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)
            (&local_80,local_38,local_30);
  if (local_80 == 1) {
    _ZN4just8function3dir28__u7b__u7b_closure_u7d__u7d_17h71277bd26d076cbfE
              (&local_80,local_38,local_30,&local_50);
    param_1[3] = CONCAT44(uStack_6c,local_70);
    *(int *)(param_1 + 1) = local_80;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_7c;
    *(undefined4 *)(param_1 + 2) = uStack_78;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_74;
    *param_1 = 1;
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_80,CONCAT44(uStack_74,uStack_78),CONCAT44(uStack_6c,local_70));
    *(undefined4 *)(param_1 + 2) = uStack_78;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_74;
    *(undefined4 *)(param_1 + 3) = local_70;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_6c;
    param_1[1] = CONCAT44(uStack_7c,local_80);
    *param_1 = 0;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(local_40);
  return;
}