undefined8 *
_ZN9alacritty3cli1_77__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__cli__IpcConfig_GT_9serialize17h5f55fd1d701c939cE
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,3);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    puVar1 = (undefined8 *)
             _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17hcb2c7c9149519398E
                       (&local_20,"options",7,param_1[5],param_1[6]);
    if (puVar1 == (undefined8 *)0x0) {
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he1b55bffd4d8313aE
                (&local_20,*param_1,param_1[1],param_1[2],param_1[3]);
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
                (&local_20,"reset",5,*(undefined4 *)(param_1 + 7));
      _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
                (*local_20,local_18);
      return (undefined8 *)0x0;
    }
  }
  return puVar1;
}