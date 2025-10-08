undefined8
_ZN5uu_od10peekreader19PeekReader_LT_R_GT_20read_from_tempbuffer17hf24a4ff9ace7f7d4E
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [40];
  
  local_48 = param_2;
  local_40 = param_3;
  uVar1 = _ZN3std2io5impls69__LT_impl_u20_std__io__Write_u20_for_u20__RF_mut_u20__u5b_u8_u5d__GT_5write17hc46ab02767632519E
                    (&local_48,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
                    /* try { // try from 001605ed to 001605fc has its CatchHandler @ 0016061c */
  _ZN5alloc3vec16Vec_LT_T_C_A_GT_5drain17h2e123f5ab5004ad6E(local_38,param_1 + 0x70,uVar1);
  _ZN4core3ptr55drop_in_place_LT_alloc__vec__drain__Drain_LT_u8_GT__GT_17hb3129cb533b5c06fE
            (local_38);
  _ZN4core3ptr78drop_in_place_LT_core__result__Result_LT_usize_C_std__io__error__Error_GT__GT_17h7258f05db9019541E
            (0,uVar1);
  return uVar1;
}