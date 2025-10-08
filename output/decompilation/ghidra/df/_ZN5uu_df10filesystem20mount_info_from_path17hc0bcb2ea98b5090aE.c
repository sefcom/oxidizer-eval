void _ZN5uu_df10filesystem20mount_info_from_path17hc0bcb2ea98b5090aE
               (long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long local_88;
  undefined local_80;
  undefined7 uStack_7f;
  undefined local_78;
  undefined7 uStack_77;
  long local_68;
  undefined local_60;
  undefined7 uStack_5f;
  long local_50;
  long local_48;
  undefined8 **local_40;
  undefined8 *local_38;
  undefined8 **local_30;
  
  uVar1 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h07de46ba282a0abfE
                    (param_4);
  _ZN3std2fs12canonicalize17he3861711874680a2E(&local_88,uVar1);
  uStack_5f = uStack_7f;
  local_68 = local_88;
  local_60 = local_80;
  local_48 = param_3 * 0x98 + param_2;
  local_40 = &local_40;
                    /* try { // try from 001600c8 to 00160126 has its CatchHandler @ 00160159 */
  local_50 = param_2;
  local_38 = &local_68;
  local_30 = local_40;
  _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h9c71e0ce0d4c8b4fE
            (&local_88,&local_50,&local_40);
  if (CONCAT71(uStack_7f,local_80) == -0x8000000000000000) {
    _ZN4core3ptr132drop_in_place_LT_core__ops__control_flow__ControlFlow_LT__LP__RF_uucore__features__fsext__MountInfo_C_std__path__PathBuf_RP__GT__GT_17he2ec4800f4f1f216E
              (0x8000000000000000,CONCAT71(uStack_77,local_78));
    local_88 = 0;
  }
  else {
    _ZN4core3ptr88drop_in_place_LT__LP__RF_uucore__features__fsext__MountInfo_C_std__path__PathBuf_RP__GT_17he3cf3c9f5c62efb3E
              (CONCAT71(uStack_7f,local_80),CONCAT71(uStack_77,local_78));
  }
  local_80 = (undefined)param_3;
  uStack_7f = (undefined7)((ulong)param_3 >> 8);
  local_78 = SUB81(&local_68,0);
  uStack_77 = (undefined7)((ulong)&local_68 >> 8);
  lVar2 = local_88;
  local_88 = param_2;
  lVar2 = _ZN4core6option15Option_LT_T_GT_7or_else17hfb47a539a566ef5eE(lVar2,&local_88);
  if (lVar2 == 0) {
    *(undefined *)(param_1 + 1) = 2;
  }
  else {
    *(long *)(param_1 + 8) = lVar2;
  }
  *(bool *)param_1 = lVar2 == 0;
  _ZN4core3mem4drop17hf2e2fee3dcd8d14fE(local_68,CONCAT71(uStack_5f,local_60));
  return;
}