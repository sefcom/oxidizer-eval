void _ZN3bat6assets15assets_metadata14AssetsMetadata14save_to_folder17hae67b37f18712a05E
               (undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined local_30 [24];
  
  _ZN3std4path4Path4join17hb97e165d6abf39bfE(local_30,param_3,param_4,&DAT_0019faf3,0xd);
  _ZN3std2fs4File6create17h930d40b25ee6f8a7E(&local_40,local_30);
  if (local_40 == 1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 8) = local_38;
  }
  else {
    lVar1 = _ZN10serde_yaml3ser9to_writer17ha551c0799f7ab21fE(local_3c,param_2);
    if (lVar1 == 0) {
      *param_1 = 0xd;
    }
    else {
      *param_1 = 6;
      *(long *)(param_1 + 8) = lVar1;
    }
  }
  return;
}