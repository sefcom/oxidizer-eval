void __rustcall uu_ls::display_inode(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_48;
  undefined *puStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined **ppuStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  puStack_40 = (undefined *)&uStack_48;
  pcStack_38 = core::fmt::num::imp::_<impl_core::fmt::Display_for_u64>::fmt;
  puStack_30 = &DAT_00123d10;
  uStack_28 = 1;
  uStack_10 = 0;
  ppuStack_20 = &puStack_40;
  uStack_18 = 1;
  uStack_48 = param_2;
  core::option::Option<T>::map_or_else(param_1,&puStack_30);
  return;
}