__int64 __fastcall uu_more::Pager::draw(__int64 a1, const char *a2, int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 *v15; // rax
  __int64 v16; // rax
  int *v17; // rbx
  const char *v18; // r15
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  bool v22; // cf
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __m128i si128; // xmm2
  __m128d v26; // xmm1
  double v27; // xmm0_8
  __m128d v28; // xmm1
  int v29; // ebp
  __int64 (__fastcall *v30)(); // rax
  __int64 v31; // rcx
  const char ***v32; // r12
  char v33; // r14
  __int64 v34; // rax
  __int64 result; // rax
  char v36; // [rsp+4h] [rbp-1C4h]
  const char *v37; // [rsp+8h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v38)(); // [rsp+10h] [rbp-1B8h]
  const char ***v39; // [rsp+18h] [rbp-1B0h]
  __int64 (__fastcall *v40)(); // [rsp+20h] [rbp-1A8h]
  char *v41; // [rsp+28h] [rbp-1A0h]
  __int64 (__fastcall *v42)(); // [rsp+30h] [rbp-198h]
  const char **v43; // [rsp+38h] [rbp-190h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+40h] [rbp-188h]
  unsigned __int64 v45; // [rsp+48h] [rbp-180h]
  __int128 v46; // [rsp+50h] [rbp-178h] BYREF
  int *v47; // [rsp+60h] [rbp-168h] BYREF
  int v48; // [rsp+6Ch] [rbp-15Ch]
  const char *v49; // [rsp+70h] [rbp-158h]
  int v50; // [rsp+7Ch] [rbp-14Ch] BYREF
  __int128 v51; // [rsp+80h] [rbp-148h] BYREF
  int *v52; // [rsp+90h] [rbp-138h]
  __int64 (__fastcall *v53)(); // [rsp+98h] [rbp-130h]
  __int128 v54; // [rsp+A0h] [rbp-128h] BYREF
  const char **v55; // [rsp+B0h] [rbp-118h] BYREF
  char **v56; // [rsp+C0h] [rbp-108h]
  __int64 v57; // [rsp+C8h] [rbp-100h] BYREF
  _QWORD *v58; // [rsp+D0h] [rbp-F8h] BYREF
  __int64 (__fastcall *v59)(); // [rsp+D8h] [rbp-F0h]
  __int128 v60; // [rsp+E0h] [rbp-E8h] BYREF
  __int64 v61; // [rsp+F0h] [rbp-D8h] BYREF
  _QWORD v62[2]; // [rsp+100h] [rbp-C8h] BYREF
  __int64 (__fastcall *v63)(); // [rsp+110h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+118h] [rbp-B0h]
  const char **v65; // [rsp+120h] [rbp-A8h]
  __int64 v66; // [rsp+128h] [rbp-A0h]
  __int64 v67; // [rsp+130h] [rbp-98h]
  __int128 v68; // [rsp+140h] [rbp-88h] BYREF
  __int64 v69; // [rsp+150h] [rbp-78h] BYREF
  __int128 v70; // [rsp+158h] [rbp-70h] BYREF
  __int64 v71; // [rsp+168h] [rbp-60h]
  _QWORD v72[2]; // [rsp+170h] [rbp-58h] BYREF
  __int128 v73; // [rsp+180h] [rbp-48h] BYREF
  __int64 v74; // [rsp+190h] [rbp-38h]

  v37 = a2;
  v38 = 0LL;
  v49 = a2;
  v4 = <std::io::stdio::Stdout as std::io::Write>::write_all(
         a2,
         anon_973acb088a118210f855931270ed248b_50_llvm_4119950667813314017,
         4LL);
  if ( v4 || (v4 = <std::io::stdio::Stdout as std::io::Write>::flush(v49)) != 0 )
  {
    v37 = (const char *)v4;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v37, &off_1487D8, &off_148AE0);
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  v43 = 0LL;
  v44 = (__int64 (__fastcall *)())&byte_8;
  v45 = 0LL;
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 || (v6 & 7) != 0 || (v7 = *(_QWORD *)(a1 + 16), v8 = 0x555555555555556LL, v7 >= 0x555555555555556LL) )
    core::panicking::panic_nounwind(anon_b8e768ed0ddf17f1539d76bb5aedca5a_38_llvm_9157631453777517788, 162LL);
  v9 = *(_WORD *)(a1 + 64) == 0;
  v48 = a3;
  if ( v9 )
  {
    v12 = 0LL;
    goto LABEL_33;
  }
  v10 = v6 + 24 * v7;
  v11 = *(_QWORD *)(a1 + 24);
  v12 = 0LL;
  v56 = &off_148B30;
  v36 = 0;
  while ( !v11 )
  {
    v14 = v6;
    if ( v6 == v10 )
      goto LABEL_32;
LABEL_17:
    v6 = v14 + 24;
    if ( (*(_BYTE *)(a1 + 67) & 1) == 0 )
    {
      if ( (const char **)v12 == v43 )
        goto LABEL_31;
      goto LABEL_10;
    }
    if ( *(_QWORD *)(v14 + 16) )
    {
      if ( v36 )
      {
        if ( (const char **)v12 == v43 )
          alloc::raw_vec::RawVec<T,A>::grow_one(&v43);
        v36 = 0;
        goto LABEL_10;
      }
      if ( (const char **)v12 == v43 )
        goto LABEL_31;
      goto LABEL_10;
    }
    if ( !v36 )
    {
      v36 = 1;
      if ( (const char **)v12 == v43 )
LABEL_31:
        alloc::raw_vec::RawVec<T,A>::grow_one(&v43);
LABEL_10:
      *((_QWORD *)v44 + v12++) = v14;
      v45 = v12;
      goto LABEL_11;
    }
    if ( *(_QWORD *)(a1 + 56) == -1LL )
      goto LABEL_69;
    ++*(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(a1 + 24) == -1LL )
    {
      v56 = &off_148B48;
LABEL_69:
      core::panicking::panic_const::panic_const_add_overflow(
        v56,
        anon_973acb088a118210f855931270ed248b_50_llvm_4119950667813314017,
        v5,
        v8);
    }
    ++*(_QWORD *)(a1 + 24);
LABEL_11:
    if ( v12 >= *(unsigned __int16 *)(a1 + 64) )
      goto LABEL_33;
  }
  v13 = v10 - v6;
  if ( v10 < v6 )
    core::panicking::panic_nounwind(anon_58afb1559eaf75b12060a08a7f3f0cc6_10_llvm_15235168960913987297, 71LL);
  v8 = 0xAAAAAAAAAAAAAAABLL;
  v5 = v13 / 0x18;
  if ( v13 / 0x18 > v11 )
  {
    v14 = v6 + 24 * v11;
    v11 = 0LL;
    goto LABEL_17;
  }
