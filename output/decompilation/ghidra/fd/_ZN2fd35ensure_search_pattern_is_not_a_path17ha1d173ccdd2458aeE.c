undefined8 _ZN2fd35ensure_search_pattern_is_not_a_path17ha1d173ccdd2458aeE(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  long local_88;
  undefined *local_80;
  code *local_78;
  char *local_70;
  undefined *local_68;
  undefined **local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined local_30 [24];
  
  if (*(char *)(param_1 + 0x1ee) != '\0') {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  cVar2 = _ZN52__LT_char_u20_as_u20_core__str__pattern__Pattern_GT_15is_contained_in17h822e1c3c690e59b6E
                    (uVar3,uVar1);
  if ((cVar2 != '\0') &&
     (cVar2 = (*(code *)PTR__ZN3std4path4Path6is_dir17h02edbc48c38d7d9eE_00540918)(uVar3,uVar1),
     cVar2 != '\0')) {
    local_88 = param_1 + 0x88;
    local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h9d7524885660455aE;
    local_70 = "/";
    local_68 = PTR__ZN43__LT_char_u20_as_u20_core__fmt__Display_GT_3fmt17h0215b7857ad55b0cE_005409f0
    ;
    local_60 = &PTR_s_The_search_pattern____contains_a_00502868;
    local_58 = 6;
    local_40 = &DAT_0017b7e0;
    local_38 = 5;
    local_50 = &local_80;
    local_48 = 2;
    local_80 = (undefined *)&local_88;
    _ZN4core6option15Option_LT_T_GT_11map_or_else17h1f7ab50fdd345844E
              (local_30,0,extraout_RDX,&local_60);
    uVar3 = _ZN6anyhow5error31__LT_impl_u20_anyhow__Error_GT_3msg17h06348eb8850c741dE(local_30);
    return uVar3;
  }
  return 0;
}