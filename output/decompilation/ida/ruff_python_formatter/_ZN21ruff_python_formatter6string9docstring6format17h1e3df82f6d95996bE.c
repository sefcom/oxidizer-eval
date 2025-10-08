__int64 __fastcall ruff_python_formatter::string::docstring::format(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 result; // rax
  unsigned __int8 v8; // cl
  unsigned int v9; // ebp
  char v10; // dl
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  bool v13; // zf
  unsigned __int64 v14; // rdx
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  __int64 started; // rbp
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // ebp
  int v23; // r14d
  _BOOL4 v24; // r13d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int128 v27; // xmm0
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ebp
  __int128 v32; // xmm0
  int v33; // eax
  unsigned int v34; // ebp
  __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r15
  __int64 v38; // rax
  _QWORD *v39; // r12
  unsigned __int64 v40; // r14
  bool v41; // bl
  __int64 v42; // rax
  char v43; // al
  bool v44; // [rsp+Ah] [rbp-20Eh] BYREF
  unsigned __int8 v45; // [rsp+Bh] [rbp-20Dh]
  unsigned int v46; // [rsp+Ch] [rbp-20Ch]
  unsigned __int64 v47; // [rsp+10h] [rbp-208h]
  int v48; // [rsp+1Ch] [rbp-1FCh]
  __int64 v49; // [rsp+20h] [rbp-1F8h]
  unsigned __int64 v50; // [rsp+28h] [rbp-1F0h]
  __int64 v51; // [rsp+30h] [rbp-1E8h]
  __m256i v52; // [rsp+38h] [rbp-1E0h] BYREF
  unsigned __int64 v53; // [rsp+58h] [rbp-1C0h]
  int v54; // [rsp+A8h] [rbp-170h]
  int v55; // [rsp+ACh] [rbp-16Ch]
  __int128 v56; // [rsp+B0h] [rbp-168h]
  _QWORD *v57; // [rsp+C0h] [rbp-158h]
  int v58; // [rsp+C8h] [rbp-150h]
  bool v59; // [rsp+CCh] [rbp-14Ch]
  char v60; // [rsp+CDh] [rbp-14Bh]
  _QWORD *v61; // [rsp+D0h] [rbp-148h]
  __int64 v62; // [rsp+D8h] [rbp-140h]
  __int64 v63; // [rsp+E0h] [rbp-138h]
  __int64 v64; // [rsp+E8h] [rbp-130h]
  __int128 v65; // [rsp+F0h] [rbp-128h] BYREF
  __int128 v66; // [rsp+100h] [rbp-118h]
  __int128 v67; // [rsp+110h] [rbp-108h]
  __int128 v68; // [rsp+120h] [rbp-F8h]
  __int128 v69; // [rsp+130h] [rbp-E8h]
  __int128 v70; // [rsp+140h] [rbp-D8h]
  __int128 v71; // [rsp+158h] [rbp-C0h] BYREF
  __int128 v72; // [rsp+168h] [rbp-B0h] BYREF
  _OWORD v73[3]; // [rsp+178h] [rbp-A0h] BYREF
  __int128 v74; // [rsp+1A8h] [rbp-70h]
  unsigned int v75; // [rsp+1B8h] [rbp-60h] BYREF
  __int128 v76; // [rsp+1BCh] [rbp-5Ch]
  int v77; // [rsp+1CCh] [rbp-4Ch]
  int v78; // [rsp+1D0h] [rbp-48h] BYREF
  __int128 v79; // [rsp+1D4h] [rbp-44h]
  int v80; // [rsp+1E4h] [rbp-34h]

  v4 = a1;
  v5 = a2[1];
  v6 = a2[2];
  if ( (unsigned __int8)ruff_python_formatter::string::docstring::contains_unescaped_newline(v5, v6) )
    return <ruff_python_formatter::string::normalize::NormalizedString as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
             a1,
             a2,
             a3);
  v51 = *a2;
  <char as core::str::pattern::Pattern>::into_searcher((char *)v73 + 8, 10LL, v5, v6);
  *((_QWORD *)&v72 + 1) = 0LL;
  *(_QWORD *)&v73[0] = v6;
  WORD4(v74) = 1;
  *(_QWORD *)&v71 = 0LL;
  v8 = a2[4] & 1;
  v9 = *((unsigned __int8 *)a2 + 32);
  v44 = (a2[4] & 2) != 0;
  v45 = v8;
  LOBYTE(v65) = <ruff_python_ast::nodes::AnyStringFlags as ruff_python_ast::nodes::StringFlags>::prefix(v9);
  BYTE1(v65) = v10;
  v52.m256i_i64[0] = (__int64)&v65;
  v52.m256i_i64[1] = (__int64)&unk_57E180;
  v52.m256i_i64[2] = (__int64)&v44;
  v52.m256i_i64[3] = (__int64)&unk_57E1A0;
  <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v75, a3, &v52, 2LL);
  result = v75;
  if ( v75 != 4 )
  {
    *(_DWORD *)(a1 + 20) = v77;
    v27 = v76;
LABEL_34:
    *(_OWORD *)(v4 + 4) = v27;
    *(_DWORD *)v4 = result;
    return result;
  }
  v46 = v9;
  v49 = *((unsigned int *)a2 + 6);
  v11 = *((_QWORD *)&v71 + 1);
  v12 = v72;
  v13 = (v71 & 1) == 0;
  *(_QWORD *)&v71 = 0LL;
  if ( v13 )
  {
    v11 = core::str::iter::SplitInternal<P>::next((char *)&v72 + 8, v72);
    v12 = v14;
  }
  if ( !v11 )
    v12 = 0LL;
  v15 = 1LL;
  if ( v11 )
    v15 = v11;
  v50 = v12;
  v63 = core::str::<impl str>::trim_end_matches(v15, v12);
  v47 = v16;
  started = core::str::<impl str>::trim_start_matches(v63, v16);
  v19 = v18;
  v48 = v45;
  v52.m256i_i32[0] = 0;
  v20 = core::char::methods::encode_utf8_raw(5 * (v45 ^ 1u) + 34, &v52);
  v64 = started;
  if ( (unsigned __int8)core::slice::<impl [T]>::starts_with(started, v19, v20, v21) )
  {
    v52.m256i_i8[0] = 0;
    (*(void (__fastcall **)(_QWORD, __m256i *))(a3[1] + 24LL))(*a3, &v52);
  }
  v22 = v46;
  if ( v47 )
  {
    v61 = a3;
    v62 = v4;
    v23 = v47;
    v24 = HIDWORD(v47) != 0;
    core::result::Result<T,E>::unwrap(HIDWORD(v47) != 0, &off_57CC48);
    core::result::Result<T,E>::unwrap(HIDWORD(v19) != 0, &off_57CC48);
    core::result::Result<T,E>::unwrap(v24, &off_57CC48);
    v25 = v49 + v23;
    if ( __CFADD__((_DWORD)v49, v23) )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57CC60);
    v26 = v49 + v23 - v19;
    if ( v26 > v25 )
      core::panicking::panic(aAssertionFaile_0, 38LL, &off_57F090);
    v4 = v62;
    v22 = v46;
    a3 = v61;
    if ( v51 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v65 = __PAIR64__(v25, v26);
      <ruff_formatter::builders::SourceTextSliceBuilder as ruff_formatter::Format<Context>>::fmt(&v52, &v65, v61);
      result = v52.m256i_u32[0];
      if ( v52.m256i_i32[0] != 4 )
        goto LABEL_33;
    }
    else
    {
      <ruff_formatter::builders::Text as ruff_formatter::Format<Context>>::fmt(&v52, v64, v19, *v61, v61[1]);
      result = v52.m256i_u32[0];
      if ( v52.m256i_i32[0] != 4 )
      {
LABEL_33:
        *(_DWORD *)(v4 + 20) = v52.m256i_i32[5];
        v27 = *(_OWORD *)((char *)v52.m256i_i64 + 4);
        goto LABEL_34;
      }
    }
  }
  v28 = v50;
  core::result::Result<T,E>::unwrap(HIDWORD(v50) != 0, &off_57CC48);
  v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(
          v28,
          v5,
          v6);
  if ( !v29 )
    core::str::slice_error_fail(v5, v6, v28, v6, &off_57F0A8);
  if ( !core::str::<impl str>::trim_matches(v29, v30) )
  {
    v39 = a3;
    v40 = v47;
    v41 = v47 == 0;
    v42 = (*(__int64 (__fastcall **)(_QWORD))(v39[1] + 48LL))(*v39);
    v43 = ruff_python_formatter::string::docstring::needs_chaperone_space(v22, v63, v40, *(unsigned __int8 *)(v42 + 58));
    if ( v41 && v6 != 0 || v43 )
    {
      v52.m256i_i8[0] = 0;
      (*(void (__fastcall **)(_QWORD, __m256i *))(v39[1] + 24LL))(*v39, &v52);
    }
    <ruff_python_formatter::string::StringQuotes as ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext>>::fmt(
      &v52,
      &v44,
      v39);
    result = v52.m256i_u32[0];
    if ( v52.m256i_i32[0] == 4 )
    {
      *(_DWORD *)v4 = 4;
      return result;
    }
    goto LABEL_33;
  }
  v52.m256i_i16[0] = 513;
  (*(void (__fastcall **)(_QWORD, __m256i *))(a3[1] + 24LL))(*a3, &v52);
  v31 = 0;
  core::result::Result<T,E>::unwrap(0LL, &off_57CC48);
  <core::iter::adapters::peekable::Peekable<I> as core::clone::Clone>::clone(&v52, &v71);
  core::iter::traits::iterator::Iterator::reduce(&v65, &v52);
  v32 = 0LL;
  if ( DWORD2(v65) != 5 )
  {
    v31 = DWORD2(v65);
    v32 = v66;
  }
  v57 = a3;
  v52.m256i_i64[0] = 0LL;
  v52.m256i_i64[1] = 8LL;
  *(_OWORD *)&v52.m256i_u64[2] = 0LL;
  v58 = v49 + v50 + 1;
  v54 = v31;
  v55 = HIDWORD(v65);
  v56 = v32;
  v59 = v51 == 0x8000000000000000LL;
  v60 = v48;
  v53 = 0x8000000000000003LL;
  v70 = v74;
  v69 = v73[2];
  v68 = v73[1];
  v67 = v73[0];
  v66 = v72;
  v65 = v71;
  ruff_python_formatter::string::docstring::DocstringLinePrinter::add_iter(&v78, &v52, &v65);
  v33 = v78;
  v34 = v46;
  if ( v78 == 4 )
  {
    core::ptr::drop_in_place<ruff_python_formatter::string::docstring::DocstringLinePrinter>(&v52);
    v35 = core::str::<impl str>::trim_end_matches(v5, v6);
    v37 = v36;
    v38 = (*(__int64 (__fastcall **)(_QWORD))(a3[1] + 48LL))(*a3);
    if ( (unsigned __int8)ruff_python_formatter::string::docstring::needs_chaperone_space(
                            v34,
                            v35,
                            v37,
                            *(unsigned __int8 *)(v38 + 58)) )
    {
      v52.m256i_i8[0] = 0;
      (*(void (__fastcall **)(_QWORD, __m256i *))(a3[1] + 24LL))(*a3, &v52);
    }
    v52.m256i_i64[0] = (__int64)&v44;
    v52.m256i_i64[1] = (__int64)&unk_57E1A0;
    return <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(
             v4,
             a3,
             &v52,
             1LL);
  }
  else
  {
    *(_DWORD *)(v4 + 20) = v80;
    *(_OWORD *)(v4 + 4) = v79;
    *(_DWORD *)v4 = v33;
    return core::ptr::drop_in_place<ruff_python_formatter::string::docstring::DocstringLinePrinter>(&v52);
  }
}