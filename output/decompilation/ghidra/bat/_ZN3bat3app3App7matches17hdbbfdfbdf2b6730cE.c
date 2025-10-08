void _ZN3bat3app3App7matches17hdbbfdfbdf2b6730cE(undefined4 *param_1,undefined param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined uVar6;
  char cVar7;
  long lVar8;
  undefined8 local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  undefined8 local_350;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 local_340;
  undefined4 uStack_33c;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  
  (*(code *)PTR__ZN4wild7args_os17h91687d91224c0c4bE_008079a0)(&local_2f8);
                    /* try { // try from 004a5fb4 to 004a5fbb has its CatchHandler @ 004a6357 */
  lVar8 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_10advance_by17ha42ee29f2c654f8dE
                    (&local_2f8);
  if (lVar8 == 0) {
    _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7e2168353368336dE
              (&local_368,&local_2f8);
  }
  else {
    local_368 = -0x8000000000000000;
  }
                    /* try { // try from 004a5fde to 004a5ff3 has its CatchHandler @ 004a6344 */
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hab28b98124005ba5E
            (&local_338,&DAT_00185063,5);
  uVar5 = uStack_35c;
  uVar4 = uStack_360;
  lVar3 = local_368;
  lVar8 = CONCAT44(uStack_334,local_338);
  uVar2 = CONCAT44(uStack_32c,uStack_330);
  if (local_368 == -0x8000000000000000) {
    if (lVar8 != -0x8000000000000000) {
LAB_004a6091:
      _ZN4core3ptr39drop_in_place_LT_std__env__VarError_GT_17h198ca8bda8255d94E(lVar8,uVar2);
      _ZN4core3ptr39drop_in_place_LT_std__env__VarError_GT_17h198ca8bda8255d94E
                (lVar3,CONCAT44(uStack_35c,uStack_360));
      _ZN4core3ptr37drop_in_place_LT_std__env__ArgsOs_GT_17hfaba7b8d7b37da12E(&local_2f8);
      (*(code *)PTR__ZN4wild7args_os17h91687d91224c0c4bE_008079a0)(&local_2f8);
      uVar6 = _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_8try_fold17hc05e6ee77d3e443cE
                        (&local_2f8);
      cVar7 = _ZN90__LT_core__ops__control_flow__ControlFlow_LT_B_C_C_GT__u20_as_u20_core__cmp__PartialEq_GT_2eq17h6ab9270b351d8cabE
                        (uVar6);
      _ZN4core3ptr37drop_in_place_LT_std__env__ArgsOs_GT_17hfaba7b8d7b37da12E(&local_2f8);
      if (cVar7 == '\0') {
        (*(code *)PTR__ZN4wild7args_os17h91687d91224c0c4bE_008079a0)(&local_338);
                    /* try { // try from 004a616f to 004a61ab has its CatchHandler @ 004a6327 */
        _ZN3bat6config26get_args_from_env_opts_var17h92b97541d17b6770E(&local_2f8);
        if (CONCAT44(uStack_2f4,local_2f8) == -0x7fffffffffffffff) {
          _ZN3bat6config25get_args_from_config_file17ha270dcc92bd168ccE(&local_368);
          uStack_348 = uStack_360;
          uStack_344 = uStack_35c;
        }
        else {
          local_358 = CONCAT44(uStack_2e4,local_2e8);
          local_368 = CONCAT44(uStack_2f4,local_2f8);
          uStack_348 = uStack_2f0;
          uStack_344 = uStack_2ec;
        }
        if (local_368 == -0x8000000000000000) {
          (*(code *)
            PTR__ZN72__LT_bat__error__Error_u20_as_u20_core__convert__From_LT__RF_str_GT__GT_4from17h8ad35b8946c9894bE_008079a8
          )(&local_2f8,&DAT_0018507a,0x22);
          *(undefined8 *)(param_1 + 0x10) = local_2b8;
          *(undefined8 *)(param_1 + 0x12) = uStack_2b0;
          param_1[0xc] = local_2c8;
          param_1[0xd] = uStack_2c4;
          param_1[0xe] = uStack_2c0;
          param_1[0xf] = uStack_2bc;
          param_1[8] = local_2d8;
          param_1[9] = uStack_2d4;
          param_1[10] = uStack_2d0;
          param_1[0xb] = uStack_2cc;
          param_1[4] = local_2e8;
          param_1[5] = uStack_2e4;
          param_1[6] = uStack_2e0;
          param_1[7] = uStack_2dc;
          *param_1 = local_2f8;
          param_1[1] = uStack_2f4;
          param_1[2] = uStack_2f0;
          param_1[3] = uStack_2ec;
          _ZN4core3ptr37drop_in_place_LT_std__env__ArgsOs_GT_17hfaba7b8d7b37da12E(&local_338);
          return;
        }
        local_358._4_4_ = (undefined4)((ulong)local_358 >> 0x20);
        local_340 = (undefined4)local_358;
        uStack_33c = local_358._4_4_;
        local_350 = local_368;
                    /* try { // try from 004a6221 to 004a6289 has its CatchHandler @ 004a6366 */
        _ZN3bat6config22get_args_from_env_vars17he80b41528665be0bE(&local_368);
        _ZN90__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__iter__traits__collect__IntoIterator_GT_9into_iter17h773bba194ed5337eE
                  (&local_2f8,&local_368);
        _ZN136__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_alloc__vec__spec_extend__SpecExtend_LT_T_C_alloc__vec__into_iter__IntoIter_LT_T_GT__GT__GT_11spec_extend17hdc7fb04415129507E
                  (&local_350,&local_2f8);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7e2168353368336dE
                  (&local_2f8,&local_338);
        if (CONCAT44(uStack_2f4,local_2f8) == -0x8000000000000000) {
                    /* try { // try from 004a630c to 004a6318 has its CatchHandler @ 004a6366 */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_008074d0)
                    (&PTR_DAT_007c8270);
          goto LAB_004a6319;
        }
        local_368 = CONCAT44(uStack_2f4,local_2f8);
        uStack_360 = uStack_2f0;
        uStack_35c = uStack_2ec;
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17hc907e9f21102985cE
                  (&local_350,&local_368,&PTR_DAT_007c8288);
        local_2e8 = local_328;
        uStack_2e4 = uStack_324;
        uStack_2e0 = uStack_320;
        uStack_2dc = uStack_31c;
        local_2f8 = local_338;
        uStack_2f4 = uStack_334;
        uStack_2f0 = uStack_330;
        uStack_2ec = uStack_32c;
                    /* try { // try from 004a62a1 to 004a62b2 has its CatchHandler @ 004a631b */
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h3e7c4c4d66788513E
                  (&local_2f8,&local_350);
      }
      else {
        (*(code *)PTR__ZN4wild7args_os17h91687d91224c0c4bE_008079a0)();
                    /* try { // try from 004a60ed to 004a60f6 has its CatchHandler @ 004a6322 */
        _ZN3bat6config22get_args_from_env_vars17he80b41528665be0bE(&local_350);
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h7e2168353368336dE
                  (&local_2f8,&local_338);
        if (CONCAT44(uStack_2f4,local_2f8) == -0x8000000000000000) {
                    /* try { // try from 004a62fd to 004a6309 has its CatchHandler @ 004a637f */
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_008074d0)
                    (&PTR_DAT_007c82a0);
LAB_004a6319:
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_368 = CONCAT44(uStack_2f4,local_2f8);
        uStack_360 = uStack_2f0;
        uStack_35c = uStack_2ec;
                    /* try { // try from 004a6127 to 004a613a has its CatchHandler @ 004a637f */
        _ZN5alloc3vec16Vec_LT_T_C_A_GT_6insert17hc907e9f21102985cE
                  (&local_350,&local_368,&PTR_DAT_007c82b8);
        local_2e8 = local_328;
        uStack_2e4 = uStack_324;
        uStack_2e0 = uStack_320;
        uStack_2dc = uStack_31c;
        local_2f8 = local_338;
        uStack_2f4 = uStack_334;
        uStack_2f0 = uStack_330;
        uStack_2ec = uStack_32c;
                    /* try { // try from 004a6152 to 004a6163 has its CatchHandler @ 004a631d */
        _ZN103__LT_alloc__vec__into_iter__IntoIter_LT_T_C_A_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4fold17h937e1e1c5c562a1dE
                  (&local_2f8,&local_350);
      }
      local_318 = (undefined4)local_350;
      uStack_314 = local_350._4_4_;
      uStack_310 = uStack_348;
      uStack_30c = uStack_344;
      local_308 = CONCAT44(uStack_33c,local_340);
      goto LAB_004a62c7;
    }
  }
  else if ((lVar8 == -0x8000000000000000) ||
          (cVar7 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h3157ab32a91dd951E
                             (CONCAT44(uStack_35c,uStack_360),local_358,uVar2,
                              CONCAT44(uStack_324,local_328)), cVar7 == '\0')) goto LAB_004a6091;
  _ZN4core3ptr39drop_in_place_LT_std__env__VarError_GT_17h198ca8bda8255d94E(lVar8,uVar2);
  _ZN4core3ptr39drop_in_place_LT_std__env__VarError_GT_17h198ca8bda8255d94E
            (lVar3,CONCAT44(uVar5,uVar4));
  _ZN4core3ptr37drop_in_place_LT_std__env__ArgsOs_GT_17hfaba7b8d7b37da12E(&local_2f8);
  (*(code *)PTR__ZN4wild7args_os17h91687d91224c0c4bE_008079a0)(&local_2f8);
  _ZN4core4iter6traits8iterator8Iterator7collect17h94291d65795d783fE(&local_318,&local_2f8);
LAB_004a62c7:
                    /* try { // try from 004a62c7 to 004a62d4 has its CatchHandler @ 004a632c */
  _ZN3bat8clap_app9build_app17h78d569fc3d0211ebE(&local_2f8,param_2);
  _ZN12clap_builder7builder7command7Command16get_matches_from17h2a1f167aaeaaa5cbE
            (param_1 + 2,&local_2f8,&local_318);
  *(undefined *)param_1 = 0xd;
  return;
}