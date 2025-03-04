undefined8
_ZN5uu_df10filesystem20mount_info_from_path17heb90d672d6d37662E
          (undefined8 **param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  long *local_68;
  long *local_60;
  long *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  long *local_40;
  long local_38;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar1 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h7c1f1ad194ebcdf5E
                    (param_3);
  _ZN3std2fs12canonicalize17h70c2a989be63c794E(&local_88,uVar1);
  if (local_88 == (undefined8 **)0x8000000000000000) {
    _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17h003996e870c333e6E
              (&local_88);
    uVar1 = 0;
  }
  else {
    local_50 = (undefined4)local_80;
    uStack_4c = local_80._4_4_;
    uStack_48 = (undefined4)uStack_78;
    uStack_44 = uStack_78._4_4_;
    local_58 = (long *)local_88;
    local_60 = (long *)(param_1 + param_2 * 0x13);
    local_88 = &local_58;
                    /* try { // try from 0017ad91 to 0017adf4 has its CatchHandler @ 0017ae11 */
    local_80 = &local_58;
    uStack_78 = local_88;
    local_68 = (long *)param_1;
    _ZN102__LT_core__iter__adapters__map__Map_LT_I_C_F_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h72961ed988ea76e5E
              (&local_40,&local_68,&local_88);
    if (local_38 == -0x8000000000000000) {
      _ZN4core3ptr132drop_in_place_LT_core__ops__control_flow__ControlFlow_LT__LP__RF_uucore__features__fsext__MountInfo_C_std__path__PathBuf_RP__GT__GT_17h842f83bfdcbbf6adE
                (&local_40);
      local_40 = (long *)0x0;
    }
    else {
      uStack_70 = uStack_28;
      uStack_6c = uStack_24;
      local_88 = (undefined8 **)local_40;
      local_80 = (long **)local_38;
      _ZN4core3ptr88drop_in_place_LT__LP__RF_uucore__features__fsext__MountInfo_C_std__path__PathBuf_RP__GT_17h329c4f51013cc44bE
                (&local_88);
    }
    local_88 = param_1;
    local_80 = (long **)param_2;
    uStack_78 = &local_58;
    uVar1 = _ZN4core6option15Option_LT_T_GT_7or_else17ha3692bdb0bbd722dE(local_40,&local_88);
    _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17he41fae35c4c1a9c1E(&local_58);
  }
  return uVar1;
}