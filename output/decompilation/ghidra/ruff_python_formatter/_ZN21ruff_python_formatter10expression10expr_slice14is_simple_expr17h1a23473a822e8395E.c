undefined8
_ZN21ruff_python_formatter10expression10expr_slice14is_simple_expr17h1a23473a822e8395E
          (uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  do {
    uVar2 = (ulong)uVar1;
    if (uVar1 != 3) {
LAB_0040cd68:
      return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 == 0x1c || (int)uVar2 - 0x13U < 6);
    }
    if (*(char *)(param_1 + 7) == '\x01') {
      uVar2 = 3;
      goto LAB_0040cd68;
    }
    param_1 = *(uint **)(param_1 + 2);
    uVar1 = *param_1;
  } while( true );
}