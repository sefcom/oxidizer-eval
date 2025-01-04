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
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // eax
  char v18; // bp
  int v19; // r13d
  int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // rax
  const char *v34; // [rsp+0h] [rbp-88h] BYREF
  __int64 v35; // [rsp+8h] [rbp-80h]
  __int128 v36; // [rsp+10h] [rbp-78h]
  const char *v37; // [rsp+20h] [rbp-68h] BYREF
  __int64 v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  __int64 v40; // [rsp+38h] [rbp-50h]
  _QWORD v41[9]; // [rsp+40h] [rbp-48h] BYREF

  started = core::str::<impl str>::trim_start_matches();
  v7 = v2;
  v8 = a2 - v2;
  v34 = aInf_0;
  v35 = 3LL;
  *(_QWORD *)&v36 = aInf;
  *((_QWORD *)&v36 + 1) = 4LL;
  v37 = aNan;
  v38 = 3LL;
  v39 = 0LL;
  v40 = 3LL;
  if ( started )
  {
    while ( 1 )
    {
      v9 = ((__int64 (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
             &v34,
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
                                v34,
                                v35,
                                v36,
                                *((_QWORD *)&v36 + 1),
                                v37,
                                v38,
                                v39,
                                v40) )
        {
          ((void (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>)(
            &v34,
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
  while ( ((__int64 (__fastcall *)(const char **))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(&v34) )
  {
    if ( !v11 )
      goto LABEL_15;
    if ( v11 == v7 )
    {
      v10 = v7;
LABEL_15:
      core::str::slice_error_fail(0LL, v7, 0LL, v10, &off_1FFDF0);
    }
  }
LABEL_16:
  ((void (__fastcall *)(const char **))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>)(&v34);
  v41[2] = 0LL;
  v41[0] = started;
  v41[1] = v7 + started;
  ((void (__fastcall *)(const char **, _QWORD *, __int64, __int64, __int64, __int64, const char *, __int64, _QWORD, _QWORD))core::iter::traits::iterator::Iterator::fuse)(
    &v37,
    v41,
    v12,
    v13,
    v14,
    v15,
    v34,
    v35,
    v36,
    *((_QWORD *)&v36 + 1));
  v34 = 0LL;
  v35 = 8LL;
  v36 = 0LL;
  v16 = ((__int64 (__fastcall *)(const char **, _QWORD))itertools::peek_nth::PeekNth<I>::peek_nth)(&v34, 0LL);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 + 8);
    if ( v17 == 45 || v17 == 43 )
      <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v34);
  }
  v18 = 1;
  v19 = 0;
LABEL_21:
  v20 = v19;
LABEL_22:
  v19 = v20;
  while ( 1 )
  {
    <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v34);
    if ( v21 == 1114112 )
      break;
    v20 = v21 - 48;
    if ( (unsigned int)(v21 - 48) >= 0xA )
    {
      LOBYTE(v22) = v21 == 46 && (_BYTE)v19 == 0;
      LOBYTE(v20) = 1;
      if ( ((unsigned __int8)v18 & (unsigned __int8)v22) != 0 )
        goto LABEL_22;
      v25 = v21 & 0xFFFFFFDF;
      if ( ((unsigned __int8)v18 & ((_DWORD)v25 == 69)) != 0 )
      {
        v26 = ((__int64 (__fastcall *)(const char **, _QWORD, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
                &v34,
                0LL,
                v25,
                v22,
                v23,
                v24);
        if ( v26 )
        {
          v31 = *(_DWORD *)(v26 + 8);
          if ( v31 == 45 || v31 == 43 )
          {
            v32 = ((__int64 (__fastcall *)(const char **, __int64, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
                    &v34,
                    2LL,
                    v27,
                    v28,
                    v29,
                    v30);
            if ( v32 && (unsigned int)(*(_DWORD *)(v32 + 8) - 48) <= 9 )
            {
              v18 = 0;
              <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v34);
              goto LABEL_21;
            }
          }
          else
          {
            v18 = 0;
            if ( (unsigned int)(v31 - 48) < 0xA )
              goto LABEL_21;
          }
        }
      }
      break;
    }
  }
  core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v34);
  return v8;
}
