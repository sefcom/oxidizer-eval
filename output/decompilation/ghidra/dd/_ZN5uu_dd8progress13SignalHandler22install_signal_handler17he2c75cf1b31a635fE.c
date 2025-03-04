undefined8 *
_ZN5uu_dd8progress13SignalHandler22install_signal_handler17he2c75cf1b31a635fE
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined local_58 [24];
  undefined8 local_40 [2];
  undefined8 local_30;
  
                    /* try { // try from 001f04f5 to 001f0501 has its CatchHandler @ 001f065d */
  _ZN11signal_hook8iterator20SignalsInfo_LT_E_GT_3new17hff46f358f252daddE(&local_118,10);
  if (local_118 == 0) {
    param_1[1] = uStack_110;
    *param_1 = 0;
    _ZN4core3ptr173drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_core__ops__function__Fn_LT__LP__RP__GT__u2b_Output_u20__u3d__u20__LP__RP__u2b_core__marker__Sync_u2b_core__marker__Send_GT__GT_17hbd64289d0f49cc7cE
              (param_2,param_3);
  }
  else {
    local_a0 = local_e8;
    local_b0 = local_f8;
    uStack_ac = uStack_f4;
    uStack_a8 = uStack_f0;
    uStack_a4 = uStack_ec;
    local_c0 = local_108;
    uStack_bc = uStack_104;
    uStack_b8 = uStack_100;
    uStack_b4 = uStack_fc;
    local_d0 = local_118;
    uStack_c8 = uStack_110;
    _ZN77__LT_signal_hook__iterator__backend__Handle_u20_as_u20_core__clone__Clone_GT_5clone17h4933321813e84478E
              (&local_98,&local_d0);
    local_e8 = local_a0;
    _local_f8 = CONCAT44(uStack_ac,local_b0);
    _uStack_f0 = CONCAT44(uStack_a4,uStack_a8);
    _local_108 = CONCAT44(uStack_bc,local_c0);
    _uStack_100 = CONCAT44(uStack_b4,uStack_b8);
    local_118 = local_d0;
    uStack_110 = uStack_c8;
    local_30 = 0x8000000000000000;
    local_40[0] = 0;
                    /* try { // try from 001f059d to 001f05c9 has its CatchHandler @ 001f066d */
    local_e0 = param_2;
    local_d8 = param_3;
    _ZN3std6thread7Builder15spawn_unchecked17hf6e5fc31be6cfac7E(local_58,local_40,&local_118);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17hae1648ffdc1cd49bE(&local_70,local_58);
    param_1[2] = local_88;
    param_1[3] = uStack_80;
    *param_1 = local_98;
    param_1[1] = uStack_90;
    param_1[6] = uStack_68;
    param_1[7] = local_60;
    param_1[4] = local_78;
    param_1[5] = local_70;
  }
  return param_1;
}