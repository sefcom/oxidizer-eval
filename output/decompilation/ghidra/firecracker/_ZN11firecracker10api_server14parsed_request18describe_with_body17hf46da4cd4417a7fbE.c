void _ZN11firecracker10api_server14parsed_request18describe_with_body17hf46da4cd4417a7fbE
               (undefined8 param_1,undefined param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 extraout_RDX;
  code *pcVar2;
  undefined local_a1;
  undefined *local_a0;
  code *local_98;
  undefined8 *local_90;
  code *local_88;
  undefined *local_80;
  code *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_30 [24];
  
  local_a1 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  (*(code *)PTR__ZN4core3str8converts9from_utf817h8a6dc80f786921e0E_004bf3f0)
            (&local_a0,param_5,param_6);
  puVar1 = (undefined8 *)0x16;
  if ((char)local_a0 == '\0') {
    puVar1 = local_90;
  }
  pcVar2 = (code *)&DAT_00138082;
  if ((char)local_a0 == '\0') {
    pcVar2 = local_98;
  }
  _ZN87__LT_T_u20_as_u20_alloc__slice___LT_impl_u20__u5b_T_u5d__GT___to_vec_in__ConvertVec_GT_6to_vec17hadcf0352ee3104f1E
            (local_30,pcVar2,puVar1);
  local_a0 = &local_a1;
  local_98 = 
  _ZN63__LT_micro_http__common__Method_u20_as_u20_core__fmt__Debug_GT_3fmt17h82e2c33064e74b2cE;
  local_90 = &local_70;
  local_88 = _ZN42__LT__RF_T_u20_as_u20_core__fmt__Debug_GT_3fmt17h9e623ec8df216556E;
  local_78 = _ZN58__LT_alloc__string__String_u20_as_u20_core__fmt__Debug_GT_3fmt17h71b66d641ee8f111E
  ;
  local_60 = &DAT_004a37e0;
  local_58 = 3;
  local_40 = 0;
  local_48 = 3;
  local_80 = local_30;
  local_50 = &local_a0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h72293bc1363e991fE
            (param_1,0,extraout_RDX,&local_60);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h1017b1af1d0852d4E(local_30);
  return;
}