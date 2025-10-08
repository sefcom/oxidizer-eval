long _ZN8uu_mkdir10create_dir17hfbbf39588947948cE
               (undefined8 *param_1,undefined8 param_2,char param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined local_150 [16];
  undefined8 *local_140;
  code *local_138;
  undefined8 *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  _ZN3std2fs8metadata17h6b8d15ae85f42ce6E(&local_e0,param_1,param_2);
  puVar2 = local_e0;
  _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hd8a7744016ac23d6E
            (local_e0,local_d8);
  puVar1 = PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_001f4a98;
  if ((puVar2 == (undefined *)0x2) || (*(char *)(param_4 + 0xc) != '\0')) {
    (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_001f4a98)
              (&local_120,param_1,param_2);
    lVar6 = 0;
    (*(code *)puVar1)(&local_e0,1,0);
    cVar3 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17hd9623c64792f17b1E
                      (&local_120,&local_e0);
    if (cVar3 == '\0') {
      if (*(char *)(param_4 + 0xc) != '\0') {
        auVar8 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_001f4aa0)
                           (param_1,param_2);
        if (auVar8._0_8_ == 0) {
          _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17h09085b3eedcee021E
                    (&local_e0,"f",0x1b);
          local_c8 = CONCAT44(local_c8._4_4_,1);
          uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5788815961083ce5E(&local_e0);
          _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17had00d84193dcc420E
                    (uVar7,&
                           PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h3711df87dd7b9a12E_001ede60
                    );
        }
        else {
          lVar6 = _ZN8uu_mkdir10create_dir17hfbbf39588947948cE(auVar8._0_8_,auVar8._8_8_,1,param_4);
          if (lVar6 != 0) {
            return lVar6;
          }
        }
      }
      lVar6 = _ZN3std2fs10create_dir17h1034eabddbb2ef35E(param_1,param_2);
      if (lVar6 == 0) {
        if (*(char *)(param_4 + 0xd) != '\0') {
          local_150 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f4908)();
          local_120 = 1;
          local_108 = CONCAT31(local_108._1_3_,1);
          local_140 = (undefined8 *)local_150;
          local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f8342cc4ae57580E;
          local_130 = &local_120;
          local_128 = 
          PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f4a90
          ;
          local_e0 = &DAT_001edef8;
          local_d8 = 3;
          local_c0 = 0;
          local_d0 = &local_140;
          local_c8 = 2;
          local_118 = param_1;
          local_110 = param_2;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001f4ab8)(&local_e0);
        }
        if ((int)puVar2 == 2) {
          uVar4 = _ZN6uucore8features7fsxattr28get_acl_perm_bits_from_xattr17hcf1b9ddb092fba14E
                            (param_1,param_2);
          if (param_3 == '\0') {
            uVar4 = uVar4 | *(uint *)(param_4 + 8);
          }
          else {
            uVar5 = (*(code *)PTR__ZN6uucore8features4mode9get_umask17h22fe72fd4e3f2e99E_001f4a58)()
            ;
            uVar4 = uVar4 | uVar5 & 0x13f ^ 0x1ff;
          }
        }
        else {
          uVar4 = *(uint *)(param_4 + 8);
        }
        lVar6 = _ZN8uu_mkdir5chmod17h277b932bb3f300b3E(param_1,param_2,uVar4);
      }
      else {
                    /* try { // try from 001606f1 to 001606ff has its CatchHandler @ 00160839 */
        cVar3 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_001f4ab0)
                          (param_1,param_2);
        if (cVar3 == '\0') {
          lVar6 = (*(code *)
                    PTR__ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17h7b5f769e1554bcc2E_001f4ac0
                  )(lVar6);
        }
        else {
          _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17hca385262aaa5c047E();
          lVar6 = 0;
        }
      }
    }
  }
  else {
    local_150._0_8_ = &local_140;
    local_150._8_8_ =
         PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_001f4aa8
    ;
    local_e0 = &DAT_001eded8;
    local_d8 = 2;
    local_c0 = 0;
    local_d0 = (undefined8 **)local_150;
    local_c8 = 1;
    local_140 = param_1;
    local_138 = (code *)param_2;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h568d5256e3b46ecaE(&local_120,&local_e0);
    local_108 = 1;
    lVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h5788815961083ce5E(&local_120);
  }
  return lVar6;
}