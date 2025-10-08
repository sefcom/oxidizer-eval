undefined8
_ZN5uu_ls5dired18print_dired_output17h024401ebfd75ea3aE
          (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_50;
  undefined *local_48;
  undefined **local_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h6ed1f3d156b2ad73E
                    (param_3);
  if (lVar1 != 0) {
    uVar2 = (*(code *)
              PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_0048fd50
            )(lVar1);
    return uVar2;
  }
  if (*(long *)(param_2 + 0x10) != 0) {
    _ZN5uu_ls5dired15print_positions17h2333ffc8f21f2b3dE
              (&DAT_001d2843,9,*(undefined8 *)(param_2 + 8));
  }
  if (*(char *)(param_1 + 0xee) != '\0') {
    _ZN5uu_ls5dired15print_positions17h2333ffc8f21f2b3dE
              (&DAT_001d284c,0xc,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
  }
  local_50 = param_1 + 0xfc;
  local_48 = 
  PTR__ZN84__LT_uucore__features__quoting_style__QuotingStyle_u20_as_u20_core__fmt__Display_GT_3fmt17hae4e8fc211181537E_0048fd58
  ;
  local_40 = &PTR_DAT_003866c0;
  local_38 = 2;
  local_20 = 0;
  local_30 = &local_50;
  local_28 = 1;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_0048fd60)(&local_40);
  return 0;
}