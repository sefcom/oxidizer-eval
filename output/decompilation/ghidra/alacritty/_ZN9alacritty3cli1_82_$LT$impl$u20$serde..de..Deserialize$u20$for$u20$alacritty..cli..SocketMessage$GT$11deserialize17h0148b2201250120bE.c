void _ZN9alacritty3cli1_82__LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__SocketMessage_GT_11deserialize17h0148b2201250120bE
               (undefined8 *param_1,long param_2)

{
  char *pcVar1;
  undefined8 auStack_110 [3];
  char cStack_f8;
  char cStack_f7;
  char cStack_f6;
  undefined8 uStack_f0;
  char cStack_e8;
  char cStack_e7;
  char cStack_e6;
  undefined8 uStack_e0;
  long alStack_d8 [23];
  
  _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E(&cStack_f8);
  if (cStack_f8 != '\x01') {
    if (cStack_f7 == '\x01') {
      if (cStack_f6 == '\"') {
        _ZN163__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__SocketMessage_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_10visit_enum17h672c85cb9e77d339E
                  (param_1,param_2);
        return;
      }
      if (cStack_f6 == '{') {
        pcVar1 = (char *)(param_2 + 0x30);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 != '\0') {
          _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                    (param_2 + 0x18);
          _ZN163__LT_alacritty__cli______LT_impl_u20_serde__de__Deserialize_u20_for_u20_alacritty__cli__SocketMessage_GT___deserialize____Visitor_u20_as_u20_serde__de__Visitor_GT_10visit_enum17ha3a7f98d6435b370E
                    (alStack_d8,param_2);
          *(char *)(param_2 + 0x30) = *(char *)(param_2 + 0x30) + '\x01';
          if (alStack_d8[0] == -0x7ffffffffffffffe) {
LAB_00528161:
            (*(code *)PTR_memcpy_009de0b0)(param_1,alStack_d8,0xb0);
            return;
          }
          _ZN10serde_json2de21Deserializer_LT_R_GT_16parse_whitespace17h25b8639ef166e091E
                    (&cStack_e8,param_2);
          if (cStack_e8 != '\x01') {
            if (cStack_e7 == '\x01') {
              if (cStack_e6 == '}') {
                _ZN68__LT_serde_json__read__StrRead_u20_as_u20_serde_json__read__Read_GT_7discard17h92742d45a8a618d1E
                          (param_2 + 0x18);
                goto LAB_00528161;
              }
              auStack_110[0] = 10;
              uStack_e0 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17h0b1b866bba2a172bE
                                    (param_2,auStack_110);
            }
            else {
              auStack_110[0] = 3;
              uStack_e0 = _ZN10serde_json2de21Deserializer_LT_R_GT_5error17h0b1b866bba2a172bE
                                    (param_2,auStack_110);
            }
          }
          param_1[1] = uStack_e0;
          *param_1 = 0x8000000000000002;
          _ZN4core3ptr50drop_in_place_LT_alacritty__cli__SocketMessage_GT_17hefa041a5d6384fafE
                    (alStack_d8);
          return;
        }
        auStack_110[0] = 0x18;
      }
      else {
        auStack_110[0] = 10;
      }
    }
    else {
      auStack_110[0] = 5;
    }
    uStack_f0 = _ZN10serde_json2de21Deserializer_LT_R_GT_10peek_error17hb276f3219d45daa4E
                          (param_2,auStack_110);
  }
  param_1[1] = uStack_f0;
  *param_1 = 0x8000000000000002;
  return;
}