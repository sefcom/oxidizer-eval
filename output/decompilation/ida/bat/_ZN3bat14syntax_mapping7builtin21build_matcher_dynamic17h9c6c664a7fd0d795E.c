__int64 __fastcall bat::syntax_mapping::builtin::build_matcher_dynamic(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm2
  __int64 v11; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v12; // [rsp+8h] [rbp-D0h]
  __int64 v13; // [rsp+10h] [rbp-C8h]
  __int64 v14; // [rsp+18h] [rbp-C0h] BYREF
  __int128 v15; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v16; // [rsp+30h] [rbp-A8h] BYREF
  __m256i v17; // [rsp+38h] [rbp-A0h]
  __int128 v18; // [rsp+58h] [rbp-80h]
  __int128 v19; // [rsp+68h] [rbp-70h]
  __int128 v20; // [rsp+78h] [rbp-60h]
  __int64 v21; // [rsp+88h] [rbp-50h]
  __int128 v22; // [rsp+90h] [rbp-48h]

  v11 = 0LL;
  v12 = 1LL;
  v13 = 0LL;
  if ( a3 )
  {
    v3 = (_QWORD *)(a2 + 8);
    v4 = 24 * a3;
    while ( 1 )
    {
      while ( (*(_BYTE *)(v3 - 1) & 1) == 0 )
      {
        <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
          &v11,
          *v3,
          *v3 + v3[1]);
        v3 += 3;
        v4 -= 24LL;
        if ( !v4 )
          goto LABEL_8;
      }
      std::env::var(&v16, v3);
      if ( (v16 & 1) != 0 )
        break;
      v22 = *(_OWORD *)&v17.m256i_u64[1];
      if ( v17.m256i_i64[0] == 0x8000000000000000LL )
        goto LABEL_14;
      v15 = v22;
      v14 = v17.m256i_i64[0];
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v11,
        v22,
        v22 + *((_QWORD *)&v22 + 1));
      core::ptr::drop_in_place<alloc::string::String>(&v14);
      v3 += 3;
      v4 -= 24LL;
      if ( !v4 )
      {
LABEL_8:
        v5 = v12;
        goto LABEL_10;
      }
    }
    core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v16);
    goto LABEL_14;
  }
  v5 = 1LL;
LABEL_10:
  bat::syntax_mapping::make_glob_matcher(&v16);
  v6 = v16;
  if ( v16 == 0x8000000000000000LL )
  {
    core::ptr::drop_in_place<core::result::Result<globset::glob::GlobMatcher,bat::error::Error>>(&v16, v5);
LABEL_14:
    v6 = 0x8000000000000000LL;
    goto LABEL_15;
  }
  *(_QWORD *)(a1 + 88) = v21;
  *(_OWORD *)(a1 + 72) = v20;
  v7 = *(_OWORD *)v17.m256i_i8;
  v8 = *(_OWORD *)&v17.m256i_u64[2];
  v9 = v18;
  *(_OWORD *)(a1 + 56) = v19;
  *(_OWORD *)(a1 + 40) = v9;
  *(_OWORD *)(a1 + 24) = v8;
  *(_OWORD *)(a1 + 8) = v7;
LABEL_15:
  *(_QWORD *)a1 = v6;
  core::ptr::drop_in_place<alloc::string::String>(&v11);
  return a1;
}