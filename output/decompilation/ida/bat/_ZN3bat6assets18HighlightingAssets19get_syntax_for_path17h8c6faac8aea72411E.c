__int64 __fastcall bat::assets::HighlightingAssets::get_syntax_for_path(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r15
  int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // r15
  char v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // r13
  __int64 v22; // rbp
  int v23; // ecx
  __int64 v24; // rsi
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm0
  __int64 v28; // rax
  int v29; // ecx
  __int128 v30; // xmm1
  __int128 v31; // xmm3
  _BYTE v34[40]; // [rsp+18h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+40h] [rbp-A8h]
  __int128 v36; // [rsp+50h] [rbp-98h]
  __int64 v37; // [rsp+60h] [rbp-88h]
  __int64 v38; // [rsp+68h] [rbp-80h]
  __int128 v39; // [rsp+70h] [rbp-78h] BYREF
  __int64 v40; // [rsp+80h] [rbp-68h]
  __int64 v41; // [rsp+88h] [rbp-60h] BYREF
  __int64 v42; // [rsp+90h] [rbp-58h]
  __int64 v43; // [rsp+98h] [rbp-50h]

  v38 = a2;
  v5 = std::path::<impl core::convert::AsRef<std::path::Path> for alloc::string::String>::as_ref(
         *(_QWORD *)(a3 + 8),
         *(_QWORD *)(a3 + 16));
  v7 = v6;
  bat::syntax_mapping::SyntaxMapping::get_syntax_for(&v41, a4, v5, v6);
  v8 = v41;
  if ( !v41 )
  {
    v12 = v42;
    v13 = v43;
    bat::assets::HighlightingAssets::find_syntax_by_token(v34, v38, v42, v43);
    v14 = v34[0];
    if ( v34[0] == 13 )
    {
      v15 = *(_QWORD *)&v34[8];
      v16 = a1;
      if ( !*(_QWORD *)&v34[8] )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v34, v12, v13);
        v28 = *(_QWORD *)&v34[16];
        *(_OWORD *)&v34[7] = *(_OWORD *)v34;
        *(_QWORD *)&v34[23] = v28;
        v9 = a1;
        *(_BYTE *)a1 = 8;
        goto LABEL_4;
      }
LABEL_7:
      v17 = *(_QWORD *)&v34[16];
LABEL_15:
      *(_QWORD *)(v16 + 8) = v15;
      *(_QWORD *)(v16 + 16) = v17;
      *(_BYTE *)v16 = 13;
      return core::ptr::drop_in_place<std::path::PathBuf>(a3);
    }
    v23 = *(_DWORD *)&v34[1];
    v24 = a1;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v34[4];
    *(_DWORD *)(a1 + 1) = v23;
    v25 = v35;
    v26 = v36;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v34[24];
    *(_OWORD *)(a1 + 40) = v25;
    *(_OWORD *)(a1 + 56) = v26;
    *(_QWORD *)(a1 + 72) = v37;
    v27 = *(_OWORD *)&v34[8];
LABEL_23:
    *(_BYTE *)v24 = v14;
    *(_OWORD *)(v24 + 8) = v27;
    return core::ptr::drop_in_place<std::path::PathBuf>(a3);
  }
  if ( (_DWORD)v41 != 1 )
  {
    v18 = std::path::Path::file_name(v5, v7);
    v20 = v19;
    if ( !v18 )
      v20 = 0LL;
    v21 = 1LL;
    if ( v18 )
      v21 = v18;
    v22 = a4 + 24;
    bat::assets::HighlightingAssets::get_syntax_for_file_name(v34, v38, v21, v20, v22);
    v14 = v34[0];
    if ( v34[0] == 13 )
    {
      v15 = *(_QWORD *)&v34[8];
      if ( *(_QWORD *)&v34[8] )
      {
        v17 = *(_QWORD *)&v34[16];
        v16 = a1;
        goto LABEL_15;
      }
      if ( v8 == 2 )
        goto LABEL_3;
      bat::assets::HighlightingAssets::get_syntax_for_file_extension(v34, v38, v21, v20, v22);
      v14 = v34[0];
      if ( v34[0] == 13 )
      {
        v15 = *(_QWORD *)&v34[8];
        v16 = a1;
        if ( !*(_QWORD *)&v34[8] )
          goto LABEL_3;
        goto LABEL_7;
      }
    }
    v29 = *(_DWORD *)&v34[1];
    v24 = a1;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v34[4];
    *(_DWORD *)(a1 + 1) = v29;
    v27 = *(_OWORD *)&v34[8];
    v30 = *(_OWORD *)&v34[24];
    v31 = v36;
    *(_OWORD *)(a1 + 40) = v35;
    *(_OWORD *)(a1 + 56) = v31;
    *(_QWORD *)(a1 + 72) = v37;
    *(_OWORD *)(a1 + 24) = v30;
    goto LABEL_23;
  }
LABEL_3:
  alloc::string::String::from_utf8_lossy(v34, v5, v7);
  <alloc::string::String as core::convert::From<alloc::borrow::Cow<str>>>::from(&v39, v34);
  *(_OWORD *)&v34[7] = v39;
  *(_QWORD *)&v34[23] = v40;
  v9 = a1;
  *(_BYTE *)a1 = 7;
LABEL_4:
  v10 = *(_QWORD *)&v34[15];
  v11 = *(_QWORD *)&v34[23];
  *(_OWORD *)(v9 + 1) = *(_OWORD *)v34;
  *(_QWORD *)(v9 + 16) = v10;
  *(_QWORD *)(v9 + 24) = v11;
  return core::ptr::drop_in_place<std::path::PathBuf>(a3);
}