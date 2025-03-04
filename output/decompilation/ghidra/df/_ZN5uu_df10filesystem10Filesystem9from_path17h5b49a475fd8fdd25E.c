undefined8 *
_ZN5uu_df10filesystem10Filesystem9from_path17h5b49a475fd8fdd25E
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined local_e8 [16];
  undefined8 local_d8;
  undefined local_d0 [16];
  undefined8 local_c0;
  undefined local_b8 [152];
  
  local_e8 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h7c1f1ad194ebcdf5E
                       (param_4);
  _ZN45__LT_T_u20_as_u20_alloc__string__ToString_GT_9to_string17hcc85d88d02bb0b7aE
            (local_d0,local_e8);
                    /* try { // try from 0017ac78 to 0017ac97 has its CatchHandler @ 0017ace7 */
  lVar1 = _ZN5uu_df10filesystem20mount_info_from_path17heb90d672d6d37662E(param_2,param_3,param_4);
  if (lVar1 == 0) {
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0e578a0b94f465ccE(local_d0);
  }
  else {
    _ZN73__LT_uucore__features__fsext__MountInfo_u20_as_u20_core__clone__Clone_GT_5clone17hde627e2703cb45d3E
              (local_b8,lVar1);
    local_d8 = local_c0;
    (*(code *)PTR__ZN5uu_df10filesystem10Filesystem3new17ha971403f9b8ef26cE_00245d10)
              (param_1,local_b8,local_e8);
  }
  return param_1;
}