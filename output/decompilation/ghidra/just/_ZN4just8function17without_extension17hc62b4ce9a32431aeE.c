undefined8 *
_ZN4just8function17without_extension17hc62b4ce9a32431aeE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 *local_78;
  code *local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 **local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_30;
  
  local_38 = param_3;
  local_30 = param_4;
  auVar2 = (*(code *)PTR__ZN3std4path4Path6parent17hef287f60afa56900E_00566a90)(param_3,param_4);
  uVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 0) {
    local_68 = &PTR_s_Could_not_extract_parent_from___005300d8;
  }
  else {
    auVar3 = (*(code *)PTR__ZN3std4path4Path9file_stem17hc69c2d2c61933548E_00565dc8)
                       (param_3,param_4);
    if (auVar3._0_8_ != 0) {
      _ZN6camino8Utf8Path4join17h5972e239d273391eE
                (&local_68,auVar2._0_8_,uVar1,auVar3._0_8_,auVar3._8_8_);
                    /* try { // try from 0036cad1 to 0036cadd has its CatchHandler @ 0036cba7 */
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h8d6445813d8446cdE
                (&local_90,&local_68);
      param_1[3] = local_80;
      *(undefined4 *)(param_1 + 1) = local_90;
      *(undefined4 *)((long)param_1 + 0xc) = uStack_8c;
      *(undefined4 *)(param_1 + 2) = uStack_88;
      *(undefined4 *)((long)param_1 + 0x14) = uStack_84;
      *param_1 = 0;
      _ZN4core3ptr40drop_in_place_LT_camino__Utf8PathBuf_GT_17hdd3b2f225d24af37E(&local_68);
      return param_1;
    }
    local_68 = &PTR_s_Could_not_extract_file_stem_from_0052fec8;
    uVar1 = auVar3._8_8_;
  }
  local_78 = &local_38;
  local_70 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hcd9ad0a553cee1efE;
  local_60 = 2;
  local_48 = 0;
  local_58 = &local_78;
  local_50 = 1;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h4ceadf09b7aa2c32E(&local_90,0,uVar1,&local_68);
  param_1[1] = CONCAT44(uStack_8c,local_90);
  param_1[2] = CONCAT44(uStack_84,uStack_88);
  param_1[3] = local_80;
  *param_1 = 1;
  return param_1;
}