undefined8
_ZN5uu_od10peekreader19PeekReader_LT_R_GT_20read_from_tempbuffer17h158749acb80b7ce3E
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [40];
  
  local_48 = param_2;
  local_40 = param_3;
  uVar1 = _ZN3std2io5impls69__LT_impl_u20_std__io__Write_u20_for_u20__RF_mut_u20__u5b_u8_u5d__GT_5write17hfda19f7f2bf76fb5E
                    (&local_48,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
                    /* try { // try from 0017642a to 00176439 has its CatchHandler @ 00176459 */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17h40df76d8836e0b79E(local_38,param_1 + 0x48,uVar1);
  _ZN4core3ptr55drop_in_place_LT_alloc__vec__drain__Drain_LT_u8_GT__GT_17h50ad40bc1084b653E
            (local_38);
  _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17hed20f7b92caf5dbbE
            (0,uVar1);
  return uVar1;
}