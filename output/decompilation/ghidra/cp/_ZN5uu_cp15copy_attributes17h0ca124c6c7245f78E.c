undefined8 *
_ZN5uu_cp15copy_attributes17h0ca124c6c7245f78E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 ***param_4,
          undefined8 param_5,undefined *param_6)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 **local_230;
  undefined8 **local_228;
  undefined8 **local_220;
  undefined local_218;
  undefined8 **local_210;
  undefined8 local_208;
  undefined local_200 [8];
  undefined8 **local_1f8;
  undefined8 **local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  long local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 **local_128;
  undefined8 **local_120;
  undefined8 **local_118;
  code *local_110;
  long *local_108;
  code *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 *local_e0;
  undefined8 **local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined local_c0 [144];
  
  local_230 = (undefined8 **)0x1;
  local_218 = 1;
  local_e0 = (undefined8 **)0x1;
  uStack_c8 = CONCAT31(uStack_c8._1_3_,1);
  local_118 = &local_230;
  local_110 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
  ;
  local_108 = (long *)&local_e0;
  local_100 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E
  ;
  local_1e8 = (undefined8 **)&DAT_002b5e68;
  uStack_1e0 = (undefined8 ***)0x2;
  local_1c8 = 0;
  local_1d8 = &local_118;
  uStack_1d0 = 2;
  local_228 = (undefined8 **)param_2;
  local_220 = (undefined8 **)param_3;
  local_210 = param_4;
  local_208 = param_5;
  local_138 = param_2;
  local_130 = param_3;
  local_d8 = param_4;
  local_d0 = param_5;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h805a87bba4bea7c2E(local_200,&local_1e8);
  local_128 = local_1f8;
  local_120 = local_1f0;
                    /* try { // try from 00205094 to 002050d1 has its CatchHandler @ 00205274 */
  _ZN3std2fs16symlink_metadata17h8589e79b0a107deeE(&local_1e8,param_2,param_3);
  pppuVar2 = uStack_1e0;
  ppuVar1 = local_1e8;
  if (local_1e8 == (undefined8 **)0x2) {
    local_230 = local_1f8;
    local_228 = local_1f0;
    local_220 = uStack_1e0;
    _ZN119__LT_uu_cp__Error_u20_as_u20_core__convert__From_LT_quick_error__Context_LT__RF_str_C_std__io__error__Error_GT__GT__GT_4from17h54c083f413b93682E
              (&local_1e8,&local_230);
  }
  else {
    local_f8 = (undefined4)local_1d8;
    uStack_f4 = local_1d8._4_4_;
    uStack_f0 = (undefined4)uStack_1d0;
    uStack_ec = uStack_1d0._4_4_;
    (*(code *)PTR_memcpy_002bbe30)(local_c0,&local_1c8,0x90);
    local_e0 = ppuVar1;
    local_d8 = pppuVar2;
    local_d0 = CONCAT44(uStack_f4,local_f8);
    uStack_c8 = uStack_f0;
    uStack_c4 = uStack_ec;
    local_230 = &local_e0;
                    /* try { // try from 00205149 to 002051ee has its CatchHandler @ 00205274 */
    local_228 = &local_210;
    local_220 = &local_128;
    _ZN5uu_cp15handle_preserve17h88839891003e3dd9E(&local_1e8,*param_6,param_6[1],&local_230);
    if ((int)local_1e8 == 0xd) {
      local_228 = &local_e0;
      local_230 = &local_210;
      local_220 = &local_128;
      _ZN5uu_cp15handle_preserve17h61971e46c5a3aa58E(&local_1e8,param_6[2],param_6[3],&local_230);
      if (local_1e8 == (undefined8 **)0xd) {
        _ZN5uu_cp15handle_preserve17hdf8d6c66ba5c03edE
                  (&local_1e8,param_6[4],param_6[5],&local_e0,&local_210);
        if (local_1e8 == (undefined8 **)0xd) {
          _ZN5uu_cp15handle_preserve17h1b7507cebf9b4fa2E
                    (&local_1e8,param_6[10],param_6[0xb],&local_138,&local_210);
          if (local_1e8 == (undefined8 **)0xd) {
            *param_1 = 0xd;
            goto LAB_00205255;
          }
        }
      }
      param_1[7] = uStack_1b0;
      param_1[5] = uStack_1c0;
      param_1[6] = local_1b8;
      param_1[3] = uStack_1d0;
      param_1[4] = local_1c8;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1e0;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_1e0._4_4_;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_1d8;
      *(undefined4 *)((long)param_1 + 0x14) = local_1d8._4_4_;
      *param_1 = local_1e8;
      goto LAB_00205255;
    }
  }
  param_1[6] = local_1b8;
  param_1[7] = uStack_1b0;
  param_1[4] = local_1c8;
  param_1[5] = uStack_1c0;
  param_1[2] = local_1d8;
  param_1[3] = uStack_1d0;
  *(int *)param_1 = (int)local_1e8;
  *(undefined4 *)((long)param_1 + 4) = local_1e8._4_4_;
  *(undefined4 *)(param_1 + 1) = (undefined4)uStack_1e0;
  *(undefined4 *)((long)param_1 + 0xc) = uStack_1e0._4_4_;
LAB_00205255:
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h5bdd96f6f34778b9E(local_200);
  return param_1;
}