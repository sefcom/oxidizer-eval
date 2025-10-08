undefined8 *
_ZN18alacritty_terminal4term4cell1_88__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty_terminal__term__cell__Cell_GT_9serialize17he2e58530f0024559E
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,5);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hf994ad05a5533ea2E
              (&local_20,*(undefined4 *)(param_1 + 2));
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h4610b67963a858d6E
                       (&local_20,"fg",param_1 + 1);
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h4610b67963a858d6E
                         (&local_20,"bg",(long)param_1 + 0xc);
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = (undefined8 *)
                 _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h71321809e0b7f4afE
                           (&local_20,*(undefined4 *)((long)param_1 + 0x14));
        if (puVar1 == (undefined8 *)0x0) {
          puVar1 = (undefined8 *)
                   _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h76836ebee1b12461E
                             (&local_20,*param_1);
          if (puVar1 == (undefined8 *)0x0) {
            _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                      (*local_20,local_18);
            return (undefined8 *)0x0;
          }
        }
      }
    }
  }
  return puVar1;
}