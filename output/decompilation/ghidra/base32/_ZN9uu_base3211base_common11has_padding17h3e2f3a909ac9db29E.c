void _ZN9uu_base3211base_common11has_padding17h3e2f3a909ac9db29E
               (undefined (*param_1) [16],undefined8 *param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  bool bVar3;
  undefined auVar4 [16];
  undefined8 local_40;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  local_40 = 0;
  local_38 = 1;
  local_30 = 0;
                    /* try { // try from 001637b9 to 00163824 has its CatchHandler @ 00163851 */
  auVar4 = _ZN3std2io5impls70__LT_impl_u20_std__io__Read_u20_for_u20_alloc__boxed__Box_LT_R_GT__GT_11read_to_end17hd8f810175cb4bfc2E
                     (param_2,&local_40);
  if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    local_20 = local_30 + local_38;
    local_28 = local_38;
    pcVar2 = (char *)_ZN4core4iter6traits12double_ended19DoubleEndedIterator9try_rfold17h2387cf2e21b80bfaE
                               (&local_28);
    if (pcVar2 == (char *)0x0) {
      bVar3 = false;
    }
    else {
      bVar3 = *pcVar2 == '=';
    }
    auVar4 = _ZN3std2io5impls70__LT_impl_u20_std__io__Seek_u20_for_u20_alloc__boxed__Box_LT_S_GT__GT_4seek17h142f78e4c13e1959E
                       (*param_2,param_2[1]);
    if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      (*param_1)[8] = bVar3;
      *(undefined8 *)*param_1 = 0;
      goto LAB_00163839;
    }
    auVar4 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00215220
             )(auVar4._8_8_);
  }
  else {
    uVar1 = _ZN9uu_base3211base_common11has_padding28__u7b__u7b_closure_u7d__u7d_17h20d01a94b6b724f4E
                      (auVar4._8_8_);
    auVar4._8_8_ = &
                   PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17hc4827660a57c2aecE_0020cea8
    ;
    auVar4._0_8_ = uVar1;
  }
  *param_1 = auVar4;
LAB_00163839:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h03d8193b11b81dccE
            (local_40,local_38);
  return;
}