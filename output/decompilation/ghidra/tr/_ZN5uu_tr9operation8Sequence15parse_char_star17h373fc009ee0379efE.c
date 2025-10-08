void _ZN5uu_tr9operation8Sequence15parse_char_star17h373fc009ee0379efE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined uStack_30;
  undefined7 uStack_2f;
  char *local_28;
  undefined8 local_20;
  char *local_18;
  undefined8 local_10;
  
  local_28 = "[";
  local_20 = 1;
  local_18 = "*]";
  local_10 = 2;
  _ZN87__LT_nom__sequence__Preceded_LT_F_C_G_GT__u20_as_u20_nom__internal__Parser_LT_I_GT__GT_7process17hc6dda4c82a13e3e7E
            (&local_48,&local_28,param_2,param_3);
  if (local_48 == 3) {
    param_1[1] = uStack_40;
    param_1[2] = uStack_38;
    *(undefined4 *)(param_1 + 3) = 0xc;
    *(undefined *)(param_1 + 4) = 2;
    *(undefined *)((long)param_1 + 0x21) = uStack_30;
    *param_1 = 0;
    return;
  }
  param_1[3] = uStack_38;
  param_1[4] = CONCAT71(uStack_2f,uStack_30);
  param_1[1] = CONCAT44(uStack_44,local_48);
  param_1[2] = uStack_40;
  *param_1 = 1;
  return;
}