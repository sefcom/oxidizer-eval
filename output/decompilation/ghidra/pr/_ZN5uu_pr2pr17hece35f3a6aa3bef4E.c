long * _ZN5uu_pr2pr17hece35f3a6aa3bef4E
                 (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined local_68 [56];
  
  _ZN5uu_pr4open17h24aeb0fb8cb9559fE(&local_a8);
  if (CONCAT44(uStack_a4,local_a8) == -0x7ffffffffffffffb) {
    _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h4057256a729ecd8eE
              (local_68,0x10000);
    uVar1 = _ZN5uu_pr28read_stream_and_create_pages17h80b16bcd0c28d18cE(param_4,local_68,0);
                    /* try { // try from 002c6ce0 to 002c6cea has its CatchHandler @ 002c6dc3 */
    while (_ZN115__LT_core__iter__adapters__take_while__TakeWhile_LT_I_C_P_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hd6d483c89323907fE
                     (&local_88,uVar1), CONCAT44(uStack_7c,local_80) != -0x8000000000000000) {
      local_c8 = local_80;
      uStack_c4 = uStack_7c;
      uStack_c0 = uStack_78;
      uStack_bc = uStack_74;
      local_b8 = local_70;
                    /* try { // try from 002c6d11 to 002c6d18 has its CatchHandler @ 002c6db4 */
      auVar2 = _ZN5uu_pr10print_page17h6e73dbc2020375d5E
                         (CONCAT44(uStack_74,uStack_78),local_70,param_4,local_88 + 1);
      if (auVar2._0_8_ != 0) {
                    /* try { // try from 002c6d61 to 002c6d6d has its CatchHandler @ 002c6db2 */
        _ZN83__LT_uu_pr__PrError_u20_as_u20_core__convert__From_LT_std__io__error__Error_GT__GT_4from17hd5738b82e658b7c8E
                  (&local_a8,auVar2._8_8_);
        *(undefined4 *)(param_1 + 2) = local_98;
        *(undefined4 *)((long)param_1 + 0x14) = uStack_94;
        *(undefined4 *)(param_1 + 3) = uStack_90;
        *(undefined4 *)((long)param_1 + 0x1c) = uStack_8c;
        *(undefined4 *)param_1 = local_a8;
        *(undefined4 *)((long)param_1 + 4) = uStack_a4;
        *(undefined4 *)(param_1 + 1) = uStack_a0;
        *(undefined4 *)((long)param_1 + 0xc) = uStack_9c;
                    /* try { // try from 002c6d84 to 002c6d8d has its CatchHandler @ 002c6db0 */
        _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17h05f5eb491a1c9ca3E
                  (&local_c8);
        _ZN4core3ptr170drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__LP_usize_C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__RP__GT__GT_17h7107bd53cebb0db5E
                  (uVar1);
        return param_1;
      }
                    /* try { // try from 002c6d1e to 002c6d25 has its CatchHandler @ 002c6dc3 */
      _ZN4core3ptr59drop_in_place_LT_alloc__vec__Vec_LT_uu_pr__FileLine_GT__GT_17h05f5eb491a1c9ca3E
                (&local_c8);
    }
    _ZN4core3ptr170drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__iter__traits__iterator__Iterator_u2b_Item_u20__u3d__u20__LP_usize_C_alloc__vec__Vec_LT_uu_pr__FileLine_GT__RP__GT__GT_17h7107bd53cebb0db5E
              (uVar1);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = -0x7ffffffffffffffb;
  }
  else {
    *param_1 = CONCAT44(uStack_a4,local_a8);
    param_1[1] = CONCAT44(uStack_9c,uStack_a0);
    param_1[2] = CONCAT44(uStack_94,local_98);
    param_1[3] = CONCAT44(uStack_8c,uStack_90);
  }
  return param_1;
}