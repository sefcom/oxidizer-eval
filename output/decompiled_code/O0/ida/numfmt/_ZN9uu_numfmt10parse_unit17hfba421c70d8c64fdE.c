__int64 __fastcall uu_numfmt::parse_unit(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  void *v4; // r15
  __int64 v6; // [rsp+8h] [rbp-30h] BYREF
  __int64 v7; // [rsp+10h] [rbp-28h]
  void *v8; // [rsp+18h] [rbp-20h]

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
        *(_QWORD *)a1 = 0x8000000000000000LL;
        return a1;
      }
LABEL_10:
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v6, 29LL, 0LL);
      v3 = v7;
      if ( v6 )
        alloc::raw_vec::handle_error(v7, v8);
      v4 = v8;
      core::intrinsics::copy_nonoverlapping::precondition_check(aUnsupportedUni, v8, 1LL, 1LL, 29LL);
      qmemcpy(v4, "Unsupported unit is specified", 29);
      *(_QWORD *)a1 = v3;
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = 29LL;
      return a1;
    case 5LL:
      if ( *(_DWORD *)a2 ^ 0x2D636569 | *(unsigned __int8 *)(a2 + 4) ^ 0x69 )
        goto LABEL_10;
      *(_BYTE *)(a1 + 8) = 1;
      goto LABEL_14;
    default:
      goto LABEL_10;
  }
}
