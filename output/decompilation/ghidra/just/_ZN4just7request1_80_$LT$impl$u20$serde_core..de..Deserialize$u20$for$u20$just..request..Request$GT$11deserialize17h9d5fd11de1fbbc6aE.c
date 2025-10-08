void _ZN4just7request1_80__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_just__request__Request_GT_11deserialize17h9d5fd11de1fbbc6aE
               (long *param_1,long param_2)

{
  char *pcVar1;
  undefined8 auStack_70 [3];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  long lStack_38;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  long lStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h494ce0940b16cff1E(&cStack_40);
  if (cStack_40 != '\x01') {
    if (cStack_3f == '\x01') {
      if (cStack_3e == '\"') {
        _ZN165__LT_just__request______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_just__request__Request_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_10visit_enum17h21f82d1edcd9deabE
                  (param_1,param_2);
        return;
      }
      if (cStack_3e == '{') {
        pcVar1 = (char *)(param_2 + 0x30);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 != '\0') {
          _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h7b47bdbf15d80190E
                    (param_2 + 0x18);
          _ZN165__LT_just__request______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_just__request__Request_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_10visit_enum17h5bff73374059163cE
                    (&lStack_58,param_2);
          *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
          if (lStack_58 == -0x7fffffffffffffff) {
LAB_0034e5bb:
            param_1[2] = lStack_48;
            *param_1 = lStack_58;
            param_1[1] = lStack_50;
            return;
          }
          _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h494ce0940b16cff1E
                    (&cStack_30,param_2);
          if (cStack_30 != '\x01') {
            if (cStack_2f == '\x01') {
              if (cStack_2e == '}') {
                _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h7b47bdbf15d80190E
                          (param_2 + 0x18);
                goto LAB_0034e5bb;
              }
              auStack_70[0] = 10;
              lStack_28 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17h6b3977e31f423182E
                                    (param_2,auStack_70);
            }
            else {
              auStack_70[0] = 3;
              lStack_28 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17h6b3977e31f423182E
                                    (param_2,auStack_70);
            }
          }
          param_1[1] = lStack_28;
          *param_1 = -0x7fffffffffffffff;
          _ZN4core3ptr43drop_in_place_LT_just__request__Request_GT_17h16e954a6b6741939E(&lStack_58);
          return;
        }
        auStack_70[0] = 0x18;
      }
      else {
        auStack_70[0] = 10;
      }
    }
    else {
      auStack_70[0] = 5;
    }
    lStack_38 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h2c90bc4e9f0a5b9aE
                          (param_2,auStack_70);
  }
  param_1[1] = lStack_38;
  *param_1 = -0x7fffffffffffffff;
  return;
}