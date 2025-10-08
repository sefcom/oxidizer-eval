void _ZN5uu_dd8progress13SignalHandler22install_signal_handler17hb77c05ee19a2f2b6E
               (undefined8 *param_1,undefined8 param_2)

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
  undefined **local_d8;
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
  undefined local_18;
  
                    /* try { // try from 0018f070 to 0018f077 has its CatchHandler @ 0018f1e9 */
  _ZN11signal_hook8iterator20SignalsInfo_LT_E_GT_3new17hd8417989ae65a609E(&local_118);
  if (local_118 != 0) {
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
    _ZN77__LT_signal_hook__iterator__backend__Handle_u20_as_u20_core__clone__Clone_GT_5clone17hccb9524075a443b6E
              (&local_98,&local_d0);
    local_e8 = local_a0;
    _local_f8 = CONCAT44(uStack_ac,local_b0);
    _uStack_f0 = CONCAT44(uStack_a4,uStack_a8);
    _local_108 = CONCAT44(uStack_bc,local_c0);
    _uStack_100 = CONCAT44(uStack_b4,uStack_b8);
    local_118 = local_d0;
    uStack_110 = uStack_c8;
    local_d8 = &
               PTR__ZN4core3ptr81drop_in_place_LT_uu_dd__Alarm__manual_trigger_fn___u7b__u7b_closure_u7d__u7d__GT_17h9d080ba9902278e1E_0023dc30
    ;
    local_30 = 0x8000000000000000;
    local_40[0] = 0;
    local_18 = 0;
                    /* try { // try from 0018f122 to 0018f14e has its CatchHandler @ 0018f1fd */
    local_e0 = param_2;
    _ZN3std6thread7Builder15spawn_unchecked17hc7245a19c3e4d7e1E(local_58,local_40,&local_118);
    _ZN4core6result19Result_LT_T_C_E_GT_6expect17hde2740aff8c517d5E(&local_70,local_58);
    param_1[2] = local_88;
    param_1[3] = uStack_80;
    *param_1 = local_98;
    param_1[1] = uStack_90;
    param_1[6] = uStack_68;
    param_1[7] = local_60;
    param_1[4] = local_78;
    param_1[5] = local_70;
    return;
  }
  param_1[1] = uStack_110;
  *param_1 = 0;
  _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17he6a5b66802892929E
            (param_2,&
                     PTR__ZN4core3ptr81drop_in_place_LT_uu_dd__Alarm__manual_trigger_fn___u7b__u7b_closure_u7d__u7d__GT_17h9d080ba9902278e1E_0023dc30
            );
  return;
}