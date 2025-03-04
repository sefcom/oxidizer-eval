uint _ZN5uu_ls24match_quoting_style_name17h6db1b7024e711c4aE
               (undefined8 param_1,undefined8 param_2,ushort param_3)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                    (param_1,param_2,&DAT_00134d50,7);
  if (cVar1 != '\0') {
    uVar3 = param_3 & 0xff;
    param_3 = 3;
    goto LAB_0021f8d2;
  }
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                    (param_1,param_2,&DAT_00134d57,5);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (param_1,param_2,&DAT_00134d5c,0xc);
    if (cVar1 != '\0') {
      uVar3 = 0x100;
      goto LAB_0021f8d2;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (param_1,param_2,&DAT_00134d68,0xc);
    if (cVar1 != '\0') {
      uVar3 = 1;
      goto LAB_0021f8d2;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (param_1,param_2,&DAT_00134d74,0x13);
    if (cVar1 != '\0') {
      uVar3 = 0x101;
      goto LAB_0021f8d2;
    }
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (param_1,param_2,&DAT_00134d87,1);
    if (cVar1 != '\0') {
      param_3 = 2;
      uVar3 = 2;
      goto LAB_0021f8d2;
    }
    bVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h615ea01bc1975db3E
                      (param_1,param_2,&DAT_00134d88,6);
    param_3 = (ushort)(byte)((bVar2 ^ 1) * '\x02' + 2);
  }
  uVar3 = 0;
LAB_0021f8d2:
  return CONCAT22(param_3,uVar3) & 0xffffff;
}