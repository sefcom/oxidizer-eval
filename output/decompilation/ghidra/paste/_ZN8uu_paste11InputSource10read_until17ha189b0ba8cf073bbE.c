void _ZN8uu_paste11InputSource10read_until17ha189b0ba8cf073bbE
               (undefined (*param_1) [16],long *param_2,undefined param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined extraout_DL;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined8 local_30;
  uint local_28;
  
  if (*param_2 == 0) {
    auVar2 = _ZN4core4cell16RefCell_LT_T_GT_10try_borrow17h959d5806e7d4e445E(param_2[1] + 0x10);
    if (auVar2._0_8_ == 0) {
      uVar1 = _ZN8uu_paste11InputSource10read_until28__u7b__u7b_closure_u7d__u7d_17h1211fc4f0eb61bc6E
                        ();
      *(undefined8 *)*param_1 = uVar1;
      *(undefined ***)(*param_1 + 8) =
           &
           PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h7f73f0ae830bcf69E_002135a0
      ;
      return;
    }
                    /* try { // try from 001ac749 to 001ac754 has its CatchHandler @ 001ac800 */
    local_30 = _ZN3std2io5stdio5Stdin4lock17h161a36d857331d7fE(auVar2._0_8_);
    local_28 = CONCAT31(local_28._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 001ac761 to 001ac780 has its CatchHandler @ 001ac7e7 */
    auVar3 = _ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_10read_until17h22767f011618eb41E
                       (&local_30,param_3,param_4);
    uVar1 = auVar3._8_8_;
    if (auVar3._0_8_ != 0) {
      auVar3 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         (uVar1);
      *param_1 = auVar3;
                    /* try { // try from 001ac791 to 001ac795 has its CatchHandler @ 001ac800 */
      _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h4cb87d9107df2b81E
                (local_30,local_28);
      _ZN4core3ptr65drop_in_place_LT_core__cell__Ref_LT_std__io__stdio__Stdin_GT__GT_17h971a788c5bfdd900E
                (auVar2._8_8_);
      return;
    }
                    /* try { // try from 001ac7c1 to 001ac7c5 has its CatchHandler @ 001ac800 */
    _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h4cb87d9107df2b81E
              (local_30,local_28);
    _ZN4core3ptr65drop_in_place_LT_core__cell__Ref_LT_std__io__stdio__Stdin_GT__GT_17h971a788c5bfdd900E
              (auVar2._8_8_);
  }
  else {
    auVar2 = _ZN3std2io10read_until17h3aa91410a41ab69dE(param_2,param_3,param_4);
    uVar1 = auVar2._8_8_;
    if (auVar2._0_8_ != 0) {
      auVar2 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                         (uVar1);
      *param_1 = auVar2;
      return;
    }
  }
  *(undefined8 *)(*param_1 + 8) = uVar1;
  *(undefined8 *)*param_1 = 0;
  return;
}