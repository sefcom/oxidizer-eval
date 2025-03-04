undefined8 _ZN5uu_df11is_included17h21d348ae8506351cE(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((*(char *)(param_1 + 0x90) == '\0') || (*(char *)(param_2 + 0x50) == '\0')) &&
     ((*(char *)(param_1 + 0x91) == '\0' || (*(char *)(param_2 + 0x51) != '\0')))) {
    if (*(long *)(param_2 + 0x30) != -0x8000000000000000) {
      cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h5ec19a7369aaf82dE
                        (param_1 + 0x30,*(undefined8 *)(param_2 + 0x38),
                         *(undefined8 *)(param_2 + 0x40));
      if (cVar1 != '\0') goto LAB_001c6793;
    }
    uVar2 = 1;
    if (*(long *)(param_2 + 0x18) != -0x8000000000000000) {
      uVar2 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h5ec19a7369aaf82dE
                        (param_1 + 0x30,*(undefined8 *)(param_2 + 0x20),
                         *(undefined8 *)(param_2 + 0x28));
      return uVar2;
    }
  }
  else {
LAB_001c6793:
    uVar2 = 0;
  }
  return uVar2;
}