undefined8 *
_ZN9alacritty6config9ui_config1_89__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__ui_config__Program_GT_9serialize17heea5df14c22c94efE
          (long param_1,undefined8 param_2)

{
  undefined8 *local_30;
  undefined4 local_28;
  undefined8 *local_20;
  char local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,2);
  if (local_18 != '\x03') {
    local_30 = local_20;
    local_28 = CONCAT31(local_28._1_3_,local_18);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hb5400f5b6759c993E
              (&local_30,"program",7,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10));
    local_20 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcb2c7c9149519398E
                         (&local_30,"args\n```",4,*(undefined8 *)(param_1 + 0x20),
                          *(undefined8 *)(param_1 + 0x28));
    if (local_20 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                (*local_30,local_28);
      return (undefined8 *)0x0;
    }
  }
  return local_20;
}