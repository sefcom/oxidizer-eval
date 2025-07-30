void _ZN6binary6daemon10fork_to_bg17h3f8212ac914619a4E(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined **local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar3) {
    local_30 = &PTR_DAT_019e71f8;
    local_28 = 1;
    local_20 = 8;
    local_18 = 0;
    uStack_10 = 0;
    local_38 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7228);
    local_58 = &DAT_01800a4e;
    local_50 = 0xe;
    local_48 = &DAT_01800a4e;
    local_40 = 0xe;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_30,3,&local_58);
  }
  iVar2 = (*(code *)PTR_fork_01a27c10)();
  if (iVar2 < 1) {
    iVar2 = (*(code *)PTR_setsid_01a27c18)();
    if (iVar2 < 0) goto LAB_018d2db5;
    iVar2 = (*(code *)PTR_fork_01a27c10)();
    if (iVar2 < 1) {
      uVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
      if (2 < uVar3) {
        local_30 = &PTR_DAT_019e7218;
        local_28 = 1;
        local_20 = 8;
        local_18 = 0;
        uStack_10 = 0;
        local_38 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                             (&PTR_DAT_019e7240);
        local_58 = &DAT_01800a4e;
        local_50 = 0xe;
        local_48 = &DAT_01800a4e;
        local_40 = 0xe;
        _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_30,3,&local_58);
      }
      return;
    }
  }
  (*(code *)PTR__exit_01a27c20)(0);
LAB_018d2db5:
  lVar4 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (lVar4 != 0) {
    local_30 = &PTR_DAT_019e7208;
    local_28 = 1;
    local_20 = 8;
    local_18 = 0;
    uStack_10 = 0;
    local_38 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7258);
    local_58 = &DAT_01800a4e;
    local_50 = 0xe;
    local_48 = &DAT_01800a4e;
    local_40 = 0xe;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_30,1,&local_58);
  }
  (*(code *)PTR__exit_01a27c20)(1);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}