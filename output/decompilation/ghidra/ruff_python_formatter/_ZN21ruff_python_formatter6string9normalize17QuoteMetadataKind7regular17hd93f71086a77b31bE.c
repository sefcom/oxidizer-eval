void _ZN21ruff_python_formatter6string9normalize17QuoteMetadataKind7regular17hd93f71086a77b31bE
               (undefined *param_1,long param_2,long param_3)

{
  byte bVar1;
  int extraout_EDX;
  int iVar2;
  int iVar3;
  long local_30;
  long local_28;
  
  local_28 = param_3 + param_2;
  iVar2 = 0;
  iVar3 = 0;
  local_30 = param_2;
  while( true ) {
    bVar1 = _ZN4core3str11validations15next_code_point17hfc8b8c1898281fd8E(&local_30);
    if ((bVar1 & 1) == 0) break;
    if (extraout_EDX == 0x22) {
      iVar2 = iVar2 + 1;
    }
    else if (extraout_EDX == 0x27) {
      iVar3 = iVar3 + 1;
    }
  }
  *(int *)(param_1 + 4) = iVar3;
  *(int *)(param_1 + 8) = iVar2;
  *param_1 = 2;
  return;
}