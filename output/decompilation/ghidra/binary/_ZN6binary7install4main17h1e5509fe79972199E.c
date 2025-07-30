void _ZN6binary7install4main17h1e5509fe79972199E(void)

{
  ulong uVar1;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined **local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined local_20 [24];
  
  uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar1) {
    local_50 = &PTR_DAT_019e6ab8;
    local_48 = 1;
    local_40 = 8;
    local_38 = 0;
    uStack_30 = 0;
    local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e6ad8);
    local_78 = &DAT_0015023f;
    local_70 = 0xf;
    local_68 = &DAT_0015023f;
    local_60 = 0xf;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_50,3,&local_78);
  }
  _ZN6binary7install9copy_self17h6799c86bda448ec8E();
  _ZN6binary7install12drop_library17h6c2d6da60051269aE(local_20);
  _ZN6binary7install16add_preload_hook17hf67ddbcc23099137E(local_20);
  uVar1 = _ZN4core4sync6atomic11atomic_load17hd7b4c98b0ffd57c6E();
  if (2 < uVar1) {
    local_50 = &PTR_DAT_019e6ac8;
    local_48 = 1;
    local_40 = 8;
    local_38 = 0;
    uStack_30 = 0;
    local_58 = (*(code *)PTR__ZN3log13__private_api3loc17h72c33e8a02a7057cE_01a27aa8)
                         (&PTR_DAT_019e6af0);
    local_78 = &DAT_0015023f;
    local_70 = 0xf;
    local_68 = &DAT_0015023f;
    local_60 = 0xf;
    _ZN3log13__private_api3log17h450dfdf51a11f9e0E(&local_50,3,&local_78);
  }
  return;
}