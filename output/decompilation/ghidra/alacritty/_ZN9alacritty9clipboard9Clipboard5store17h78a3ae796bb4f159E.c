void _ZN9alacritty9clipboard9Clipboard5store17h78a3ae796bb4f159E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined auVar1 [16];
  undefined local_30 [24];
  
  _ZN50__LT_T_u20_as_u20_core__convert__Into_LT_U_GT__GT_4into17h6e864c30e7322251E(local_30,param_3)
  ;
  auVar1 = (**(code **)(param_2 + 0x20))(param_1,local_30);
  if (auVar1._0_8_ != 0) {
    _ZN9alacritty9clipboard9Clipboard5store28__u7b__u7b_closure_u7d__u7d_17h61e36909b6295ef5E
              (auVar1._0_8_,auVar1._8_8_);
    return;
  }
  return;
}