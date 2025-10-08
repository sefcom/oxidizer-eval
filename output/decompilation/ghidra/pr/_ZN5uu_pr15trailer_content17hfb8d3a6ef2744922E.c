void _ZN5uu_pr15trailer_content17hfb8d3a6ef2744922E(undefined8 *param_1,ulong param_2,byte param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)&DAT_00000008;
  if (((param_2 & 1) == 0) || ((param_3 & 1) != 0)) {
    uVar3 = 0;
  }
  else {
    puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x78);
    if (puVar2 == (undefined8 *)0x0) {
      (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00398af8)(8,0x78);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    *puVar2 = 0;
    puVar2[1] = 1;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 1;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 1;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 1;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 1;
    puVar2[0xe] = 0;
    uVar3 = 5;
  }
  *param_1 = uVar3;
  param_1[1] = puVar2;
  param_1[2] = uVar3;
  return;
}