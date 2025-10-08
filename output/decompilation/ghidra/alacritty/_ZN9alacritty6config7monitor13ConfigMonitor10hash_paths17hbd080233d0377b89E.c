undefined  [16]
_ZN9alacritty6config7monitor13ConfigMonitor10hash_paths17hbd080233d0377b89E
          (long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined local_2059;
  long local_2058;
  long local_2050;
  undefined8 local_2048;
  undefined8 local_2040;
  undefined8 local_2038;
  undefined8 uStack_2030;
  undefined8 local_2028;
  undefined8 uStack_2020;
  undefined8 local_2018;
  long local_2010 [1024];
  
  local_2010[0x200] = 0;
  local_2010[0] = 0;
  if (0x400 < param_2) {
    auVar2._8_8_ = 0;
    auVar2._0_8_ = param_3;
    return auVar2 << 0x40;
  }
  (*(code *)PTR_memset_009de510)(local_2010,0,0x2000);
  local_2050 = param_1 + param_2 * 0x18;
  local_2048 = 0;
  local_2058 = param_1;
  auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0877e22635b0eae3E
                     (&local_2058);
  if (auVar5._8_8_ != 0) {
    do {
      uVar3 = auVar5._0_8_;
      if (0x3ff < uVar3) {
        (*(code *)PTR__ZN4core9panicking18panic_bounds_check17h025cadc56a971af7E_009de0f0)
                  (uVar3,0x400,&PTR_s_alacritty_src_config_monitor_rs_00981988);
        pcVar1 = (code *)swi(3);
        auVar5 = (*pcVar1)();
        return auVar5;
      }
      local_2010[uVar3] = auVar5._8_8_;
      auVar5 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h0877e22635b0eae3E
                         (&local_2058);
    } while (auVar5._8_8_ != 0);
  }
  _ZN4core5slice4sort8unstable7ipnsort17h564da9b7d84c9ea3E(local_2010,&local_2059);
  local_2058 = 0x736f6d6570736575;
  local_2050 = 0x6c7967656e657261;
  local_2048 = 0x646f72616e646f6d;
  local_2040 = 0x7465646279746573;
  local_2038 = 0;
  uStack_2030 = 0;
  local_2028 = 0;
  uStack_2020 = 0;
  local_2018 = 0;
  _ZN4core4hash4Hash10hash_slice17hcd45d8a7ab48ceecE(local_2010,&local_2058);
  uVar4 = _ZN71__LT_core__hash__sip__Hasher_LT_S_GT__u20_as_u20_core__hash__Hasher_GT_6finish17hc4e334d8e4871601E
                    (&local_2058);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = 1;
  return auVar5;
}