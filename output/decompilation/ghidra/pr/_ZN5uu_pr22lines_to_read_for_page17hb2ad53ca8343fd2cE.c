long _ZN5uu_pr22lines_to_read_for_page17hb2ad53ca8343fd2cE(long param_1)

{
  long lVar1;
  
  lVar1 = 1;
  if (*(long *)(param_1 + 0x100) != -0x8000000000000000) {
    lVar1 = *(long *)(param_1 + 0x120);
  }
  return (*(ulong *)(param_1 + 0x138) >> (*(byte *)(param_1 + 0x140) & 0x3f)) * lVar1;
}