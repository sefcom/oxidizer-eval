__int64 __fastcall uu_split::number::Number::increment(__int64 a1)
{
  unsigned int v1; // ebp
  char *v2; // r14
  signed __int64 v3; // rbx
  char v4; // al
  __int64 v5; // rcx
  char v6; // dl
  __int64 v7; // r12
  const void *v8; // rax
  const void *v9; // r15

  if ( *(_QWORD *)a1 != 0x8000000000000000LL )
  {
    v2 = *(char **)(a1 + 8);
    v3 = *(_QWORD *)(a1 + 16);
    if ( !v3 )
    {
      LOBYTE(v1) = bcmp(*(const void **)(a1 + 8), (char *)&dword_0 + 1, 0LL) == 0;
      return v1;
    }
    v4 = *(_BYTE *)(a1 + 24);
    v5 = *(_QWORD *)(a1 + 16);
    do
    {
      v6 = v2[v5 - 1] + 1;
      v2[v5 - 1] = v6;
      if ( v6 != v4 )
        break;
      v2[--v5] = 0;
    }
    while ( v5 );
    if ( v3 < 0 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = 1LL;
      v8 = (const void *)_rust_alloc_zeroed(v3, 1LL);
      if ( v8 )
      {
        v9 = v8;
        if ( !bcmp(v2, v8, v3) )
        {
          LOBYTE(v1) = 1;
          _rust_dealloc(v9, v3, 1LL);
          return v1;
        }
        _rust_dealloc(v9, v3, 1LL);
        return 0;
      }
    }
    alloc::raw_vec::handle_error(v7, v3);
  }
  ++*(_QWORD *)(a1 + 8);
  return 0;
}
