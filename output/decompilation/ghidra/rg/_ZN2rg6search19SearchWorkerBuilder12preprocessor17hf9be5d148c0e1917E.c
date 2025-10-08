undefined  [16]
_ZN2rg6search19SearchWorkerBuilder12preprocessor17hf9be5d148c0e1917E
          (long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined auVar3 [16];
  int local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_30;
  undefined8 local_28;
  
                    /* try { // try from 00356f1f to 00356f60 has its CatchHandler @ 00356fb5 */
  _ZN8grep_cli10decompress14resolve_binary17hb1dd1d929f9d5ea1E(&local_58,param_2);
  uStack_30 = uStack_48;
  uVar1 = uStack_30;
  local_28 = local_40;
  bVar2 = local_58 == 1;
  uStack_30._0_4_ = (undefined4)uStack_48;
  uStack_30._4_4_ = (undefined4)((ulong)uStack_48 >> 0x20);
  uStack_30 = uVar1;
  if (bVar2) {
    uStack_48 = local_40;
    local_58 = iStack_50;
    uStack_54 = uStack_4c;
    iStack_50 = (undefined4)uStack_30;
    uStack_4c = uStack_30._4_4_;
    param_1 = _ZN6anyhow5error72__LT_impl_u20_core__convert__From_LT_E_GT__u20_for_u20_anyhow__Error_GT_4from17h7d776c7685489c7aE
                        (&local_58);
  }
  else {
    uStack_48 = local_40;
    local_58 = iStack_50;
    uStack_54 = uStack_4c;
    iStack_50 = (undefined4)uStack_30;
    uStack_4c = uStack_30._4_4_;
    _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h8f23796f433813dfE
              (param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x78) = uStack_48;
    *(int *)(param_1 + 0x68) = local_58;
    *(undefined4 *)(param_1 + 0x6c) = uStack_54;
    *(int *)(param_1 + 0x70) = iStack_50;
    *(undefined4 *)(param_1 + 0x74) = uStack_4c;
  }
  auVar3._1_7_ = 0;
  auVar3[0] = bVar2;
  _ZN4core3ptr67drop_in_place_LT_core__option__Option_LT_std__path__PathBuf_GT__GT_17h8f23796f433813dfE
            (param_2);
  auVar3._8_8_ = param_1;
  return auVar3;
}