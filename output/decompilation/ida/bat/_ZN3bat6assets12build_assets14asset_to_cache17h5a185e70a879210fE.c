__int64 __fastcall bat::assets::build_assets::asset_to_cache(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int128 v7; // kr00_16
  __int64 v8; // rax
  char **v9; // rax
  int v10; // ecx
  __int128 v11; // xmm0
  __int64 v12; // rcx
  char **v13; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+10h] [rbp-D8h]
  _QWORD v15[7]; // [rsp+20h] [rbp-C8h]
  const char *v16; // [rsp+58h] [rbp-90h] BYREF
  __int64 v17; // [rsp+60h] [rbp-88h]
  _QWORD v18[3]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v19[4]; // [rsp+80h] [rbp-68h] BYREF
  _BYTE v20[72]; // [rsp+A0h] [rbp-48h] BYREF

  v16 = aSyntaxSet;
  v17 = 10LL;
  alloc::string::String::from_utf8_lossy(v20, a3, a4);
  v19[0] = &v16;
  v19[1] = <&T as core::fmt::Display>::fmt;
  v19[2] = v20;
  v19[3] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
  v13 = &off_6CE118;
  *(_QWORD *)&v14 = 3LL;
  *((_QWORD *)&v14 + 1) = v19;
  *(_OWORD *)v15 = 2uLL;
  std::io::stdio::_print(&v13);
  core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(v20);
  bat::assets::build_assets::asset_to_contents((__int64)&v13, a2, (__int64)v16, v17);
  result = (unsigned __int8)v13;
  if ( (_BYTE)v13 == 13 )
  {
    v7 = v14;
    v8 = std::fs::write(a3, a4, *((_QWORD *)&v14 + 1), v15[0]);
    v18[0] = a3;
    v18[1] = a4;
    v18[2] = &v16;
    if ( v8 )
    {
      bat::assets::build_assets::asset_to_cache::{{closure}}(&v13, v18, v8);
      v9 = v13;
      *(_OWORD *)(a1 + 16) = v14;
      *(_BYTE *)a1 = 11;
      *(_QWORD *)(a1 + 8) = v9;
    }
    else
    {
      v13 = &off_6CE0F8;
      *(_QWORD *)&v14 = 1LL;
      *((_QWORD *)&v14 + 1) = 8LL;
      *(_OWORD *)v15 = 0LL;
      std::io::stdio::_print(&v13);
      *(_BYTE *)a1 = 13;
    }
    return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7, *((_QWORD *)&v7 + 1));
  }
  else
  {
    v10 = *(_DWORD *)((char *)&v13 + 1);
    *(_DWORD *)(a1 + 4) = HIDWORD(v13);
    *(_DWORD *)(a1 + 1) = v10;
    v11 = v14;
    v12 = v15[0];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v15[1];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v15[3];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v15[5];
    *(_BYTE *)a1 = result;
    *(_OWORD *)(a1 + 8) = v11;
    *(_QWORD *)(a1 + 24) = v12;
  }
  return result;
}