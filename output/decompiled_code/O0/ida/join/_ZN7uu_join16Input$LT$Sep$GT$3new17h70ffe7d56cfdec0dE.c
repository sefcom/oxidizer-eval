_BYTE *__fastcall uu_join::Input<Sep>::new(_BYTE *a1, const void *a2, char a3, char a4)
{
  _BYTE *result; // rax

  memcpy(a1, a2, 0x120uLL);
  result = a1;
  a1[288] = a3 & 1;
  a1[289] = a4;
  return result;
}
