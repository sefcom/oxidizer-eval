undefined8 * __rustcall
uu_dd::progress::SignalHandler::install_signal_handler
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
  
                    /* try { // try from 001f2705 to 001f2711 has its CatchHandler @ 001f286d */
  signal_hook::iterator::SignalsInfo<E>::new(&local_118,10);
  if (local_118 == 0) {
    param_1[1] = uStack_110;
    *param_1 = 0;
    core::ptr::
    drop_in_place<alloc::boxed::Box<dyn_core::ops::function::Fn<()>_Output_()_core::marker::Sync_core::marker::Send>>
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
    _<signal_hook::iterator::backend::Handle_as_core::clone::Clone>::clone(&local_98,&local_d0);
    local_e8 = local_a0;
    _local_f8 = CONCAT44(uStack_ac,local_b0);
    _uStack_f0 = CONCAT44(uStack_a4,uStack_a8);
    _local_108 = CONCAT44(uStack_bc,local_c0);
    _uStack_100 = CONCAT44(uStack_b4,uStack_b8);
    local_118 = local_d0;
    uStack_110 = uStack_c8;
    local_30 = 0x8000000000000000;
    local_40[0] = 0;
                    /* try { // try from 001f27ad to 001f27d9 has its CatchHandler @ 001f287d */
    local_e0 = param_2;
    local_d8 = param_3;
    std::thread::Builder::spawn_unchecked(local_58,local_40,&local_118);
    core::result::Result<T,E>::expect(&local_70,local_58);
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