void *__fastcall uu_numfmt::parse_unit(__int64 a1, __int64 a2, __int64 a3)
{
  void *result; // rax

  switch ( a3 )
  {
    case 2LL:
      if ( *(_WORD *)a2 != 26995 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 8) = 3;
      goto LABEL_14;
    case 3LL:
      if ( *(_WORD *)a2 ^ 0x6569 | *(unsigned __int8 *)(a2 + 2) ^ 0x63 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 8) = 0;
      goto LABEL_14;
    case 4LL:
      if ( *(_DWORD *)a2 == 1869903201 )
      {
        *(_BYTE *)(a1 + 8) = 2;
        goto LABEL_14;
      }
      if ( *(_DWORD *)a2 == 1701736302 )
      {
        *(_BYTE *)(a1 + 8) = 5;
LABEL_14:
        result = (void *)0x8000000000000000LL;
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return result;
      }
LABEL_10:
      result = (void *)_rust_alloc(29LL, 1LL);
      if ( !result )
        alloc::raw_vec::handle_error(1LL, 29LL);
      qmemcpy(result, "Unsupported unit is specified", 29);
      *(_QWORD *)a1 = 29LL;
      *(_QWORD *)(a1 + 8) = result;
      *(_QWORD *)(a1 + 16) = 29LL;
      return result;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x2D636569 | *(unsigned __int8 *)(a2 + 4) ^ 0x69 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 8) = 1;
      goto LABEL_14;
    default:
      goto LABEL_10;
  }
}
