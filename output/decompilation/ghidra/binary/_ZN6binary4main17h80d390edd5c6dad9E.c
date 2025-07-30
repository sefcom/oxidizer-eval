void _ZN6binary4main17h80d390edd5c6dad9E(void)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  (*(code *)PTR__ZN5colog4init17h7841d28c5b63bc43E_01a27b70)();
  iVar2 = (*(code *)PTR_geteuid_01a27b78)();
  if (iVar2 != 0) {
    uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (1 < uVar3) {
      local_70 = &PTR_DAT_019e6f30;
      local_68 = 1;
      local_60 = 8;
      local_58 = 0;
      uStack_50 = 0;
      local_78 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e6fe0);
      local_98 = &DAT_0180013d;
      local_90 = 6;
      local_88 = &DAT_0180013d;
      local_80 = 6;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_70,2,&local_98);
    }
    _ZN6binary11delete_self17h8376a8a8af45fd9aE();
    _ZN6binary6daemon4main17hc30634c30f3261a4E();
    return;
  }
  (*(code *)PTR__ZN3std3env11current_exe17hba8dd19674473539E_01a27ac8)(&local_40);
  local_28 = local_40;
  uStack_24 = uStack_3c;
  uStack_20 = uStack_38;
  uStack_1c = uStack_34;
  local_18 = local_30;
                    /* try { // try from 018d1792 to 018d193d has its CatchHandler @ 018d196d */
  auVar5 = (*(code *)PTR__ZN3std4path4Path9file_name17h7d489889b9a4afe7E_01a27b80)
                     (CONCAT44(uStack_34,uStack_38));
  if (auVar5._0_8_ == 0) {
    lVar4 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (lVar4 != 0) {
      local_70 = &PTR_DAT_019e6f60;
      local_68 = 1;
      local_60 = 8;
      local_58 = 0;
      uStack_50 = 0;
      local_78 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                           (&PTR_DAT_019e6fb0);
      local_98 = &DAT_0180013d;
      local_90 = 6;
      local_88 = &DAT_0180013d;
      local_80 = 6;
      _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_70,1,&local_98);
    }
  }
  else {
    cVar1 = _ZN73__LT__u5b_A_u5d__u20_as_u20_core__slice__cmp__SlicePartialEq_LT_B_GT__GT_5equal17h289a35ced737f626E
                      (auVar5._0_8_,auVar5._8_8_,&DAT_01800121,10);
    uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (cVar1 == '\0') {
      if (2 < uVar3) {
        local_70 = &PTR_DAT_019e6f50;
        local_68 = 1;
        local_60 = 8;
        local_58 = 0;
        uStack_50 = 0;
        local_78 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                             (&PTR_DAT_019e6f80);
        local_98 = &DAT_0180013d;
        local_90 = 6;
        local_88 = &DAT_0180013d;
        local_80 = 6;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_70,3,&local_98);
      }
      _ZN6binary7install4main17h1e5509fe79972199E();
      _ZN6binary11delete_self17h8376a8a8af45fd9aE();
    }
    else {
      if (2 < uVar3) {
        local_70 = &PTR_DAT_019e6f40;
        local_68 = 1;
        local_60 = 8;
        local_58 = 0;
        uStack_50 = 0;
        local_78 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                             (&PTR_DAT_019e6f98);
        local_98 = &DAT_0180013d;
        local_90 = 6;
        local_88 = &DAT_0180013d;
        local_80 = 6;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_70,3,&local_98);
      }
      _ZN6binary6daemon4main17hc30634c30f3261a4E();
    }
  }
                    /* try { // try from 018d193e to 018d1947 has its CatchHandler @ 018d1968 */
  _ZN4core3ptr39drop_in_place_LT_std__path__PathBuf_GT_17h11842ea3b2390ec0E(&local_28);
  if (CONCAT44(uStack_3c,local_40) != -0x8000000000000000) {
    return;
  }
  _ZN4core3ptr91drop_in_place_LT_core__result__Result_LT_std__path__PathBuf_C_std__io__error__Error_GT__GT_17ha5285473c174ea4dE
            (&local_40);
  return;
}