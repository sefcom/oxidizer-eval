void _ZN10uu_timeout17report_if_verbose17ha1199c5238d9a8e5E
               (ulong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 **local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_80;
  code *local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined local_60 [16];
  undefined8 local_50;
  undefined local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (param_4 != 0) {
    if (0x1f < param_1) {
      (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_0021ac10)
                (&PTR_s_src_uu_timeout_src_timeout_rs_00212818);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar1 = (undefined4 *)
             (PTR__ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E_0021ac78 +
             param_1 * 0x10);
    local_40 = *puVar1;
    uStack_3c = puVar1[1];
    uStack_38 = puVar1[2];
    uStack_34 = puVar1[3];
    local_60 = (*(code *)PTR__ZN6uucore9util_name17h074417a1e6395129E_0021a9d0)();
    puVar3 = PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0021a9d8;
    local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfb845f87f4f905f7E;
    local_b0 = &DAT_002127c8;
    local_a8 = 2;
    local_90 = 0;
    local_98 = 1;
    local_a0 = &local_80;
    local_80 = (undefined8 *)local_60;
    (*(code *)PTR__ZN3std2io5stdio7_eprint17h57899770eacec2adE_0021a9d8)(&local_b0);
    local_60._0_8_ = 0;
    local_48 = 1;
    local_80 = (undefined8 *)&local_40;
    local_78 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hfb845f87f4f905f7E;
    local_68 = 
    PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_0021ac50
    ;
    local_b0 = &DAT_002127e8;
    local_a8 = 3;
    local_90 = 0;
    local_98 = 2;
    local_a0 = &local_80;
    local_70 = (undefined8 *)local_60;
    local_60._8_8_ = param_2;
    local_50 = param_3;
    (*(code *)puVar3)(&local_b0);
  }
  return;
}