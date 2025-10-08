undefined8 _ZN5uu_df11is_included17h2cb576fb785b9846E(long param_1,long param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((((*(char *)(param_1 + 0x90) == '\0') || (*(char *)(param_2 + 0x50) == '\0')) &&
      (((*(char *)(param_1 + 0x91) == '\0' &&
        (cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h6249ba97ac26ea5bE
                           (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                            &DAT_00119a3c,4), cVar1 == '\0')) ||
       (*(char *)(param_2 + 0x51) == '\x01')))) &&
     (cVar1 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h51781a1e8c4dac70E
                        (param_1 + 0x30,*(undefined8 *)(param_2 + 0x38),
                         *(undefined8 *)(param_2 + 0x40)), cVar1 == '\0')) {
    if (*(long *)(param_2 + 0x18) != -0x8000000000000000) {
      uVar2 = _ZN53__LT_T_u20_as_u20_core__slice__cmp__SliceContains_GT_14slice_contains17h51781a1e8c4dac70E
                        (param_1 + 0x30,*(undefined8 *)(param_2 + 0x20),
                         *(undefined8 *)(param_2 + 0x28));
      return uVar2;
    }
    return 1;
  }
  return 0;
}