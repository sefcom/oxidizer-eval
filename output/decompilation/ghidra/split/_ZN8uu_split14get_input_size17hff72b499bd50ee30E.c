undefined8
_ZN8uu_split14get_input_size17hff72b499bd50ee30E
          (long param_1,undefined *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  char cVar1;
  undefined auVar2 [16];
  undefined4 local_11c;
  long local_118;
  long *local_110;
  code *local_108;
  undefined8 local_100;
  ulong local_f8;
  long **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulong local_b0;
  undefined local_50 [24];
  undefined local_38 [24];
  
  local_118 = param_1;
  if (param_4 == 0) {
    param_5 = _ZN6uucore8features2fs12sane_blksize22sane_blksize_from_path17haa29efd65464ae5dE
                        (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  local_100 = param_2;
  local_f8 = param_5;
  auVar2 = _ZN3std2io19default_read_to_end17h83389f9d77e2b24fE(&local_100,param_3,0);
  if (auVar2._0_8_ == 0) {
    if (auVar2._8_8_ < param_5) {
      return 0;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hfe60e619d7fc1608E
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),"-",1);
    if (cVar1 == '\0') {
      _ZN3std2fs8metadata17h341dbab23461c7c8E(&local_100,param_1);
      if ((int)local_100 != 2) {
        if (auVar2._8_8_ <= local_b0) {
          return 0;
        }
        _ZN3std2fs4File4open17hf05dc8e7da5fafe3E
                  (&local_100,*(undefined8 *)(local_118 + 8),*(undefined8 *)(local_118 + 0x10));
        if ((int)local_100 == 0) {
          local_11c = local_100._4_4_;
                    /* try { // try from 001cbd85 to 001cbe3c has its CatchHandler @ 001cbe42 */
          auVar2 = _ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17hf141ef1001f771f9E
                             (&local_11c,1,0);
          if (auVar2._0_8_ == 0) {
            if (auVar2._8_8_ != 0) {
              _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hc63c21dac960bcdfE(&local_11c);
              return 0;
            }
            local_110 = &local_118;
            local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haeb779686b12abb9E;
            local_100 = &DAT_002483c0;
            local_f8 = 2;
            local_e0 = 0;
            local_f0 = &local_110;
            local_e8 = 1;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E(local_50,0,&local_100)
            ;
            _ZN3std2io5error5Error3new17hd2fa1afc07f95968E(0x27,local_50);
          }
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hc63c21dac960bcdfE(&local_11c);
        }
      }
    }
    else {
      local_110 = &local_118;
      local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17haeb779686b12abb9E;
      local_100 = &DAT_002483a0;
      local_f8 = 2;
      local_e0 = 0;
      local_f0 = &local_110;
      local_e8 = 1;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17ha1a29b635627d471E(local_38,0,&local_100);
      _ZN3std2io5error5Error3new17hd2fa1afc07f95968E(0x27,local_38);
    }
  }
  return 1;
}