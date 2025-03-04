void _ZN8uu_paste32remove_trailing_line_ending_byte17h9c66266c54fb3aecE(char param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x10);
  if ((lVar1 != 0) && (*(char *)(*(long *)(param_2 + 8) + -1 + lVar1) == param_1)) {
    *(long *)(param_2 + 0x10) = lVar1 + -1;
  }
  return;
}