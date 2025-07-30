void _ZN6binary11delete_self17h8376a8a8af45fd9aE(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined **local_78;
  undefined8 uStack_70;
  undefined4 **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined local_40 [8];
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  undefined *local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  (*(code *)PTR__ZN3std3env11current_exe17hba8dd19674473539E_01a27ac8)(&local_78);
  _ZN4core6result19Result_LT_T_C_E_GT_6unwrap17hfe1546b7d02f4ad7E(local_40,&local_78);
  uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar1) {
    local_18 = uStack_38;
    uStack_14 = uStack_34;
    uStack_10 = uStack_30;
    uStack_c = uStack_2c;
    local_28 = &local_18;
    local_20 = 
    PTR__ZN57__LT_std__path__Display_u20_as_u20_core__fmt__Display_GT_3fmt17h16169839c0f0229eE_01a27ab0
    ;
    local_78 = &PTR_DAT_019e6ff8;
    uStack_70 = 1;
    uStack_58 = 0;
    local_68 = &local_28;
    local_60 = 1;
                    /* try { // try from 018d1a32 to 018d1a7a has its CatchHandler @ 018d1ba8 */
    local_80 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7040);
    local_a0 = &DAT_0180013d;
    local_98 = 6;
    local_90 = &DAT_0180013d;
    local_88 = 6;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_78,3,&local_a0);
  }
  puVar2 = (undefined *)_ZN3std2fs11remove_file17h3e7926510a6b8c03E(&local_78);
  local_a0 = puVar2;
  _ZN4core3ptr81drop_in_place_LT_core__result__Result_LT__LP__RP__C_std__io__error__Error_GT__GT_17hc96c7bae30b6e291E
            (&local_a0);
  uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (puVar2 == (undefined *)0x0) {
    if (uVar1 < 3) {
      return;
    }
    local_78 = &PTR_DAT_019e7018;
    uStack_70 = 1;
    local_68 = (undefined4 **)0x8;
    local_60 = 0;
    uStack_58 = 0;
    local_80 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7058);
    uVar3 = 3;
  }
  else {
    if (uVar1 == 0) {
      return;
    }
    local_78 = &PTR_DAT_019e7008;
    uStack_70 = 1;
    local_68 = (undefined4 **)0x8;
    local_60 = 0;
    uStack_58 = 0;
    local_80 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7070);
    uVar3 = 1;
  }
  local_88 = 6;
  local_90 = &DAT_0180013d;
  local_98 = 6;
  local_a0 = &DAT_0180013d;
  _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_78,uVar3,&local_a0);
  return;
}