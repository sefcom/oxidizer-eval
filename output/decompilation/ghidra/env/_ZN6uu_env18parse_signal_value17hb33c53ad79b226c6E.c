void _ZN6uu_env18parse_signal_value17hb33c53ad79b226c6E
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  long extraout_RDX;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined local_48;
  undefined local_40 [16];
  undefined8 local_30;
  
  (*(code *)PTR__ZN5alloc3str21__LT_impl_u20_str_GT_12to_uppercase17hf8ab82a15f19393fE_00219548)
            (local_88);
                    /* try { // try from 0017235e to 0017241f has its CatchHandler @ 0017244b */
  bVar1 = (*(code *)
            PTR__ZN6uucore8features7signals23signal_by_name_or_value17h89b982f23c5744ecE_00219550)
                    (local_80,local_78);
  local_60 = 0;
  local_48 = 1;
  local_70 = &local_60;
  local_68 = 
  PTR__ZN57__LT_os_display__Quoted_u20_as_u20_core__fmt__Display_GT_3fmt17ha3782f403933d3a5E_00219558
  ;
  local_b8 = &DAT_00210868;
  uStack_b0 = 2;
  local_98 = 0;
  local_a8 = &local_70;
  local_a0 = 1;
  local_58 = param_2;
  local_50 = param_3;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h96013652e67eecbeE(local_40,&local_b8);
  local_a0 = CONCAT44(local_a0._4_4_,0x7d);
  local_a8 = (undefined8 **)local_30;
  uVar2 = _ZN5alloc5boxed12Box_LT_T_GT_3new17h0cd361b0827381d8E(&local_b8);
  if ((bVar1 & extraout_RDX != 0) == 0) {
    *param_1 = uVar2;
    param_1[1] = &
                 PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002108a8
    ;
  }
  else {
    param_1[1] = extraout_RDX;
    *param_1 = 0;
    _ZN4core3ptr105drop_in_place_LT_alloc__boxed__Box_LT_dyn_u20_clap_builder__builder__value_parser__AnyValueParser_GT__GT_17hd10305c58afc2d26E
              (uVar2,&
                     PTR__ZN4core3ptr53drop_in_place_LT_uucore__mods__error__UUsageError_GT_17h60677b330daa6f59E_002108a8
              );
  }
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h0f81e6c32c02414aE(local_88);
  return;
}