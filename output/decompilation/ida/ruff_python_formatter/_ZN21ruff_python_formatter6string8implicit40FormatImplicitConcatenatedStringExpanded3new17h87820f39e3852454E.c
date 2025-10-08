unsigned __int64 __fastcall ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringExpanded::new(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        char a4)
{
  unsigned __int64 result; // rax

  switch ( a2 )
  {
    case 0LL:
      result = 0LL;
      if ( __OFSUB__(0LL, *a3) )
        goto LABEL_7;
      goto LABEL_5;
    case 1LL:
      if ( *a3 )
        goto LABEL_7;
      goto LABEL_5;
    case 2LL:
      result = 0x8000000000000001LL;
      if ( *a3 == 0x8000000000000001LL )
        goto LABEL_5;
      goto LABEL_7;
    case 3LL:
      result = 0LL;
      if ( !__OFSUB__(0LL, *a3) )
LABEL_7:
        core::panicking::panic(aAssertionFaile_7, 51LL, &off_57F5D8);
LABEL_5:
      *(_QWORD *)a1 = a2;
      *(_QWORD *)(a1 + 8) = a3;
      *(_BYTE *)(a1 + 16) = a4;
      return result;
  }
}