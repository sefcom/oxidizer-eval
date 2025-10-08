void _ZN15linera_exporter8runloops26start_block_processor_task17h2257757776e29d89E
               (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
               undefined8 *param_5,undefined4 param_6,undefined4 *param_7)

{
  undefined auVar1 [16];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined local_78 [24];
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined local_38;
  
                    /* try { // try from 00a029fa to 00a02a03 has its CatchHandler @ 00a02b22 */
  auVar1 = _ZN5tokio4sync4mpsc4chan7channel17h94d534a1aead10c7E();
  _ZN79__LT_tokio__sync__mpsc__chan__Tx_LT_T_C_S_GT__u20_as_u20_core__clone__Clone_GT_5clone17h523f9ce66b3af0e2E
            (auVar1._0_8_);
  local_d0 = *param_2;
  uStack_c8 = param_2[1];
  local_c0 = param_2[2];
  uStack_b8 = param_2[3];
  local_98 = *param_4;
  uStack_90 = param_4[1];
  local_108 = *param_5;
  uStack_100 = param_5[1];
  local_f8 = param_5[2];
  uStack_f0 = param_5[3];
  local_e8 = *(undefined4 *)(param_5 + 4);
  uStack_e4 = *(undefined4 *)((long)param_5 + 0x24);
  uStack_e0 = *(undefined4 *)(param_5 + 5);
  uStack_dc = *(undefined4 *)((long)param_5 + 0x2c);
  local_d8 = param_5[6];
  local_128 = *param_7;
  uStack_124 = param_7[1];
  uStack_120 = param_7[2];
  uStack_11c = param_7[3];
  local_118 = param_7[4];
  uStack_114 = param_7[5];
  uStack_110 = param_7[6];
  uStack_10c = param_7[7];
  local_50 = 0x8000000000000000;
  local_60[0] = 0;
  local_38 = 0;
                    /* try { // try from 00a02acf to 00a02afa has its CatchHandler @ 00a02b46 */
  local_b0 = param_3;
  local_88 = param_6;
  local_a8 = auVar1;
  _ZN3std6thread7Builder15spawn_unchecked17h5a1058c0d95e41a0E(local_78,local_60,&local_128);
  _ZN4core6result19Result_LT_T_C_E_GT_6expect17h8fbce090a56d3df6E(&local_140,local_78);
  *param_1 = auVar1._0_8_;
  param_1[1] = local_140;
  param_1[2] = uStack_138;
  param_1[3] = local_130;
  return;
}