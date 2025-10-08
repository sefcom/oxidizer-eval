undefined8 _ZN10uu_pathchk11check_extra17h08af7cafa8f69b56E(long param_1,long param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **local_98;
  undefined8 local_90;
  undefined ***local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48;
  undefined **local_40;
  undefined *local_38;
  
  if (param_2 != 0) {
    lVar5 = 0;
    do {
      uVar4 = *(undefined8 *)(param_1 + 8 + lVar5);
      uVar1 = *(undefined8 *)(param_1 + 0x10 + lVar5);
      local_98 = (undefined **)((ulong)local_98 & 0xffffffff00000000);
      uVar3 = _ZN4core4char7methods15encode_utf8_raw17h5e8f6d90a161f6f4E(&local_98);
      cVar2 = _ZN4core5slice29__LT_impl_u20__u5b_T_u5d__GT_11starts_with17ha1477059272abce5E
                        (uVar4,uVar1,uVar3);
      if (cVar2 != '\0') {
        local_68 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
        local_60 = (undefined *)0x0;
        local_48 = 1;
        local_40 = &local_60;
        local_38 = 
        PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001e50f8
        ;
        local_98 = &PTR_s_leading_hyphen_in_file_name_comp_001deab8;
        local_90 = 2;
        local_88 = &local_40;
        local_80 = 1;
        ppuVar6 = &local_68;
        local_58 = uVar4;
        local_50 = uVar1;
        goto LAB_0015627f;
      }
      lVar5 = lVar5 + 0x18;
    } while (param_2 * 0x18 != lVar5);
  }
  _ZN5alloc3str17join_generic_copy17h3bd5640a2d2f1574E(&local_98,param_1,param_2);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h6647f07fb02b5c78E(local_98,local_90);
  uVar4 = 1;
  if (local_88 == (undefined ***)0x0) {
    local_60 = PTR__ZN3std2io5stdio6stderr8INSTANCE17h8cff5a7d41eb89e3E_001e50e0;
    local_98 = &PTR_DAT_001dea68;
    local_90 = 1;
    local_88 = (undefined ***)&DAT_00000008;
    local_80 = 0;
    ppuVar6 = &local_60;
LAB_0015627f:
    uStack_78 = 0;
    uVar4 = (*(code *)
              PTR__ZN57__LT_std__io__stdio__Stderr_u20_as_u20_std__io__Write_GT_9write_fmt17hebff3e936d8559e8E_001e50f0
            )(ppuVar6,&local_98);
    _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17h7a4400e9f2ab9568E
              (uVar4);
    uVar4 = 0;
  }
  return uVar4;
}