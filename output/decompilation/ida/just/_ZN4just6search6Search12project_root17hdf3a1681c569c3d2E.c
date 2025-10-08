unsigned __int64 __fastcall just::search::Search::project_root(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // r14
  __int64 v8; // rdx
  __int64 v9; // rbp
  char v10; // al
  __int64 v11; // rcx
  __int128 v12; // xmm0
  unsigned __int64 result; // rax
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int128 v17; // xmm0
  __int64 v18; // [rsp+8h] [rbp-160h]
  _BYTE v19[24]; // [rsp+18h] [rbp-150h] BYREF
  __int64 v20; // [rsp+30h] [rbp-138h]
  __int64 v21; // [rsp+38h] [rbp-130h]
  __int64 v22; // [rsp+40h] [rbp-128h]
  __int64 v23; // [rsp+48h] [rbp-120h]
  __int64 v24; // [rsp+50h] [rbp-118h] BYREF
  char v25; // [rsp+58h] [rbp-110h]
  __int64 v26; // [rsp+60h] [rbp-108h]
  __int64 v27; // [rsp+68h] [rbp-100h]
  __int64 v28; // [rsp+70h] [rbp-F8h]
  __int64 v29; // [rsp+78h] [rbp-F0h]
  __int128 v30; // [rsp+80h] [rbp-E8h] BYREF
  _QWORD v31[6]; // [rsp+90h] [rbp-D8h]
  __int64 v32; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-A0h]
  __int128 v34; // [rsp+D0h] [rbp-98h]
  __int64 v35; // [rsp+E0h] [rbp-88h]
  __int128 v36; // [rsp+100h] [rbp-68h]
  __int64 v37; // [rsp+110h] [rbp-58h]

  v5 = a5;
  v18 = std::path::Path::parent(a4, a5);
  v9 = v8;
  std::fs::read_dir(&v32, a4, v5);
  v10 = v33;
  if ( (_BYTE)v33 == 2 )
  {
    v11 = a4;
LABEL_3:
    just::search::Search::project_root::{{closure}}(&v30, v11, v5, v32);
    v12 = v30;
    result = LOBYTE(v31[0]);
    *(_QWORD *)(a1 + 17) = *(_QWORD *)((char *)v31 + 1);
    *(_QWORD *)(a1 + 24) = v31[1];
    *(_OWORD *)a1 = v12;
    *(_BYTE *)(a1 + 16) = result;
    return result;
  }
  v28 = a2;
  v27 = a3;
  v11 = a4;
  v26 = v5;
  while ( 2 )
  {
    v23 = v5;
    v22 = v11;
    v21 = v18;
    v29 = v9;
    v24 = v32;
    v25 = v10;
    while ( 1 )
    {
      <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v30, &v24);
      if ( (_DWORD)v30 != 1 )
        break;
      if ( !*((_QWORD *)&v30 + 1) )
      {
        just::search::Search::project_root::{{closure}}(v19, v22, v23, v31[0]);
        v16 = *(_QWORD *)v19;
        v17 = *(_OWORD *)&v19[8];
        v36 = *(_OWORD *)&v19[8];
        v37 = v20;
        *(_QWORD *)(a1 + 24) = v20;
        *(_OWORD *)(a1 + 8) = v17;
        *(_QWORD *)a1 = v16;
        return core::ptr::drop_in_place<std::fs::ReadDir>(&v24);
      }
      v35 = v31[3];
      v34 = *(_OWORD *)&v31[1];
      v32 = *((_QWORD *)&v30 + 1);
      v33 = v31[0];
      std::fs::DirEntry::file_name(v19, &v32);
      if ( (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                              *(_QWORD *)&v19[8],
                              *(_QWORD *)&v19[16],
                              aBzr,
                              4LL) )
        goto LABEL_19;
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v19);
      std::fs::DirEntry::file_name(v19, &v32);
      if ( (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                              *(_QWORD *)&v19[8],
                              *(_QWORD *)&v19[16],
                              aGit,
                              4LL)
        || (core::ptr::drop_in_place<std::ffi::os_str::OsString>(v19),
            std::fs::DirEntry::file_name(v19, &v32),
            (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                               *(_QWORD *)&v19[8],
                               *(_QWORD *)&v19[16],
                               aHg,
                               3LL))
        || (core::ptr::drop_in_place<std::ffi::os_str::OsString>(v19),
            std::fs::DirEntry::file_name(v19, &v32),
            (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                               *(_QWORD *)&v19[8],
                               *(_QWORD *)&v19[16],
                               aSvn,
                               4LL))
        || (core::ptr::drop_in_place<std::ffi::os_str::OsString>(v19),
            std::fs::DirEntry::file_name(v19, &v32),
            (unsigned __int8)alloc::vec::partial_eq::<impl core::cmp::PartialEq<alloc::vec::Vec<U,A2>> for alloc::vec::Vec<T,A1>>::eq(
                               *(_QWORD *)&v19[8],
                               *(_QWORD *)&v19[16],
                               aDarcs,
                               6LL)) )
      {
LABEL_19:
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(v19);
        std::path::Path::to_path_buf(v19, v22, v23);
        *(_QWORD *)(a1 + 24) = *(_QWORD *)&v19[16];
        *(_OWORD *)(a1 + 8) = *(_OWORD *)v19;
        *(_QWORD *)a1 = 0x8000000000000006LL;
        core::ptr::drop_in_place<std::fs::DirEntry>(&v32);
        return core::ptr::drop_in_place<std::fs::ReadDir>(&v24);
      }
      core::ptr::drop_in_place<std::ffi::os_str::OsString>(v19);
      core::ptr::drop_in_place<std::fs::DirEntry>(&v32);
    }
    core::ptr::drop_in_place<std::fs::ReadDir>(&v24);
    v14 = v28;
    if ( !v28
      || (std::path::Path::components(&v32, v22, v23),
          std::path::Path::components(&v30, v14, v27),
          !(unsigned __int8)<std::path::Components as core::cmp::PartialEq>::eq(&v32, &v30)) )
    {
      if ( v18 )
      {
        v5 = v29;
        v18 = std::path::Path::parent(v21, v29);
        v9 = v15;
        std::fs::read_dir(&v32, v21, v5);
        v11 = v21;
        v10 = v33;
        if ( (_BYTE)v33 != 2 )
          continue;
        goto LABEL_3;
      }
    }
    break;
  }
  std::path::Path::to_path_buf(a1 + 8, a4, v26);
  result = 0x8000000000000006LL;
  *(_QWORD *)a1 = 0x8000000000000006LL;
  return result;
}