undefined8 *
_ZN9alacritty6config5debug1_83__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__debug__Debug_GT_9serialize17had4ac2dc3c4f69d7E
          (undefined8 *param_1,undefined8 param_2)

{
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_16serialize_struct17h3370d4f9db8107e0E
            (&local_20,param_2,7);
  if ((char)local_18 != '\x03') {
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17ha129208bfd482b66E
              (&local_20,*param_1);
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
              (&local_20,"print_events",0xc,*(undefined4 *)(param_1 + 1));
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
              (&local_20,"persistent_logging",0x12,*(undefined *)((long)param_1 + 9));
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
              (&local_20,"render_timer",0xc,*(undefined *)((long)param_1 + 10));
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
              (&local_20,"highlight_damage",0x10,*(undefined *)((long)param_1 + 0xb));
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17h00356917dcfb6422E
              (&local_20,*(undefined *)((long)param_1 + 0xe));
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_15serialize_field17he34323194a2c6e76E
              (&local_20,"prefer_egl",10,*(undefined4 *)((long)param_1 + 0xc));
    _ZN86__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeStruct_GT_3end17h3b0237f55fddd9f0E
              (*local_20,local_18);
    local_20 = (undefined8 *)0x0;
  }
  return local_20;
}