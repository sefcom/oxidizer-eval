uint _ZN5uu_ls24match_quoting_style_name17hd6c6f9cb275639d7E
               (undefined8 param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                    (param_1,param_2,"literal",7);
  if (cVar1 == '\0') {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                      (param_1,param_2,"shell",5);
    if (cVar1 == '\0') {
      cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                        (param_1,param_2,"shell-always",0xc);
      if (cVar1 == '\0') {
        cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                          (param_1,param_2,"shell-escape",0xc);
        if (cVar1 == '\0') {
          cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                            (param_1,param_2,"shell-escape-always",0x13);
          if (cVar1 == '\0') {
            uVar3 = 0;
            cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                              (param_1,param_2,"c",1);
            if (cVar1 == '\0') {
              bVar2 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h652dfc76ef3eba10E
                                (param_1,param_2,"escape",6);
              bVar2 = (bVar2 ^ 1) * '\x02' + 2;
              param_3 = 0;
            }
            else {
              bVar2 = 2;
              param_3 = (uint)CONCAT62((int6)((ulong)uVar3 >> 0x10),2);
            }
          }
          else {
            param_3 = (param_3 & 0xff) * 0x100 + 1;
            bVar2 = 1;
          }
        }
        else {
          param_3 = (param_3 & 0xff) << 8;
          bVar2 = 1;
        }
      }
      else {
        param_3 = (param_3 & 0xff) * 0x100 + 1;
        bVar2 = 0;
      }
    }
    else {
      param_3 = (param_3 & 0xff) << 8;
      bVar2 = 0;
    }
  }
  else {
    param_3 = param_3 & 0xff;
    bVar2 = 3;
  }
  return (uint)bVar2 | param_3 << 8;
}