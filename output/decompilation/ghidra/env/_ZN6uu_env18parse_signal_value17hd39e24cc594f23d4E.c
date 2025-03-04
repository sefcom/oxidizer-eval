void _ZN6uu_env18parse_signal_value17hd39e24cc594f23d4E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  code *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  _ZN5alloc3str21__LT_impl_u20_str_GT_12to_uppercase17h63d26fcff35cb62eE(local_88);
                    /* try { // try from 001cc2ee to 001cc3a7 has its CatchHandler @ 001cc3d3 */
  auVar2 = _ZN6uucore8features7signals23signal_by_name_or_value17hc8db721c3f0fdbddE
                     (local_80,local_78);
  local_60 = 0;
  local_48 = 1;
  local_70 = &local_60;
  local_68 = _ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17h75932a24bee941d9E;
  local_b8 = &DAT_002488b0;
  uStack_b0 = 2;
  local_98 = 0;
  local_a8 = &local_70;
  local_a0 = 1;
  local_58 = param_2;
  local_50 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17ha7b9eb55e1cbc84dE(local_40,&local_b8);
  local_a0 = CONCAT44(local_a0._4_4_,0x7d);
  local_a8 = (undefined8 **)local_30;
  uVar1 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h48315bbd00cc7109E(&local_b8);
  if ((auVar2._0_8_ == 0) || (auVar2._8_8_ == 0)) {
    *param_1 = uVar1;
    param_1[1] = &
                 PTR__ZN4core3ptr54drop_in_place_LT_uucore__mods__error__USimpleError_GT_17h03ce124f780b058aE_00248908
    ;
  }
  else {
    param_1[1] = auVar2._8_8_;
    *param_1 = 0;
    _ZN4core3ptr81drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_uucore__mods__error__UError_GT__GT_17h327fc43f13d631ebE
              (uVar1);
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17hc60ce05406126818E(local_88);
  return;
}