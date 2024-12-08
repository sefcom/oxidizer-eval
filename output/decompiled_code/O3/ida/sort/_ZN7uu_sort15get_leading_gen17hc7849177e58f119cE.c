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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // eax
  __int64 v30; // rax
  int v31; // edx
  const char *v33; // [rsp+0h] [rbp-88h] BYREF
  __int64 v34; // [rsp+8h] [rbp-80h]
  __int128 v35; // [rsp+10h] [rbp-78h]
  const char *v36; // [rsp+20h] [rbp-68h] BYREF
  __int64 v37; // [rsp+28h] [rbp-60h]
  __int64 v38; // [rsp+30h] [rbp-58h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  _QWORD v40[9]; // [rsp+40h] [rbp-48h] BYREF

  started = core::str::<impl str>::trim_start_matches();
  v7 = v2;
  v8 = a2 - v2;
  v33 = aInf_0;
  v34 = 3LL;
  *(_QWORD *)&v35 = aInf;
  *((_QWORD *)&v35 + 1) = 4LL;
  v36 = aNan;
  v37 = 3LL;
  v38 = 0LL;
  v39 = 3LL;
  if ( started )
  {
    while ( 1 )
    {
      v9 = ((__int64 (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
             &v33,
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
                                v33,
                                v34,
                                v35,
                                *((_QWORD *)&v35 + 1),
                                v36,
                                v37,
                                v38,
                                v39) )
        {
          ((void (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>)(
            &v33,
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
  while ( ((__int64 (__fastcall *)(const char **))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(&v33) )
  {
    if ( !v11 )
      goto LABEL_15;
    if ( v11 == v7 )
    {
      v10 = v7;
LABEL_15:
      core::str::slice_error_fail(0LL, v7, 0LL, v10, &off_1FF2C8);
    }
  }
LABEL_16:
  ((void (__fastcall *)(const char **))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>)(&v33);
  v40[2] = 0LL;
  v40[0] = started;
  v40[1] = v7 + started;
  ((void (__fastcall *)(const char **, _QWORD *, __int64, __int64, __int64, __int64, const char *, __int64, _QWORD, _QWORD))core::iter::traits::iterator::Iterator::fuse)(
    &v36,
    v40,
    v12,
    v13,
    v14,
    v15,
    v33,
    v34,
    v35,
    *((_QWORD *)&v35 + 1));
  v33 = 0LL;
  v34 = 8LL;
  v35 = 0LL;
  v16 = ((__int64 (__fastcall *)(const char **, _QWORD))itertools::peek_nth::PeekNth<I>::peek_nth)(&v33, 0LL);
  if ( v16 )
  {
    v17 = *(_DWORD *)(v16 + 8);
    if ( v17 == 45 || v17 == 43 )
      <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v33);
  }
  v18 = 1;
  while ( 1 )
  {
    <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v33);
    if ( (_DWORD)v19 == (_DWORD)&loc_110000 )
      break;
    if ( (unsigned int)(v19 - 48) >= 0xA )
    {
      if ( (_DWORD)v19 != 46 )
      {
        if ( (_DWORD)v19 == 69 || (_DWORD)v19 == 101 )
        {
          v24 = ((__int64 (__fastcall *)(const char **, _QWORD, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
                  &v33,
                  0LL,
                  v19,
                  v20,
                  v21,
                  v22);
          if ( v24 )
          {
            v29 = *(_DWORD *)(v24 + 8);
            if ( v29 == 45 || v29 == 43 )
            {
              v30 = ((__int64 (__fastcall *)(const char **, __int64, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
                      &v33,
                      2LL,
                      v25,
                      v26,
                      v27,
                      v28);
              if ( !v30 || (unsigned int)(*(_DWORD *)(v30 + 8) - 48) > 9 )
                break;
              <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v33);
            }
            else if ( (unsigned int)(v29 - 48) >= 0xA )
            {
              break;
            }
            do
              <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v33);
            while ( v31 != (_DWORD)&loc_110000 && (unsigned int)(v31 - 48) < 0xA );
          }
        }
        break;
      }
      v23 = (v18 & 1) == 0;
      v18 = 0;
      if ( v23 )
        break;
    }
  }
  core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v33);
  return v8;
}
