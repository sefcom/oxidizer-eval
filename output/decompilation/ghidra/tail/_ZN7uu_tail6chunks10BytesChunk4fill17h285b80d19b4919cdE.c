void _ZN7uu_tail6chunks10BytesChunk4fill17h285b80d19b4919cdE
               (undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  long extraout_RDX;
  undefined8 extraout_RDX_00;
  
  bVar2 = _ZN3std2io5impls70__LT_impl_u20_std__io__Read_u20_for_u20_alloc__boxed__Box_LT_R_GT__GT_4read17hdf40666c924fad72E
                    (param_3,param_4,param_2);
  if ((bVar2 & 1) != 0) {
    uVar1 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0027d808
            )(extraout_RDX);
    param_1[1] = uVar1;
    param_1[2] = extraout_RDX_00;
    *param_1 = 1;
    return;
  }
  *(long *)(param_2 + 0x2000) = extraout_RDX;
  if (extraout_RDX != 0) {
    param_1[1] = 1;
    param_1[2] = extraout_RDX;
    *param_1 = 0;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}