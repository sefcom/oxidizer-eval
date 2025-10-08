undefined8 *
_ZN9alacritty6config9ui_config1_86__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__ui_config__Hint_GT_9serialize17h0b78fdbb6b6ab162E
          (long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *local_20;
  undefined4 local_18;
  
  _ZN95__LT__RF_mut_u20_serde_json__ser__Serializer_LT_W_C_F_GT__u20_as_u20_serde__ser__Serializer_GT_13serialize_map17h0d9cfaedd77fcf02E
            (&local_20,param_2,0);
  puVar1 = local_20;
  if ((char)local_18 != '\x03') {
    _ZN9alacritty6config9ui_config1_93__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__ui_config__HintContent_GT_9serialize17h7e51ac0306650490E
              (*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200),&local_20);
    puVar1 = (undefined8 *)
             _ZN9alacritty6config9ui_config1_92__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__ui_config__HintAction_GT_9serialize17ha835bd41360b5d01E
                       (param_1,&local_20);
    if (puVar1 == (undefined8 *)0x0) {
      _ZN5serde3ser12SerializeMap15serialize_entry17hfb3d73d73650d998E
                (&local_20,"post_processing",0xf,*(undefined4 *)(param_1 + 0xd8));
      _ZN5serde3ser12SerializeMap15serialize_entry17hfb3d73d73650d998E
                (&local_20,"persist",7,*(undefined *)(param_1 + 0xd9));
      puVar1 = (undefined8 *)
               _ZN5serde3ser12SerializeMap15serialize_entry17h80be0cddc6f7678dE
                         (&local_20,*(undefined4 *)(param_1 + 0xd4));
      if (puVar1 == (undefined8 *)0x0) {
        _ZN83__LT_serde_json__ser__Compound_LT_W_C_F_GT__u20_as_u20_serde__ser__SerializeMap_GT_3end17h3ea70a58a172b1edE
                  (*local_20,local_18);
        return (undefined8 *)0x0;
      }
    }
  }
  return puVar1;
}