void _ZN4just4main17h06aa72bcd1bb0a21E(void)

{
  code *pcVar1;
  byte bVar2;
  undefined4 extraout_EDX;
  undefined auStack_28 [32];
  
  (*(code *)PTR__ZN3std3env7args_os17h5ff0cf6a45e392f2E_00565e88)(auStack_28);
  bVar2 = _ZN4just3run3run17h9b9ac305fd2b19cfE(auStack_28);
  if ((bVar2 & 1) == 0) {
    return;
  }
  (*(code *)PTR__ZN3std7process4exit17hcda678ff272dfed1E_00565e90)(extraout_EDX);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}