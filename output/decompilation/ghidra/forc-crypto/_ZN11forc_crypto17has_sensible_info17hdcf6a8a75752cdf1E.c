ulong _ZN11forc_crypto17has_sensible_info17hdcf6a8a75752cdf1E(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  char local_48 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  _ZN10serde_json5value8to_value17hd8c76e686e47df0bE(local_48,param_1);
  uVar2 = 0;
  if (local_48[0] != '\x06') {
    if (local_48[0] != '\x05') {
LAB_004ce124:
      _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17h05e5c3c511967cdaE(local_48);
      return uVar2 & 0xffffffff;
    }
    local_28 = local_40;
    uStack_24 = uStack_3c;
    uStack_20 = uStack_38;
    uStack_1c = uStack_34;
    local_18 = local_30;
    lVar1 = _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_3get17h1293bc298712dbccE
                      (CONCAT44(uStack_3c,local_40),CONCAT44(uStack_34,uStack_38));
                    /* try { // try from 004ce0f6 to 004ce0ff has its CatchHandler @ 004ce134 */
    _ZN4core3ptr97drop_in_place_LT_serde_json__map__Map_LT_alloc__string__String_C_serde_json__value__Value_GT__GT_17hbfd65977d82915b4E
              (&local_28);
    uVar2 = CONCAT71((int7)((ulong)lVar1 >> 8),lVar1 != 0);
    if (local_48[0] == '\x05') goto LAB_004ce11c;
    if (local_48[0] != '\x06') goto LAB_004ce124;
  }
  _ZN4core3ptr100drop_in_place_LT_core__result__Result_LT_serde_json__value__Value_C_serde_json__error__Error_GT__GT_17h8c3816a840eb2f41E
            (local_48);
LAB_004ce11c:
  return uVar2 & 0xffffffff;
}