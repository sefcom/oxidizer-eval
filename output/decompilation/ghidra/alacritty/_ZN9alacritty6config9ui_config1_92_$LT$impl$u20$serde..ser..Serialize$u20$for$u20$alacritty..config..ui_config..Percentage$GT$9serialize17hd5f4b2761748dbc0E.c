void _ZN9alacritty6config9ui_config1_92__LT_impl_u20_serde__ser__Serialize_u20_for_u20_alacritty__config__ui_config__Percentage_GT_9serialize17hd5f4b2761748dbc0E
               (uint param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auStack_28 [24];
  
  if (0x7f7fffff < (param_1 & 0x7fffffff)) {
    _ZN10serde_json3ser9Formatter10write_null17h3ba1b54fd4404275E();
    return;
  }
  uVar1 = (*(code *)PTR__ZN3ryu6pretty8format3217hf3ab2f0fe633c867E_009de190)(auStack_28);
  _ZN3std2io5impls58__LT_impl_u20_std__io__Write_u20_for_u20__RF_mut_u20_W_GT_9write_all17h693c64cf5ea3bb01E
            (param_2,auStack_28,uVar1);
  return;
}