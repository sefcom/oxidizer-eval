void _ZN3bat5input15read_utf16_line17h0b621ced04bc80c9E
               (undefined *param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5,
               undefined4 param_6)

{
  ulong uVar1;
  undefined auVar2 [16];
  undefined8 local_58;
  long local_50;
  long local_48;
  uint local_40;
  undefined4 local_3c;
  undefined *local_38;
  
  local_40 = param_5;
  local_3c = param_6;
  local_38 = param_1;
  while( true ) {
    local_58 = 0;
    local_50 = 1;
    local_48 = 0;
                    /* try { // try from 0053bbd8 to 0053bc05 has its CatchHandler @ 0053bc76 */
    auVar2 = _ZN3std2io5impls73__LT_impl_u20_std__io__BufRead_u20_for_u20_alloc__boxed__Box_LT_B_GT__GT_10read_until17hc140cba533622c8bE
                       (param_2,param_3,param_5 & 0xff,&local_58);
    if ((auVar2 & (undefined  [16])0x1) != (undefined  [16])0x0) {
      *(long *)(local_38 + 8) = auVar2._8_8_;
      *local_38 = 1;
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
                (local_58,local_50);
      return;
    }
    if (auVar2._8_8_ == 0) break;
    _ZN132__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT__RF_T_C_core__slice__iter__Iter_LT_T_GT__GT__GT_11spec_extend17h30747c9efb6a6381E
              (param_4,local_50,local_48 + local_50);
    uVar1 = *(ulong *)(param_4 + 0x10);
    if (((1 < uVar1) && (*(char *)(*(long *)(param_4 + 8) + -2 + uVar1) == (char)local_3c)) &&
       (*(char *)(*(long *)(param_4 + 8) + -1 + uVar1) == (char)local_40)) goto LAB_0053bc4a;
    _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
              (local_58,local_50);
  }
  uVar1 = *(ulong *)(param_4 + 0x10);
LAB_0053bc4a:
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h1e41457799ed3462E
            (local_58,local_50);
  local_38[1] = uVar1 != 0;
  *local_38 = 0;
  return;
}