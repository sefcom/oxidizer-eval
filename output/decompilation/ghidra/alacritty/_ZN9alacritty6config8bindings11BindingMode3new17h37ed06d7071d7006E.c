undefined _ZN9alacritty6config8bindings11BindingMode3new17h37ed06d7071d7006E
                    (uint param_1,undefined4 param_2)

{
  undefined local_19;
  
  local_19 = 0;
  _ZN9alacritty6config8bindings1_16InternalBitFlags3set17h14601641b5933c70E
            (&local_19,1,(param_1 & 2) >> 1);
  _ZN9alacritty6config8bindings1_16InternalBitFlags3set17h14601641b5933c70E
            (&local_19,2,(param_1 & 4) >> 2);
  _ZN9alacritty6config8bindings1_16InternalBitFlags3set17h14601641b5933c70E
            (&local_19,4,param_1 >> 0xc & 1);
  _ZN9alacritty6config8bindings1_16InternalBitFlags3set17h14601641b5933c70E
            (&local_19,8,param_1 >> 0x10 & 1);
  _ZN9alacritty6config8bindings1_16InternalBitFlags3set17h14601641b5933c70E(&local_19,0x10,param_2);
  _ZN9alacritty6config8bindings1_16InternalBitFlags3set17h14601641b5933c70E
            (&local_19,0x20,param_1 >> 0x12 & 1);
  _ZN9alacritty6config8bindings1_16InternalBitFlags3set17h14601641b5933c70E
            (&local_19,0x40,param_1 >> 0x15 & 1);
  return local_19;
}