void _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_23start_startup_exporters17h17dba9fd76f4f1aeE
               (long param_1)

{
  undefined *puVar1;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined local_a0 [64];
  undefined local_60 [48];
  
  _ZN83__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17ha5ce2c0f9c62b539E
            (local_60,param_1 + 0x160);
  _ZN106__LT_hashbrown__map__HashMap_LT_K_C_V_C_S_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h3251e331c5ae46e1E
            (local_a0,local_60);
  _ZN99__LT_hashbrown__raw__RawIntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6e661d8eacff008dE
            (&local_f8,local_a0);
  puVar1 = 
  PTR__ZN60__LT_alloc__string__String_u20_as_u20_core__clone__Clone_GT_5clone17h94782b8343b62bd8E_015927f0
  ;
  do {
    local_c8 = (undefined4)local_e8;
    uStack_c4 = local_e8._4_4_;
    uStack_c0 = uStack_e0;
    uStack_bc = uStack_dc;
    local_d8 = local_f8;
    uStack_d4 = uStack_f4;
    uStack_d0 = uStack_f0;
    uStack_cc = uStack_ec;
                    /* try { // try from 009f8d23 to 009f8d51 has its CatchHandler @ 009f8d91 */
    (*(code *)puVar1)(&local_b8,&local_d8);
    local_f8 = local_b8;
    uStack_f4 = uStack_b4;
    uStack_f0 = uStack_b0;
    uStack_ec = uStack_ac;
    local_e8 = local_a8;
    uStack_e0 = CONCAT31(uStack_e0._1_3_,(undefined)uStack_c0);
    _ZN15linera_exporter8runloops12task_manager29ExportersTracker_LT_F_C_S_GT_5spawn17hc5293321aae3509eE
              (param_1,&local_f8);
    _ZN4core3ptr58drop_in_place_LT_linera_service__config__DestinationId_GT_17ha22aadc4de93e11eE
              (&local_d8);
    _ZN99__LT_hashbrown__raw__RawIntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h6e661d8eacff008dE
              (&local_f8,local_a0);
  } while (CONCAT44(uStack_f4,local_f8) != -0x8000000000000000);
  _ZN4core3ptr103drop_in_place_LT_std__collections__hash__set__IntoIter_LT_linera_service__config__DestinationId_GT__GT_17he1d7b43ab9912c8fE
            (local_a0);
  return;
}