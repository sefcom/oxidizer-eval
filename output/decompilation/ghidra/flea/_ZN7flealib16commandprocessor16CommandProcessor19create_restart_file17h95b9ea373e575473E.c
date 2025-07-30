void _ZN7flealib16commandprocessor16CommandProcessor19create_restart_file17h95b9ea373e575473E
               (undefined8 *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined4 *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_50;
  undefined4 *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  _ZN67__LT_alloc__vec__Vec_LT_T_C_A_GT__u20_as_u20_core__clone__Clone_GT_5clone17h6b169aa4c72fa5e4E
            (&local_28,param_2,&PTR_DAT_008087b8);
  uVar2 = _ZN4core4sync6atomic11atomic_load17h8980141092664382E
                    (PTR__ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E_00826778);
  if (3 < uVar2) {
    local_90 = 
    PTR__ZN65__LT_std__sys__os_str__bytes__Buf_u20_as_u20_core__fmt__Debug_GT_3fmt17h952bbfad7ce09ff0E_00826fb8
    ;
    local_88 = &PTR_DAT_008087a8;
    uStack_80 = 1;
    local_68 = 0;
    local_70 = 1;
    local_98 = &local_28;
    local_78 = (undefined *)&local_98;
                    /* try { // try from 0046dfb6 to 0046e014 has its CatchHandler @ 0046e0ab */
    local_30 = (*(code *)PTR__ZN3log13__private_api3loc17he6f33e710a34adafE_00826780)
                         (&PTR_DAT_008087d0);
    local_50 = &DAT_0016a0f1;
    local_48 = (undefined4 *)0x19;
    local_40 = &DAT_0016a0f1;
    local_38 = 0x19;
    _ZN3log13__private_api3log17hd2d1d5843cf283e9E(&local_88,4,&local_50);
  }
  _ZN3std4path7PathBuf4push17hc66e4b85c8e42483E(&local_28,&DAT_001515d0,8);
  local_78 = (undefined *)local_18;
  local_88._0_4_ = local_28;
  local_88._4_4_ = uStack_24;
  uStack_80._0_4_ = uStack_20;
  uStack_80._4_4_ = uStack_1c;
  _ZN3std2fs4File6create17hb10f4de1cd0f279aE(&local_50,&local_88);
  puVar1 = local_48;
  if ((int)local_50 == 1) {
    local_98 = local_48;
                    /* try { // try from 0046e04b to 0046e057 has its CatchHandler @ 0046e09e */
    _ZN49__LT_T_u20_as_u20_alloc__string__SpecToString_GT_14spec_to_string17h00281d94234d25d8E
              (&local_88,&local_98);
    param_1[2] = local_78;
    *(undefined4 *)param_1 = (undefined4)local_88;
    *(undefined4 *)((long)param_1 + 4) = local_88._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((long)param_1 + 0xc) = uStack_80._4_4_;
    _ZN4core3ptr42drop_in_place_LT_std__io__error__Error_GT_17h96b79424257da29dE(puVar1);
    return;
  }
  *param_1 = 0x8000000000000000;
  _ZN4core3ptr86drop_in_place_LT_core__result__Result_LT_std__fs__File_C_std__io__error__Error_GT__GT_17h4172f34dc5251b61E
            (&local_50);
  return;
}