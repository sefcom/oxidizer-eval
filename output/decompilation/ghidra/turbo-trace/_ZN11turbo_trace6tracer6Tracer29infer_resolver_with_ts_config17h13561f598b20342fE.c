void _ZN11turbo_trace6tracer6Tracer29infer_resolver_with_ts_config17h13561f598b20342fE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined8 local_4e8;
  undefined local_4e0 [24];
  undefined local_4c8 [336];
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  
  local_330 = 1;
  local_340 = param_2;
  uStack_338 = param_3;
  auVar3 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17h9c53deefae5fceb3E
                     (&local_340);
  lVar1 = auVar3._0_8_;
  local_330 = 1;
  local_340 = param_2;
  uStack_338 = param_3;
  auVar4 = _ZN100__LT_core__iter__adapters__skip__Skip_LT_I_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17hd697ca68955bda25E
                     (&local_340);
  lVar2 = auVar4._0_8_;
  if (lVar1 == 0 && lVar2 == 0) {
    *param_1 = 0x8000000000000000;
  }
  else {
    _ZN76__LT_oxc_resolver__options__ResolveOptions_u20_as_u20_core__clone__Clone_GT_5clone17h013b23858b0f51b6E
              (local_4c8,param_4);
    if (lVar1 != 0) {
                    /* try { // try from 00467f7b to 00467f9b has its CatchHandler @ 00468130 */
      (*(code *)
        PTR__ZN9turbopath20absolute_system_path18AbsoluteSystemPath14join_component17hfbbfb208a663becdE_0075ffd8
      )(local_1b8,lVar1,auVar3._8_8_,"tsconfig.json",0xd);
                    /* try { // try from 00467fac to 00467fb8 has its CatchHandler @ 0046811e */
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17haf8e89f95b98fa54E
                (&local_340,local_1b0,local_1a8);
      local_4e8 = local_330;
      local_4f8 = (undefined4)local_340;
      uStack_4f4 = local_340._4_4_;
      uStack_4f0 = (undefined4)uStack_338;
      uStack_4ec = uStack_338._4_4_;
      _ZN4core3ptr87drop_in_place_LT_core__option__Option_LT_oxc_resolver__options__TsconfigOptions_GT__GT_17h3a30df05dae62801E
                (&local_378);
      local_368 = local_4e8;
      local_378 = local_4f8;
      uStack_374 = uStack_4f4;
      uStack_370 = uStack_4f0;
      uStack_36c = uStack_4ec;
      local_360 = 0x8000000000000001;
      _ZN4core3ptr79drop_in_place_LT_turbopath__absolute_system_path_buf__AbsoluteSystemPathBuf_GT_17ha7d9f52c4329cdd7E
                (local_1b8);
    }
    if (lVar2 != 0) {
      (*(code *)PTR_memcpy_0075f310)(&local_340,local_4c8,0x188);
                    /* try { // try from 00468037 to 00468052 has its CatchHandler @ 00468109 */
      (*(code *)
        PTR__ZN9turbopath20absolute_system_path18AbsoluteSystemPath14join_component17hfbbfb208a663becdE_0075ffd8
      )(&local_4f8,lVar2,auVar4._8_8_,"node_modules",0xc);
                    /* try { // try from 00468053 to 0046805f has its CatchHandler @ 004680ec */
      _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17hff486aca12fc4c5dE
                (local_4e0,&local_4f8);
                    /* try { // try from 00468060 to 00468079 has its CatchHandler @ 004680d9 */
      _ZN12oxc_resolver7options14ResolveOptions11with_module17h3fbbf460763bb77eE
                (local_1b8,&local_340,local_4e0);
      (*(code *)PTR_memcpy_0075f310)(local_4c8,local_1b8,0x188);
      _ZN4core3ptr79drop_in_place_LT_turbopath__absolute_system_path_buf__AbsoluteSystemPathBuf_GT_17ha7d9f52c4329cdd7E
                (&local_4f8);
    }
    (*(code *)PTR_memcpy_0075f310)(&local_340,local_4c8,0x188);
    _ZN12oxc_resolver24ResolverGeneric_LT_C_GT_18clone_with_options17h7d4b9da875af48e3E
              (param_1,*(undefined8 *)(param_4 + 0x188),&local_340);
  }
  return;
}