char *__fastcall uu_date::make_format_string(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rcx
  __int64 v4; // rax
  char *v5; // rcx
  char *result; // rax

  v3 = 3LL;
  if ( (*(_QWORD *)(a1 + 32) ^ 0x8000000000000000LL) < 5 )
    v3 = *(_QWORD *)(a1 + 32) ^ 0x8000000000000000LL;
  switch ( v3 )
  {
    case 0uLL:
      v4 = *(char *)(a1 + 40);
      v5 = (char *)&unk_66420;
      goto LABEL_7;
    case 1uLL:
      result = (char *)&unk_663C6;
      break;
    case 2uLL:
      v4 = *(char *)(a1 + 40);
      v5 = (char *)&unk_66450;
LABEL_7:
      result = &v5[*(int *)&v5[4 * v4]];
      break;
    case 3uLL:
      result = *(char **)(a1 + 40);
      if ( !result || (a3 = *(_QWORD *)(a1 + 48), a3 < 0) )
        core::panicking::panic_nounwind(aUnsafePrecondi_13, 162LL, a3);
      return result;
    case 4uLL:
      result = (char *)&unk_663E3;
      break;
  }
  return result;
}
