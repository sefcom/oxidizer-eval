void _ZN15linera_exporter7storage23CanonicalState_LT_C_GT_5clear17h39f8f7e6993e6317E(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined auStack_48 [32];
  undefined8 local_28;
  long local_20;
  
  lVar2 = *(long *)(param_1 + 0x60) + 0x10;
  _ZN5seize5guard10LocalGuard5enter17h641a2c8feab3edc9E
            (auStack_48,*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x20));
  local_20 = lVar2;
                    /* try { // try from 00a10bd8 to 00a10be2 has its CatchHandler @ 00a10c0f */
  _ZN6papaya3raw24HashMap_LT_K_C_V_C_S_GT_5clear17h674deb773bd83cf7E(lVar2,auStack_48);
  _ZN4core3ptr159drop_in_place_LT_papaya__map__HashMapRef_LT_usize_C_linera_exporter__common__CanonicalBlock_C_std__hash__random__RandomState_C_seize__guard__LocalGuard_GT__GT_17h5592183aace78ce3E
            (local_28);
  *(undefined *)(param_1 + 0x50) = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  _ZN4core3ptr70drop_in_place_LT__u5b_linera_exporter__common__CanonicalBlock_u5d__GT_17h6f4251c70084b32dE
            (*(undefined8 *)(param_1 + 0x38),uVar1);
  return;
}