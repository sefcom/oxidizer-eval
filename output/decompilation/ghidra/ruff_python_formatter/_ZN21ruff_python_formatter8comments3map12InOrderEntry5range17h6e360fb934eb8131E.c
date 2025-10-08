int _ZN21ruff_python_formatter8comments3map12InOrderEntry5range17h6e360fb934eb8131E(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 8);
  }
  if (iVar1 == 0) {
    return *(int *)(param_1 + 4) + -1;
  }
  return iVar1 + -1;
}