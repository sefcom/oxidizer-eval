long __rustcall uu_pr::lines_to_read_for_page(long param_1)

{
  long lVar1;
  
  lVar1 = 1;
  if (*(long *)(param_1 + 0x100) != -0x8000000000000000) {
    lVar1 = *(long *)(param_1 + 0x120);
  }
  return (*(ulong *)(param_1 + 0x138) >> (*(byte *)(param_1 + 0x140) & 0x3f)) * lVar1;
}