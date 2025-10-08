void _ZN4just10expression10Expression9variables17h421cbbeec48818c6E
               (undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,8);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = param_2;
    *param_1 = 1;
    param_1[1] = puVar2;
    param_1[2] = 1;
    return;
  }
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00566740)(8,8);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}