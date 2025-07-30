undefined8 *
_ZN7flealib10fileserver10FileServer24read_binary_file_by_path17h8cccdbe61e884fb8E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  int local_e0 [6];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulong local_78;
  
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h6b169aa4c72fa5e4E
            (local_e0,param_3,&PTR_s__root__rustup_toolchains_nightly_00809940);
  _ZN3std2fs8metadata17hffdd0865439b20c5E(&local_c8,local_e0);
  if ((int)local_c8 != 2) {
    if (local_78 < 0x1f400001) {
      _ZN3std2fs4File4open17he10002f3cfe76741E(&local_c8,param_3);
      if ((local_c8 & 1) == 0) {
        local_e0[0] = local_c8._4_4_;
        local_c8 = 0;
        uStack_c0 = 1;
        local_b8 = 0;
                    /* try { // try from 0047b41e to 0047b42d has its CatchHandler @ 0047b483 */
        auVar1 = (*(code *)
                   PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Read_GT_11read_to_end17hc5ce334212601c81E_008284f0
                 )(local_e0,&local_c8);
        if (auVar1._0_8_ == 0) {
          param_1[2] = local_b8;
          *param_1 = local_c8;
          param_1[1] = uStack_c0;
        }
        else {
          param_1[1] = auVar1._8_8_;
          *param_1 = 0x8000000000000000;
                    /* try { // try from 0047b444 to 0047b44d has its CatchHandler @ 0047b46f */
          _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17hc1da1ed81c1be07bE
                    (&local_c8);
        }
        _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h427eb749d8d610e5E(local_e0[0]);
        return param_1;
      }
    }
    else {
      uStack_c0 = (*(code *)PTR__ZN3std2io5error5Error3new17h73bba56a22ab7bbeE_00826eb0)
                            (0x28,"File too large",0xe);
    }
  }
  param_1[1] = uStack_c0;
  *param_1 = 0x8000000000000000;
  return param_1;
}