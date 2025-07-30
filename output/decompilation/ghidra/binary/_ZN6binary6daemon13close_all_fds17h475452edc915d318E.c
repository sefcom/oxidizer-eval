void _ZN6binary6daemon13close_all_fds17h475452edc915d318E(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar2) {
    local_48 = &PTR_DAT_019e7300;
    local_40 = 1;
    local_38 = 8;
    local_30 = 0;
    uStack_28 = 0;
    local_50 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7330);
    local_70 = &DAT_01800a4e;
    local_68 = 0xe;
    local_60 = &DAT_01800a4e;
    local_58 = 0xe;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_48,3,&local_70);
  }
  lVar3 = (*(code *)PTR_sysconf_01a27c38)(4);
  puVar1 = PTR_close_01a27a90;
  if (lVar3 < 1) {
    lVar3 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (lVar3 == 0) {
      return;
    }
    local_48 = &PTR_DAT_019e7320;
    local_40 = 1;
    local_38 = 8;
    local_30 = 0;
    uStack_28 = 0;
    local_50 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7348);
    uVar5 = 1;
  }
  else {
    if (3 < (int)lVar3) {
      iVar4 = 3;
      do {
        iVar4 = iVar4 + 1;
        (*(code *)puVar1)();
      } while ((int)lVar3 != iVar4);
    }
    uVar2 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
    if (uVar2 < 3) {
      return;
    }
    local_48 = &PTR_DAT_019e7310;
    local_40 = 1;
    local_38 = 8;
    local_30 = 0;
    uStack_28 = 0;
    local_50 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e7360);
    uVar5 = 3;
  }
  local_58 = 0xe;
  local_60 = &DAT_01800a4e;
  local_68 = 0xe;
  local_70 = &DAT_01800a4e;
  _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_48,uVar5,&local_70);
  return;
}