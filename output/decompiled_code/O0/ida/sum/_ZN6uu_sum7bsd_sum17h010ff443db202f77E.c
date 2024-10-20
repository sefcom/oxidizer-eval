unsigned __int64 __fastcall uu_sum::bsd_sum(__int64 a1, __int64 a2)
{
  int v3; // r15d
  __int64 (__fastcall *v4)(__int64, _QWORD *, __int64); // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  bool v8; // cf
  unsigned __int8 *v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // esi
  unsigned __int8 *v12; // rcx
  int v13; // r15d
  int v14; // r15d
  int v15; // r15d
  int v16; // r15d
  int v17; // r15d
  int v18; // r15d
  int v19; // r15d
  int v20; // edx
  __int64 v21; // r12
  __int64 v22; // rsi
  _BYTE v24[8]; // [rsp+28h] [rbp-1040h] BYREF
  _BYTE v25[8]; // [rsp+30h] [rbp-1038h] BYREF
  _QWORD s[518]; // [rsp+38h] [rbp-1030h] BYREF

  v3 = 0;
  memset(s, 0, 0x1000uLL);
  v4 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(a2 + 24);
  v5 = 0LL;
  while ( 1 )
  {
    v6 = v4(a1, s, 4096LL);
    if ( v6 || !v7 )
      break;
    v8 = __CFADD__(v7, v5);
    v5 += v7;
    if ( v8 )
      core::panicking::panic_const::panic_const_add_overflow(&off_105348);
    if ( v7 >= 0x1001 )
      core::slice::index::slice_end_index_len_fail(v7, 4096LL, &off_105360);
    v9 = (unsigned __int8 *)s;
    v10 = v7 & 7;
    if ( (v7 & 7) != 0 )
    {
      do
      {
        v11 = *v9++;
        LOWORD(v3) = __ROR2__(v3, 1);
        v3 += v11;
        --v10;
      }
      while ( v10 );
    }
    if ( v7 - 1 >= 7 )
    {
      v12 = (unsigned __int8 *)s + v7;
      do
      {
        LOWORD(v3) = __ROR2__(v3, 1);
        v13 = *v9 + v3;
        LOWORD(v13) = __ROR2__(v13, 1);
        v14 = v9[1] + v13;
        LOWORD(v14) = __ROR2__(v14, 1);
        v15 = v9[2] + v14;
        LOWORD(v15) = __ROR2__(v15, 1);
        v16 = v9[3] + v15;
        LOWORD(v16) = __ROR2__(v16, 1);
        v17 = v9[4] + v16;
        LOWORD(v17) = __ROR2__(v17, 1);
        v18 = v9[5] + v17;
        LOWORD(v18) = __ROR2__(v18, 1);
        v19 = v9[6] + v18;
        v20 = v9[7];
        v9 += 8;
        LOWORD(v19) = __ROR2__(v19, 1);
        v3 = v20 + v19;
      }
      while ( v9 != v12 );
    }
  }
  if ( v6 )
  {
    std::io::error::repr_bitpacked::decode_repr(v24, v7);
    if ( v24[0] >= 3u )
      core::ptr::drop_in_place<alloc::boxed::Box<std::io::error::Custom>>(v25);
  }
  v8 = __CFADD__(v5, 1024LL);
  v21 = v5 + 1024;
  if ( v8 )
    core::panicking::panic_const::panic_const_add_overflow(&off_105330);
  if ( *(_QWORD *)a2 )
    (*(void (__fastcall **)(__int64))a2)(a1);
  v22 = *(_QWORD *)(a2 + 8);
  if ( v22 )
    _rust_dealloc(a1, v22, *(_QWORD *)(a2 + 16));
  return (unsigned __int64)(v21 - 1) >> 10;
}
