__int64 *__fastcall uu_test::parser::Parser::expect(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 *result; // rax
  __int64 v6; // r14
  _BYTE *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rsi
  _BYTE *v10; // rdi
  char v11; // [rsp+Fh] [rbp-99h] BYREF
  __int128 v12; // [rsp+10h] [rbp-98h] BYREF
  __int64 *v13; // [rsp+20h] [rbp-88h]
  __int64 v14; // [rsp+28h] [rbp-80h] BYREF
  __int64 v15; // [rsp+30h] [rbp-78h]
  _BYTE *v16; // [rsp+38h] [rbp-70h]
  __int64 v17; // [rsp+40h] [rbp-68h]
  _BYTE v18[24]; // [rsp+50h] [rbp-58h] BYREF
  __int128 *v19; // [rsp+70h] [rbp-38h]
  __int64 (__fastcall **v20)(); // [rsp+78h] [rbp-30h]
  __int64 v21; // [rsp+80h] [rbp-28h]
  char v22; // [rsp+88h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0x8000000000000001LL;
  if ( v3 == 0x8000000000000001LL )
  {
    v4 = *(_QWORD *)(a2 + 56);
    if ( v4 == *(_QWORD *)(a2 + 72) )
    {
      *(_QWORD *)v18 = 0x8000000000000000LL;
    }
    else
    {
      *(_QWORD *)(a2 + 56) = v4 + 24;
      *(_QWORD *)&v18[16] = *(_QWORD *)(v4 + 16);
      *(_OWORD *)v18 = *(_OWORD *)v4;
    }
  }
  else
  {
    *(_OWORD *)&v18[8] = *(_OWORD *)(a2 + 32);
    *(_QWORD *)v18 = v3;
  }
  result = uu_test::parser::Symbol::new(&v14, (__int64 *)v18);
  v6 = v14;
  if ( v14 == 3 && v17 == 1 )
  {
    v7 = v16;
    if ( *v16 == 41 )
    {
      v8 = v15;
      *(_QWORD *)a1 = 7LL;
      if ( v8 )
        return (__int64 *)_rust_dealloc(v7, v8, 1LL);
      return result;
    }
  }
  *(_QWORD *)&v12 = 0LL;
  *((_QWORD *)&v12 + 1) = 1LL;
  v13 = 0LL;
  v21 = 32LL;
  v22 = 3;
  *(_QWORD *)v18 = 0LL;
  *(_QWORD *)&v18[16] = 0LL;
  v19 = &v12;
  v20 = &off_E1E70;
  if ( (unsigned __int8)os_display::unix::write(v18, asc_193C8, 1LL, 1LL) )
    core::result::unwrap_failed(aADisplayImplem_0, 55LL, &v11, &unk_E1EB8, &off_E1EA0);
  result = v13;
  *(_QWORD *)(a1 + 24) = v13;
  *(_OWORD *)(a1 + 8) = v12;
  *(_QWORD *)a1 = 1LL;
  if ( (_DWORD)v6 == 3 )
  {
    v9 = v15;
    if ( !v15 )
      return result;
    v10 = v16;
    return (__int64 *)_rust_dealloc(v10, v9, 1LL);
  }
  result = (__int64 *)(v6 - 2);
  if ( (unsigned __int64)(v6 - 2) <= 3 )
  {
    result = *(__int64 **)&asc_102C0[8 * v6 - 16];
    v9 = *(__int64 *)((char *)&v14 + (_QWORD)result);
    if ( v9 )
    {
      v10 = *(_BYTE **)((char *)&v15 + (_QWORD)result);
      return (__int64 *)_rust_dealloc(v10, v9, 1LL);
    }
  }
  return result;
}
