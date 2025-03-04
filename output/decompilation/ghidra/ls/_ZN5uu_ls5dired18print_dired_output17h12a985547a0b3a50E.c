undefined8
_ZN5uu_ls5dired18print_dired_output17h12a985547a0b3a50E
          (long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long local_50;
  code *local_48;
  undefined **local_40;
  undefined8 local_38;
  long *local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar1 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_5flush17h5d2671fc0ed75d53E
                    (param_3);
  if (lVar1 == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      _ZN5uu_ls5dired15print_positions17h1699d046e996e251E
                (&DAT_0013773b,9,*(undefined8 *)(param_2 + 8));
    }
    if (*(char *)(param_1 + 0xe6) != '\0') {
      _ZN5uu_ls5dired15print_positions17h1699d046e996e251E
                (&DAT_00137744,0xc,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
    }
    local_50 = param_1 + 0xf5;
    local_48 = 
    _ZN84__LT_uucore__features__quoting_style__QuotingStyle_u20_as_u20_core__fmt__Display_GT_3fmt17h8d278e288b2ed706E
    ;
    local_40 = &PTR_DAT_00313708;
    local_38 = 2;
    local_20 = 0;
    local_30 = &local_50;
    local_28 = 1;
    _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_40);
    uVar2 = 0;
  }
  else {
    uVar2 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                      (lVar1);
  }
  return uVar2;
}