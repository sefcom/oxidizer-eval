void _ZN11firecracker10api_server14parsed_request13ParsedRequest19convert_to_response17hfe7d289cbaee243dE
               (undefined8 param_1,long *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long *local_e8 [2];
  undefined8 local_d8;
  long **local_d0;
  code *local_c8;
  undefined **local_b8;
  long *local_b0;
  long ***ppplStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  if (*param_2 != 0xd) {
    switch(*param_2) {
    case 5:
      _ZN11firecracker10api_server14parsed_request13ParsedRequest26success_response_with_data17ha7df65e1b1b920e0E
                (param_1,param_2 + 1);
      return;
    case 6:
      _ZN11firecracker10api_server14parsed_request13ParsedRequest26success_response_with_data17h1e244090f4f543feE
                (param_1,param_2 + 1);
      return;
    case 7:
      goto switchD_00254235_caseD_7;
    default:
      _ZN11firecracker10api_server14parsed_request13ParsedRequest26success_response_with_data17h8548d4bf84a2a53cE
                ();
      return;
    case 9:
      _ZN11firecracker10api_server14parsed_request13ParsedRequest26success_response_with_data17hbb6d01cc8ca37a93E
                (param_1,param_2 + 1);
      return;
    case 10:
      _ZN11firecracker10api_server14parsed_request13ParsedRequest32success_response_with_mmds_value17h66055dba9b29b5b3E
                (param_1,param_2 + 1);
      return;
    case 0xb:
      _ZN11firecracker10api_server14parsed_request13ParsedRequest26success_response_with_data17h32bb8d82001ac88dE
                (param_1,param_2 + 1);
      return;
    case 0xc:
      local_e8[0] = (long *)0x0;
      local_d8 = 0;
      _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
                (&local_d0,&DAT_00137f93,0x13);
      _ZN10serde_core3ser5impls62__LT_impl_u20_serde_core__ser__Serialize_u20_for_u20__RF_T_GT_9serialize17h97575d381d09c2a7E
                (&local_b8,param_2[2],param_2[3]);
      _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hef5fd04729a685c2E
                (&local_110,&local_b8,&PTR_DAT_004a3748);
      _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h30c9a76b510ca40dE
                (&local_b8,local_e8,&local_d0,&local_110);
      _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17h1aaef3c0fc09df79E
                (&local_b8);
      local_b0 = local_e8[0];
      local_a0 = local_d8;
      local_b8 = (undefined **)CONCAT71(local_b8._1_7_,5);
      _ZN11firecracker10api_server14parsed_request13ParsedRequest26success_response_with_data17h84bb1b142bfd8b27E
                (param_1,&local_b8);
      _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17hfa257d85365bebbeE(&local_b8);
      return;
    }
  }
  local_e8[0] = param_2 + 1;
  cVar1 = *(char *)(param_2 + 1);
  lVar2 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
  if (cVar1 == '\x0e') {
    uVar4 = 7;
    if (lVar2 == 0) goto LAB_002542ee;
    local_b8 = &PTR_DAT_004a3710;
    ppuVar5 = &PTR_DAT_004a3760;
  }
  else {
    uVar4 = 3;
    if (lVar2 == 0) goto LAB_002542ee;
    local_b8 = &PTR_DAT_004a3720;
    ppuVar5 = &PTR_DAT_004a3778;
  }
  ppplStack_a8 = &local_d0;
  local_d0 = local_e8;
  uStack_98 = 0;
  local_a0 = 1;
  local_b0 = (long *)0x1;
  local_c8 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17hb2bd811cadadb9faE;
  local_f0 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)(ppuVar5);
  local_110 = &DAT_00137ee6;
  local_108 = 0x27;
  local_100 = &DAT_00137ee6;
  local_f8 = 0x27;
  _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_b8,1,&local_110);
LAB_002542ee:
  (*(code *)PTR__ZN10micro_http8response8Response3new17h78e744fb9400e084E_004bfb88)
            (&local_b8,1,uVar4);
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h1bea7a3240948723E
            (&local_110,local_e8[0]);
  _ZN11firecracker10api_server9ApiServer18json_fault_message17hfc3a57c57b134c30E
            (&local_d0,&local_110);
  (*(code *)PTR__ZN10micro_http8response8Response8set_body17hb2a8ea3742c0d431E_004bfb90)
            (&local_b8,&local_d0);
  (*(code *)PTR_memcpy_004bf3b8)(param_1,&local_b8,0x90);
  return;
switchD_00254235_caseD_7:
  uVar3 = _ZN4core4sync6atomic11atomic_load17hcd41a4cf8b7c5bb4E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE_004bfb78,0);
  if (2 < uVar3) {
    local_b8 = &PTR_DAT_004a3700;
    local_b0 = (long *)0x1;
    ppplStack_a8 = (long ***)&DAT_00000008;
    local_a0 = 0;
    uStack_98 = 0;
    local_f0 = (*(code *)PTR__ZN3log13__private_api3loc17h0b1bf3028c786bb7E_004bfb80)
                         (&PTR_DAT_004a3730);
    local_110 = &DAT_00137ee6;
    local_108 = 0x27;
    local_100 = &DAT_00137ee6;
    local_f8 = 0x27;
    _ZN3log13__private_api8log_impl17h05439a06b798919cE(&local_b8,3,&local_110);
  }
  (*(code *)PTR__ZN10micro_http8response8Response3new17h78e744fb9400e084E_004bfb88)(param_1,1,2);
  return;
}