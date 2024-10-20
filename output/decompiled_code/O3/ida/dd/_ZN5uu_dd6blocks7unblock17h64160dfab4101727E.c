char **__fastcall uu_dd::blocks::unblock(char ***a1, char *a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  __int64 v7; // rdi
  char **result; // rax
  __int64 v9; // rbp
  char *v10; // r12
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  size_t v13; // r13
  char ***v15; // rcx
  char **v16; // [rsp+0h] [rbp-68h] BYREF
  __int64 v17; // [rsp+8h] [rbp-60h]
  __int64 v18; // [rsp+10h] [rbp-58h]
  __int128 v19; // [rsp+18h] [rbp-50h]
  char ***v20; // [rsp+30h] [rbp-38h]

  if ( !a4 )
  {
    v16 = &off_116460;
    v17 = 1LL;
    v18 = 8LL;
    v19 = 0LL;
    core::panicking::panic_fmt(&v16, &off_116470);
  }
  v4 = a3;
  v20 = a1;
  if ( a3 )
  {
    v7 = 1LL;
    result = 0LL;
    v9 = 0LL;
    do
    {
      v10 = a2;
      v11 = a4;
      if ( v4 < a4 )
        v11 = v4;
      a2 += v11;
      v4 -= v11;
      v16 = result;
      v17 = v7;
      v18 = v9;
      *(_QWORD *)&v19 = v10;
      *((_QWORD *)&v19 + 1) = v11;
      v12 = v11 + 1;
      while ( v12 != 1 )
      {
        v13 = v12 - 1;
        if ( v10[v12-- - 2] != 32 )
        {
          if ( (unsigned __int64)result - v9 < v13 )
          {
            alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(&v16, v9, v13);
            v7 = v17;
            v9 = v18;
          }
          memcpy((void *)(v9 + v7), v10, v13);
          v9 += v13;
          v18 = v9;
          result = v16;
          break;
        }
      }
      if ( (char **)v9 == result )
        alloc::raw_vec::RawVec<T,A>::grow_one(&v16);
      *(_BYTE *)(v17 + v9++) = 10;
      result = v16;
      v7 = v17;
    }
    while ( v4 );
  }
  else
  {
    v7 = 1LL;
    result = 0LL;
    v9 = 0LL;
  }
  v15 = v20;
  *v20 = result;
  v15[1] = (char **)v7;
  v15[2] = (char **)v9;
  return result;
}
