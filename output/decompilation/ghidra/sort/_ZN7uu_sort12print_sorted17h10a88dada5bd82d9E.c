undefined  [16]
_ZN7uu_sort12print_sorted17h10a88dada5bd82d9E(undefined4 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined local_58 [48];
  
                    /* try { // try from 001d6a54 to 001d6a5d has its CatchHandler @ 001d6b3d */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h1bb0423170e7fa7cE
            (&local_88,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  local_98 = local_78;
  local_a8 = local_88;
  uStack_a4 = uStack_84;
  uStack_a0 = uStack_80;
  uStack_9c = uStack_7c;
                    /* try { // try from 001d6a71 to 001d6a7d has its CatchHandler @ 001d6b52 */
  _ZN7uu_sort6Output10into_write17hce87a09f168f8bb5E(local_58,param_3);
  local_88 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  local_78 = *(undefined8 *)(param_1 + 4);
  uStack_70 = *(undefined8 *)(param_1 + 6);
  local_68 = *(undefined8 *)(param_1 + 8);
  uStack_60 = *(undefined8 *)(param_1 + 10);
  do {
                    /* try { // try from 001d6ab0 to 001d6ad9 has its CatchHandler @ 001d6b65 */
    puVar1 = (undefined8 *)
             _ZN117__LT_itertools__adaptors__coalesce__CoalesceBy_LT_I_C_F_C_C_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h3581e615067ebc9cE
                       (&local_88);
    if (puVar1 == (undefined8 *)0x0) {
                    /* try { // try from 001d6ae4 to 001d6af8 has its CatchHandler @ 001d6b50 */
      uVar2 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h66ce957f28f29ab2E
                        (local_58);
      lVar3 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h292ac1231d8a1435E
                        (uVar2,&local_a8);
      if (lVar3 == 0) {
        _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h9ee5d69f67e9e91aE
                  (local_58);
        lVar3 = 0;
        goto LAB_001d6b0b;
      }
      break;
    }
    uVar2 = _ZN7uu_sort4Line5print17ha2405589ab768a70E(*puVar1,puVar1[1],local_58,param_2);
    lVar3 = _ZN201__LT_core__result__Result_LT_T_C_std__io__error__Error_GT__u20_as_u20_uucore__mods__error__FromIo_LT_core__result__Result_LT_T_C_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT__GT__GT_15map_err_context17h292ac1231d8a1435E
                      (uVar2,&local_a8);
  } while (lVar3 == 0);
                    /* try { // try from 001d6b01 to 001d6b37 has its CatchHandler @ 001d6b52 */
  _ZN4core3ptr115drop_in_place_LT_std__io__buffered__bufwriter__BufWriter_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Write_GT__GT__GT_17h9ee5d69f67e9e91aE
            (local_58);
LAB_001d6b0b:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h8941431298e6659eE(&local_a8);
  auVar4._8_8_ = &
                 PTR__ZN4core3ptr50drop_in_place_LT_uucore__mods__error__UIoError_GT_17h19922445e68bbdd8E_0028b1a0
  ;
  auVar4._0_8_ = lVar3;
  return auVar4;
}