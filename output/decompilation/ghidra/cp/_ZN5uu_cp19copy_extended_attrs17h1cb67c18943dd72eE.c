void _ZN5uu_cp19copy_extended_attrs17h1cb67c18943dd72eE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  long lVar1;
  long local_e0;
  int local_d8 [2];
  long local_d0;
  uint local_a0;
  
  _ZN3std2fs16symlink_metadata17h814bc3976f7d40c5E(local_d8,param_4,param_5);
  lVar1 = local_d0;
  if (local_d8[0] != 2) {
    if ((local_a0 & 0x92) == 0) {
      lVar1 = _ZN3std2fs15set_permissions17h0aec1725d40e979bE(param_4,param_5,local_a0 | 0x92);
      if (lVar1 != 0) goto LAB_001a1ce4;
      lVar1 = _ZN6uucore8features7fsxattr11copy_xattrs17h21e16464ebe412bdE
                        (param_2,param_3,param_4,param_5);
                    /* try { // try from 001a1d2b to 001a1d5c has its CatchHandler @ 001a1da4 */
      local_e0 = lVar1;
      _ZN3std2fs16symlink_metadata17h814bc3976f7d40c5E(local_d8,param_4,param_5);
      if ((local_d8[0] == 2) ||
         (local_d0 = _ZN3std2fs15set_permissions17h0aec1725d40e979bE
                               (param_4,param_5,local_a0 & 0xffffff6d), local_d0 != 0)) {
        *param_1 = 0x8000000000000001;
        param_1[1] = local_d0;
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h6803c44012521573E
                  (&local_e0);
        return;
      }
    }
    else {
      lVar1 = _ZN6uucore8features7fsxattr11copy_xattrs17h21e16464ebe412bdE
                        (param_2,param_3,param_4,param_5);
    }
    if (lVar1 == 0) {
      *param_1 = 0x800000000000000c;
      return;
    }
  }
LAB_001a1ce4:
  *param_1 = 0x8000000000000001;
  param_1[1] = lVar1;
  return;
}