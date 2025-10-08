undefined **
_ZN10uu_install9copy_file17h9c5ec538cb19a460E
          (undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  undefined **ppuVar5;
  int __fd;
  long local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined local_138 [16];
  undefined *local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined **local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  uint local_a8;
  
  _ZN3std2fs12canonicalize17h1b4e1f9abe878e79E(&local_168,param_3,param_4);
  uVar2 = local_158;
  uVar1 = uStack_160;
                    /* try { // try from 00168cf8 to 00168d2f has its CatchHandler @ 0016912e */
  _ZN3std2fs12canonicalize17h1b4e1f9abe878e79E(&local_e0,param_1,param_2);
  if (local_e0 == (undefined **)&DAT_8000000000000000) {
    ppuVar5 = (undefined **)
              (*(code *)
                PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00209b70
              )();
  }
  else {
    local_138._0_8_ = local_e0;
    local_138._8_8_ = uStack_d8;
    local_128 = (undefined *)local_d0;
                    /* try { // try from 00168d52 to 00168d5c has its CatchHandler @ 0016910c */
    cVar4 = _ZN59__LT_std__path__PathBuf_u20_as_u20_core__cmp__PartialEq_GT_2eq17h35303d53f5dfabe5E
                      (uStack_d8,local_d0,uVar1,uVar2);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(local_138);
    if (cVar4 == '\0') {
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_168);
      cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20)(param_3,param_4);
      if ((cVar4 != '\0') &&
         (cVar4 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00209c20)
                            (param_1,param_2), cVar4 == '\0')) {
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
                  (&local_168,param_3,param_4);
                    /* try { // try from 00168f08 to 00168f14 has its CatchHandler @ 001690ee */
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0734b0984fa3fab3E
                  (&local_e0,uStack_160,local_158);
        local_e8 = (undefined *)local_d0;
        local_f8._0_4_ = SUB84(local_e0,0);
        local_f8._4_4_ = local_e0._4_4_;
        uStack_f0 = (undefined4)uStack_d8;
        uStack_ec = uStack_d8._4_4_;
                    /* try { // try from 00168f32 to 00168f42 has its CatchHandler @ 001690e4 */
        (*(code *)
          PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
                  (&local_150,param_1,param_2);
                    /* try { // try from 00168f4d to 00168f56 has its CatchHandler @ 001690d0 */
        _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h0734b0984fa3fab3E
                  (local_138,uStack_148,local_140);
        local_b0 = local_128;
        local_c0 = (undefined **)local_138._0_8_;
        puStack_b8 = (undefined *)local_138._8_8_;
        uStack_d8 = (undefined *)CONCAT44(local_f8._4_4_,(undefined4)local_f8);
        local_d0 = (undefined **)CONCAT44(uStack_ec,uStack_f0);
        local_c8 = local_e8;
        local_e0 = (undefined **)0xf;
                    /* try { // try from 00168f9a to 00168fa6 has its CatchHandler @ 001690c6 */
        ppuVar5 = (undefined **)_ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_e0);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_150);
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_168);
        return ppuVar5;
      }
      local_f8 = (undefined *)_ZN3std2fs11remove_file17ha0580a66a1a287afE(param_3,param_4);
      if (local_f8 == (undefined *)0x0) {
        _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hb3cb1d78c02156cfE
                  (&local_f8);
      }
      else {
        local_168 = (long)local_f8;
        cVar4 = _ZN3std2io5error5Error4kind17h135fe00c4e7365f3E(local_f8);
        if (cVar4 != '\0') {
                    /* try { // try from 00168bf3 to 00168ce0 has its CatchHandler @ 0016911b */
          local_138 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_00209820)();
          local_150 = local_138;
          uStack_148 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb0c432d6311a3ddaE;
          local_e0 = (undefined **)&DAT_00202188;
          uStack_d8 = (undefined *)0x2;
          local_c0 = (undefined **)0x0;
          local_c8 = (undefined *)0x1;
          local_d0 = (undefined **)&local_150;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_e0);
          local_138._8_8_ =
               PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_00209c60
          ;
          puStack_120 = 
          PTR__ZN58__LT_std__io__error__Error_u20_as_u20_core__fmt__Debug_GT_3fmt17he152f8cbd3e2b5efE_00209a58
          ;
          local_e0 = &PTR_s_Failed_to_remove_existing_file___002024b8;
          uStack_d8 = (undefined *)0x3;
          local_c0 = (undefined **)0x0;
          local_d0 = (undefined **)local_138;
          local_c8 = (undefined *)0x2;
          local_150 = param_3;
          uStack_148 = (code *)param_4;
          local_138._0_8_ = &local_150;
          local_128 = (undefined *)&local_168;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_00209828)(&local_e0);
        }
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hc7e2d86a53eff0efE(&local_168);
      }
      _ZN3std2fs8metadata17hd1e2f191d36a0fa4E(&local_e0,param_1,param_2);
      puVar3 = uStack_d8;
      if ((int)local_e0 != 2) {
        local_a8 = local_a8 & 0xf000;
        if (((local_a8 != 0x1000) && (local_a8 != 0x6000)) && (local_a8 != 0x2000)) {
          ppuVar5 = (undefined **)
                    _ZN10uu_install16copy_normal_file17h632dca94ec623107E
                              (param_1,param_2,param_3,param_4);
          return ppuVar5;
        }
        _ZN3std2fs4File4open17haf8980391cdd87a0E(&local_e0,param_1,param_2);
        if (((ulong)local_e0 & 1) == 0) {
          __fd = local_e0._4_4_;
          local_150 = (undefined *)CONCAT44(local_150._4_4_,local_e0._4_4_);
                    /* try { // try from 00168fe3 to 0016900d has its CatchHandler @ 001690b4 */
          _ZN3std2fs4File6create17h3f5ad570d4e8c68eE(&local_e0,param_3,param_4);
          if ((int)local_e0 == 1) {
            ppuVar5 = (undefined **)
                      (*(code *)
                        PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00209b70
                      )(uStack_d8);
          }
          else {
            local_138._0_4_ = local_e0._4_4_;
                    /* try { // try from 0016904b to 00169061 has its CatchHandler @ 0016908b */
            _ZN6uucore8features8buf_copy5linux11copy_stream17h7c33e1490bcc37f5E
                      (&local_e0,&local_150,local_138);
            ppuVar5 = local_e0;
            _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h695e44815743ae8fE(local_138._0_4_);
            __fd = (int)local_150;
          }
          _ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17h695e44815743ae8fE(__fd);
          return ppuVar5;
        }
        ppuVar5 = (undefined **)
                  (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_00209b70
                  )(uStack_d8);
        return ppuVar5;
      }
      local_f8 = uStack_d8;
                    /* try { // try from 00168e32 to 00168e40 has its CatchHandler @ 001690fd */
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38
      )(&local_168,param_1,param_2);
                    /* try { // try from 00168e41 to 00168e51 has its CatchHandler @ 001690f0 */
      (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38
      )(&local_150,param_3,param_4);
      local_118 = local_158;
      local_128 = (undefined *)local_168;
      puStack_120 = (undefined *)uStack_160;
      local_110 = (int)local_150;
      uStack_10c = local_150._4_4_;
      uStack_108 = (undefined4)uStack_148;
      uStack_104 = uStack_148._4_4_;
      local_100 = local_140;
      local_138._8_8_ = puVar3;
      local_138._0_8_ = 8;
      ppuVar5 = (undefined **)_ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(local_138);
      return ppuVar5;
    }
                    /* try { // try from 00168d72 to 00168d82 has its CatchHandler @ 0016912e */
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
              (&local_150,param_1,param_2);
                    /* try { // try from 00168d83 to 00168d93 has its CatchHandler @ 001690aa */
    (*(code *)PTR__ZN3std3sys3pal4unix2os11split_paths13bytes_to_path17h3f69b771c0ce4140E_00209c38)
              (local_138,param_3,param_4);
    local_c8 = (undefined *)local_140;
    uStack_d8 = local_150;
    local_d0 = (undefined **)uStack_148;
    local_c0 = (undefined **)local_138._0_8_;
    puStack_b8 = (undefined *)local_138._8_8_;
    local_b0 = local_128;
    local_e0 = (undefined **)&DAT_00000010;
                    /* try { // try from 00168dd4 to 00168de0 has its CatchHandler @ 0016912e */
    ppuVar5 = (undefined **)_ZN5alloc5boxed12Box_LT_T_GT_3new17h1677fe46d8519fedE(&local_e0);
  }
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_168);
  return ppuVar5;
}