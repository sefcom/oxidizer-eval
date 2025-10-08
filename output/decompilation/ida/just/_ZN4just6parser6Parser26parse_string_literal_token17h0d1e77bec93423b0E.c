__int64 __fastcall just::parser::Parser::parse_string_literal_token(__int64 a1, _QWORD *a2)
{
  char is; // bp
  __int64 result; // rax
  unsigned __int8 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // r13
  int v15; // r8d
  int v16; // r9d
  char v17; // r15
  __int128 v18; // xmm0
  __int128 v19; // xmm2
  __int128 v20; // xmm3
  __int128 v21; // xmm4
  int v22; // ecx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  char v29; // cl
  int v30; // esi
  char v31; // al
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  char v38; // cl
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm2
  __int128 v42; // xmm0
  __int64 v43; // rax
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  __int128 v46; // xmm4
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  char v49; // [rsp+6h] [rbp-222h]
  char v50; // [rsp+7h] [rbp-221h]
  _BYTE v51[7]; // [rsp+8h] [rbp-220h]
  __int128 v52; // [rsp+10h] [rbp-218h] BYREF
  __int64 v53; // [rsp+20h] [rbp-208h]
  _BYTE v54[80]; // [rsp+28h] [rbp-200h] BYREF
  __int128 v55; // [rsp+90h] [rbp-198h] BYREF
  _BYTE v56[56]; // [rsp+A0h] [rbp-188h]
  char v57; // [rsp+D8h] [rbp-150h]
  _DWORD v58[3]; // [rsp+D9h] [rbp-14Fh]
  __int128 v59; // [rsp+E8h] [rbp-140h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-130h]
  __int128 v61; // [rsp+100h] [rbp-128h] BYREF
  __int128 v62; // [rsp+110h] [rbp-118h]
  __int128 v63; // [rsp+120h] [rbp-108h]
  __int128 v64; // [rsp+130h] [rbp-F8h]
  __int64 v65; // [rsp+140h] [rbp-E8h]
  __int128 v66; // [rsp+150h] [rbp-D8h] BYREF
  __int128 v67; // [rsp+160h] [rbp-C8h]
  __int128 v68; // [rsp+170h] [rbp-B8h]
  __int128 v69; // [rsp+180h] [rbp-A8h]
  __int128 v70; // [rsp+190h] [rbp-98h]
  __int128 v71; // [rsp+1A0h] [rbp-88h]
  _OWORD v72[4]; // [rsp+1B0h] [rbp-78h] BYREF
  __int64 v73; // [rsp+1F0h] [rbp-38h]

  is = just::parser::Parser::next_is((__int64)a2, 24);
  if ( is )
  {
    result = just::parser::Parser::expect_keyword((__int64)v54, a2, 30);
    if ( v54[72] != 37 )
    {
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v54[64];
      v26 = *(_OWORD *)v54;
      v27 = *(_OWORD *)&v54[16];
      v28 = *(_OWORD *)&v54[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v54[48];
      *(_OWORD *)(a1 + 40) = v28;
      *(_OWORD *)(a1 + 24) = v27;
      *(_OWORD *)(a1 + 8) = v26;
LABEL_14:
      *(_QWORD *)a1 = 1LL;
      return result;
    }
  }
  just::parser::Parser::expect((__int64)v54, a2);
  result = v54[72];
  v55 = *(_OWORD *)v54;
  *(_OWORD *)v56 = *(_OWORD *)&v54[16];
  *(_OWORD *)&v56[16] = *(_OWORD *)&v54[32];
  *(_OWORD *)&v56[32] = *(_OWORD *)&v54[48];
  *(_QWORD *)&v56[48] = *(_QWORD *)&v54[64];
  if ( v54[72] != 37 )
  {
    v22 = *(_DWORD *)&v54[73];
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v54[76];
    *(_DWORD *)(a1 + 81) = v22;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v56[48];
    v23 = v55;
    v24 = *(_OWORD *)v56;
    v25 = *(_OWORD *)&v56[16];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v56[32];
    *(_OWORD *)(a1 + 40) = v25;
    *(_OWORD *)(a1 + 24) = v24;
    *(_OWORD *)(a1 + 8) = v23;
LABEL_13:
    *(_BYTE *)(a1 + 80) = result;
    goto LABEL_14;
  }
  v61 = v55;
  v62 = *(_OWORD *)v56;
  v63 = *(_OWORD *)&v56[16];
  v64 = *(_OWORD *)&v56[32];
  v65 = *(_QWORD *)&v56[48];
  v72[0] = v55;
  v72[1] = *(_OWORD *)v56;
  v72[2] = *(_OWORD *)&v56[16];
  v72[3] = *(_OWORD *)&v56[32];
  v73 = *(_QWORD *)&v56[48];
  just::string_kind::StringKind::from_string_or_backtick(v54, &v61);
  v4 = v54[0];
  result = v54[72];
  if ( v54[72] != 37 )
  {
    v29 = v54[1];
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v54[64];
    *(_OWORD *)(a1 + 58) = *(_OWORD *)&v54[50];
    *(_OWORD *)(a1 + 42) = *(_OWORD *)&v54[34];
    *(_OWORD *)(a1 + 26) = *(_OWORD *)&v54[18];
    *(_OWORD *)(a1 + 10) = *(_OWORD *)&v54[2];
    v30 = *(_DWORD *)&v54[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v54[73];
    *(_DWORD *)(a1 + 84) = v30;
    *(_BYTE *)(a1 + 8) = v4;
    *(_BYTE *)(a1 + 9) = v29;
    goto LABEL_13;
  }
  v50 = is;
  v49 = v54[1];
  v5 = 2LL * v54[0] + 1;
  v6 = just::token::Token::lexeme(v72);
  v8 = v7;
  just::token::Token::lexeme(v72);
  v10 = v9 - v5;
  v11 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
          2LL * v4 + 1,
          v9 - v5,
          v6,
          v8);
  if ( !v11 )
    core::str::slice_error_fail(v6, v8, 2LL * v4 + 1, v10, &off_4308E0);
  v13 = v11;
  v14 = v12;
  if ( (v4 & 1) != 0 )
  {
    just::unindent::unindent(&v59, v11, v12);
    v17 = v49;
    if ( v49 != 1 )
      goto LABEL_8;
  }
  else
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v59, v11);
    v17 = v49;
    if ( v49 != 1 )
    {
LABEL_8:
      v53 = v60;
      v52 = v59;
      if ( !v50 )
      {
        v18 = v52;
        result = v53;
        v19 = v62;
        v20 = v63;
        v21 = v64;
        *(_OWORD *)(a1 + 8) = v61;
        *(_OWORD *)(a1 + 24) = v19;
        *(_OWORD *)(a1 + 40) = v20;
        *(_OWORD *)(a1 + 56) = v21;
        *(_QWORD *)(a1 + 72) = v65;
        *(_OWORD *)(a1 + 80) = v18;
        *(_QWORD *)(a1 + 96) = result;
        *(_QWORD *)(a1 + 104) = v13;
        *(_QWORD *)(a1 + 112) = v14;
        *(_BYTE *)(a1 + 120) = v4;
        *(_BYTE *)(a1 + 121) = v17;
        *(_BYTE *)(a1 + 122) = 0;
        *(_QWORD *)a1 = 0LL;
        return result;
      }
      goto LABEL_19;
    }
  }
  just::parser::Parser::cook_string((unsigned int)v54, (unsigned int)&v61, DWORD2(v59), v60, v15, v16);
  v31 = v54[72];
  if ( v54[72] != 37 )
  {
    *(_QWORD *)&v56[48] = *(_QWORD *)&v54[64];
    *(_OWORD *)&v56[32] = *(_OWORD *)&v54[48];
    *(_OWORD *)&v56[16] = *(_OWORD *)&v54[32];
    *(_OWORD *)v56 = *(_OWORD *)&v54[16];
    v55 = *(_OWORD *)v54;
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v54[76];
    *(_DWORD *)(a1 + 81) = *(_DWORD *)&v54[73];
    *(_QWORD *)(a1 + 72) = *(_QWORD *)&v56[48];
    v35 = v55;
    v36 = *(_OWORD *)v56;
    v37 = *(_OWORD *)&v56[16];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v56[32];
    *(_OWORD *)(a1 + 40) = v37;
    *(_OWORD *)(a1 + 24) = v36;
    *(_OWORD *)(a1 + 8) = v35;
    *(_BYTE *)(a1 + 80) = v31;
    *(_QWORD *)a1 = 1LL;
    return core::ptr::drop_in_place<alloc::string::String>(&v59);
  }
  v52 = *(_OWORD *)v54;
  v53 = *(_QWORD *)&v54[16];
  if ( !v50 )
  {
    v42 = v52;
    v43 = v53;
    v44 = v62;
    v45 = v63;
    v46 = v64;
    *(_OWORD *)(a1 + 8) = v61;
    *(_OWORD *)(a1 + 24) = v44;
    *(_OWORD *)(a1 + 40) = v45;
    *(_OWORD *)(a1 + 56) = v46;
    *(_QWORD *)(a1 + 72) = v65;
    *(_OWORD *)(a1 + 80) = v42;
    *(_QWORD *)(a1 + 96) = v43;
    *(_QWORD *)(a1 + 104) = v13;
    *(_QWORD *)(a1 + 112) = v14;
    *(_BYTE *)(a1 + 120) = v4;
    *(_WORD *)(a1 + 121) = 1;
    *(_QWORD *)a1 = 0LL;
    return core::ptr::drop_in_place<alloc::string::String>(&v59);
  }
