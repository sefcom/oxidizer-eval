__int64 (__fastcall **__fastcall uu_sort::open(_QWORD *a1, __int64 a2))()
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 *v5; // rax
  __int64 (__fastcall **result)(); // rax
  __int64 v7; // r12
  _OWORD *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  int v12; // ebp
  _DWORD *v13; // rax
  _DWORD v14[2]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v15; // [rsp+8h] [rbp-90h]
  __int64 v16; // [rsp+10h] [rbp-88h]
  __int128 v17; // [rsp+18h] [rbp-80h]
  __int128 v18; // [rsp+28h] [rbp-70h]
  __int128 v19; // [rsp+38h] [rbp-60h]
  __int128 v20; // [rsp+48h] [rbp-50h]
  __int128 v21; // [rsp+58h] [rbp-40h] BYREF
  __int64 v22; // [rsp+68h] [rbp-30h]

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v2, v3, asc_1EDD9, 1LL) )
  {
    v4 = std::io::stdio::stdin();
    v5 = (__int64 *)_rust_alloc(8LL, 8LL);
    if ( !v5 )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *v5 = v4;
    a1[1] = v5;
    result = (__int64 (__fastcall **)())&unk_18F108;
LABEL_9:
    a1[2] = result;
    *a1 = 0LL;
    return result;
  }
  std::fs::File::open(v14, v2, v3);
  if ( !v14[0] )
  {
    v12 = v14[1];
    v13 = (_DWORD *)_rust_alloc(4LL, 4LL);
    if ( !v13 )
      alloc::alloc::handle_alloc_error(4LL, 4LL);
    *v13 = v12;
    a1[1] = v13;
    result = &off_18F008;
    goto LABEL_9;
  }
  v7 = v15;
  v16 = v15;
  std::path::Path::to_path_buf(&v21, v2, v3);
  *(_QWORD *)&v19 = v22;
  v18 = v21;
  *((_QWORD *)&v17 + 1) = v7;
  LOBYTE(v17) = 2;
  v8 = (_OWORD *)_rust_alloc(64LL, 8LL);
  if ( !v8 )
    alloc::alloc::handle_alloc_error(8LL, 64LL);
  v9 = v17;
  v10 = v18;
  v11 = v19;
  v8[3] = v20;
  v8[2] = v11;
  v8[1] = v10;
  *v8 = v9;
  a1[1] = v8;
  result = &off_18F098;
  a1[2] = &off_18F098;
  *a1 = 1LL;
  return result;
}
