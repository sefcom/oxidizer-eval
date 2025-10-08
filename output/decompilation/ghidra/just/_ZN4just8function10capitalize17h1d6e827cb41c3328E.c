undefined8 *
_ZN4just8function10capitalize17h1d6e827cb41c3328E
          (undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined auVar2 [12];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined local_5c [12];
  undefined local_50 [32];
  
  local_90 = 0;
  uStack_88 = 1;
  local_80 = 0;
  local_70 = param_4 + param_3;
  local_68 = 0;
  local_78 = param_3;
  auVar2 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbf0a80c91f197e22E
                     (&local_78);
  puVar1 = PTR__ZN4core7unicode12unicode_data11conversions8to_lower17hc1521f967a2a0de4E_005667c8;
  if (auVar2._8_4_ != 0x110000) {
    do {
      if (auVar2._0_8_ == 0) {
        (*(code *)
          PTR__ZN4core7unicode12unicode_data11conversions8to_upper17hd4e5a9ef8e8428c0E_00566a70)
                  (local_5c,auVar2._8_4_);
        _ZN4core4char15CaseMappingIter3new17hcde4616bfd23ae0dE(local_50,local_5c);
        _ZN89__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__Extend_LT_char_GT__GT_6extend17h0c6cf7086eb16438E
                  (&local_90,local_50);
      }
      else {
                    /* try { // try from 00369d65 to 00369db0 has its CatchHandler @ 00369db3 */
        (*(code *)puVar1)(local_5c,auVar2._8_4_);
        _ZN4core4char15CaseMappingIter3new17hcde4616bfd23ae0dE(local_50,local_5c);
        _ZN89__LT_alloc__string__String_u20_as_u20_core__iter__traits__collect__Extend_LT_char_GT__GT_6extend17h0c6cf7086eb16438E
                  (&local_90,local_50);
      }
      auVar2 = _ZN110__LT_core__iter__adapters__enumerate__Enumerate_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17hbf0a80c91f197e22E
                         (&local_78);
    } while (auVar2._8_4_ != 0x110000);
  }
  param_1[3] = local_80;
  param_1[1] = local_90;
  param_1[2] = uStack_88;
  *param_1 = 0;
  return param_1;
}