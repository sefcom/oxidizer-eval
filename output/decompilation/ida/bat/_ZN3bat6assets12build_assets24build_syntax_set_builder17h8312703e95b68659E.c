__int64 __fastcall bat::assets::build_assets::build_syntax_set_builder(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // r12d
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 result; // rax
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  __int128 v17; // [rsp+0h] [rbp-188h] BYREF
  __int128 v18; // [rsp+10h] [rbp-178h]
  __int128 v19; // [rsp+20h] [rbp-168h]
  _BYTE v20[8]; // [rsp+38h] [rbp-150h] BYREF
  __int64 v21; // [rsp+40h] [rbp-148h]
  __int64 v22; // [rsp+48h] [rbp-140h]
  _BYTE dest[158]; // [rsp+50h] [rbp-138h] BYREF
  _QWORD v24[2]; // [rsp+100h] [rbp-88h] BYREF
  _OWORD v25[4]; // [rsp+110h] [rbp-78h] BYREF
  __int64 v26; // [rsp+150h] [rbp-38h]

  if ( a4 )
  {
    bat::assets::asset_from_contents(dest, &unk_A0048, &unk_F1A71, aNA, 3LL);
    core::result::Result<T,E>::expect(v25, dest);
    syntect::parsing::syntax_set::SyntaxSet::into_builder(&v17, v25);
  }
  else
  {
    *(_QWORD *)dest = 0LL;
    *(_QWORD *)&dest[8] = 8LL;
    *(_OWORD *)&dest[16] = 0LL;
    *(_OWORD *)&dest[32] = 8uLL;
    syntect::parsing::syntax_set::SyntaxSetBuilder::add_plain_text_syntax(dest);
    v19 = *(_OWORD *)&dest[32];
    v18 = *(_OWORD *)&dest[16];
    v17 = *(_OWORD *)dest;
  }
  std::path::Path::join(v20, a2, a3, aSyntaxes, 8LL);
  v5 = v21;
  v6 = v22;
  v7 = v21;
  std::fs::metadata(dest);
  v8 = *(_DWORD *)dest;
  core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(dest, v7);
  if ( v8 == 2 )
  {
    alloc::string::String::from_utf8_lossy(v25, v5, v6);
    v24[0] = v25;
    v24[1] = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    *(_QWORD *)dest = &off_6CE070;
    *(_QWORD *)&dest[8] = 2LL;
    *(_QWORD *)&dest[32] = 0LL;
    *(_QWORD *)&dest[16] = v24;
    *(_QWORD *)&dest[24] = 1LL;
    std::io::stdio::_print(dest);
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::path::StripPrefixError>>(v25);
    v9 = v17;
    v10 = v18;
    *(_OWORD *)(a1 + 40) = v19;
    *(_OWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v9;
    *(_BYTE *)a1 = 13;
    return core::ptr::drop_in_place<std::path::PathBuf>(v20);
  }
  else
  {
    syntect::parsing::syntax_set::SyntaxSetBuilder::add_from_folder(dest, &v17, v20);
    result = 0x8000000000000006LL;
    if ( *(_QWORD *)dest == 0x8000000000000006LL )
    {
      v12 = v17;
      v13 = v18;
      *(_OWORD *)(a1 + 40) = v19;
      *(_OWORD *)(a1 + 24) = v13;
      *(_OWORD *)(a1 + 8) = v12;
      *(_BYTE *)a1 = 13;
    }
    else
    {
      v26 = *(_QWORD *)&dest[64];
      v25[3] = *(_OWORD *)&dest[48];
      v25[2] = *(_OWORD *)&dest[32];
      v25[1] = *(_OWORD *)&dest[16];
      v25[0] = *(_OWORD *)dest;
      *(_QWORD *)&dest[71] = *(_QWORD *)&dest[64];
      *(_OWORD *)&dest[55] = *(_OWORD *)&dest[48];
      *(_OWORD *)&dest[39] = *(_OWORD *)&dest[32];
      *(_OWORD *)&dest[23] = *(_OWORD *)&dest[16];
      *(_OWORD *)&dest[7] = *(_OWORD *)dest;
      *(_BYTE *)a1 = 3;
      v14 = *(_OWORD *)&dest[16];
      v15 = *(_OWORD *)&dest[32];
      v16 = *(_OWORD *)&dest[48];
      *(_OWORD *)(a1 + 1) = *(_OWORD *)dest;
      *(_OWORD *)(a1 + 17) = v14;
      *(_OWORD *)(a1 + 33) = v15;
      *(_OWORD *)(a1 + 49) = v16;
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&dest[63];
      return core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxSetBuilder>(&v17);
    }
  }
  return result;
}