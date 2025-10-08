void _ZN3bat5theme15ThemePreference3new17ha1f58e1d849174eaE(undefined8 *param_1)

{
  char cVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined auStack_38 [8];
  undefined8 local_30;
  undefined8 local_28;
  
  uVar3 = 0x8000000000000001;
  _ZN4core3ops8function6FnOnce9call_once17h246b62f212dea9abE(auStack_38);
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                    (local_30,local_28,&DAT_00180158);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                      (local_30,local_28,&DAT_002a2f5e,0xb);
    uVar2 = 1;
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                        (local_30,local_28,&DAT_002a2f69,0xb);
      uVar2 = 2;
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                          (local_30,local_28,&DAT_00181fcc,4);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17he1ce7ac76dd9ec5eE
                            (local_30,local_28,&DAT_002a2f74,5);
          if (cVar1 == '\0') {
            _ZN3bat5theme9ThemeName3new17hd040bb7840011c00E(param_1,auStack_38);
            return;
          }
          uVar3 = 0x8000000000000004;
        }
        else {
          uVar3 = 0x8000000000000003;
        }
        goto LAB_005440e6;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  *(undefined *)(param_1 + 1) = uVar2;
LAB_005440e6:
  *param_1 = uVar3;
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h2ec3c51b3420dbb5E(auStack_38);
  return;
}