__int64 __fastcall just::parser::Parser::parse_assignment(char *dest, __int64 a2, char a3, __int64 *a4)
{
  char v7; // al
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  int v11; // ecx
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm2
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int64 v17; // rdx
  char v18; // si
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  int v21; // edi
  char v23; // r12
  int v24; // r13d
  char v25; // r15
  __int64 v26; // r15
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdx
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  _OWORD src[13]; // [rsp+10h] [rbp-268h] BYREF
  _BYTE v35[128]; // [rsp+E0h] [rbp-198h] BYREF
  __int128 v36; // [rsp+160h] [rbp-118h]
  __int128 v37; // [rsp+170h] [rbp-108h]
  __int128 v38; // [rsp+180h] [rbp-F8h]
  __int128 v39; // [rsp+190h] [rbp-E8h]
  __int128 v40; // [rsp+1A0h] [rbp-D8h]
  __int128 v41; // [rsp+1B0h] [rbp-C8h] BYREF
  __int128 v42; // [rsp+1C0h] [rbp-B8h]
  __int128 v43; // [rsp+1D0h] [rbp-A8h]
  __int128 v44; // [rsp+1E0h] [rbp-98h]
  __int64 v45; // [rsp+1F0h] [rbp-88h]
  _OWORD v46[4]; // [rsp+200h] [rbp-78h] BYREF
  __int64 v47; // [rsp+240h] [rbp-38h]

  just::parser::Parser::parse_name(src, a2);
  v7 = BYTE8(src[4]);
  *(_OWORD *)v35 = src[0];
  *(_OWORD *)&v35[16] = src[1];
  *(_OWORD *)&v35[32] = src[2];
  *(_OWORD *)&v35[48] = src[3];
  *(_QWORD *)&v35[64] = *(_QWORD *)&src[4];
  if ( BYTE8(src[4]) != 37 )
  {
    v11 = *(_DWORD *)((char *)&src[4] + 9);
    *((_DWORD *)dest + 21) = HIDWORD(src[4]);
    *(_DWORD *)(dest + 81) = v11;
    *((_QWORD *)dest + 9) = *(_QWORD *)&v35[64];
    v12 = *(_OWORD *)v35;
    v13 = *(_OWORD *)&v35[16];
    v14 = *(_OWORD *)&v35[32];
    *(_OWORD *)(dest + 56) = *(_OWORD *)&v35[48];
    *(_OWORD *)(dest + 40) = v14;
    *(_OWORD *)(dest + 24) = v13;
    *(_OWORD *)(dest + 8) = v12;
LABEL_7:
    dest[80] = v7;
    goto LABEL_8;
  }
  v41 = *(_OWORD *)v35;
  v42 = *(_OWORD *)&v35[16];
  v43 = *(_OWORD *)&v35[32];
  v44 = *(_OWORD *)&v35[48];
  v45 = *(_QWORD *)&v35[64];
  v46[0] = *(_OWORD *)v35;
  v46[1] = *(_OWORD *)&v35[16];
  v46[2] = *(_OWORD *)&v35[32];
  v46[3] = *(_OWORD *)&v35[48];
  v47 = *(_QWORD *)&v35[64];
  just::parser::Parser::presume((__int64)src, (_QWORD *)a2, 14);
  v7 = BYTE8(src[4]);
  if ( BYTE8(src[4]) != 37 )
  {
    v15 = *(_QWORD *)&src[0];
    v16 = *(_OWORD *)((char *)src + 8);
    v17 = *((_QWORD *)&src[3] + 1);
    v18 = src[4];
    *(_DWORD *)v35 = *(_DWORD *)((char *)&src[4] + 1);
    *(_DWORD *)&v35[3] = DWORD1(src[4]);
    *((_DWORD *)dest + 21) = HIDWORD(src[4]);
    *(_DWORD *)(dest + 81) = *(_DWORD *)((char *)&src[4] + 9);
    v19 = *(_OWORD *)((char *)&src[1] + 8);
    v20 = *(_OWORD *)((char *)&src[2] + 8);
    v21 = *(_DWORD *)v35;
    *((_DWORD *)dest + 19) = *(_DWORD *)&v35[3];
    *(_DWORD *)(dest + 73) = v21;
    *((_QWORD *)dest + 1) = v15;
    *((_OWORD *)dest + 1) = v16;
    *((_OWORD *)dest + 2) = v19;
    *((_OWORD *)dest + 3) = v20;
    *((_QWORD *)dest + 8) = v17;
    dest[72] = v18;
    goto LABEL_7;
  }
  just::parser::Parser::parse_expression(src, a2);
  v36 = *(_OWORD *)((char *)src + 8);
  v37 = *(_OWORD *)((char *)&src[1] + 8);
  v38 = *(_OWORD *)((char *)&src[2] + 8);
  v39 = *(_OWORD *)((char *)&src[3] + 8);
  v40 = *(_OWORD *)((char *)&src[4] + 8);
  if ( *(_QWORD *)&src[0] == 18LL )
  {
    *(_OWORD *)(dest + 72) = v40;
    v8 = v36;
    v9 = v37;
    v10 = v38;
    *(_OWORD *)(dest + 56) = v39;
    *(_OWORD *)(dest + 40) = v10;
    *(_OWORD *)(dest + 24) = v9;
    *(_OWORD *)(dest + 8) = v8;
LABEL_8:
    *(_QWORD *)dest = 18LL;
    return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a4);
  }
  *(_QWORD *)&v35[120] = *((_QWORD *)&src[7] + 1);
  *(_OWORD *)&v35[104] = *(_OWORD *)((char *)&src[6] + 8);
  *(_OWORD *)&v35[88] = *(_OWORD *)((char *)&src[5] + 8);
  *(_OWORD *)&v35[8] = v36;
  *(_OWORD *)&v35[24] = v37;
  *(_OWORD *)&v35[40] = v38;
  *(_OWORD *)&v35[56] = v39;
  *(_OWORD *)&v35[72] = v40;
  *(_QWORD *)v35 = *(_QWORD *)&src[0];
  just::parser::Parser::expect_eol((__int64)src, (_QWORD *)a2);
  if ( BYTE8(src[4]) == 37
    && (v23 = just::attribute_set::AttributeSet::contains(a4, 15),
        just::attribute_set::AttributeSet::ensure_valid_attributes(
          (__int64)src,
          a4,
          (__int64)aAssignment,
          10LL,
          (__int64)&v41,
          (__int64)&unk_715F0,
          1LL),
        BYTE8(src[4]) == 37) )
  {
    v24 = *(_DWORD *)(a2 + 128);
    v25 = 1;
    if ( !v23 )
    {
      v26 = just::token::Token::lexeme(v46);
      v28 = v27;
      LODWORD(src[0]) = 0;
      v29 = core::char::methods::encode_utf8_raw(95LL, src);
      v25 = core::slice::<impl [T]>::starts_with(v26, v28, v29, v30);
    }
    src[7] = *(_OWORD *)&v35[112];
    src[6] = *(_OWORD *)&v35[96];
    src[5] = *(_OWORD *)&v35[80];
    src[4] = *(_OWORD *)&v35[64];
    src[3] = *(_OWORD *)&v35[48];
    src[2] = *(_OWORD *)&v35[32];
    src[1] = *(_OWORD *)&v35[16];
    src[0] = *(_OWORD *)v35;
    src[8] = v41;
    src[9] = v42;
    src[10] = v43;
    src[11] = v44;
    *(_QWORD *)&src[12] = v45;
    memcpy(dest, src, 0xC8uLL);
    *((_DWORD *)dest + 50) = v24;
    dest[204] = 0;
    dest[205] = a3;
    dest[206] = v25;
  }
  else
  {
    *(_OWORD *)(dest + 72) = src[4];
    v31 = src[0];
    v32 = src[1];
    v33 = src[2];
    *(_OWORD *)(dest + 56) = src[3];
    *(_OWORD *)(dest + 40) = v33;
    *(_OWORD *)(dest + 24) = v32;
    *(_OWORD *)(dest + 8) = v31;
    *(_QWORD *)dest = 18LL;
    core::ptr::drop_in_place<just::expression::Expression>(v35);
  }
  return core::ptr::drop_in_place<just::attribute_set::AttributeSet>(a4);
}