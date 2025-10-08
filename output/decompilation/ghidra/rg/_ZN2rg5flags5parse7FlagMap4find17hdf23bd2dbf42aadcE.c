undefined  [16] _ZN2rg5flags5parse7FlagMap4find17hdf23bd2dbf42aadcE(void)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17h6b60bcfa749c140bE();
  if (auVar2._0_8_ != 0) {
    auVar2._8_8_ = *(undefined8 *)(auVar2._0_8_ + 0x18);
    auVar2._0_8_ = 1;
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auVar2._8_8_;
  return auVar1 << 0x40;
}