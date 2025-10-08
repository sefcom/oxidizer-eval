undefined8
_ZN8uu_split14get_input_size17h76e4bf9c0daaab1cE
          (long param_1,undefined *param_2,undefined8 param_3,ulong param_4,undefined **param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  long local_118;
  undefined *local_110;
  code *local_108;
  undefined *local_100;
  code *local_f8;
  undefined8 local_e8;
  undefined **local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined **local_98;
  undefined local_38 [24];
  
  local_118 = param_1;
  if ((param_4 & 1) == 0) {
    param_5 = (undefined **)
              (*(code *)
                PTR__ZN6uucore8features2fs12sane_blksize22sane_blksize_from_path17h50cbcdc20fa4ef11E_00212130
              )(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  }
  local_e8 = param_2;
  local_e0 = param_5;
  local_d8 = param_5;
  auVar3 = _ZN3std2io19default_read_to_end17hb855d02ac9073fedE(&local_e8,param_3);
  if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    if (auVar3._8_8_ < param_5) {
      return 0;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb641e38be83010ceE
                      (*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),"-",1);
    if (cVar1 == '\0') {
      _ZN3std2fs8metadata17h87fecb55dab6d3ccE(&local_e8,param_1);
      if ((int)local_e8 != 2) {
        if (auVar3._8_8_ <= local_98) {
          return 0;
        }
        _ZN3std2fs4File4open17h02f17a72580f2f54E
                  (&local_e8,*(undefined8 *)(local_118 + 8),*(undefined8 *)(local_118 + 0x10));
        if (((ulong)local_e8 & 1) == 0) {
          local_110 = (undefined *)CONCAT44(local_110._4_4_,local_e8._4_4_);
                    /* try { // try from 0016f2b3 to 0016f364 has its CatchHandler @ 0016f37a */
          auVar3 = (*(code *)
                     PTR__ZN47__LT_std__fs__File_u20_as_u20_std__io__Seek_GT_4seek17h04cf64217ea00d1dE_00212138
                   )(&local_110,1,0);
          if ((auVar3 & (undefined  [16])0x1) == (undefined  [16])0x0) {
            if (auVar3._8_8_ != 0) {
              _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17ha5fa7a96942ad614E(&local_110);
              return 0;
            }
            local_f8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfe3dd68d76795a20E;
            local_e8 = &DAT_0020aee8;
            local_e0 = (undefined **)0x2;
            local_c8 = 0;
            local_d8 = &local_100;
            local_d0 = 1;
            local_100 = (undefined *)&local_118;
            _ZN4core6option15Option_LT_T_GT_11map_or_else17he9a9868ebfde35f3E(local_38,0,&local_e8);
            uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8b7f7ad758f1175cE(local_38);
            (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_002120e8)
                      (0x28,uVar2,
                       &
                       PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h0677701f86cc2b4eE_0020ad88
                      );
          }
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17ha5fa7a96942ad614E(&local_110);
        }
      }
    }
    else {
      local_108 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfe3dd68d76795a20E;
      local_e8 = &DAT_0020aec8;
      local_e0 = (undefined **)0x2;
      local_c8 = 0;
      local_d8 = &local_110;
      local_d0 = 1;
      local_110 = (undefined *)&local_118;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17he9a9868ebfde35f3E(&local_100,0,&local_e8);
      uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h8b7f7ad758f1175cE(&local_100);
      (*(code *)PTR__ZN3std2io5error5Error4_new17hbf6e5d7f23cac6f9E_002120e8)
                (0x28,uVar2,
                 &
                 PTR__ZN4core3ptr238drop_in_place_LT_alloc__boxed__convert___LT_impl_u20_core__convert__From_LT_alloc__string__String_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_core__error__Error_u2b_core__marker__Send_u2b_core__marker__Sync_GT__GT___from__StringError_GT_17h0677701f86cc2b4eE_0020ad88
                );
    }
  }
  return 1;
}