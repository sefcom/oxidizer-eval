void _ZN11firecracker10api_server7request7actions1_111__LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_firecracker__api_server__request__actions__ActionType_GT_11deserialize17hd922781ed64b1078E
               (undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined uVar2;
  undefined8 uVar3;
  undefined8 auStack_68 [3];
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  undefined8 uStack_48;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  undefined8 uStack_38;
  char cStack_30;
  undefined uStack_2f;
  undefined6 uStack_2e;
  undefined8 uStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h208ee533e1e3aaa3E(&cStack_50);
  if (cStack_50 != '\x01') {
    if (cStack_4f == '\x01') {
      if (cStack_4e == '\"') {
        _ZN224__LT_firecracker__api_server__request__actions______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_firecracker__api_server__request__actions__ActionType_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_10visit_enum17h7dd7a3cf1c32bd48E
                  (param_1,param_2);
        return;
      }
      if (cStack_4e == '{') {
        pcVar1 = (char *)(param_2 + 0x30);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 != '\0') {
          _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17haf11d703049ba178E
                    (param_2 + 0x18);
          _ZN224__LT_firecracker__api_server__request__actions______LT_impl_u20_serde_core__de__Deserialize_u20_for_u20_firecracker__api_server__request__actions__ActionType_GT___deserialize____Visitor_u20_as_u20_serde_core__de__Visitor_GT_10visit_enum17hf5f633a75f945850E
                    (&cStack_30,param_2);
          *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
          if (cStack_30 == '\x01') {
            *param_1 = CONCAT62(uStack_2e,CONCAT11(uStack_2f,1));
            param_1[1] = uStack_28;
            return;
          }
          _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h208ee533e1e3aaa3E
                    (&cStack_40,param_2);
          uStack_48 = uStack_38;
          if (cStack_40 == '\x01') goto LAB_0024d2b6;
          if (cStack_3f == '\x01') {
            if (cStack_3e == '}') {
              _ZN70__LT_serde_json__read__SliceRead_u20_as_u20_serde_json__read__Read_GT_7discard17haf11d703049ba178E
                        (param_2 + 0x18);
              *(undefined *)((long)param_1 + 1) = uStack_2f;
              uVar2 = 0;
              goto LAB_0024d372;
            }
            auStack_68[0] = 10;
          }
          else {
            auStack_68[0] = 3;
          }
          uVar3 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17h924cff6d68f22425E
                            (param_2,auStack_68);
          param_1[1] = uVar3;
          uVar2 = 1;
LAB_0024d372:
          *(undefined *)param_1 = uVar2;
          return;
        }
        auStack_68[0] = 0x18;
      }
      else {
        auStack_68[0] = 10;
      }
    }
    else {
      auStack_68[0] = 5;
    }
    uStack_48 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17h994286180f173d2eE
                          (param_2,auStack_68);
  }
LAB_0024d2b6:
  param_1[1] = uStack_48;
  *(undefined *)param_1 = 1;
  return;
}