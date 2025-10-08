void _ZN11turbo_trace6tracer6Tracer15create_resolver17h65055149db132350E
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined local_4c0 [336];
  undefined4 local_370;
  undefined4 uStack_36c;
  undefined4 uStack_368;
  undefined4 uStack_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined local_1b2;
  undefined local_1b1;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined local_2b;
  undefined local_29;
  
  (*(code *)
    PTR__ZN80__LT_oxc_resolver__options__ResolveOptions_u20_as_u20_core__default__Default_GT_7default17h8485d01452810ea0E_0075f478
  )(&local_1b0);
  local_2b = 1;
  (*(code *)PTR_memcpy_0075f310)(&local_338,&local_1b0,0x186);
  local_1b2 = 2;
  local_1b1 = local_29;
  _ZN12oxc_resolver7options14ResolveOptions14with_extension17h83107bc3c492dfdeE
            (&local_1b0,&local_338,&DAT_0019306d,3);
  _ZN12oxc_resolver7options14ResolveOptions14with_extension17h83107bc3c492dfdeE
            (&local_338,&local_1b0,".tsx",4);
  _ZN12oxc_resolver7options14ResolveOptions14with_extension17h83107bc3c492dfdeE
            (&local_1b0,&local_338,".jsx",4);
  _ZN12oxc_resolver7options14ResolveOptions14with_extension17h83107bc3c492dfdeE
            (&local_338,&local_1b0,&DAT_00193070,5);
  _ZN12oxc_resolver7options14ResolveOptions14with_extension17h83107bc3c492dfdeE
            (&local_1b0,&local_338,".mjs",4);
  _ZN12oxc_resolver7options14ResolveOptions14with_extension17h83107bc3c492dfdeE
            (&local_338,&local_1b0,".cjs",4);
  _ZN12oxc_resolver7options14ResolveOptions15with_main_field17he3f4c4609b4bac47E
            (&local_1b0,&local_338,
             "modulenetospath/posixpath/win32perf_hooksprocessquerystringstreamstream/promisesstream/webstring_decodersystimerstimers/promisestlstrace_eventsttyurlutil/typesv8vmworker_threads"
             ,6);
  _ZN12oxc_resolver7options14ResolveOptions15with_main_field17he3f4c4609b4bac47E
            (&local_338,&local_1b0,&DAT_001928c6,5);
  (*(code *)
    PTR__ZN12oxc_resolver7options14ResolveOptions20with_condition_names17h56ea05014ceabc25E_0075ffe8
  )(local_4c0,&local_338,&PTR_s_import_00702ab8,5);
  if (param_2 != 0) {
                    /* try { // try from 00468439 to 0046844b has its CatchHandler @ 004684e2 */
    _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17haf8e89f95b98fa54E
              (&local_1b0,param_2,param_3);
    local_328 = local_1a0;
    local_338 = local_1b0;
    uStack_334 = uStack_1ac;
    uStack_330 = uStack_1a8;
    uStack_32c = uStack_1a4;
    _ZN4core3ptr87drop_in_place_LT_core__option__Option_LT_oxc_resolver__options__TsconfigOptions_GT__GT_17h3a30df05dae62801E
              (&local_370);
    local_360 = local_328;
    local_370 = local_338;
    uStack_36c = uStack_334;
    uStack_368 = uStack_330;
    uStack_364 = uStack_32c;
    local_358 = 0x8000000000000001;
  }
  (*(code *)PTR_memcpy_0075f310)(&local_1b0,local_4c0,0x188);
  _ZN12oxc_resolver24ResolverGeneric_LT_C_GT_3new17hd2f97fa26530c491E(param_1,&local_1b0);
  return;
}