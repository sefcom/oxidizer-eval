undefined  [16]
_ZN21ruff_python_formatter9statement5suite13DocstringStmt18try_from_statement17he6b231a6b6cc2380E
          (long *param_1,byte param_2,long param_3)

{
  char cVar1;
  ulong uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  auVar3._8_8_ = CONCAT71((int7)((ulong)param_3 >> 8),5);
  if (((param_2 != 2) || (*(char *)(param_3 + 0x33) != '\x02')) && (*param_1 == -0x7fffffffffffffed)
     ) {
    cVar1 = _ZN21ruff_python_formatter9statement5suite13DocstringStmt22is_docstring_statement17hda5ab48f7045a830E
                      (param_1[1],param_3,auVar3._8_8_);
    uVar2 = 5;
    if (cVar1 != '\0') {
      uVar2 = (ulong)param_2;
    }
    auVar4._8_8_ = uVar2;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  auVar3._0_8_ = param_1;
  return auVar3;
}