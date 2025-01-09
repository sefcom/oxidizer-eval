__int64 __fastcall uu_tail::args::parse_obsolete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int128 v19; // [rsp+0h] [rbp-118h] BYREF
  int **v20; // [rsp+10h] [rbp-108h]
  __int64 v21; // [rsp+18h] [rbp-100h]
  __int64 v22; // [rsp+20h] [rbp-F8h]
  int *v23; // [rsp+38h] [rbp-E0h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+40h] [rbp-D8h]
  int v25; // [rsp+4Ch] [rbp-CCh] BYREF
  _BYTE *v26; // [rsp+50h] [rbp-C8h] BYREF
  __int128 v27; // [rsp+58h] [rbp-C0h]
  char v28; // [rsp+68h] [rbp-B0h]
  _BYTE v29[8]; // [rsp+70h] [rbp-A8h] BYREF
  __int128 v30; // [rsp+78h] [rbp-A0h]
  _BYTE v31[10]; // [rsp+88h] [rbp-90h] BYREF
  char v32; // [rsp+92h] [rbp-86h]
  _BYTE v33[24]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE v34[24]; // [rsp+B0h] [rbp-68h] BYREF
  _BYTE v35[24]; // [rsp+C8h] [rbp-50h] BYREF
  _BYTE v36[56]; // [rsp+E0h] [rbp-38h] BYREF

  uu_tail::parse::parse_obsolete((__int64)v31, a2);
  if ( v32 == 2 )
  {
    v4 = v31[0];
    std::sys::os_str::bytes::Slice::to_string_lossy(v29, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16));
    switch ( v4 )
    {
      case 0LL:
        v26 = 0LL;
        v27 = v30;
        v28 = 1;
        v23 = (int *)&v26;
        v24 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &off_1BB630;
        *((_QWORD *)&v19 + 1) = 2LL;
        v22 = 0LL;
        v20 = &v23;
        v21 = 1LL;
        v9 = v33;
        core::option::Option<T>::map_or_else(v33, &v19, v5, v6, v7, v8);
        break;
      case 1LL:
        v26 = 0LL;
        v27 = v30;
        v28 = 1;
        v23 = (int *)&v26;
        v24 = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &off_1BB650;
        *((_QWORD *)&v19 + 1) = 1LL;
        v22 = 0LL;
        v20 = &v23;
        v21 = 1LL;
        v9 = v34;
        core::option::Option<T>::map_or_else(v34, &v19, v5, v6, v7, v8);
        break;
      case 2LL:
        v26 = (_BYTE *)v30;
        *(_QWORD *)&v27 = v30 + *((_QWORD *)&v30 + 1);
        if ( <core::str::iter::Chars as core::iter::traits::iterator::Iterator>::advance_by(&v26)
          || !(unsigned int)core::str::validations::next_code_point(&v26)
          || (_DWORD)v17 == (_DWORD)core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>> )
        {
          v17 = 0LL;
        }
        v25 = v17;
        v23 = &v25;
        v24 = <char as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &off_1BB660;
        *((_QWORD *)&v19 + 1) = 1LL;
        v22 = 0LL;
        v20 = &v23;
        v21 = 1LL;
        v9 = v35;
        core::option::Option<T>::map_or_else(v35, &v19, v17, v14, v15, v16);
        break;
      case 3LL:
        v26 = v29;
        *(_QWORD *)&v27 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
        *(_QWORD *)&v19 = &off_1BB670;
        *((_QWORD *)&v19 + 1) = 2LL;
        v22 = 0LL;
        v20 = (int **)&v26;
        v21 = 1LL;
        v9 = v36;
        core::option::Option<T>::map_or_else(v36, &v19, v5, v6, v7, v8);
        break;
    }
    v20 = (int **)*((_QWORD *)v9 + 2);
    v19 = *(_OWORD *)v9;
    LODWORD(v21) = 1;
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v19, &v19, v10, v11, v12, v13);
    *(_QWORD *)(a1 + 16) = &off_1BB3C8;
    *(_QWORD *)a1 = 6LL;
    core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v29);
  }
  else if ( v32 == 3 )
  {
    *(_QWORD *)a1 = 5LL;
  }
  else
  {
    uu_tail::args::Settings::from_obsolete_args((_OWORD *)a1, (__int64)v31, a3);
  }
  return a1;
}