LABEL_32:
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 48);
LABEL_33:
  v15 = (__int64 *)v44;
  v63 = v44;
  v64 = (__int64)v44;
  v65 = v43;
  v66 = (__int64)v44 + 8 * v12;
  if ( v12 )
  {
    do
    {
      v64 = (__int64)(v15 + 1);
      v16 = *v15;
      if ( !v16 )
        break;
      *(_QWORD *)&v70 = v16;
      *(_QWORD *)&v54 = &v70;
      *((_QWORD *)&v54 + 1) = <&T as core::fmt::Display>::fmt;
      v37 = (const char *)&off_148AF8;
      v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v39 = (const char ***)&v54;
      v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v41 = 0LL;
      alloc::fmt::format::format_inner(&v51, &v37);
      v46 = v51;
      v17 = v52;
      v47 = v52;
      v18 = (const char *)*((_QWORD *)&v51 + 1);
      core::slice::raw::from_raw_parts::precondition_check(*((_QWORD *)&v51 + 1), 1LL, 1LL, v52);
      v19 = <std::io::stdio::Stdout as std::io::Write>::write_all(v49, v18, v17);
      if ( v19 )
      {
        v37 = (const char *)v19;
        core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v37, &off_1487D8, &off_148B18);
      }
      alloc::raw_vec::RawVec<T,A>::current_memory(&v37, &v46);
      if ( v38 )
        <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v47, v37, v38, v39);
      v15 = (__int64 *)v64;
    }
    while ( v64 != v66 );
  }
  <alloc::vec::into_iter::IntoIter<T,A> as core::ops::drop::Drop>::drop(&v63);
  v20 = *(_QWORD *)(a1 + 48);
  v21 = *(unsigned __int16 *)(a1 + 64);
  v22 = __CFADD__(*(_QWORD *)(a1 + 24), v21);
  v23 = *(_QWORD *)(a1 + 24) + v21;
  v24 = -1LL;
  if ( !v22 )
    v24 = v23;
  if ( v20 <= v24 )
  {
    v30 = *(__int64 (__fastcall **)())(a1 + 32);
    v31 = 1LL;
    v29 = v48;
    if ( v30 )
    {
      v31 = *(_QWORD *)(a1 + 32);
      v30 = *(__int64 (__fastcall **)())(a1 + 40);
    }
    v58 = (_QWORD *)v31;
    v59 = v30;
    v62[0] = &v58;
    v62[1] = <&T as core::fmt::Display>::fmt;
    v37 = (const char *)&off_148B80;
    v38 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v39 = (const char ***)v62;
    v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v41 = 0LL;
    alloc::fmt::format::format_inner(&v73, &v37);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_1B4E0);
    v26 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v24, si128), (__m128d)xmmword_1B470);
    v27 = _mm_unpackhi_pd(v26, v26).m128d_f64[0] + v26.m128d_f64[0];
    v28 = _mm_sub_pd((__m128d)_mm_unpacklo_epi32((__m128i)v20, si128), (__m128d)xmmword_1B470);
    LOWORD(v62[0]) = (int)fmin(
                            65535.0,
                            fmax(0.0, round(v27 / (_mm_unpackhi_pd(v28, v28).m128d_f64[0] + v28.m128d_f64[0]) * 100.0)));
    v58 = v62;
    v59 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v37 = (const char *)&unk_148B60;
    v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v39 = (const char ***)&v58;
    v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
    v41 = 0LL;
    alloc::fmt::format::format_inner(&v73, &v37);
    v29 = v48;
  }
  v69 = v74;
  v68 = v73;
  v72[0] = &v68;
  v72[1] = <alloc::string::String as core::fmt::Display>::fmt;
  v37 = (const char *)&off_148B90;
  v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
  v39 = (const char ***)v72;
  v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
  v41 = 0LL;
  v32 = (const char ***)&v70;
  alloc::fmt::format::format_inner(&v70, &v37);
  v61 = v71;
  v60 = v70;
  if ( (*(_BYTE *)(a1 + 66) & 1) != 0 )
  {
    if ( v29 == 1114112 )
    {
      v43 = (const char **)&v60;
      v44 = <alloc::string::String as core::fmt::Display>::fmt;
      v37 = (const char *)&unk_148BC0;
      v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v39 = &v43;
      v40 = (__int64 (__fastcall *)())(&dword_0 + 1);
      v41 = 0LL;
      v32 = (const char ***)&v51;
      alloc::fmt::format::format_inner(&v51, &v37);
    }
    else
    {
      v50 = v29;
      *(_QWORD *)&v51 = &v60;
      *((_QWORD *)&v51 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
      v52 = &v50;
      v53 = <char as core::fmt::Display>::fmt;
      v37 = (const char *)&unk_148BE0;
      v38 = (__int64 (__fastcall *)())(&dword_0 + 3);
      v39 = (const char ***)&v51;
      v40 = (__int64 (__fastcall *)())(&dword_0 + 2);
      v41 = 0LL;
      v32 = &v43;
      alloc::fmt::format::format_inner(&v43, &v37);
    }
  }
  else
  {
    if ( v29 == 1114112 )
    {
      v33 = 1;
      goto LABEL_55;
    }
    *(_QWORD *)&v51 = &v60;
    *((_QWORD *)&v51 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
    v52 = (int *)&off_148BB0;
    v53 = <&T as core::fmt::Display>::fmt;
    v37 = "\x01";
    v38 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v39 = (const char ***)&v51;
    v40 = (__int64 (__fastcall *)())(&dword_0 + 2);
    v41 = 0LL;
    v32 = &v43;
    alloc::fmt::format::format_inner(&v43, &v37);
  }
  v33 = 0;
LABEL_55:
  v55 = v32[2];
  v54 = *(_OWORD *)v32;
  v37 = "\v";
  v38 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
  v39 = (const char ***)&v54;
  v40 = <alloc::string::String as core::fmt::Display>::fmt;
  v41 = "";
  v42 = <crossterm::style::types::attribute::Attribute as core::fmt::Display>::fmt;
  v63 = (__int64 (__fastcall *)())&off_148C10;
  v64 = 3LL;
  v67 = 0LL;
  v65 = &v37;
  v66 = 3LL;
  v34 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(v49, &v63);
  if ( v34 )
  {
    *(_QWORD *)&v46 = v34;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v46, &off_1487D8, &off_148C40);
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v46, &v54);
  if ( *((_QWORD *)&v46 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v55, v46, *((_QWORD *)&v46 + 1), v47);
  if ( !v33 )
  {
    alloc::raw_vec::RawVec<T,A>::current_memory(&v46, &v60);
    if ( *((_QWORD *)&v46 + 1) )
      <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v61, v46, *((_QWORD *)&v46 + 1), v47);
  }
  alloc::raw_vec::RawVec<T,A>::current_memory(&v46, &v68);
  if ( *((_QWORD *)&v46 + 1) )
    <alloc::alloc::Global as core::alloc::Allocator>::deallocate(&v69, v46, *((_QWORD *)&v46 + 1), v47);
  result = <std::io::stdio::Stdout as std::io::Write>::flush(v49);
  if ( result )
  {
    v57 = result;
    core::result::unwrap_failed(aCalledResultUn_3, 43LL, &v57, &off_1487D8, &off_148AC8);
  }
  return result;
}
