_WORD *__fastcall uu_base32::base_common::fast_decode::alphabet_to_table(_WORD *a1, __int64 a2, __int64 a3, int a4)
{
  _WORD *v4; // rbx
  __int64 i; // rax
  size_t v6; // rdx
  __int128 src; // [rsp+10h] [rbp-108h] BYREF
  __int128 v9; // [rsp+20h] [rbp-F8h]
  __int128 v10; // [rsp+30h] [rbp-E8h]
  __int128 v11; // [rsp+40h] [rbp-D8h]
  __int128 v12; // [rsp+50h] [rbp-C8h]
  __int128 v13; // [rsp+60h] [rbp-B8h]
  __int128 v14; // [rsp+70h] [rbp-A8h]
  __int128 v15; // [rsp+80h] [rbp-98h]
  __int128 v16; // [rsp+90h] [rbp-88h]
  __int128 v17; // [rsp+A0h] [rbp-78h]
  __int128 v18; // [rsp+B0h] [rbp-68h]
  __int128 v19; // [rsp+C0h] [rbp-58h]
  __int128 v20; // [rsp+D0h] [rbp-48h]
  __int128 v21; // [rsp+E0h] [rbp-38h]
  __int128 v22; // [rsp+F0h] [rbp-28h]
  __int128 v23; // [rsp+100h] [rbp-18h]

  v4 = a1;
  if ( a4 )
  {
    v23 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    v20 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    v17 = 0LL;
    v16 = 0LL;
    v15 = 0LL;
    v14 = 0LL;
    v13 = 0LL;
    v12 = 0LL;
    v11 = 0LL;
    v10 = 0LL;
    v9 = 0LL;
    src = 0LL;
    if ( a3 )
    {
      for ( i = 0LL; i != a3; ++i )
      {
        if ( *((_BYTE *)&src + *(unsigned __int8 *)(a2 + i)) )
          core::panicking::panic(aAssertionFaile_9, 28LL, &off_101D10);
        *((_BYTE *)&src + *(unsigned __int8 *)(a2 + i)) = 1;
      }
    }
    v6 = 256LL;
  }
  else
  {
    src = xmmword_11F90;
    v9 = xmmword_11F90;
    v10 = xmmword_11F90;
    v11 = xmmword_11F90;
    v12 = xmmword_11F90;
    v13 = xmmword_11F90;
    v14 = xmmword_11F90;
    v15 = xmmword_11F90;
    v16 = xmmword_11F90;
    v17 = xmmword_11F90;
    v18 = xmmword_11F90;
    v19 = xmmword_11F90;
    v20 = xmmword_11F90;
    v21 = xmmword_11F90;
    v22 = xmmword_11F90;
    LOWORD(v23) = 257;
    a1[4] = 257;
    *(_QWORD *)a1 = 0x101010101010101LL;
    *((_BYTE *)a1 + 10) = 0;
    *(_WORD *)((char *)a1 + 11) = 257;
    *((_BYTE *)a1 + 13) = 0;
    a1 += 7;
    v6 = 242LL;
  }
  memcpy(a1, &src, v6);
  return v4;
}
