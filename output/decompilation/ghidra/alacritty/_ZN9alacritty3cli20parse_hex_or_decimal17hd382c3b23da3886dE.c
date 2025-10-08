void _ZN9alacritty3cli20parse_hex_or_decimal17hd382c3b23da3886dE
               (undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined auVar2 [16];
  
  auVar2 = _ZN55__LT__RF_str_u20_as_u20_core__str__pattern__Pattern_GT_15strip_prefix_of17hd66f2c78bdb8496cE
                     ("0x",2,param_1,param_2);
  if (auVar2._0_8_ == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _ZN4core3num21__LT_impl_u20_u32_GT_16from_ascii_radix17h825576ac29f90020E
                      (auVar2._0_8_,auVar2._8_8_,0x10);
    uVar1 = ~uVar1 & 1;
  }
  _ZN4core6option15Option_LT_T_GT_7or_else17h036f9822a4576c3bE(uVar1);
  return;
}