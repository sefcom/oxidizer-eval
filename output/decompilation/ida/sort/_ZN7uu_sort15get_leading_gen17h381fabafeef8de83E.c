__int64 __fastcall uu_sort::get_leading_gen(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 started; // r12
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  int v20; // eax
  char v21; // bp
  int v22; // r13d
  int v23; // eax
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  __int64 v35; // rax
  const char *v37; // [rsp+0h] [rbp-88h] BYREF
  __int64 v38; // [rsp+8h] [rbp-80h]
  __int128 v39; // [rsp+10h] [rbp-78h]
  const char *v40; // [rsp+20h] [rbp-68h] BYREF
  __int64 v41; // [rsp+28h] [rbp-60h]
  __int64 v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  _QWORD v44[9]; // [rsp+40h] [rbp-48h] BYREF

  started = core::str::<impl str>::trim_start_matches();
  v7 = v2;
  v8 = a2 - v2;
  v37 = aInf_0;
  v38 = 3LL;
  *(_QWORD *)&v39 = aInf;
  *((_QWORD *)&v39 + 1) = 4LL;
  v40 = aNan;
  v41 = 3LL;
  v42 = 0LL;
  v43 = 3LL;
  if ( started )
  {
    while ( 1 )
    {
      v9 = ((__int64 (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
             &v37,
             a2,
             v2,
             v3,
             v4,
             v5);
      if ( !v9 )
        goto LABEL_16;
      if ( v2 )
      {
        if ( v2 >= v7 )
        {
          if ( v2 == v7 )
            goto LABEL_8;
        }
        else if ( *(char *)(started + v2) > -65 )
        {
          goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        a2 = v2;
        if ( (unsigned __int8)core::slice::ascii::<impl [u8]>::eq_ignore_ascii_case(
                                started,
                                v2,
                                v9,
                                v2,
                                v4,
                                v5,
                                v37,
                                v38,
                                v39,
                                *((_QWORD *)&v39 + 1),
                                v40,
                                v41,
                                v42,
                                v43) )
        {
          ((void (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>)(
            &v37,
            a2,
            v2,
            v3,
            v4,
            v5);
          return v8;
        }
      }
    }
  }
  v10 = 0LL;
  while ( ((__int64 (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
            &v37,
            a2,
            v2,
            v3,
            v4,
            v5) )
  {
    if ( !v2 )
      goto LABEL_15;
    if ( v2 == v7 )
    {
      v10 = v7;
LABEL_15:
      core::str::slice_error_fail(0LL, v7, 0LL, v10, &off_1FFDF0);
    }
  }
LABEL_16:
  ((void (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>)(
    &v37,
    a2,
    v2,
    v3,
    v4,
    v5);
  v44[2] = 0LL;
  v44[0] = started;
  v44[1] = v7 + started;
  ((void (__fastcall *)(const char **, _QWORD *, __int64, __int64, __int64, __int64, const char *, __int64, _QWORD, _QWORD))core::iter::traits::iterator::Iterator::fuse)(
    &v40,
    v44,
    v11,
    v12,
    v13,
    v14,
    v37,
    v38,
    v39,
    *((_QWORD *)&v39 + 1));
  v37 = 0LL;
  v38 = 8LL;
  v39 = 0LL;
  v19 = ((__int64 (__fastcall *)(const char **, _QWORD, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
          &v37,
          0LL,
          v15,
          v16,
          v17,
          v18);
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 8);
    if ( v20 == 45 || v20 == 43 )
      <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v37);
  }
  v21 = 1;
  v22 = 0;
LABEL_21:
  v23 = v22;
LABEL_22:
  v22 = v23;
  while ( 1 )
  {
    <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v37);
    if ( v24 == 1114112 )
      break;
    v23 = v24 - 48;
    if ( (unsigned int)(v24 - 48) >= 0xA )
    {
      LOBYTE(v25) = v24 == 46 && (_BYTE)v22 == 0;
      LOBYTE(v23) = 1;
      if ( ((unsigned __int8)v21 & (unsigned __int8)v25) != 0 )
        goto LABEL_22;
      v28 = v24 & 0xFFFFFFDF;
      if ( ((unsigned __int8)v21 & ((_DWORD)v28 == 69)) != 0 )
      {
        v29 = ((__int64 (__fastcall *)(const char **, _QWORD, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
                &v37,
                0LL,
                v28,
                v25,
                v26,
                v27);
        if ( v29 )
        {
          v34 = *(_DWORD *)(v29 + 8);
          if ( v34 == 45 || v34 == 43 )
          {
            v35 = ((__int64 (__fastcall *)(const char **, __int64, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
                    &v37,
                    2LL,
                    v30,
                    v31,
                    v32,
                    v33);
            if ( v35 && (unsigned int)(*(_DWORD *)(v35 + 8) - 48) <= 9 )
            {
              v21 = 0;
              <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v37);
              goto LABEL_21;
            }
          }
          else
          {
            v21 = 0;
            if ( (unsigned int)(v34 - 48) < 0xA )
              goto LABEL_21;
          }
        }
      }
      break;
    }
  }
  core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v37);
  return v8;
}
