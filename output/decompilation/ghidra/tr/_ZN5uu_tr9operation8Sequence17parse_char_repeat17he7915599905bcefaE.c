void _ZN5uu_tr9operation8Sequence17parse_char_repeat17he7915599905bcefaE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  char *local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_60 = "[";
  local_58 = 1;
  local_50 = "*";
  local_48 = 1;
  local_40 = "]";
  local_38 = 1;
  _ZN87__LT_nom__sequence__Preceded_LT_F_C_G_GT__u20_as_u20_nom__internal__Parser_LT_I_GT__GT_7process17hf8608d87b682e598E
            (&local_30,&local_60,param_2,param_3);
  if (local_30 != 0) {
    _ZN5uu_tr9operation8Sequence17parse_char_repeat28__u7b__u7b_closure_u7d__u7d_17hb4288508c93bd3c1E
              (param_1 + 1,&local_30);
    *param_1 = 0;
    return;
  }
  param_1[3] = local_18;
  param_1[4] = uStack_10;
  param_1[1] = local_28;
  param_1[2] = uStack_20;
  *param_1 = 1;
  return;
}