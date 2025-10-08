undefined8 * _ZN4just8function15just_executable17he6c6ddd88a3826c1E(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  (*(code *)PTR__ZN3std3env11current_exe17h5073ac412771085bE_00566ba0)(&local_70);
  uVar1 = CONCAT44(uStack_5c,local_60);
  local_58 = local_70;
  uStack_54 = uStack_6c;
  uStack_50 = uStack_68;
  uStack_4c = uStack_64;
  uVar2 = CONCAT44(uStack_64,uStack_68);
                    /* try { // try from 0036af50 to 0036afa6 has its CatchHandler @ 0036afd7 */
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_00565dd0)(&local_70,uVar2,uVar1)
  ;
  if (local_70 == 1) {
    _ZN4just5which5which28__u7b__u7b_closure_u7d__u7d_17h1924a8d8338b238eE(&local_70,uVar2,uVar1);
    param_1[3] = CONCAT44(uStack_5c,local_60);
    *(int *)(param_1 + 1) = local_70;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_6c;
    *(undefined4 *)(param_1 + 2) = uStack_68;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_64;
    *param_1 = 1;
  }
  else {
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17he141d0e2f3955eabE
              (&local_70,CONCAT44(uStack_64,uStack_68),CONCAT44(uStack_5c,local_60));
    *(undefined4 *)(param_1 + 2) = uStack_68;
    *(undefined4 *)((long)param_1 + 0x14) = uStack_64;
    *(undefined4 *)(param_1 + 3) = local_60;
    *(undefined4 *)((long)param_1 + 0x1c) = uStack_5c;
    param_1[1] = CONCAT44(uStack_6c,local_70);
    *param_1 = 0;
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h775cb89257c230e4E(&local_58);
  return param_1;
}