void _ZN7uu_kill13print_signals17h042cfab5aaca8808E(void)

{
  undefined *puVar1;
  undefined auVar2 [16];
  undefined local_290 [16];
  undefined8 *local_280;
  code *local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined8 **local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_240;
  undefined8 local_238;
  undefined local_230 [512];
  
  (*(code *)PTR_memcpy_001ee008)
            (local_230,PTR__ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E_001ee0c0,
             0x200);
  local_240 = 0;
  local_238 = 0x20;
  auVar2 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h905af251fa7b808eE
                     (&local_240);
  puVar1 = PTR__ZN3std2io5stdio6_print17h5e446ff973c02de6E_001ee180;
  if (auVar2._0_8_ != 0) {
    do {
      local_280 = (undefined8 *)local_290;
      local_278 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h3a9a4fe6be7cab02E;
      local_270 = &DAT_001e7650;
      local_268 = 2;
      local_250 = 0;
      local_258 = 1;
      local_260 = &local_280;
      local_290 = auVar2;
      (*(code *)puVar1)(&local_270);
      auVar2 = _ZN4core5array4iter10iter_inner78PolymorphicIter_LT__u5b_core__mem__maybe_uninit__MaybeUninit_LT_T_GT__u5d__GT_4next17h905af251fa7b808eE
                         (&local_240);
    } while (auVar2._0_8_ != 0);
  }
  return;
}