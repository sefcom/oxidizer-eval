void _ZN5uu_tr9operation8Sequence15parse_backslash17h851374cdd0702be7E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_28;
  undefined4 uStack_24;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined uStack_10;
  undefined7 uStack_f;
  
  _ZN87__LT_nom__sequence__Preceded_LT_F_C_G_GT__u20_as_u20_nom__internal__Parser_LT_I_GT__GT_7process17h55052947dcf7abe7E
            (&local_28,"\\",1,param_2,param_3);
  if (local_28 == 3) {
    switch(uStack_10) {
    case 0x61:
      uStack_10 = 7;
      break;
    case 0x62:
      uStack_10 = 8;
      break;
    case 0x66:
      uStack_10 = 0xc;
      break;
    case 0x6e:
      uStack_10 = 10;
      break;
    case 0x72:
      uStack_10 = 0xd;
      break;
    case 0x74:
      uStack_10 = 9;
      break;
    case 0x76:
      uStack_10 = 0xb;
    }
    param_1[1] = uStack_20;
    param_1[2] = local_18;
    *(undefined *)(param_1 + 3) = uStack_10;
    *param_1 = 3;
    return;
  }
  param_1[2] = local_18;
  param_1[3] = CONCAT71(uStack_f,uStack_10);
  *param_1 = CONCAT44(uStack_24,local_28);
  param_1[1] = uStack_20;
  return;
}