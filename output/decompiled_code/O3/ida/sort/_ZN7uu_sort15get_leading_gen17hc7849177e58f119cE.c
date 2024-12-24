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
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rax
  int v34; // edx
  const char *v36; // [rsp+0h] [rbp-88h] BYREF
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int128 v38; // [rsp+10h] [rbp-78h]
  const char *v39; // [rsp+20h] [rbp-68h] BYREF
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+30h] [rbp-58h]
  __int64 v42; // [rsp+38h] [rbp-50h]
  _QWORD v43[9]; // [rsp+40h] [rbp-48h] BYREF

  started = core::str::<impl str>::trim_start_matches();
  v7 = v2;
  v8 = a2 - v2;
  v36 = aInf_0;
  v37 = 3LL;
  *(_QWORD *)&v38 = aInf;
  *((_QWORD *)&v38 + 1) = 4LL;
  v39 = aNan;
  v40 = 3LL;
  v41 = 0LL;
  v42 = 3LL;
  if ( started )
  {
    while ( 1 )
    {
      v9 = ((__int64 (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))<core::array::iter::IntoIter<T,_> as core::iter::traits::iterator::Iterator>::next)(
             &v36,
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
                                v36,
                                v37,
                                v38,
                                *((_QWORD *)&v38 + 1),
                                v39,
                                v40,
                                v41,
                                v42) )
        {
          ((void (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>)(
            &v36,
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
            &v36,
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
      core::str::slice_error_fail(0LL, v7, 0LL, v10, &off_1FF2C8);
    }
  }
LABEL_16:
  ((void (__fastcall *)(const char **, __int64, unsigned __int64, __int64, __int64, __int64))core::ptr::drop_in_place<core::array::iter::IntoIter<&str,3_usize>>)(
    &v36,
    a2,
    v2,
    v3,
    v4,
    v5);
  v43[2] = 0LL;
  v43[0] = started;
  v43[1] = v7 + started;
  ((void (__fastcall *)(const char **, _QWORD *, __int64, __int64, __int64, __int64, const char *, __int64, _QWORD, _QWORD))core::iter::traits::iterator::Iterator::fuse)(
    &v39,
    v43,
    v11,
    v12,
    v13,
    v14,
    v36,
    v37,
    v38,
    *((_QWORD *)&v38 + 1));
  v36 = 0LL;
  v37 = 8LL;
  v38 = 0LL;
  v19 = ((__int64 (__fastcall *)(const char **, _QWORD, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
          &v36,
          0LL,
          v15,
          v16,
          v17,
          v18);
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 8);
    if ( v20 == 45 || v20 == 43 )
      <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v36);
  }
  v21 = 1;
  while ( 1 )
  {
    <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v36);
    if ( (_DWORD)v22 == (_DWORD)&loc_110000 )
      break;
    if ( (unsigned int)(v22 - 48) >= 0xA )
    {
      if ( (_DWORD)v22 != 46 )
      {
        if ( (_DWORD)v22 == 69 || (_DWORD)v22 == 101 )
        {
          v27 = ((__int64 (__fastcall *)(const char **, _QWORD, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
                  &v36,
                  0LL,
                  v22,
                  v23,
                  v24,
                  v25);
          if ( v27 )
          {
            v32 = *(_DWORD *)(v27 + 8);
            if ( v32 == 45 || v32 == 43 )
            {
              v33 = ((__int64 (__fastcall *)(const char **, __int64, __int64, __int64, __int64, __int64))itertools::peek_nth::PeekNth<I>::peek_nth)(
                      &v36,
                      2LL,
                      v28,
                      v29,
                      v30,
                      v31);
              if ( !v33 || (unsigned int)(*(_DWORD *)(v33 + 8) - 48) > 9 )
                break;
              <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v36);
            }
            else if ( (unsigned int)(v32 - 48) >= 0xA )
            {
              break;
            }
            do
              <itertools::peek_nth::PeekNth<I> as core::iter::traits::iterator::Iterator>::next(&v36);
            while ( v34 != (_DWORD)&loc_110000 && (unsigned int)(v34 - 48) < 0xA );
          }
        }
        break;
      }
      v26 = (v21 & 1) == 0;
      v21 = 0;
      if ( v26 )
        break;
    }
  }
  core::ptr::drop_in_place<itertools::peek_nth::PeekNth<core::str::iter::CharIndices>>(&v36);
  return v8;
}
