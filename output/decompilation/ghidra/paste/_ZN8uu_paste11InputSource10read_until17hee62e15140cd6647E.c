void _ZN8uu_paste11InputSource10read_until17hee62e15140cd6647E
               (undefined (*param_1) [16],long *param_2,undefined param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined extraout_DL;
  undefined auVar3 [16];
  undefined8 local_30;
  uint local_28;
  
  if (*param_2 == 0) {
    lVar1 = param_2[1];
    if (0x7ffffffffffffffe < *(ulong *)(lVar1 + 0x10)) {
      uVar2 = _ZN8uu_paste11InputSource10read_until28__u7b__u7b_closure_u7d__u7d_17hbb47ba783e9932d7E
                        ();
      *(undefined8 *)*param_1 = uVar2;
      *(undefined ***)(*param_1 + 8) =
           &
           PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h18a769c05e6d96b0E_001decf0
      ;
      return;
    }
    *(ulong *)(lVar1 + 0x10) = *(ulong *)(lVar1 + 0x10) + 1;
                    /* try { // try from 00157273 to 00157278 has its CatchHandler @ 0015730e */
    local_30 = (*(code *)PTR__ZN3std2io5stdio5Stdin4lock17h8b2bf765bae79e2fE_001e5420)(lVar1 + 0x18)
    ;
    local_28 = CONCAT31(local_28._1_3_,extraout_DL) & 0xffffff01;
                    /* try { // try from 00157285 to 001572a3 has its CatchHandler @ 001572f5 */
    auVar3 = (*(code *)
               PTR__ZN62__LT_std__io__stdio__StdinLock_u20_as_u20_std__io__BufRead_GT_10read_until17hc4dcd49adc43842dE_001e5428
             )(&local_30,param_3,param_4);
    uVar2 = auVar3._8_8_;
    if ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      auVar3 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e5408
               )(uVar2);
      *param_1 = auVar3;
                    /* try { // try from 001572b4 to 001572d3 has its CatchHandler @ 0015730e */
      _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h06b5396e228f8c46E
                (local_30,local_28);
      _ZN4core3ptr65drop_in_place_LT_core__cell__Ref_LT_std__io__stdio__Stdin_GT__GT_17hd490dcf690ae2af4E
                (lVar1 + 0x10);
      return;
    }
    _ZN4core3ptr46drop_in_place_LT_std__io__stdio__StdinLock_GT_17h06b5396e228f8c46E
              (local_30,local_28);
    _ZN4core3ptr65drop_in_place_LT_core__cell__Ref_LT_std__io__stdio__Stdin_GT__GT_17hd490dcf690ae2af4E
              (lVar1 + 0x10);
  }
  else {
    auVar3 = _ZN3std2io10read_until17h9513ee7dd612d999E(param_2,param_3,param_4);
    uVar2 = auVar3._8_8_;
    if ((auVar3 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      auVar3 = (*(code *)
                 PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001e5408
               )(uVar2);
      *param_1 = auVar3;
      return;
    }
  }
  *(undefined8 *)(*param_1 + 8) = uVar2;
  *(undefined8 *)*param_1 = 0;
  return;
}