long _ZN3bat14syntax_mapping16ignored_suffixes15IgnoredSuffixes12strip_suffix17h54db9f7a9094d832E
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 8);
    puVar2 = puVar3 + *(long *)(param_1 + 0x10) * 2;
    do {
      lVar1 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_suffix_of17ha48df28aef4c1d38E
                        (*puVar3,puVar3[1],param_2,param_3);
      if (lVar1 != 0) {
        return lVar1;
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar2);
  }
  return 0;
}