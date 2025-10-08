char _ZN21ruff_python_formatter7pattern130__LT_impl_u20_ruff_python_formatter__expression__parentheses__NeedsParentheses_u20_for_u20_ruff_python_ast__generated__Pattern_GT_17needs_parentheses17hed1009ef0a438778E
               (ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined auVar2 [16];
  
  switch(*param_1 ^ 0x8000000000000000) {
  case 0:
                    /* WARNING: Could not recover jumptable at 0x0040fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    cVar1 = (*(code *)((long)&UINT_001875b4 + (long)(int)(&UINT_001875b4)[*(uint *)param_1[1]]))();
    return cVar1;
  case 1:
    return '\x02';
  default:
    return '\x03';
  case 4:
    auVar2 = _ZN21ruff_python_formatter8comments8Comments8dangling17h7cde0c1213eea6eaE
                       (*(undefined8 *)(param_4 + 0x10),param_1 + 1);
    return (auVar2._8_8_ == 0) * '\x02' + '\x01';
  case 6:
    return (*(char *)((long)param_1 + 0x37) == -0x26) * '\x02';
  case 7:
    return '\0';
  }
}