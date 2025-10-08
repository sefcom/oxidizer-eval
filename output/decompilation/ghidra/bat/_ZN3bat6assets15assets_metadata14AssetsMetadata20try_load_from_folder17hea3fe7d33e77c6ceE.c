void _ZN3bat6assets15assets_metadata14AssetsMetadata20try_load_from_folder17hea3fe7d33e77c6ceE
               (undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_48;
  undefined4 local_44;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  _ZN3std4path4Path4join17hb97e165d6abf39bfE(&local_38,param_2,param_3,&DAT_0019faf3,0xd);
  _ZN3std2fs4File4open17h80998ce73f6318aaE(&local_48,&local_38);
  if (local_48 == 1) {
    *param_1 = 0;
  }
  else {
    _ZN10serde_yaml2de11from_reader17hc5c90348b7ad0e48E(&local_38,local_44);
    if (local_38 != -0x7fffffffffffffff) {
      *(undefined8 *)(param_1 + 0x28) = local_18;
      *(undefined8 *)(param_1 + 0x18) = local_28;
      *(undefined8 *)(param_1 + 0x20) = uStack_20;
      *(long *)(param_1 + 8) = local_38;
      *(undefined8 *)(param_1 + 0x10) = local_30;
      *param_1 = 0xd;
      return;
    }
    *param_1 = 6;
    local_40 = local_30;
  }
  *(undefined8 *)(param_1 + 8) = local_40;
  return;
}