__int64 __fastcall just::function::without_extension(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  char **v11; // rax
  __int64 v12; // rax
  __int128 v14; // [rsp+8h] [rbp-90h] BYREF
  __int64 v15; // [rsp+18h] [rbp-80h]
  _QWORD *v16; // [rsp+20h] [rbp-78h] BYREF
  __int64 (__fastcall *v17)(); // [rsp+28h] [rbp-70h]
  _QWORD v18[6]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v19[7]; // [rsp+60h] [rbp-38h] BYREF

  v19[0] = a3;
  v19[1] = a4;
  v6 = std::path::Path::parent(a3, a4);
  if ( !v6 )
  {
    v16 = v19;
    v17 = <&T as core::fmt::Display>::fmt;
    v11 = &off_4300D8;
LABEL_6:
    v18[0] = v11;
    v18[1] = 2LL;
    v18[4] = 0LL;
    v18[2] = &v16;
    v18[3] = 1LL;
    core::option::Option<T>::map_or_else(&v14, 0LL, v7, v18);
    v12 = v15;
    *(_OWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 24) = v12;
    *(_QWORD *)a1 = 1LL;
    return a1;
  }
  v8 = v6;
  v9 = v7;
  v10 = std::path::Path::file_stem(a3, a4);
  if ( !v10 )
  {
    v16 = v19;
    v17 = <&T as core::fmt::Display>::fmt;
    v11 = &off_42FEC8;
    goto LABEL_6;
  }
  camino::Utf8Path::join(v18, v8, v9, v10, v7);
  <T as alloc::string::SpecToString>::spec_to_string(&v14, v18);
  *(_QWORD *)(a1 + 24) = v15;
  *(_OWORD *)(a1 + 8) = v14;
  *(_QWORD *)a1 = 0LL;
  core::ptr::drop_in_place<camino::Utf8PathBuf>(v18);
  return a1;
}