void _ZN11firecracker10api_server9ApiServer18json_fault_message17hfc3a57c57b134c30E
               (undefined8 param_1,long param_2)

{
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined local_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined local_60 [24];
  undefined local_48 [32];
  
  local_98 = 0;
  local_88 = 0;
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
            (local_60,&DAT_00138568,0xd);
  _ZN10serde_core3ser5impls78__LT_impl_u20_serde_core__ser__Serialize_u20_for_u20_alloc__string__String_GT_9serialize17hd9c69d0e0ed048b9E
            (local_80,*(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hef5fd04729a685c2E
            (local_48,local_80,&PTR_DAT_004a3a88);
  _ZN5alloc11collections5btree3map25BTreeMap_LT_K_C_V_C_A_GT_6insert17h30c9a76b510ca40dE
            (local_80,&local_98,local_60,local_48);
  _ZN4core3ptr73drop_in_place_LT_core__option__Option_LT_serde_json__value__Value_GT__GT_17h1aaef3c0fc09df79E
            (local_80);
  local_78 = (undefined4)local_98;
  uStack_74 = local_98._4_4_;
  uStack_70 = uStack_90;
  uStack_6c = uStack_8c;
  local_68 = local_88;
  local_80[0] = 5;
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h80e7bcf6fd335a6cE
            (param_1,local_80);
  _ZN4core3ptr45drop_in_place_LT_serde_json__value__Value_GT_17hfa257d85365bebbeE(local_80);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1017b1af1d0852d4E(param_2);
  return;
}