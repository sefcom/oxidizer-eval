__int64 __fastcall uu_split::get_input_size(__int64 a1, void *a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r14
  __int64 v10; // rdx
  int v11; // [rsp+Ch] [rbp-11Ch] BYREF
  __int64 v12; // [rsp+10h] [rbp-118h] BYREF
  __int64 *v13; // [rsp+18h] [rbp-110h] BYREF
  __int64 (__fastcall *v14)(); // [rsp+20h] [rbp-108h]
  void *v15; // [rsp+28h] [rbp-100h] BYREF
  __int64 v16; // [rsp+30h] [rbp-F8h]
  __int64 **v17; // [rsp+38h] [rbp-F0h]
  __int64 v18; // [rsp+40h] [rbp-E8h]
  __int64 v19; // [rsp+48h] [rbp-E0h]
  unsigned __int64 v20; // [rsp+78h] [rbp-B0h]
  _BYTE v21[24]; // [rsp+D8h] [rbp-50h] BYREF
  _BYTE v22[56]; // [rsp+F0h] [rbp-38h] BYREF

  v12 = a1;
  if ( !a4 )
    a5 = uucore::features::fs::sane_blksize::sane_blksize_from_path(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 16));
  v15 = a2;
  v16 = a5;
  if ( std::io::default_read_to_end(&v15, a3, 0LL) )
    return 1LL;
  if ( a5 > v7 )
    return 0LL;
  v9 = v7;
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          *(_QWORD *)(a1 + 8),
                          *(_QWORD *)(a1 + 16),
                          asc_217A5,
                          1LL) )
  {
    v13 = &v12;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &unk_1483A0;
    v16 = 2LL;
    v19 = 0LL;
    v17 = &v13;
    v18 = 1LL;
    core::option::Option<T>::map_or_else(v22, 0LL, &v15);
    std::io::error::Error::new(39LL, v22);
    return 1LL;
  }
  std::fs::metadata(&v15, a1);
  if ( (_DWORD)v15 == 2 )
    return 1LL;
  if ( v20 >= v9 )
    return 0LL;
  std::fs::File::open(&v15, *(_QWORD *)(v12 + 8), *(_QWORD *)(v12 + 16));
  if ( (_DWORD)v15 )
    return 1LL;
  v11 = HIDWORD(v15);
  if ( <std::fs::File as std::io::Seek>::seek(&v11, 1LL, 0LL) )
  {
LABEL_14:
    core::ptr::drop_in_place<std::fs::File>(&v11);
    return 1LL;
  }
  if ( !v10 )
  {
    v13 = &v12;
    v14 = <&T as core::fmt::Display>::fmt;
    v15 = &unk_1483C0;
    v16 = 2LL;
    v19 = 0LL;
    v17 = &v13;
    v18 = 1LL;
    core::option::Option<T>::map_or_else(v21, 0LL, &v15);
    std::io::error::Error::new(39LL, v21);
    goto LABEL_14;
  }
  core::ptr::drop_in_place<std::fs::File>(&v11);
  return 0LL;
}
