__int64 __fastcall uu_split::get_input_size(__int64 a1, void *a2, __int64 a3, char a4, unsigned __int64 a5)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-118h] BYREF
  __int64 *v20; // [rsp+8h] [rbp-110h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+10h] [rbp-108h]
  _QWORD v22[3]; // [rsp+18h] [rbp-100h] BYREF
  void *dest; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+38h] [rbp-E0h]
  _QWORD *v25; // [rsp+40h] [rbp-D8h]
  __int64 v26; // [rsp+48h] [rbp-D0h]
  __int64 v27; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v28; // [rsp+80h] [rbp-98h]
  _BYTE v29[56]; // [rsp+E0h] [rbp-38h] BYREF

  v19 = a1;
  if ( (a4 & 1) == 0 )
    a5 = uucore::features::fs::sane_blksize::sane_blksize_from_path(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  dest = a2;
  v24 = a5;
  v25 = (_QWORD *)a5;
  if ( (std::io::default_read_to_end(&dest, a3) & 1) != 0 )
    return 1LL;
  if ( a5 <= v7 )
  {
    v9 = v7;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(_QWORD *)(a1 + 8),
                            *(_QWORD *)(a1 + 16),
                            asc_1CA61,
                            1LL) )
    {
      v20 = &v19;
      v21 = <&T as core::fmt::Display>::fmt;
      dest = &unk_10AEC8;
      v24 = 2LL;
      v27 = 0LL;
      v25 = &v20;
      v26 = 1LL;
      ((void (__fastcall *)(_QWORD *, _QWORD, void **, __int64, __int64, __int64, __int64))core::option::Option<T>::map_or_else)(
        v22,
        0LL,
        &dest,
        v10,
        v11,
        v12,
        v19);
      v13 = alloc::boxed::Box<T>::new(v22);
      std::io::error::Error::_new(40LL, v13, &off_10AD88);
    }
    else
    {
      std::fs::metadata(&dest);
      if ( (_DWORD)dest != 2 )
      {
        if ( v28 >= v9 )
          return 0LL;
        std::fs::File::open(&dest, *(_QWORD *)(v19 + 8), *(_QWORD *)(v19 + 16));
        if ( ((unsigned __int8)dest & 1) == 0 )
        {
          LODWORD(v20) = HIDWORD(dest);
          if ( (<std::fs::File as std::io::Seek>::seek(&v20, 1LL, 0LL) & 1) == 0 )
          {
            if ( v14 )
            {
              core::ptr::drop_in_place<std::fs::File>(&v20);
              return 0LL;
            }
            v22[0] = &v19;
            v22[1] = <&T as core::fmt::Display>::fmt;
            dest = &unk_10AEE8;
            v24 = 2LL;
            v27 = 0LL;
            v25 = v22;
            v26 = 1LL;
            ((void (__fastcall *)(_BYTE *, _QWORD, void **, __int64, __int64, __int64, __int64, __int64 *, __int64 (__fastcall *)()))core::option::Option<T>::map_or_else)(
              v29,
              0LL,
              &dest,
              v15,
              v16,
              v17,
              v19,
              v20,
              v21);
            v18 = alloc::boxed::Box<T>::new(v29);
            std::io::error::Error::_new(40LL, v18, &off_10AD88);
          }
          core::ptr::drop_in_place<std::fs::File>(&v20);
        }
      }
    }
    return 1LL;
  }
  return 0LL;
}