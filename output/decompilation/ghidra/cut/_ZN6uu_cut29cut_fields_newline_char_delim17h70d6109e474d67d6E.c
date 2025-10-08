undefined  [16]
_ZN6uu_cut29cut_fields_newline_char_delim17h70d6109e474d67d6E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,long param_5
          ,undefined param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  undefined auVar6 [16];
  undefined local_80 [8];
  long local_78;
  ulong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined local_58;
  undefined local_38;
  
  _ZN3std2io8buffered9bufreader18BufReader_LT_R_GT_13with_capacity17h435dadcf49ddd50aE
            (&local_68,param_1);
  local_38 = param_6;
  _ZN4core4iter6traits8iterator8Iterator7collect17h5e3bf8182d4c8696E(local_80,&local_68);
  if (param_5 != 0) {
    puVar1 = param_4 + param_5 * 4;
    bVar5 = false;
    do {
      local_68 = *param_4;
      uStack_64 = param_4[1];
      uStack_60 = param_4[2];
      uStack_5c = param_4[3];
      local_58 = 0;
      auVar6 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h72e3f57276e63282E
                         (&local_68);
      if (((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
         (uVar4 = auVar6._8_8_ - 1, uVar4 < local_70)) {
                    /* try { // try from 001693bd to 00169407 has its CatchHandler @ 001694e3 */
        if ((bVar5) &&
           (lVar2 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6c830cee343393eaE
                              (param_2,param_3,param_7,param_8), lVar2 != 0)) {
LAB_00169482:
                    /* try { // try from 00169482 to 001694b7 has its CatchHandler @ 001694e1 */
          auVar6 = (*(code *)
                     PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001ffeb8
                   )(lVar2);
          param_2 = auVar6._8_8_;
          uVar3 = auVar6._0_8_;
          goto LAB_001694be;
        }
        lVar2 = local_78 + uVar4 * 0x18;
        lVar2 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6c830cee343393eaE
                          (param_2,param_3,*(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10))
        ;
        while( true ) {
          if (lVar2 != 0) goto LAB_00169482;
          auVar6 = _ZN107__LT_core__ops__range__RangeInclusive_LT_T_GT__u20_as_u20_core__iter__range__RangeInclusiveIteratorImpl_GT_9spec_next17h72e3f57276e63282E
                             (&local_68);
          bVar5 = true;
          if (((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) ||
             (uVar4 = auVar6._8_8_ - 1, local_70 <= uVar4)) break;
                    /* try { // try from 00169439 to 0016947f has its CatchHandler @ 001694e5 */
          lVar2 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6c830cee343393eaE
                            (param_2,param_3,param_7,param_8);
          if (lVar2 != 0) goto LAB_00169482;
          lVar2 = local_78 + uVar4 * 0x18;
          lVar2 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6c830cee343393eaE
                            (param_2,param_3,*(undefined8 *)(lVar2 + 8),
                             *(undefined8 *)(lVar2 + 0x10));
        }
      }
      param_4 = param_4 + 4;
    } while (param_4 != puVar1);
  }
  local_68 = CONCAT31(local_68._1_3_,param_6);
  lVar2 = _ZN3std2io5impls71__LT_impl_u20_std__io__Write_u20_for_u20_alloc__boxed__Box_LT_W_GT__GT_9write_all17h6c830cee343393eaE
                    (param_2,param_3,&local_68,1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    auVar6 = (*(code *)
               PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001ffeb8
             )(lVar2);
    param_2 = auVar6._8_8_;
    uVar3 = auVar6._0_8_;
  }
LAB_001694be:
  _ZN4core3ptr69drop_in_place_LT_alloc__vec__Vec_LT_alloc__vec__Vec_LT_u8_GT__GT__GT_17h0974e020fc7d8766E
            (local_80);
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = uVar3;
  return auVar6;
}