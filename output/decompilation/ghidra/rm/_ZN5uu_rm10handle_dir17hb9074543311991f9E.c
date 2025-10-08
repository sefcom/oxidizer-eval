undefined8
_ZN5uu_rm10handle_dir17hb9074543311991f9E(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar7;
  undefined auVar8 [16];
  undefined8 *local_a0;
  code *local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined8 **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_56;
  undefined local_50 [16];
  undefined8 local_40;
  undefined local_38;
  undefined8 uVar6;
  
  auVar8 = _ZN5uu_rm22clean_trailing_slashes17hf055f5506fb084d9E();
  uVar6 = auVar8._8_8_;
  uVar5 = auVar8._0_8_;
  cVar3 = _ZN5uu_rm35path_is_current_or_parent_directory17h8073b220e3800501E(uVar5,uVar6);
  if (cVar3 != '\0') {
    local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    pcVar7 = (code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
    local_a0 = (undefined8 *)local_50;
    local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_90 = (undefined **)&DAT_001ea4a0;
    local_88 = 2;
    uStack_70 = 0;
    local_80 = &local_a0;
    local_78 = 1;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_90);
    local_98 = (code *)
               PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17hdc1404ac42f64ec9E_001f1098
    ;
    local_90 = &PTR_DAT_001ea550;
    goto LAB_0015d047;
  }
  (*(code *)PTR__ZN3std4path4Path10components17hd0346d362206f2e9E_001f10a0)(&local_90,uVar5,uVar6);
  if ((local_56 == '\0') && ((byte)((char)local_80 - 5U) < 2)) {
    if (*(char *)(param_3 + 3) != '\0') {
LAB_0015d0e7:
      uVar5 = _ZN5uu_rm20remove_dir_recursive17h796f941ab304c174E(uVar5,uVar6,param_3);
      return uVar5;
    }
    cVar3 = '\0';
    if (*(char *)(param_3 + 4) != '\0') goto LAB_0015d24f;
  }
  else {
    lVar4 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_001f10a8)(uVar5,uVar6);
    cVar3 = *(char *)(param_3 + 3);
    if (cVar3 == '\0') {
      if (*(char *)(param_3 + 4) != '\0') {
        if (lVar4 != 0) goto LAB_0015d24f;
LAB_0015d113:
        if (*(char *)(param_3 + 2) == '\0') {
LAB_0015d24f:
          uVar5 = _ZN5uu_rm10remove_dir17h55820dedda8befb2E(uVar5,uVar6,param_3);
          return uVar5;
        }
      }
    }
    else {
      if ((lVar4 != 0) || (*(char *)(param_3 + 2) == '\0')) goto LAB_0015d0e7;
      if (*(char *)(param_3 + 4) != '\0') goto LAB_0015d113;
    }
  }
  puVar1 = PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98;
  if (cVar3 != '\0') {
    local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
    puVar2 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
    local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_90 = (undefined **)&DAT_001ea4a0;
    local_88 = 2;
    uStack_70 = 0;
    local_78 = 1;
    local_a0 = (undefined8 *)local_50;
    local_80 = &local_a0;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_90);
    local_50._0_8_ = "/";
    local_50._8_8_ =
         PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_001f10b0;
    local_90 = &PTR_DAT_001ea570;
    local_88 = 2;
    uStack_70 = 0;
    local_78 = 1;
    local_80 = (undefined8 **)local_50;
    (*(code *)puVar2)(&local_90);
    local_50 = (*(code *)puVar1)();
    local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
    local_90 = (undefined **)&DAT_001ea4a0;
    local_88 = 2;
    uStack_70 = 0;
    local_78 = 1;
    local_a0 = (undefined8 *)local_50;
    local_80 = &local_a0;
    (*(code *)puVar2)(&local_90);
    local_90 = &PTR_DAT_001ea590;
    local_88 = 1;
    local_80 = (undefined8 **)0x8;
    local_78 = 0;
    uStack_70 = 0;
    (*(code *)puVar2)(&local_90);
    return 1;
  }
  local_50 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_001f0e98)();
  pcVar7 = (code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0;
  local_a0 = (undefined8 *)local_50;
  local_98 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h5f6f103f460297c8E;
  local_90 = (undefined **)&DAT_001ea4a0;
  local_88 = 2;
  uStack_70 = 0;
  local_80 = &local_a0;
  local_78 = 1;
  (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_001f0ea0)(&local_90);
  auVar8._8_8_ = uVar5;
  auVar8._0_8_ = 1;
  local_38 = 1;
  local_98 = (code *)
             PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_001f1070
  ;
  local_90 = &PTR_DAT_001ea5a0;
  local_40 = uVar6;
LAB_0015d047:
  local_a0 = (undefined8 *)local_50;
  local_80 = &local_a0;
  local_88 = 2;
  uStack_70 = 0;
  local_78 = 1;
  local_50 = auVar8;
  (*pcVar7)(&local_90);
  return 1;
}