void _ZN15linera_exporter7storage23CanonicalState_LT_C_GT_4push17h7e835d6c560bd987E
               (long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  long local_a0;
  undefined local_98 [16];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  lVar1 = *(long *)(param_1 + 200);
  *(long *)(param_1 + 200) = lVar1 + 1;
  lVar2 = *(long *)(param_1 + 0xc0);
                    /* try { // try from 00a103d4 to 00a103dd has its CatchHandler @ 00a10483 */
  _ZN5seize5guard10LocalGuard5enter17h641a2c8feab3edc9E(local_98,*(undefined8 *)(lVar2 + 0x20));
  local_a0 = lVar2 + 0x10;
  local_a8 = CONCAT44(uStack_74,local_78);
  local_b8 = local_88;
  uStack_b4 = uStack_84;
  uStack_b0 = uStack_80;
  uStack_ac = uStack_7c;
  local_c8 = local_98._0_4_;
  uStack_c4 = local_98._4_4_;
  uStack_c0 = local_98._8_4_;
  uStack_bc = local_98._12_4_;
                    /* try { // try from 00a1040b to 00a10441 has its CatchHandler @ 00a1048f */
  local_98 = _ZN79__LT_alloc__boxed__Box_LT__u5b_T_u5d__C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h2ead835679769461E
                       (*param_2,param_2[1]);
  local_88 = *(undefined4 *)(param_2 + 2);
  uStack_84 = *(undefined4 *)((long)param_2 + 0x14);
  uStack_80 = *(undefined4 *)(param_2 + 3);
  uStack_7c = *(undefined4 *)((long)param_2 + 0x1c);
  local_78 = *(undefined4 *)(param_2 + 4);
  uStack_74 = *(undefined4 *)((long)param_2 + 0x24);
  uStack_70 = *(undefined4 *)(param_2 + 5);
  uStack_6c = *(undefined4 *)((long)param_2 + 0x2c);
  _ZN6papaya3map31HashMapRef_LT_K_C_V_C_S_C_G_GT_6insert17h414e48063512137fE
            (&local_c8,lVar1,local_98);
                    /* try { // try from 00a10447 to 00a1044b has its CatchHandler @ 00a10483 */
  _ZN4core3ptr159drop_in_place_LT_papaya__map__HashMapRef_LT_usize_C_linera_exporter__common__CanonicalBlock_C_std__hash__random__RandomState_C_seize__guard__LocalGuard_GT__GT_17h5592183aace78ce3E
            (local_a8);
  _ZN11quick_cache4sync35Cache_LT_Key_C_Val_C_We_C_B_C_L_GT_21insert_with_lifecycle17h77868347be523033E
            (local_98,*(long *)(param_1 + 0xb8) + 0x10,lVar1,param_2);
  _ZN4core3ptr125drop_in_place_LT__u5b_core__option__Option_LT__LP_usize_C_linera_exporter__common__CanonicalBlock_RP__GT__u3b__u20_2_u5d__GT_17h1c0e3ea1445bdf02E
            (local_98);
  return;
}