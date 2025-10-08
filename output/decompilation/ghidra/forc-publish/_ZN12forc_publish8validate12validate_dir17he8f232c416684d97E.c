undefined *
_ZN12forc_publish8validate12validate_dir17he8f232c416684d97E
          (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 uStack_177;
  undefined4 uStack_173;
  undefined4 uStack_16f;
  undefined4 uStack_16b;
  undefined7 uStack_167;
  undefined8 local_160;
  long local_158;
  char *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined local_e8 [8];
  undefined8 uStack_e0;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  _ZN3std4path4Path4join17h3d685c86d6c853ecE(&local_190,param_2,param_3,"Forc.toml",9);
                    /* try { // try from 00765372 to 00765396 has its CatchHandler @ 0076558f */
  _ZN3std2fs8metadata17h581a12f35fd9c335E(&local_d0,local_188,local_180);
  lVar4 = local_d0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hec7eb2b2c600b37eE
            (&local_d0);
  if ((int)lVar4 == 2) {
    *param_1 = 7;
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h355ad17cb4a62d71E(local_190,local_188);
  }
  else {
    _ZN92__LT_forc_pkg__manifest__ManifestFile_u20_as_u20_forc_pkg__manifest__GenericManifestFile_GT_9from_file17h95910e80f785b4d1E
              (&local_d0,&local_190);
    pcVar3 = local_c8;
    if (local_d0 == 3) {
      *param_1 = 8;
      *(char **)(param_1 + 8) = local_c8;
    }
    else {
      local_f8 = local_70;
      uStack_f0 = uStack_68;
      local_108 = local_80;
      uStack_100 = uStack_78;
      local_118 = local_90;
      uStack_110 = uStack_88;
      local_128 = local_a0;
      uStack_120 = uStack_98;
      local_138 = local_b0;
      uStack_130 = uStack_a8;
      local_148 = (undefined4)local_c0;
      uStack_144 = local_c0._4_4_;
      uStack_140 = uStack_b8;
      uStack_13c = uStack_b4;
      local_158 = local_d0;
      local_150 = local_c8;
      if (local_d0 == 2) {
        if (*(long *)(local_c8 + 0x2b8) == 0) {
          *param_1 = 9;
        }
        else {
          cVar2 = *local_c8;
          pcVar1 = local_c8 + 8;
          local_c8 = (char *)0x0;
          if (cVar2 != '\0') {
            local_c8 = pcVar1;
          }
          local_d0 = 1;
          local_c0 = 2;
          uStack_78 = 2;
          do {
                    /* try { // try from 007654b0 to 007654b7 has its CatchHandler @ 0076556b */
            auVar5 = _ZN116__LT_core__iter__adapters__flatten__FlattenCompat_LT_I_C_U_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hdcb55dbc3f3e157fE
                               (&local_d0);
            if (auVar5._0_8_ == 0) {
                    /* try { // try from 00765550 to 00765557 has its CatchHandler @ 00765566 */
              _ZN4core3ptr85drop_in_place_LT_alloc__boxed__Box_LT_forc_pkg__manifest__PackageManifestFile_GT__GT_17h6c47a145eefb26d5E
                        (pcVar3);
              *param_1 = 0xe;
              if ((int)local_158 == 2) {
                return param_1;
              }
              goto LAB_00765534;
            }
            lVar4 = _ZN8forc_pkg8manifest10Dependency7version17h8c7836e218bd83aeE(auVar5._8_8_);
          } while (lVar4 != 0);
                    /* try { // try from 007654d1 to 007654e1 has its CatchHandler @ 00765564 */
          (*(code *)
            PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_01048f70
          )(local_e8,auVar5._0_8_);
          local_160 = local_d8;
          uStack_173._3_1_ = local_e8[0];
          uStack_16f = local_e8._1_4_;
          uStack_16b._0_3_ = local_e8._5_3_;
          uStack_16b._3_1_ = (undefined)uStack_e0;
          uStack_167 = (undefined7)((ulong)uStack_e0 >> 8);
          *param_1 = 0xb;
          *(undefined4 *)(param_1 + 1) = uStack_177;
          *(undefined4 *)(param_1 + 5) = uStack_173;
          *(undefined4 *)(param_1 + 9) = uStack_16f;
          *(undefined4 *)(param_1 + 0xd) = uStack_16b;
          *(undefined8 *)(param_1 + 0x10) = uStack_e0;
          *(undefined8 *)(param_1 + 0x18) = local_d8;
        }
                    /* try { // try from 00765524 to 0076552b has its CatchHandler @ 00765566 */
        _ZN4core3ptr85drop_in_place_LT_alloc__boxed__Box_LT_forc_pkg__manifest__PackageManifestFile_GT__GT_17h6c47a145eefb26d5E
                  (pcVar3);
        if (local_158 == 2) {
          return param_1;
        }
      }
      else {
        *param_1 = 10;
      }
LAB_00765534:
      _ZN4core3ptr53drop_in_place_LT_forc_pkg__manifest__ManifestFile_GT_17h4985899b1030685aE
                (&local_158);
    }
  }
  return param_1;
}