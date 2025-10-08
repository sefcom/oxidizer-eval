__int64 __fastcall bat::assets::HighlightingAssets::get_syntax(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // r12
  int v15; // ecx
  __int64 v16; // rcx
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm2
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rax
  __int64 v23; // rcx
  int v24; // ecx
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int128 v27; // xmm0
  __int64 v28; // rcx
  int v29; // edx
  __int16 v30; // si
  char v31; // di
  __int128 v32; // kr00_16
  __int128 v33; // xmm0
  _BYTE v34[80]; // [rsp+0h] [rbp-E8h] BYREF
  __m256i v35; // [rsp+50h] [rbp-98h] BYREF
  __int128 v36; // [rsp+70h] [rbp-78h]
  __int128 v37; // [rsp+80h] [rbp-68h]
  __int128 v38; // [rsp+90h] [rbp-58h]
  _OWORD v39[4]; // [rsp+A0h] [rbp-48h] BYREF

  if ( a3 )
  {
    bat::assets::HighlightingAssets::get_syntax_set((__int64)v34, a2);
    result = v34[0];
    if ( v34[0] == 13 )
    {
      v10 = *(_QWORD *)&v34[8];
      result = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_token(*(_QWORD *)&v34[8], a3, a4);
      if ( result )
      {
        *(_QWORD *)(a1 + 8) = result;
        *(_QWORD *)(a1 + 16) = v10;
        *(_BYTE *)a1 = 13;
      }
      else
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v35);
        *(_QWORD *)&v34[23] = v35.m256i_i64[2];
        *(_OWORD *)&v34[7] = *(_OWORD *)v35.m256i_i8;
        *(_BYTE *)a1 = 8;
        result = *(_QWORD *)&v34[15];
        v20 = *(_QWORD *)&v34[23];
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v34;
        *(_QWORD *)(a1 + 16) = result;
        *(_QWORD *)(a1 + 24) = v20;
      }
    }
    else
    {
      v15 = *(_DWORD *)&v34[1];
      *(_DWORD *)(a1 + 4) = *(_DWORD *)&v34[4];
      *(_DWORD *)(a1 + 1) = v15;
      v16 = *(_QWORD *)&v34[8];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v34[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v34[48];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v34[64];
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v34[16];
      *(_BYTE *)a1 = result;
      *(_QWORD *)(a1 + 8) = v16;
    }
    return result;
  }
  if ( !__OFSUB__(0LL, *(_QWORD *)(a5 + 16)) )
  {
    v11 = a6;
    v12 = a2;
    v13 = a5;
    v14 = a5 + 16;
LABEL_10:
    path_abs::abs::PathAbs::new(v34, v14);
    core::result::Result<T,E>::map_or_else(v39, v34, *(_QWORD *)(v14 + 8), *(_QWORD *)(v14 + 16));
    result = bat::assets::HighlightingAssets::get_syntax_for_path(&v35, v12, v39, v11);
    if ( v35.m256i_i8[0] != 7 )
    {
      *(_OWORD *)(a1 + 64) = v38;
      v17 = *(_OWORD *)v35.m256i_i8;
      v18 = *(_OWORD *)&v35.m256i_u64[2];
      v19 = v36;
      *(_OWORD *)(a1 + 48) = v37;
      *(_OWORD *)(a1 + 32) = v19;
      *(_OWORD *)(a1 + 16) = v18;
      *(_OWORD *)a1 = v17;
      return result;
    }
    goto LABEL_14;
  }
  if ( *(_QWORD *)(a5 + 184) != 0x8000000000000000LL && *(_QWORD *)(a5 + 184) != 0x8000000000000001LL )
  {
    v11 = a6;
    v12 = a2;
    v13 = a5;
    v14 = a5 + 184;
    goto LABEL_10;
  }
  v13 = a5;
  v12 = a2;
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v39);
  *(_QWORD *)&v34[23] = *(_QWORD *)&v39[1];
  *(_OWORD *)&v34[7] = v39[0];
  v35.m256i_i8[0] = 7;
  *(_OWORD *)&v35.m256i_i8[1] = *(_OWORD *)v34;
  *(_OWORD *)&v35.m256i_u64[2] = *(_OWORD *)((char *)v39 + 8);
LABEL_14:
  bat::assets::HighlightingAssets::get_first_line_syntax(v34, v12, *(_QWORD *)(v13 + 48), *(_QWORD *)(v13 + 56));
  v21 = v34[0];
  if ( v34[0] == 13 )
  {
    v22 = *(_QWORD *)&v34[8];
    v23 = *(_QWORD *)&v34[16];
    *(_QWORD *)&v34[24] = v35.m256i_i64[3];
    *(_OWORD *)&v34[8] = *(_OWORD *)&v35.m256i_u64[1];
    v34[0] = 7;
    if ( v22 )
    {
      *(_QWORD *)(a1 + 8) = v22;
      *(_QWORD *)(a1 + 16) = v23;
      *(_BYTE *)a1 = 13;
      return core::ptr::drop_in_place<bat::error::Error>(v34);
    }
    else
    {
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v34[64];
      result = v34[0];
      v28 = *(_QWORD *)&v34[1];
      v29 = *(_DWORD *)&v34[9];
      v30 = *(_WORD *)&v34[13];
      v31 = v34[15];
      v32 = *(_OWORD *)&v34[16];
      v33 = *(_OWORD *)&v34[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v34[48];
      *(_OWORD *)(a1 + 32) = v33;
      *(_OWORD *)(a1 + 16) = v32;
      *(_BYTE *)a1 = result;
      *(_QWORD *)(a1 + 1) = v28;
      *(_DWORD *)(a1 + 9) = v29;
      *(_WORD *)(a1 + 13) = v30;
      *(_BYTE *)(a1 + 15) = v31;
    }
  }
  else
  {
    v24 = *(_DWORD *)&v34[1];
    *(_DWORD *)(a1 + 4) = *(_DWORD *)&v34[4];
    *(_DWORD *)(a1 + 1) = v24;
    v25 = *(_OWORD *)&v34[40];
    v26 = *(_OWORD *)&v34[56];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v34[24];
    *(_OWORD *)(a1 + 40) = v25;
    *(_OWORD *)(a1 + 56) = v26;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v34[72];
    v27 = *(_OWORD *)&v34[8];
    *(_BYTE *)a1 = v21;
    *(_OWORD *)(a1 + 8) = v27;
    return core::ptr::drop_in_place<alloc::string::String>(&v35.m256i_u64[1]);
  }
  return result;
}