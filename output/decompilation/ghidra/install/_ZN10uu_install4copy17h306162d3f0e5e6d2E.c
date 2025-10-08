undefined **
_ZN10uu_install4copy17h306162d3f0e5e6d2E
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 ***local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined **local_a8;
  undefined **local_a0;
  undefined8 **ppuStack_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 **ppuStack_80;
  undefined local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58;
  undefined8 **local_50;
  undefined *local_48;
  undefined8 *local_40;
  undefined *local_38;
  
  if (*(char *)(param_5 + 99) != '\0') {
    _ZN10uu_install9need_copy17h897b20bca7aa9813E(&local_d8,param_1,param_2,param_3,param_4,param_5)
    ;
    if (local_d8 != (undefined **)0x0) {
      return local_d8;
    }
    if ((char)local_d0 == '\0') {
      return (undefined **)0x0;
    }
  }
  _ZN10uu_install14perform_backup17h71eccbd452695050E(&local_d8,param_3,param_4,param_5);
  ppuVar2 = local_d8;
  if (local_d8 == (undefined **)0x8000000000000001) {
    return local_d0;
  }
  local_a8 = local_d8;
  local_a0 = local_d0;
  ppuStack_98 = local_c8;
                    /* try { // try from 00169744 to 00169875 has its CatchHandler @ 0016993f */
  ppuVar3 = (undefined **)
            _ZN10uu_install9copy_file17h9c5ec538cb19a460E(param_1,param_2,param_3,param_4);
  if (((ppuVar3 == (undefined **)0x0) &&
      (((*(char *)(param_5 + 100) == '\0' ||
        (ppuVar3 = (undefined **)
                   _ZN10uu_install10strip_file17hce331b84877bdb5dE(param_3,param_4,param_5),
        ppuVar3 == (undefined **)0x0)) &&
       (ppuVar3 = (undefined **)
                  _ZN10uu_install29set_ownership_and_permissions17h4b3ae3ef285be2d9E
                            (param_3,param_4,param_5), ppuVar3 == (undefined **)0x0)))) &&
     ((*(char *)(param_5 + 0x62) == '\0' ||
      (ppuVar3 = (undefined **)
                 _ZN10uu_install19preserve_timestamps17h613a91b27797a409E
                           (param_1,param_2,param_3,param_4), ppuVar3 == (undefined **)0x0)))) {
    puVar1 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209a70
    ;
    if (*(char *)(param_5 + 0x61) == '\0') {
      if (ppuVar2 == (undefined **)0x8000000000000000) {
        return (undefined **)0x0;
      }
    }
    else {
      local_70 = (undefined8 *)0x1;
      local_58 = 1;
      local_90 = 1;
      local_78 = 1;
      local_48 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209a70
      ;
      local_38 = 
      PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00209a70
      ;
      local_d8 = (undefined **)&DAT_00202530;
      local_d0 = (undefined **)0x2;
      uStack_b8 = 0;
      local_c8 = &local_50;
      local_c0 = 2;
      local_88 = (undefined **)param_3;
      ppuStack_80 = (undefined8 **)param_4;
      local_68 = (undefined *)param_1;
      local_60 = param_2;
      local_50 = &local_70;
      local_40 = &local_90;
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209c10)(&local_d8);
      if (ppuVar2 == (undefined **)0x8000000000000000) {
        local_d8 = &PTR_s__00202550;
        local_d0 = (undefined **)0x1;
        local_c8 = (undefined8 ***)0x8;
        local_c0 = 0;
        uStack_b8 = 0;
        (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209c10)(&local_d8);
        return (undefined **)0x0;
      }
      local_90 = 1;
      local_88 = local_a0;
      ppuStack_80 = ppuStack_98;
      local_78 = 1;
      local_68 = puVar1;
      local_d8 = &PTR_s__backup____00202560;
      local_d0 = (undefined **)0x2;
      uStack_b8 = 0;
      local_c0 = 1;
      local_c8 = (undefined8 ***)&local_70;
      local_70 = &local_90;
                    /* try { // try from 00169913 to 0016991b has its CatchHandler @ 0016993a */
      (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_00209c10)(&local_d8);
    }
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17hc261e2b7908d5905E(&local_a8);
    return (undefined **)0x0;
  }
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h1b9f1de4ce9f7be6E
            (&local_a8);
  return ppuVar3;
}