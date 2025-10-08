__int64 __fastcall bat::assets::build_assets::build(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  char v13; // al
  char v14; // al
  char v15; // al
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm3
  char v23; // [rsp+0h] [rbp-168h] BYREF
  _BYTE v24[79]; // [rsp+1h] [rbp-167h]
  __int128 v25; // [rsp+50h] [rbp-118h] BYREF
  __int64 v26; // [rsp+60h] [rbp-108h]
  __m256i v27; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v28[23]; // [rsp+90h] [rbp-D8h]
  __int128 v29; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-98h]
  _BYTE v31[31]; // [rsp+E0h] [rbp-88h]
  _OWORD v32[6]; // [rsp+100h] [rbp-68h] BYREF

  bat::assets::build_assets::build_theme_set(&v23);
  v13 = v23;
  if ( v23 == 13 )
  {
    v25 = *(_OWORD *)&v24[7];
    v26 = *(_QWORD *)&v24[23];
    bat::assets::build_assets::build_syntax_set_builder(&v23, a2, a3, a4);
    v14 = v23;
    if ( v23 == 13 )
    {
      v32[0] = *(_OWORD *)&v24[7];
      v32[1] = *(_OWORD *)&v24[23];
      v32[2] = *(_OWORD *)&v24[39];
      syntect::parsing::syntax_set::SyntaxSetBuilder::build(&v27, v32);
      bat::assets::build_assets::acknowledgements::build_acknowledgements((__int64)&v23, a2, a3, a5);
      v15 = v23;
      if ( v23 == 13 )
      {
        v29 = *(_OWORD *)&v24[7];
        v30 = *(_QWORD *)&v24[23];
        bat::assets::build_assets::print_unlinked_contexts(&v27);
        bat::assets::build_assets::write_assets(
          a1,
          (unsigned int)&v25,
          (unsigned int)&v27,
          (unsigned int)&v29,
          a6,
          a7,
          a8,
          a9);
        core::ptr::drop_in_place<regex::error::Error>(&v29);
      }
      else
      {
        v20 = *(_OWORD *)&v24[31];
        v21 = *(_OWORD *)&v24[47];
        *(_OWORD *)&v31[15] = *(_OWORD *)&v24[15];
        *(_OWORD *)v31 = *(_OWORD *)v24;
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v24[63];
        *(_OWORD *)(a1 + 48) = v21;
        *(_OWORD *)(a1 + 32) = v20;
        *(_OWORD *)(a1 + 16) = *(_OWORD *)&v31[15];
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v31;
        *(_BYTE *)a1 = v15;
      }
      core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxSet>(&v27);
    }
    else
    {
      *(_QWORD *)&v28[15] = *(_QWORD *)&v24[47];
      *(_OWORD *)v28 = *(_OWORD *)&v24[32];
      v27 = *(__m256i *)v24;
      *(_QWORD *)(a1 + 72) = *(_QWORD *)&v24[71];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v24[55];
      *(_QWORD *)(a1 + 48) = *(_QWORD *)&v28[15];
      v18 = *(_OWORD *)v27.m256i_i8;
      v19 = *(_OWORD *)&v27.m256i_u64[2];
      *(_OWORD *)(a1 + 33) = *(_OWORD *)v28;
      *(_OWORD *)(a1 + 17) = v19;
      *(_OWORD *)(a1 + 1) = v18;
      *(_BYTE *)a1 = v14;
    }
    core::ptr::drop_in_place<bat::assets::lazy_theme_set::LazyThemeSet>(&v25);
  }
  else
  {
    v16 = *(_OWORD *)&v24[31];
    v17 = *(_OWORD *)&v24[47];
    *(_OWORD *)((char *)&v27.m256i_u64[1] + 7) = *(_OWORD *)&v24[15];
    *(_OWORD *)v27.m256i_i8 = *(_OWORD *)v24;
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v24[63];
    *(_OWORD *)(a1 + 48) = v17;
    *(_OWORD *)(a1 + 32) = v16;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&v27.m256i_u64[1] + 7);
    *(_OWORD *)(a1 + 1) = *(_OWORD *)v27.m256i_i8;
    *(_BYTE *)a1 = v13;
  }
  return a1;
}