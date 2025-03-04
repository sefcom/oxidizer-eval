long _ZN8uu_mkdir10create_dir17ha7ee258293152955E
               (undefined8 *param_1,undefined8 param_2,char param_3,char param_4,char param_5,
               uint param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined auVar8 [16];
  undefined local_160 [16];
  undefined *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  code *local_138;
  undefined8 *local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 **local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  
  _ZN3std2fs8metadata17hde9f2ae1e0e2ce8dE(&local_e0,param_1,param_2);
  puVar2 = local_e0;
  if (local_e0 == (undefined *)0x2) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hda5a6707fa3c012cE
              (2,local_d8);
  }
  else {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_std__fs__Metadata_C_std__io__error__Error_GT__GT_17hda5a6707fa3c012cE
              (local_e0,local_d8);
    if (param_3 == '\0') {
      local_160._0_8_ = &local_140;
      local_160._8_8_ =
           _ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h5a3c32fa16876e76E;
      local_e0 = &DAT_002205e8;
      local_d8 = 2;
      local_c0 = 0;
      local_d0 = (undefined8 **)local_160;
      local_c8 = 1;
      local_140 = param_1;
      local_138 = (code *)param_2;
      _ZN4core6option15Option_LT_T_GT_11map_or_else17h6db0321d2b87c404E(&local_120,&local_e0);
      local_108 = 1;
      lVar6 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h121d1d0fd1fc2533E(&local_120);
      return lVar6;
    }
  }
  local_150 = puVar2;
  local_148 = param_1;
  _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_120,param_1);
  lVar6 = 0;
  _ZN3std4path4Path10components17h4f3217acf0fc8653E(&local_e0,1,0);
  cVar3 = _ZN62__LT_std__path__Components_u20_as_u20_core__cmp__PartialEq_GT_2eq17h5cac1ec2999e76daE
                    (&local_120,&local_e0);
  puVar1 = local_148;
  if (cVar3 == '\0') {
    if (param_3 != '\0') {
      auVar8 = _ZN3std4path4Path6parent17h65c9a340a6266f2dE(local_148,param_2);
      if (auVar8._0_8_ == 0) {
        _ZN52__LT_T_u20_as_u20_alloc__slice__hack__ConvertVec_GT_6to_vec17ha4208e868ecb88ccE
                  (&local_e0,"failed to create whole tree: created directory ",0x1b);
        local_c8 = CONCAT44(local_c8._4_4_,1);
        uVar7 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h121d1d0fd1fc2533E(&local_e0);
        _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h71810d9408842807E
                  (uVar7,&
                         PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17haa818b4079118720E_00220578
                  );
      }
      else {
        lVar6 = _ZN8uu_mkdir10create_dir17ha7ee258293152955E
                          (auVar8._0_8_,auVar8._8_8_,1,param_4,1,param_6);
        if (lVar6 != 0) {
          return lVar6;
        }
      }
    }
    lVar6 = _ZN3std2fs10create_dir17h301da8cdba059b54E(puVar1,param_2);
    if (lVar6 == 0) {
      if (param_4 != '\0') {
        local_160 = _ZN6uucore9util_name17h60d842bf27b05e82E();
        local_120 = 1;
        local_118 = puVar1;
        local_108 = CONCAT31(local_108._1_3_,1);
        local_140 = (undefined8 *)local_160;
        local_138 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfd6a55cddc5280deE;
        local_128 = 
        _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
        local_e0 = &DAT_00220608;
        local_d8 = 3;
        local_c0 = 0;
        local_d0 = &local_140;
        local_c8 = 2;
        local_130 = &local_120;
        local_110 = param_2;
        _ZN3std2io5stdio6_print17he918bceb0c89db46E(&local_e0);
      }
      if ((int)local_150 == 2) {
        uVar4 = _ZN6uucore8features7fsxattr28get_acl_perm_bits_from_xattr17h877432bdc0435850E
                          (puVar1,param_2);
        if (param_5 != '\0') {
          uVar5 = _ZN6uucore8features4mode9get_umask17hd2aa58752ad993faE();
          param_6 = uVar5 & 0x13f ^ 0x1ff;
        }
        param_6 = param_6 | uVar4;
      }
      lVar6 = _ZN8uu_mkdir5chmod17hedcae91ac0dc9632E(puVar1,param_2,param_6);
    }
    else {
                    /* try { // try from 001b3057 to 001b3065 has its CatchHandler @ 001b3191 */
      cVar3 = _ZN3std4path4Path6is_dir17h9ac0db933706da51E(puVar1,param_2);
      if (cVar3 == '\0') {
        lVar6 = _ZN6uucore4mods5error139__LT_impl_u20_core__convert__From_LT_std__io__error__Error_GT__u20_for_u20_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_4from17hcd961c31063bf4faE
                          (lVar6);
      }
      else {
        _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h3ed53d85887f0f2dE();
        lVar6 = 0;
      }
    }
  }
  return lVar6;
}