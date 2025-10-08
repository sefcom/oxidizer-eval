void _ZN11firecracker10api_server14parsed_request8describe17h4773036524096959E
               (undefined8 param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
               long param_5)

{
  char cVar1;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined local_89;
  undefined *local_88;
  code *local_80;
  undefined8 *local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_89 = param_2;
  local_68 = param_3;
  local_60 = param_4;
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                    (param_3,param_4,&DAT_0013801a,5);
  if ((param_5 == 0) || (cVar1 != '\0')) {
    local_58 = &DAT_004a3790;
    local_50 = 2;
    uVar2 = extraout_RDX;
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17hb86d93d0e67a6bf4E
                      (param_3,param_4,&DAT_0013801f,0xb);
    if (cVar1 == '\0') {
LAB_002545d1:
      _ZN11firecracker10api_server14parsed_request18describe_with_body17hf46da4cd4417a7fbE
                (param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + 8),
                 *(undefined8 *)(param_5 + 0x10));
      return;
    }
    auVar3 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                       (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
    uVar2 = auVar3._8_8_;
    if (3 < auVar3._0_8_) {
      cVar1 = _ZN3log13__private_api7enabled17h13ece3defc83be86E();
      uVar2 = extraout_RDX_00;
      if (cVar1 != '\0') goto LAB_002545d1;
    }
    local_58 = &DAT_004a37b0;
    local_50 = 3;
  }
  local_78 = &local_68;
  local_88 = &local_89;
  local_70 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h9e623ec8df216556E;
  local_80 = 
  _ZN63__LT_micro_http__common__Method_u20_as_u20_core__fmt__Debug_GT_3fmt17h82e2c33064e74b2cE;
  local_38 = 0;
  local_48 = &local_88;
  local_40 = 2;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE(param_1,0,uVar2,&local_58);
  return;
}