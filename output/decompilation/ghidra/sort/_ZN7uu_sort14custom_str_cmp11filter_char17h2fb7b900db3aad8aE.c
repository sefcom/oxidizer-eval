bool _ZN7uu_sort14custom_str_cmp11filter_char17h2fb7b900db3aad8aE
               (uint param_1,char param_2,int param_3)

{
  bool bVar1;
  
  if ((((param_3 == 0) || (param_1 - 0x30 < 10)) || ((param_1 & 0x1fffdf) - 0x41 < 0x1a)) ||
     ((bVar1 = false, param_1 < 0x21 && ((0x100003600U >> ((ulong)param_1 & 0x3f) & 1) != 0)))) {
    bVar1 = true;
    if (param_2 != '\0') {
      bVar1 = param_1 < 0x80 && (param_1 != 0x7f && 0x1f < param_1);
    }
  }
  return bVar1;
}