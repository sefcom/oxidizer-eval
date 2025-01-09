char *__fastcall uu_date::make_format_string(__int64 a1)
{
  unsigned __int64 v1; // rcx
  char *result; // rax

  v1 = 3LL;
  if ( (*(_QWORD *)(a1 + 32) ^ 0x8000000000000000LL) < 5 )
    v1 = *(_QWORD *)(a1 + 32) ^ 0x8000000000000000LL;
  switch ( v1 )
  {
    case 0uLL:
      result = (char *)dword_53828 + dword_53828[*(unsigned __int8 *)(a1 + 40)];
      break;
    case 1uLL:
      result = (char *)&unk_52AF9;
      break;
    case 2uLL:
      result = (char *)dword_53858 + dword_53858[*(unsigned __int8 *)(a1 + 40)];
      break;
    case 3uLL:
      result = *(char **)(a1 + 40);
      break;
    case 4uLL:
      result = (char *)&unk_52B16;
      break;
  }
  return result;
}
