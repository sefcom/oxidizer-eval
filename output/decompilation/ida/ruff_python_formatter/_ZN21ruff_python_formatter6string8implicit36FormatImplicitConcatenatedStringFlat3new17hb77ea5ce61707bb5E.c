void __fastcall ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  char v5; // dl

  switch ( a2 )
  {
    case 0LL:
      if ( !__OFSUB__(0LL, *a3) )
        goto LABEL_9;
      goto LABEL_11;
    case 1LL:
      if ( !*a3 )
        goto LABEL_9;
      goto LABEL_11;
    case 2LL:
      if ( *a3 != 0x8000000000000001LL )
        goto LABEL_11;
      goto LABEL_9;
    case 3LL:
      if ( !__OFSUB__(0LL, *a3) )
        goto LABEL_11;
LABEL_9:
      if ( (ruff_python_formatter::string::implicit::FormatImplicitConcatenatedStringFlat::new::merge_flags(a2, a3, a4) & 1) != 0 )
      {
        *(_QWORD *)a1 = a2;
        *(_QWORD *)(a1 + 8) = a3;
        *(_BYTE *)(a1 + 16) = 0;
        *(_BYTE *)(a1 + 17) = v5;
      }
      else
      {
LABEL_11:
        *(_QWORD *)a1 = 4LL;
      }
      return;
  }
}