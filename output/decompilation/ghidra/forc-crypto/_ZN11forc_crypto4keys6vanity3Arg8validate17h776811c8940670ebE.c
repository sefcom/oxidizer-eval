undefined8 _ZN11forc_crypto4keys6vanity3Arg8validate17h776811c8940670ebE(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar3 = 0;
  lVar1 = _ZN4core6option15Option_LT_T_GT_6map_or17h24957dd72484acaeE(param_1 + 0x10);
  lVar2 = _ZN4core6option15Option_LT_T_GT_6map_or17h24957dd72484acaeE(param_1 + 0x28);
  if (0x40 < (ulong)(lVar2 + lVar1)) {
    local_48 = &PTR_s_Combined_pattern_length_exceeds_6_0072f028;
    local_40 = 1;
    local_38 = 8;
    local_30 = 0;
    uStack_28 = 0;
    uVar3 = _ZN6anyhow9__private10format_err17h09b344f6a077676aE(&local_48);
  }
  return uVar3;
}