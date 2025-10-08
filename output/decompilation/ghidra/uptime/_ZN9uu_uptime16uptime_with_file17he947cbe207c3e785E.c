long _ZN9uu_uptime16uptime_with_file17he947cbe207c3e785E(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  code *pcVar4;
  undefined local_118 [16];
  undefined **local_108;
  undefined8 local_100;
  undefined **local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_d8;
  code *local_d0;
  int local_c8 [2];
  undefined *local_c0;
  uint local_90;
  
  _ZN3std2fs8metadata17h476baf29a2bbbec6E(local_c8,param_1);
  if (local_c8[0] == 2) {
                    /* try { // try from 001674fc to 00167565 has its CatchHandler @ 00167885 */
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_002104e8)(1);
    local_118 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002102e8)();
    local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha14c2c1e029bb3b2E;
    local_108 = (undefined **)&DAT_00208258;
    local_100 = 2;
    uStack_e8 = 0;
    local_f0 = 1;
    local_f8 = &local_d8;
    local_d8 = local_118;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002102f0)(&local_108);
    local_118._8_8_ = local_c0;
    local_118._0_8_ = (undefined *)0x0;
    local_d0 = (code *)
               PTR__ZN61__LT_uu_uptime__UptimeError_u20_as_u20_core__fmt__Display_GT_3fmt17hf85dbf273cb999abE_002104f0
    ;
    local_108 = (undefined **)&DAT_00208278;
    local_100 = 2;
    uStack_e8 = 0;
    local_f0 = 1;
                    /* try { // try from 001675b0 to 001675ba has its CatchHandler @ 00167872 */
    local_f8 = &local_d8;
    local_d8 = local_118;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002102f0)(&local_108);
    _ZN4core3ptr43drop_in_place_LT_uu_uptime__UptimeError_GT_17hab725a8e0766abeeE
              (local_118._0_8_,local_118._8_8_);
  }
  else {
    if ((local_90 & 0xf000) == 0x1000) {
      local_118 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002102e8)();
      pcVar4 = (code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002102f0;
      local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha14c2c1e029bb3b2E;
      local_108 = (undefined **)&DAT_00208258;
      local_100 = 2;
      uStack_e8 = 0;
      local_f8 = &local_d8;
      local_f0 = 1;
      local_d8 = local_118;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002102f0)(&local_108);
      local_118._0_8_ = &DAT_0011a270;
    }
    else {
      if ((local_90 & 0xf000) != 0x4000) {
        _ZN9uu_uptime10print_time17h85d109f21a0e3885E();
        _ZN9uu_uptime13process_utmpx17hffb29050e36b1dfdE(&local_108,param_1);
        ppuVar3 = local_f8;
        if (local_108 == (undefined **)0x1) {
          lVar2 = _ZN9uu_uptime12print_uptime17h3abdc53142303b39E(1,local_100);
          if (lVar2 != 0) {
            return lVar2;
          }
        }
        else {
          local_118 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002102e8)();
          puVar1 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002102f0;
          local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha14c2c1e029bb3b2E;
          local_108 = (undefined **)&DAT_00208258;
          local_100 = 2;
          uStack_e8 = 0;
          local_f8 = &local_d8;
          local_f0 = 1;
          local_d8 = local_118;
          (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002102f0)(&local_108);
          local_108 = &PTR_s_couldn_t_get_boot_time_002082a8;
          local_100 = 1;
          local_f8 = (undefined **)0x8;
          local_f0 = 0;
          uStack_e8 = 0;
          (*(code *)puVar1)(&local_108);
          (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_002104e8)(1);
          local_108 = &PTR_s_up______days________00208298;
          local_100 = 1;
          local_f8 = (undefined **)0x8;
          local_f0 = 0;
          uStack_e8 = 0;
          (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002104f8)(&local_108);
        }
        goto LAB_00167749;
      }
      local_118 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_002102e8)();
      pcVar4 = (code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002102f0;
      local_d0 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17ha14c2c1e029bb3b2E;
      local_108 = (undefined **)&DAT_00208258;
      local_100 = 2;
      uStack_e8 = 0;
      local_f8 = &local_d8;
      local_f0 = 1;
      local_d8 = local_118;
      (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_002102f0)(&local_108);
      local_118._0_8_ = &DAT_0011a2e0;
    }
    local_118._8_8_ =
         PTR__ZN61__LT_uu_uptime__UptimeError_u20_as_u20_core__fmt__Display_GT_3fmt17hf85dbf273cb999abE_002104f0
    ;
    local_108 = (undefined **)&DAT_00208278;
    local_100 = 2;
    uStack_e8 = 0;
    local_f0 = 1;
    local_f8 = (undefined **)local_118;
    (*pcVar4)(&local_108);
    (*(code *)PTR__ZN6uucore4mods5error13set_exit_code17hbbe6ffc423a314f1E_002104e8)(1);
  }
  _ZN9uu_uptime10print_time17h85d109f21a0e3885E();
  local_108 = &PTR_s_up______days________00208298;
  local_100 = 1;
  local_f8 = (undefined **)0x8;
  local_f0 = 0;
  uStack_e8 = 0;
  (*(code *)PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_002104f8)(&local_108);
  ppuVar3 = (undefined **)0x0;
LAB_00167749:
  _ZN9uu_uptime12print_nusers17hc92747cb558417ffE(1,ppuVar3);
  _ZN9uu_uptime13print_loadavg17h786739790e395d27E();
  return 0;
}