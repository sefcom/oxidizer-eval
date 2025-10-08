void _ZN3bat6assets12build_assets12write_assets17h8e8b3ddd7aea9158E
               (undefined4 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined auStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined *local_40;
  code *local_38;
  
  local_90 = (undefined **)_ZN3std2fs14create_dir_all17h0be3d84d3a1bae95E(param_5,param_6);
  _ZN4core3ptr70drop_in_place_LT_core__option__Option_LT_std__io__error__Error_GT__GT_17hd82f0dd660d43339E
            (&local_90);
  _ZN3std4path4Path4join17hb97e165d6abf39bfE(auStack_b8,param_5,param_6,&DAT_0019fb0c,10);
                    /* try { // try from 00534202 to 0053420e has its CatchHandler @ 00534448 */
  _ZN3bat6assets12build_assets14asset_to_cache17hceb6e937789f3ec5E
            (&local_90,param_2,local_b0,local_a8);
  if ((char)local_90 == '\r') {
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(auStack_b8);
    _ZN3std4path4Path4join17hb97e165d6abf39bfE(auStack_b8,param_5,param_6,&DAT_0019fb00,0xc);
                    /* try { // try from 00534247 to 00534253 has its CatchHandler @ 00534446 */
    _ZN3bat6assets12build_assets14asset_to_cache17h5a185e70a879210fE
              (&local_90,param_3,local_b0,local_a8);
    if ((char)local_90 == '\r') {
      _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(auStack_b8);
      _ZN3std4path4Path4join17hb97e165d6abf39bfE(auStack_b8,param_5,param_6,&DAT_00291b82,0x14);
                    /* try { // try from 005342a1 to 005342aa has its CatchHandler @ 0053441e */
      _ZN3bat6assets12build_assets14asset_to_cache17hd02c86fbcb644917E
                (&local_90,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),local_b0,
                 local_a8);
      if ((char)local_90 == '\r') {
        _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(auStack_b8);
        (*(code *)PTR__ZN5alloc6string6String15from_utf8_lossy17h880ad8b337de96e9E_008075f0)
                  (auStack_b8,param_5,param_6);
        local_38 = 
        _ZN66__LT_alloc__borrow__Cow_LT_B_GT__u20_as_u20_core__fmt__Display_GT_3fmt17h5fba9a975e51dcf1E
        ;
        local_90 = &PTR_DAT_007ce0d8;
        uStack_88 = 2;
        uStack_70 = 0;
        local_80 = &local_40;
        uStack_78 = 1;
                    /* try { // try from 00534312 to 0053431c has its CatchHandler @ 00534433 */
        local_40 = auStack_b8;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_90);
        _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_alloc__string__String_C_std__path__StripPrefixError_GT__GT_17h7b85c5c873696979E
                  (auStack_b8);
        _ZN3bat6assets15assets_metadata14AssetsMetadata3new17h19ae9540b0248af9E
                  (auStack_b8,param_7,param_8);
                    /* try { // try from 00534346 to 00534358 has its CatchHandler @ 00534420 */
        _ZN3bat6assets15assets_metadata14AssetsMetadata14save_to_folder17hae67b37f18712a05E
                  (&local_90,auStack_b8,param_5,param_6);
        if ((char)local_90 == '\r') {
          _ZN4core3ptr65drop_in_place_LT_bat__assets__assets_metadata__AssetsMetadata_GT_17h8cc3753e3db2669aE
                    (auStack_b8);
          local_90 = &PTR_DAT_007ce0f8;
          uStack_88 = 1;
          local_80 = (undefined **)0x8;
          uStack_78 = 0;
          uStack_70 = 0;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00807960)(&local_90);
          *(undefined *)param_1 = 0xd;
          return;
        }
        *(undefined8 *)(param_1 + 0x10) = local_50;
        *(undefined8 *)(param_1 + 0x12) = uStack_48;
        param_1[0xc] = local_60;
        param_1[0xd] = uStack_5c;
        param_1[0xe] = uStack_58;
        param_1[0xf] = uStack_54;
        param_1[8] = (undefined4)uStack_70;
        param_1[9] = uStack_70._4_4_;
        param_1[10] = uStack_68;
        param_1[0xb] = uStack_64;
        param_1[4] = (undefined4)local_80;
        param_1[5] = local_80._4_4_;
        param_1[6] = (undefined4)uStack_78;
        param_1[7] = uStack_78._4_4_;
        *param_1 = (undefined4)local_90;
        param_1[1] = local_90._4_4_;
        param_1[2] = (undefined4)uStack_88;
        param_1[3] = uStack_88._4_4_;
        _ZN4core3ptr65drop_in_place_LT_bat__assets__assets_metadata__AssetsMetadata_GT_17h8cc3753e3db2669aE
                  (auStack_b8);
        return;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = local_50;
  *(undefined8 *)(param_1 + 0x12) = uStack_48;
  param_1[0xc] = local_60;
  param_1[0xd] = uStack_5c;
  param_1[0xe] = uStack_58;
  param_1[0xf] = uStack_54;
  param_1[8] = (undefined4)uStack_70;
  param_1[9] = uStack_70._4_4_;
  param_1[10] = uStack_68;
  param_1[0xb] = uStack_64;
  param_1[4] = (undefined4)local_80;
  param_1[5] = local_80._4_4_;
  param_1[6] = (undefined4)uStack_78;
  param_1[7] = uStack_78._4_4_;
  *param_1 = (undefined4)local_90;
  param_1[1] = local_90._4_4_;
  param_1[2] = (undefined4)uStack_88;
  param_1[3] = uStack_88._4_4_;
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hf251af593e1b1affE(auStack_b8);
  return;
}