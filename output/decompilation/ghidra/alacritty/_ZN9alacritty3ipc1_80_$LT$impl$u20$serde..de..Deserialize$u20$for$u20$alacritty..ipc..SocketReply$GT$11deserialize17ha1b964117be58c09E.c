void _ZN9alacritty3ipc1_80__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__ipc__SocketReply_GT_11deserialize17ha1b964117be58c09E
               (undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 auStack_70 [3];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  undefined8 uStack_38;
  char cStack_30;
  char cStack_2f;
  char cStack_2e;
  undefined8 uStack_28;
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E(&cStack_40);
  if (cStack_40 != '\x01') {
    if (cStack_3f == '\x01') {
      if (cStack_3e == '\"') {
        _ZN161__LT_alacritty__ipc______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__ipc__SocketReply_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_10visit_enum17h81ead858a9b598f9E
                  (param_1,param_2);
        return;
      }
      if (cStack_3e == '{') {
        pcVar1 = (char *)(param_2 + 0x30);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 != '\0') {
          _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                    (param_2 + 0x18);
          _ZN161__LT_alacritty__ipc______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__ipc__SocketReply_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_10visit_enum17h6343501b735fe5bcE
                    (&uStack_58,param_2);
          *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
          _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E
                    (&cStack_30,param_2);
          if (cStack_30 != '\x01') {
            if (cStack_2f == '\x01') {
              if (cStack_2e == '}') {
                _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                          (param_2 + 0x18);
                param_1[2] = uStack_48;
                *param_1 = uStack_58;
                param_1[1] = uStack_50;
                return;
              }
              auStack_70[0] = 10;
              uStack_28 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17h0b1b866bba2a172bE
                                    (param_2,auStack_70);
            }
            else {
              auStack_70[0] = 3;
              uStack_28 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17h0b1b866bba2a172bE
                                    (param_2,auStack_70);
            }
          }
          param_1[1] = uStack_28;
          *param_1 = 0x8000000000000000;
          _ZN4core3ptr178drop_in_place_LT__LT_toml__value__MapDeserializer_u20_as_u20_serde__de__MapAccess_GT___next_value_seed_LT_core__marker__PhantomData_LT_u8_GT__GT____u7b__u7b_closure_u7d__u7d__GT_17h16862b29d1d1c4a4E
                    (&uStack_58);
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
    uStack_38 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17hb276f3219d45daa4E
                          (param_2,auStack_70);
  }
  param_1[1] = uStack_38;
  *param_1 = 0x8000000000000000;
  return;
}