LABEL_19:
  shellexpand::strings::funcs::full_with_context(&v66, &v52);
  if ( !__OFSUB__(0LL, (_QWORD)v66) )
  {
    *(_OWORD *)&v54[40] = v68;
    *(_OWORD *)&v54[24] = v67;
    *(_OWORD *)&v54[8] = v66;
    *(_QWORD *)v54 = 0x8000000000000033LL;
    just::token::Token::error(&v55, v72, v54);
    v34 = *((_QWORD *)&v55 + 1);
    v32 = v55;
    v33 = *(_QWORD *)v56;
    v69 = *(_OWORD *)&v56[8];
    v70 = *(_OWORD *)&v56[24];
    v71 = *(_OWORD *)&v56[40];
    v38 = v57;
    *(_DWORD *)v51 = v58[0];
    *(_DWORD *)&v51[3] = *(_DWORD *)((char *)v58 + 3);
    if ( v57 == 37 )
    {
      if ( (_QWORD)v55 != 0x8000000000000000LL )
        goto LABEL_26;
      goto LABEL_25;
    }
    v47 = v69;
    v48 = v70;
    *(_OWORD *)(a1 + 64) = v71;
    *(_OWORD *)(a1 + 48) = v48;
    *(_OWORD *)(a1 + 32) = v47;
    *(_DWORD *)(a1 + 81) = *(_DWORD *)v51;
    *(_DWORD *)(a1 + 84) = *(_DWORD *)&v51[3];
    *(_QWORD *)(a1 + 8) = v32;
    *(_QWORD *)(a1 + 16) = v34;
    *(_QWORD *)(a1 + 24) = v33;
    *(_BYTE *)(a1 + 80) = v38;
    *(_QWORD *)a1 = 1LL;
    result = core::ptr::drop_in_place<alloc::string::String>(&v52);
    if ( v17 != 1 )
      return result;
    return core::ptr::drop_in_place<alloc::string::String>(&v59);
  }
  v32 = *((_QWORD *)&v66 + 1);
  v33 = *((_QWORD *)&v67 + 1);
  v34 = v67;
  if ( *((_QWORD *)&v66 + 1) == 0x8000000000000000LL )
  {
LABEL_25:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v54, v34);
    v34 = *(_QWORD *)&v54[8];
    v32 = *(_QWORD *)v54;
    v33 = *(_QWORD *)&v54[16];
  }
LABEL_26:
  *(_QWORD *)(a1 + 72) = v65;
  v39 = v61;
  v40 = v62;
  v41 = v63;
  *(_OWORD *)(a1 + 56) = v64;
  *(_OWORD *)(a1 + 40) = v41;
  *(_OWORD *)(a1 + 24) = v40;
  *(_OWORD *)(a1 + 8) = v39;
  *(_QWORD *)(a1 + 80) = v32;
  *(_QWORD *)(a1 + 88) = v34;
  *(_QWORD *)(a1 + 96) = v33;
  *(_QWORD *)(a1 + 104) = v13;
  *(_QWORD *)(a1 + 112) = v14;
  *(_BYTE *)(a1 + 120) = v4;
  *(_BYTE *)(a1 + 121) = v17;
  *(_BYTE *)(a1 + 122) = v50;
  *(_QWORD *)a1 = 0LL;
  result = core::ptr::drop_in_place<alloc::string::String>(&v52);
  if ( v17 == 1 )
    return core::ptr::drop_in_place<alloc::string::String>(&v59);
  return result;
}