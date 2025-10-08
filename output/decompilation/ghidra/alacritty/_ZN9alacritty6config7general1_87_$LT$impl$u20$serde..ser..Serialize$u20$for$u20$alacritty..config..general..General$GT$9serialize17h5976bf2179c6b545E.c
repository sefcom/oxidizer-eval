undefined8 *
_ZN9alacritty6config7general1_87__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__general__General_GT_9serialize17h5976bf2179c6b545E
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,4);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcb2c7c9149519398E
                       (&local_20,&DAT_00201ee9,6,*(undefined8 *)(param_1 + 8),
                        *(undefined8 *)(param_1 + 0x10));
    if (puVar1 == (undefined8 *)0x0) {
      puVar1 = (undefined8 *)
               _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17ha1407653161aa2ffE
                         (&local_20,param_1 + 0x18);
      if (puVar1 == (undefined8 *)0x0) {
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                  (&local_20,"live_config_reload",0x12,*(undefined4 *)(param_1 + 0x30));
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                  (&local_20,"ipc_socket",10,*(undefined *)(param_1 + 0x31));
        _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                  (*local_20,local_18);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}