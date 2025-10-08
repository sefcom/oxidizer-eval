void _ZN7uu_stat18print_unsigned_hex17h3195c7c2eb8d9057E
               (undefined **param_1,uint param_2,undefined param_3,undefined8 param_4,long param_5,
               ulong param_6,undefined param_7)

{
  undefined8 uVar1;
  undefined ***pppuVar2;
  undefined **local_a0;
  undefined **local_98;
  code *local_90;
  undefined8 **local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined2 local_70;
  undefined **local_68;
  code *local_60;
  undefined ***local_58;
  undefined *local_50;
  undefined *local_48;
  undefined8 local_40;
  char *local_38;
  ulong local_30;
  undefined local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = (char *)0x1;
  if ((param_2 & 1) != 0) {
    local_38 = "0x: warning: ";
  }
  local_30 = (ulong)((param_2 & 1) * 2);
  local_a0 = param_1;
  if ((param_5 == 0) || (param_5 == 1)) {
    local_68 = &local_38;
    local_60 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
    local_58 = &local_a0;
    local_50 = 
    PTR__ZN4core3fmt3num55__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_usize_GT_3fmt17h91fefd22111a860cE_002222a8
    ;
    local_98 = (undefined **)&DAT_0011cfd0;
    local_90 = (code *)0x2;
    local_88 = &local_68;
    local_80 = (undefined *)0x2;
    pppuVar2 = &local_98;
  }
  else {
    if (0xffff < param_6) {
      local_98 = &PTR_DAT_00219960;
      local_90 = (code *)0x1;
      local_88 = (undefined8 **)0x8;
      local_80 = (undefined *)0x0;
      uStack_78 = 0;
      uVar1 = (*(code *)PTR__ZN4core9panicking9panic_fmt17h96f341d36638c225E_00221f70)
                        (&local_98,&PTR_s_src_uu_stat_src_stat_rs_00219d18);
                    /* catch() { ... } // from try @ 001750c7 with catch @ 0017512b */
      _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_28);
      _Unwind_Resume(uVar1);
      return;
    }
    local_98 = &local_38;
    local_90 = _ZN44__LT__RF_T_u20_as_u20_core__fmt__Display_GT_3fmt17h917f70ba7096f615E;
    local_88 = &local_a0;
    local_80 = 
    PTR__ZN4core3fmt3num55__LT_impl_u20_core__fmt__LowerHex_u20_for_u20_usize_GT_3fmt17h91fefd22111a860cE_002222a8
    ;
    local_68 = (undefined **)&DAT_0011cfd0;
    local_60 = (code *)0x2;
    local_48 = &DAT_0011d528;
    local_40 = 2;
    local_58 = &local_98;
    local_50 = (undefined *)0x3;
    pppuVar2 = &local_68;
    local_70 = (short)param_6;
  }
  uStack_78 = 0;
  _ZN4core6option15Option_LT_T_GT_11map_or_else17h722d45d5108b1d7dE(local_28,pppuVar2);
                    /* try { // try from 001750c7 to 001750db has its CatchHandler @ 0017512b */
  _ZN7uu_stat13pad_and_print17h4c659c1797f3ded6E(local_20,local_18,param_3,param_4,param_7);
  _ZN4core3ptr42drop_in_place_LT_alloc__string__String_GT_17h44f04a5137e020d4E(local_28);
  return;
}