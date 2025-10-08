uint _ZN9alacritty5input8keyboard58__LT_impl_u20_alacritty__input__Processor_LT_T_C_A_GT__GT_15is_modifier_key17h5d445e3e081c3542E
               (undefined8 param_1)

{
  uint uVar1;
  char local_20 [2];
  ushort local_1e;
  
  (*(code *)PTR__ZN5winit8keyboard3Key6as_ref17ha61159f0166fa8fbE_009dfee0)(local_20,param_1);
  if ((local_20[0] == '\x1f') && (local_1e < 0xe)) {
    uVar1 = 0x2109 >> ((byte)local_1e & 0x1f);
  }
  else {
    uVar1 = 0;
  }
  _ZN4core3ptr56drop_in_place_LT_winit__keyboard__Key_LT__RF_str_GT__GT_17h2dc152dabd79984bE
            (local_20);
  return uVar1 & 0xffffff01;
}