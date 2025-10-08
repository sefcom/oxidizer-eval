__int64 __fastcall fd::output::print_entry_colorized(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  char v5; // r15
  _BYTE *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  __int128 v12; // rax
  unsigned __int8 code_point; // al
  int v14; // edx
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r9
  __m128i v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128i v28; // xmm2
  unsigned int v29; // esi
  char v30; // di
  __m128i v31; // xmm0
  __int64 v32; // r14
  _QWORD *v33; // rbx
  __int64 v34; // rax
  __m128i v35; // xmm2
  char **v37; // r8
  _BYTE v38[24]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v39; // [rsp+20h] [rbp-128h]
  unsigned __int64 v40; // [rsp+30h] [rbp-118h]
  char v41; // [rsp+38h] [rbp-110h]
  int v42; // [rsp+39h] [rbp-10Fh]
  int v43; // [rsp+3Dh] [rbp-10Bh]
  __m128i v44; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-E8h]
  __int64 *v46; // [rsp+68h] [rbp-E0h]
  __int64 v47; // [rsp+70h] [rbp-D8h]
  __int64 v48; // [rsp+78h] [rbp-D0h]
  _BYTE v49[8]; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v50; // [rsp+88h] [rbp-C0h]
  __int64 v51; // [rsp+90h] [rbp-B8h]
  _QWORD *v52; // [rsp+98h] [rbp-B0h]
  const char *v53; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+A8h] [rbp-A0h]
  __m128i *v55; // [rsp+B0h] [rbp-98h]
  __int64 v56; // [rsp+B8h] [rbp-90h]
  __int64 v57; // [rsp+C0h] [rbp-88h]
  __m128i v58; // [rsp+D0h] [rbp-78h] BYREF
  _QWORD v59[2]; // [rsp+E0h] [rbp-68h] BYREF
  __m128i v60; // [rsp+F0h] [rbp-58h]
  __m128i v61; // [rsp+100h] [rbp-48h]

  v48 = a4;
  v5 = a2;
  v47 = a1;
  v46 = (__int64 *)a3;
  v6 = (_BYTE *)fd::dir_entry::DirEntry::stripped_path(a2, *(_BYTE *)(a3 + 487));
  v8 = v7;
  alloc::string::String::from_utf8_lossy(v49, v6);
  v9 = std::path::Path::parent(v6, v8);
  if ( !v9 )
    goto LABEL_16;
  alloc::string::String::from_utf8_lossy(v38, v9);
  v4 = *(_QWORD *)&v38[16];
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v38);
  v10 = v50;
  v11 = v51;
  *(_QWORD *)&v12 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
                      v4,
                      v50,
                      v51);
  if ( !(_QWORD)v12 )
  {
    v37 = &off_402540;
LABEL_34:
    v15 = v11;
    goto LABEL_36;
  }
  *((_QWORD *)&v12 + 1) += v12;
  *(_OWORD *)v38 = v12;
  code_point = core::str::validations::next_code_point(v38);
  if ( (code_point & (v14 != (_DWORD)&unk_110000)) == 1 )
  {
    v6 = v38;
    v15 = v4;
    do
    {
      if ( v14 != 47 )
        break;
      ++v15;
      if ( (core::str::validations::next_code_point(v38) & 1) == 0 )
        break;
    }
    while ( v14 != (_DWORD)&unk_110000 );
  }
  else
  {
    v15 = v4;
  }
  if ( !v15 )
  {
LABEL_16:
    v15 = 0LL;
LABEL_17:
    v23 = fd::dir_entry::DirEntry::style(a2, v48);
    v52 = (_QWORD *)a2;
    if ( v23 )
    {
      lscolors::style::Style::to_nu_ansi_term_style(v38, v23);
      v58 = _mm_loadl_epi64((const __m128i *)v38);
      v5 = v38[8];
      LODWORD(v6) = *(_DWORD *)&v38[9];
      LODWORD(v4) = *(_DWORD *)&v38[13];
    }
    else
    {
      v58 = _mm_cvtsi32_si128(2u);
    }
    v10 = v50;
    v11 = v51;
    v24 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
            v15,
            v50,
            v51);
    if ( v24 )
    {
      v28 = _mm_load_si128(&v58);
      v60 = v28;
      v29 = 0;
      v30 = v5;
      if ( v28.m128i_i8[0] == 2 )
      {
        v30 = 0;
        LODWORD(v6) = 21;
        LODWORD(v4) = 21;
      }
      LOBYTE(v29) = v28.m128i_i8[0] == 2;
      v31 = _mm_cvtsi32_si128(v29);
      v40 = _mm_andnot_si128(
              _mm_cmpgt_epi8(
                (__m128i)0LL,
                _mm_and_si128(
                  _mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v31, v31), 0), 7u),
                  (__m128i)xmmword_70A80)),
              v28).m128i_u64[0];
      v41 = v30;
      v42 = (int)v6;
      v43 = v4;
      v44.m128i_i64[0] = (__int64)v38;
      v44.m128i_i64[1] = (__int64)<nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
      v53 = asc_70810;
      v54 = 1LL;
      v57 = 0LL;
      v55 = &v44;
      v56 = 1LL;
      v32 = std::io::Write::write_fmt(
              v47,
              &v53,
              v25,
              0x8000000000000002LL,
              v26,
              v27,
              0x8000000000000000LL,
              v24,
              v25,
              0x8000000000000002LL,
              v39);
      core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v38);
      v33 = v52;
      if ( !v32 )
      {
        v34 = lscolors::LsColors::style_for_indicator(v48, 2LL);
        v32 = fd::output::print_trailing_slash(v47, v33, v46[23], v46[24], v34);
      }
      goto LABEL_31;
    }
    v37 = &off_402570;
    v4 = v15;
    goto LABEL_34;
  }
  v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(
          v15,
          v10,
          v11);
  if ( !v16 )
  {
    v37 = &off_402558;
    v4 = 0LL;
LABEL_36:
    core::str::slice_error_fail(v10, v11, v4, v15, v37);
  }
  v44.m128i_i64[1] = v16;
  v45 = v17;
  v44.m128i_i64[0] = 0x8000000000000000LL;
  if ( v46[45] != 0x8000000000000000LL )
  {
    fd::output::replace_path_separator(v38, v16, v17, v46[46], v46[47]);
    alloc::borrow::Cow<B>::to_mut(&v44);
    core::ptr::drop_in_place<alloc::string::String>(&v44);
    v45 = *(_QWORD *)&v38[16];
    v44 = *(__m128i *)v38;
  }
  LODWORD(v6) = 2;
  v18 = lscolors::LsColors::style_for_indicator(v48, 2LL);
  if ( v18 )
  {
    lscolors::style::Style::to_nu_ansi_term_style(v38, v18);
    v22 = _mm_loadl_epi64((const __m128i *)v38);
    LOBYTE(v19) = v38[8];
    LODWORD(v18) = *(_DWORD *)&v38[9];
    v20 = *(unsigned int *)&v38[13];
  }
  else
  {
    v22 = _mm_cvtsi32_si128(2u);
  }
  v61 = v22;
  if ( v22.m128i_i8[0] == 2 )
  {
    v20 = 21LL;
    LODWORD(v18) = 21;
  }
  v19 = (unsigned __int8)v19;
  if ( v22.m128i_i8[0] == 2 )
    v19 = 0LL;
  *(_QWORD *)&v38[16] = v45;
  v35 = _mm_cvtsi32_si128(v22.m128i_i8[0] == 2);
  *(__m128i *)v38 = _mm_load_si128(&v44);
  v40 = _mm_andnot_si128(
          _mm_cmpgt_epi8(
            (__m128i)0LL,
            _mm_and_si128(
              _mm_slli_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v35, v35), 0), 7u),
              (__m128i)xmmword_70A80)),
          v22).m128i_u64[0];
  v41 = v19;
  v42 = v18;
  v43 = v20;
  v59[0] = v38;
  v59[1] = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
  v53 = asc_70810;
  v54 = 1LL;
  v57 = 0LL;
  v55 = (__m128i *)v59;
  v56 = 1LL;
  v32 = std::io::Write::write_fmt(
          v47,
          &v53,
          v19,
          v20,
          21LL,
          v21,
          *(_QWORD *)v38,
          *(_QWORD *)&v38[8],
          v45,
          0x8000000000000002LL,
          v39);
  core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(v38);
  if ( !v32 )
    goto LABEL_17;
LABEL_31:
  core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v49);
  return v32;
}