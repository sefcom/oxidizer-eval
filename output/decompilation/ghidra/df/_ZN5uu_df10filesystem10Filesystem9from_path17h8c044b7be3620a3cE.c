void _ZN5uu_df10filesystem10Filesystem9from_path17h8c044b7be3620a3cE
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  char local_78;
  undefined local_77;
  undefined8 local_70;
  undefined local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_68 = _ZN55__LT__RF_T_u20_as_u20_core__convert__AsRef_LT_U_GT__GT_6as_ref17h07de46ba282a0abfE
                       (param_4);
  _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h5d1558b0a1eb3735E
            (&local_90,local_68);
                    /* try { // try from 0015ff88 to 0015ff9a has its CatchHandler @ 0016001a */
  _ZN5uu_df10filesystem20mount_info_from_path17hc0bcb2ea98b5090aE(&local_78,param_2,param_3,param_4)
  ;
  local_58 = local_80;
  local_50 = param_2;
  local_48 = param_3;
  if (local_78 == '\x01') {
    *(undefined *)(param_1 + 1) = local_77;
    *param_1 = 0x8000000000000000;
    _ZN4core3ptr127drop_in_place_LT_uu_df__filesystem__Filesystem__from_path_LT__RF__RF_alloc__string__String_GT____u7b__u7b_closure_u7d__u7d__GT_17h3f753883bea380f6E
              (local_68);
  }
  else {
    local_28 = local_80;
    local_38 = local_90;
    uStack_34 = uStack_8c;
    uStack_30 = uStack_88;
    uStack_2c = uStack_84;
    (*(code *)PTR__ZN5uu_df10filesystem10Filesystem10from_mount17h8c34ead0ca2ea541E_00209ea8)
              (param_1,param_2,param_3,local_70,&local_38);
  }
  return;
}