ulong _ZN3bat6assets15assets_metadata14AssetsMetadata18is_compatible_with17h390ab7bdc192b6fcE
                (long param_1)

{
  ulong uVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [16];
  long local_50;
  long local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  (*(code *)PTR__ZN6semver7Version5parse17ha08819266e177ef5E_00808778)(&local_88);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17hf081fbd4c2ddd752E(local_60,&local_88);
                    /* try { // try from 00532922 to 0053297e has its CatchHandler @ 00532995 */
  _ZN3bat6assets15assets_metadata14AssetsMetadata18is_compatible_with28__u7b__u7b_closure_u7d__u7d_17hf14af39221be0f52E
            (&local_38,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
  if (CONCAT44(uStack_34,local_38) != 0) {
    local_78 = local_28;
    uStack_74 = uStack_24;
    uStack_70 = uStack_20;
    uStack_6c = uStack_1c;
    local_68 = local_18;
    local_88 = local_38;
    uStack_84 = uStack_34;
    uStack_80 = uStack_30;
    uStack_7c = uStack_2c;
    if (local_50 == CONCAT44(uStack_24,local_28)) {
      _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17hcccc663c243e5e9bE(&local_88);
      uVar1 = CONCAT71((int7)((ulong)local_48 >> 8),local_48 == CONCAT44(uStack_1c,uStack_20));
      goto LAB_00532981;
    }
    _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17hcccc663c243e5e9bE(&local_88);
  }
  uVar1 = 0;
LAB_00532981:
  _ZN4core3ptr36drop_in_place_LT_semver__Version_GT_17hcccc663c243e5e9bE(local_60);
  return uVar1 & 0xffffffff;
}