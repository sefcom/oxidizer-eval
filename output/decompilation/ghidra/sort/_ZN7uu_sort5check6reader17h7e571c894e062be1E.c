undefined  [16]
_ZN7uu_sort5check6reader17h7e571c894e062be1E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  long lVar1;
  undefined auVar2 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  char local_b0;
  undefined7 uStack_af;
  long local_a8 [15];
  
  local_d8 = 0;
  local_d0 = 1;
  local_c8 = 0;
  local_c0 = param_3;
  do {
                    /* try { // try from 002485e0 to 00248625 has its CatchHandler @ 00248681 */
    _ZN89__LT_std__sync__mpsc__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h75521e5ebc43ed35E
              (local_a8,&local_c0);
    if (local_a8[0] == -0x8000000000000000) break;
    _ZN7uu_sort6chunks4read17h4da7a75b34a6d647E(&local_b8,param_4,local_a8,0);
    if (local_b8 != 0) {
      param_5 = CONCAT71(uStack_af,local_b0);
      _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h026152d332835070E(&local_d8);
      lVar1 = local_b8;
      goto LAB_00248655;
    }
  } while (local_b0 != '\0');
                    /* try { // try from 00248637 to 00248654 has its CatchHandler @ 0024867c */
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h026152d332835070E(&local_d8);
  lVar1 = 0;
LAB_00248655:
  _ZN4core3ptr90drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_std__io__Read_u2b_core__marker__Send_GT__GT_17hda4324549e97968aE
            (param_1,param_2);
  auVar2._8_8_ = param_5;
  auVar2._0_8_ = lVar1;
  return auVar2;
}