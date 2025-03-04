void _ZN6uu_cat8cat_path17h3f1de2b8bdfd86c8E
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long *param_6)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined7 uStack_bf;
  undefined local_b8;
  undefined7 uStack_b7;
  
  local_d0 = param_5;
  _ZN6uu_cat14get_input_type17h6ff27855215d6960E(&local_c8);
  if (local_c8 == -0x7ffffffffffffffa) {
    if (local_c0 == '\0') {
      *param_1 = -0x7ffffffffffffffd;
    }
    else if (local_c0 == '\x02') {
      uVar2 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
      local_d8 = _ZN3std2io5stdio5stdin17h7215cc131abb55d8E();
      local_c0 = _ZN3std3sys3pal4unix2io11is_terminal17h1ed5dafcafc72212E(&local_d8);
      local_c8 = uVar2;
      _ZN6uu_cat10cat_handle17h2310985edbce98d4E(param_1,&local_c8,param_4,local_d0);
    }
    else {
      if (local_c0 == '\a') {
        _ZN3std2os4unix3net6stream10UnixStream7connect17he27f40a192a8e4ebE();
        if ((int)local_c8 == 0) {
          uVar3 = local_c8._4_4_;
          local_d8 = CONCAT44(local_d8._4_4_,local_c8._4_4_);
                    /* try { // try from 001aee37 to 001aee44 has its CatchHandler @ 001aefd9 */
          lVar1 = _ZN3std2os4unix3net8datagram12UnixDatagram8shutdown17h32e579a9325191d8E
                            (&local_d8,1);
          if (lVar1 != 0) {
            *param_1 = -0x8000000000000000;
            param_1[1] = lVar1;
            _ZN4core3ptr59drop_in_place_LT_std__os__unix__net__stream__UnixStream_GT_17ha55321e5b25e8ec9E
                      (uVar3);
            return;
          }
          local_c8._0_5_ = (uint5)uVar3;
                    /* try { // try from 001aef31 to 001aef45 has its CatchHandler @ 001aefb1 */
          _ZN6uu_cat10cat_handle17hd11b5f8e6960e509E(param_1,&local_c8,param_4,local_d0);
          _ZN4core3ptr86drop_in_place_LT_uu_cat__InputHandle_LT_std__os__unix__net__stream__UnixStream_GT__GT_17ha5653865c3424521E
                    ((int)local_c8);
          return;
        }
      }
      else {
        _ZN3std2fs4File4open17h11d1745ffe6524fcE(&local_c8,param_2,param_3);
        if ((int)local_c8 == 0) {
          uVar3 = local_c8._4_4_;
          local_d8 = CONCAT44(local_d8._4_4_,local_c8._4_4_);
                    /* try { // try from 001aeef6 to 001aef22 has its CatchHandler @ 001aefeb */
          if ((param_6 != (long *)0x0) &&
             (lVar1 = _ZN6uucore8features2fs15FileInformation9file_size17h0d1880e968de69d5E(param_6)
             , lVar1 != 0)) {
            _ZN6uucore8features2fs15FileInformation9from_file17hbfeeabf3f9b0206fE
                      (&local_c8,&local_d8);
            if (local_c8 == 0) {
              if ((CONCAT71(uStack_bf,local_c0) == *param_6) &&
                 (CONCAT71(uStack_b7,local_b8) == param_6[1])) {
                *param_1 = -0x7ffffffffffffffc;
                _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h59c27c7970f16c5fE(uVar3);
                return;
              }
            }
            else {
              _ZN4core3ptr110drop_in_place_LT_core__result__Result_LT_uucore__features__fs__FileInformation_C_std__io__error__Error_GT__GT_17h88aced0ed65ad377E
                        (&local_c8);
              uVar3 = (uint)local_d8;
            }
          }
          local_c8._0_5_ = (uint5)uVar3;
                    /* try { // try from 001aef81 to 001aef95 has its CatchHandler @ 001aefc5 */
          _ZN6uu_cat10cat_handle17h13bdbf50278acfc8E(param_1,&local_c8,param_4,local_d0);
          _ZN4core3ptr61drop_in_place_LT_uu_cat__InputHandle_LT_std__fs__File_GT__GT_17hc879bc74ba17ed2fE
                    ((int)local_c8);
          return;
        }
      }
      *param_1 = -0x8000000000000000;
      param_1[1] = CONCAT71(uStack_bf,local_c0);
    }
  }
  else {
    param_1[2] = CONCAT71(uStack_b7,local_b8);
    *(ulong *)((long)param_1 + 9) = CONCAT17(local_b8,uStack_bf);
    *param_1 = local_c8;
    *(char *)(param_1 + 1) = local_c0;
  }
  return;
}