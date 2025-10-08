undefined8 _ZN3bat10line_range10LineRanges3all17h09bcc01fc053eff0E(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_18 = (undefined8 *)_ZN5alloc5alloc6Global10alloc_impl17h6fb1b6049873c120E(8,0x20,0);
  if (local_18 != (undefined8 *)0x0) {
    *local_18 = 0;
    local_18[1] = 0;
    local_18[2] = 0;
    local_18[3] = 0xffffffffffffffff;
    local_20 = 1;
    local_10 = 1;
    (*(code *)PTR__ZN3bat10line_range10LineRanges4from17h4ce85643fa8989acE_00807a18)
              (param_1,&local_20);
    return param_1;
  }
  (*(code *)PTR__ZN5alloc5alloc18handle_alloc_error17h88aa4f4f9d19c4f9E_00807840)(8,0x20);
  pcVar1 = (code *)swi(3);
  uVar2 = (*pcVar1)();
  return uVar2;
}