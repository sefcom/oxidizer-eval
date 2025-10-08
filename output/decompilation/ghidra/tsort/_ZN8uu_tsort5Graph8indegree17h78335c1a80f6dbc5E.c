undefined  [16] _ZN8uu_tsort5Graph8indegree17h78335c1a80f6dbc5E(long param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  
  auVar2 = _ZN9hashbrown3map28HashMap_LT_K_C_V_C_S_C_A_GT_9get_inner17hbf23ef7421c68646E
                     (param_1 + 0x18);
  if (auVar2._0_8_ != 0) {
    auVar2._8_8_ = *(undefined8 *)(auVar2._0_8_ + 0x28);
    auVar2._0_8_ = 1;
    return auVar2;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auVar2._8_8_;
  return auVar1 << 0x40;
}