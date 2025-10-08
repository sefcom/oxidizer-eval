void _ZN11firecracker7metrics15PeriodicMetrics13write_metrics17he46d8abbed79fb0dE(void)

{
  long lVar1;
  int *local_b0;
  undefined *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined **local_30;
  undefined8 local_28;
  undefined4 **local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  _ZN3vmm6logger7metrics20Metrics_LT_T_C_M_GT_5write17hfac1306afee0d86fE(&local_a0);
  if (local_a0 == 4) {
    _ZN4core3ptr90drop_in_place_LT_core__result__Result_LT_bool_C_vmm__logger__metrics__MetricsError_GT__GT_17h6e4c08fe310609cfE
              (&local_a0);
    return;
  }
  local_48 = local_90;
  uStack_44 = uStack_8c;
  uStack_40 = uStack_88;
  uStack_3c = uStack_84;
  local_58 = local_a0;
  uStack_54 = uStack_9c;
  uStack_50 = uStack_98;
  uStack_4c = uStack_94;
  (*(code *)
    PTR__ZN89__LT_vmm__logger__metrics__SharedIncMetric_u20_as_u20_vmm__logger__metrics__IncMetric_GT_3add17hbbe9ee225a228839E_004bfb98
  )(PTR__ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E_004bf5e0 + 0x3b0,1);
  lVar1 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
  if (lVar1 != 0) {
    local_b0 = &local_58;
    local_a8 = 
    PTR__ZN3vmm6logger7metrics1_83__LT_impl_u20_core__fmt__Display_u20_for_u20_vmm__logger__metrics__MetricsError_GT_3fmt17h9765c9c2e7370a07E_004bfc78
    ;
    local_30 = &PTR_DAT_004a3d48;
    local_28 = 1;
    local_10 = 0;
    local_20 = &local_b0;
    local_18 = 1;
    local_60 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                         (&PTR_DAT_004a3d58);
    local_80 = &DAT_001389e3;
    local_78 = 0x14;
    local_70 = &DAT_001389e3;
    local_68 = 0x14;
    _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_30,1,&local_80);
  }
  _ZN4core3ptr55drop_in_place_LT_vmm__logger__metrics__MetricsError_GT_17h42628f5b9c269c70E
            (&local_58);
  return;
}