        _QWORD *a8)
{
  __int64 v9; // r15
  __int64 v11; // r15
  __int64 v12; // rbx
  size_t v13; // r15
  __int64 result; // rax
  size_t v15; // rdx
  unsigned __int64 v16; // rbx
  char *v17; // rsi
  __int64 (__fastcall *v18)(__int64, char *, unsigned __int64, __int64); // r15
  bool v19; // cf
  char *v20; // rsi
  size_t v21; // rcx
  __int64 v22; // r15
  size_t v23; // rbx
  char *v25; // [rsp+8h] [rbp-70h]
  size_t v26; // [rsp+10h] [rbp-68h]
  size_t v27; // [rsp+10h] [rbp-68h]
  char **v28; // [rsp+18h] [rbp-60h] BYREF
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int128 v31; // [rsp+30h] [rbp-48h]

  v9 = a2;
  if ( a4 )
  {
    v26 = a6 - a4;
    if ( a6 < a4 )
    {
      v28 = &off_101D00;
      v29 = 1LL;
      v30 = 8LL;
      v31 = 0LL;
      core::panicking::panic_fmt(&v28, &off_101D28);
    }
    v11 = a8[2];
    if ( *a8 - v11 < a4 )
    {
      alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a8, a8[2], a4);
      v11 = a8[2];
    }
    v12 = a8[1];
    memcpy((void *)(v12 + v11), a5, a4);
    v13 = a4 + v11;
    a8[2] = v13;
    if ( v13 != a3 )
      core::panicking::panic(aAssertionFaile_10, 67LL, &off_101D40);
    v9 = a2;
    result = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int64, __int64))(a2 + 32))(a1, v12, a3, a7);
    a6 = v26;
    if ( result )
      return result;
    a5 += a4;
    a8[2] = 0LL;
  }
  if ( !a3 )
  {
    v28 = &off_101CC0;
    v29 = 1LL;
    v30 = 8LL;
    v31 = 0LL;
    core::panicking::panic_fmt(&v28, &off_101D58);
  }
  if ( (a3 | a6) >> 32 )
    v15 = a6 % a3;
  else
    v15 = (unsigned int)a6 % (unsigned int)a3;
  v27 = a6;
  v16 = a6 - v15;
  v17 = a5;
  v25 = &a5[a6 - v15];
  v18 = *(__int64 (__fastcall **)(__int64, char *, unsigned __int64, __int64))(v9 + 32);
  while ( 1 )
  {
    v19 = v16 < a3;
    v16 -= a3;
    if ( v19 )
      break;
    result = v18(a1, v17, a3, a7);
    v17 += a3;
    if ( result )
      return result;
  }
  v20 = v25;
  v21 = &a5[v27] - v25;
  v22 = a8[2];
  v23 = v21;
  if ( *a8 - v22 < v21 )
  {
    alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(a8, a8[2], v21);
    v20 = v25;
    v22 = a8[2];
  }
  memcpy((void *)(v22 + a8[1]), v20, v23);
  a8[2] = v23 + v22;
  return 0LL;
}
