__int64 __fastcall uu_ls::dired::is_dired_arg_present()
{
  unsigned int v0; // ebp
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // r8
  _QWORD *v7; // r15
  __int64 v8; // rsi
  __int64 v9; // [rsp+8h] [rbp-60h] BYREF
  __int64 v10; // [rsp+10h] [rbp-58h]
  __int64 v11; // [rsp+18h] [rbp-50h]
  _BYTE v12[72]; // [rsp+20h] [rbp-48h] BYREF

  std::env::args(v12);
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v9, v12);
  v1 = v10;
  v2 = v11;
  if ( v11 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(v10 + v3 + 8);
      v5 = *(_QWORD *)(v10 + v3 + 16);
      if ( v5 == 2 )
      {
        if ( *(_WORD *)v4 == 17453 )
          goto LABEL_8;
      }
      else if ( v5 == 7 && !(*(_DWORD *)v4 ^ 0x69642D2D | *(_DWORD *)(v4 + 3) ^ 0x64657269) )
      {
LABEL_8:
        LOBYTE(v0) = 1;
        goto LABEL_14;
      }
      v3 += 24LL;
    }
    while ( 24 * v11 != v3 );
    v0 = 0;
LABEL_14:
    v7 = (_QWORD *)(v10 + 8);
    do
    {
      v8 = *(v7 - 1);
      if ( v8 )
        _rust_dealloc(*v7, v8, 1LL);
      v7 += 3;
      --v2;
    }
    while ( v2 );
  }
  else
  {
    v0 = 0;
  }
  if ( v9 )
    _rust_dealloc(v1, 24 * v9, 8LL);
  return v0;
}
