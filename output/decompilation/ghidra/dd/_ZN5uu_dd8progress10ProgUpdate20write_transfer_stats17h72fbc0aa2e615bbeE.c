void _ZN5uu_dd8progress10ProgUpdate20write_transfer_stats17h72fbc0aa2e615bbeE
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined **local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  if (param_3 != 0) {
    local_40 = &PTR_s__002624a8;
    local_38 = 1;
    local_30 = 8;
    local_28 = 0;
    uStack_20 = 0;
    lVar1 = _ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17h82787f8382d2102cE
                      (param_2,&local_40);
    if (lVar1 != 0) goto LAB_001f032a;
  }
  lVar1 = _ZN5uu_dd8progress10ProgUpdate14write_io_lines17h21e0c6ac1bc632a9E(param_1,param_2);
  if (lVar1 == 0) {
    _ZN5uu_dd8progress10ProgUpdate15write_prog_line17h73fbaadaf172cb94E(param_1,param_2,0);
    return;
  }
LAB_001f032a:
  _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
            (lVar1);
  return;
}