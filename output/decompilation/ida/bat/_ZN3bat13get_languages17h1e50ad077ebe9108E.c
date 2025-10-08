__int64 __fastcall bat::get_languages(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm2
  char v7; // al
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // r14
  int v12; // ecx
  __int128 v13; // xmm0
  __int128 v14; // xmm2
  __int128 v15; // xmm3
  __int64 v17; // rbx
  __int64 v18; // r12
  __int64 inner; // rax
  char v20; // al
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // ecx
  char v24; // al
  __int64 v25; // r14
  const char **v26; // r12
  const char *v27; // r15
  const char **v28; // rax
  const char *v29; // rcx
  __int64 v30; // rcx
  int v31; // [rsp+0h] [rbp-418h]
  const char *v32; // [rsp+8h] [rbp-410h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+10h] [rbp-408h]
  unsigned __int128 *v34; // [rsp+18h] [rbp-400h]
  __int64 (__fastcall *v35)(); // [rsp+20h] [rbp-3F8h]
  void *v36; // [rsp+28h] [rbp-3F0h]
  __int64 v37; // [rsp+30h] [rbp-3E8h]
  unsigned __int64 v38; // [rsp+38h] [rbp-3E0h]
  const char *v39; // [rsp+40h] [rbp-3D8h] BYREF
  __int64 v40; // [rsp+48h] [rbp-3D0h]
  const char **v41; // [rsp+50h] [rbp-3C8h] BYREF
  __int64 v42; // [rsp+58h] [rbp-3C0h]
  void *v43; // [rsp+60h] [rbp-3B8h]
  __int64 v44; // [rsp+68h] [rbp-3B0h]
  char v45[8]; // [rsp+70h] [rbp-3A8h] BYREF
  __int64 v46; // [rsp+78h] [rbp-3A0h]
  __int64 v47; // [rsp+80h] [rbp-398h]
  unsigned __int128 v48; // [rsp+88h] [rbp-390h] BYREF
  const char **v49; // [rsp+98h] [rbp-380h]
  __int128 v50; // [rsp+A0h] [rbp-378h]
  __int16 v51; // [rsp+B0h] [rbp-368h]
  __int64 v52; // [rsp+B8h] [rbp-360h]
  char v53; // [rsp+C0h] [rbp-358h]
  int v54; // [rsp+C1h] [rbp-357h]
  int v55; // [rsp+C5h] [rbp-353h]
  __int64 v56; // [rsp+D0h] [rbp-348h]
  __int128 v57; // [rsp+D8h] [rbp-340h] BYREF
  __int64 v58; // [rsp+E8h] [rbp-330h]
  unsigned __int128 v59; // [rsp+F0h] [rbp-328h] BYREF
  const char **v60; // [rsp+100h] [rbp-318h]
  unsigned __int64 v61; // [rsp+110h] [rbp-308h]
  _QWORD v62[2]; // [rsp+118h] [rbp-300h] BYREF
  _QWORD v63[2]; // [rsp+128h] [rbp-2F0h] BYREF
  _QWORD dest[31]; // [rsp+138h] [rbp-2E0h] BYREF
  _BYTE src[248]; // [rsp+230h] [rbp-1E8h] BYREF
  _OWORD v66[3]; // [rsp+328h] [rbp-F0h] BYREF
  __int64 v67; // [rsp+358h] [rbp-C0h] BYREF
  __int128 v68; // [rsp+360h] [rbp-B8h]
  __int128 v69; // [rsp+370h] [rbp-A8h]
  __int128 v70; // [rsp+380h] [rbp-98h]
  __int128 v71; // [rsp+390h] [rbp-88h]
  __int128 v72; // [rsp+3A0h] [rbp-78h]
  __int128 v73; // [rsp+3B0h] [rbp-68h]
  __int128 v74; // [rsp+3C0h] [rbp-58h]
  __int128 v75; // [rsp+3D0h] [rbp-48h]
  __int64 v76; // [rsp+3E0h] [rbp-38h]

  *(_QWORD *)&v57 = 0LL;
  *((_QWORD *)&v57 + 1) = 1LL;
  v58 = 0LL;
  bat::assets::assets_from_cache_or_binary((char *)dest, *(_BYTE *)(a2 + 295), a3, a4);
  *(_OWORD *)src = *(_OWORD *)&dest[1];
  *(_OWORD *)&src[16] = *(_OWORD *)&dest[3];
  *(_OWORD *)&src[32] = *(_OWORD *)&dest[5];
  *(_OWORD *)&src[48] = *(_OWORD *)&dest[7];
  *(_OWORD *)&src[64] = *(_OWORD *)&dest[9];
  if ( dest[0] == 0x8000000000000001LL )
  {
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&src[64];
    v4 = *(_OWORD *)src;
    v5 = *(_OWORD *)&src[16];
    v6 = *(_OWORD *)&src[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&src[48];
    *(_OWORD *)(a1 + 32) = v6;
    *(_OWORD *)(a1 + 16) = v5;
    *(_OWORD *)a1 = v4;
    return core::ptr::drop_in_place<alloc::string::String>(&v57);
  }
  v76 = dest[17];
  v75 = *(_OWORD *)&dest[15];
  v74 = *(_OWORD *)&dest[13];
  v73 = *(_OWORD *)&dest[11];
  v68 = *(_OWORD *)src;
  v69 = *(_OWORD *)&src[16];
  v70 = *(_OWORD *)&src[32];
  v71 = *(_OWORD *)&src[48];
  v72 = *(_OWORD *)&src[64];
  v67 = dest[0];
  bat::assets::HighlightingAssets::get_syntaxes(dest, &v67);
  v7 = dest[0];
  if ( LOBYTE(dest[0]) != 13 )
  {
    v12 = *(_DWORD *)((char *)dest + 1);
    *(_DWORD *)(a1 + 4) = HIDWORD(dest[0]);
    *(_DWORD *)(a1 + 1) = v12;
    v13 = *(_OWORD *)&dest[1];
    v14 = *(_OWORD *)&dest[5];
    v15 = *(_OWORD *)&dest[7];
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&dest[3];
    *(_OWORD *)(a1 + 40) = v14;
    *(_OWORD *)(a1 + 56) = v15;
    *(_QWORD *)(a1 + 72) = dest[9];
    *(_BYTE *)a1 = v7;
    *(_OWORD *)(a1 + 8) = v13;
    core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v67);
    return core::ptr::drop_in_place<alloc::string::String>(&v57);
  }
  core::iter::traits::iterator::Iterator::collect(v45, dest[1], dest[1] + 248LL * dest[2]);
  v56 = a1;
  v8 = v46;
  if ( v47 )
  {
    v9 = 248 * v47;
    do
    {
      <alloc::string::String as core::clone::Clone>::clone(src, v8);
      dest[0] = &v67;
      dest[1] = a2;
      dest[2] = src;
      v10 = v8 + 24;
      alloc::vec::Vec<T,A>::retain(v10, dest);
      core::ptr::drop_in_place<alloc::string::String>(src);
      v8 = v10 + 224;
      v9 -= 248LL;
    }
    while ( v9 );
    v8 = v46;
    v11 = v47;
  }
  else
  {
    v11 = 0LL;
  }
  alloc::slice::<impl [T]>::sort_by_key(v8, v11);
  bat::syntax_mapping::SyntaxMapping::all_mappings(dest, a2 + 40);
  bat::get_syntax_mapping_to_paths(v66, (__int64)dest);
  if ( v11 )
  {
    v17 = v8 + 24;
    v18 = 248 * v11;
    do
    {
      inner = hashbrown::map::HashMap<K,V,S,A>::get_inner(v66, *(_QWORD *)(v17 - 16), *(_QWORD *)(v17 - 8));
      if ( inner )
        alloc::vec::Vec<T,A>::extend_trusted(
          v17,
          *(_QWORD *)(inner + 24),
          *(_QWORD *)(inner + 24) + 24LL * *(_QWORD *)(inner + 32));
      v17 += 248LL;
      v18 -= 248LL;
    }
    while ( v18 );
  }
  if ( *(_BYTE *)(a2 + 291) )
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v39, v45);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, &v39);
    while ( *(_QWORD *)src != 0x8000000000000000LL )
    {
      memcpy(dest, src, sizeof(dest));
      alloc::str::join_generic_copy(&v48, dest[4], dest[5], &unk_88E4A);
      v60 = v49;
      v59 = v48;
      v32 = (const char *)dest;
      v33 = <alloc::string::String as core::fmt::Display>::fmt;
      v34 = &v59;
      v35 = <alloc::string::String as core::fmt::Display>::fmt;
      *(_QWORD *)&v48 = &unk_6C8760;
      *((_QWORD *)&v48 + 1) = 3LL;
      v49 = &v32;
      v50 = 2uLL;
      <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v57, &v48);
      core::ptr::drop_in_place<alloc::string::String>(&v59);
      core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxReference>(dest);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, &v39);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<syntect::parsing::syntax_set::SyntaxReference>>(&v39);
    goto LABEL_39;
  }
  v20 = core::iter::traits::iterator::Iterator::reduce(v46, v46 + 248 * v47);
  v22 = 32LL;
  if ( (v20 & 1) != 0 )
    v22 = v21;
  v62[0] = asc_88E4C;
  v62[1] = 1LL;
  v38 = v22;
  v61 = *(_QWORD *)(a2 + 256) + ~v22;
  v23 = 21;
  if ( *(_BYTE *)(a2 + 292) )
    v23 = 4;
  v31 = v23;
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&v59, v45);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, &v59);
  if ( *(_QWORD *)src != 0x8000000000000000LL )
  {
    if ( v38 > 0xFFFF )
    {
      memcpy(dest, src, sizeof(dest));
      *(_QWORD *)&v48 = &off_6C8790;
      *((_QWORD *)&v48 + 1) = 1LL;
      v49 = (const char **)&byte_8;
      v50 = 0LL;
      core::panicking::panic_fmt(&v48, &off_6C87C0);
    }
    while ( 1 )
    {
      memcpy(dest, src, sizeof(dest));
      v32 = (const char *)dest;
      v33 = <alloc::string::String as core::fmt::Display>::fmt;
      v34 = (unsigned __int128 *)v62;
      v35 = <&T as core::fmt::Display>::fmt;
      v36 = 0LL;
      LOWORD(v37) = v38;
      v39 = "\x01";
      v40 = 2LL;
      v43 = &unk_88E50;
      v44 = 2LL;
      v41 = &v32;
      v42 = 3LL;
      <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v57, &v39);
      v41 = (const char **)dest[4];
      v42 = dest[4] + 24LL * dest[5];
      v24 = 0;
      v25 = 0LL;
      while ( 1 )
      {
        v26 = (const char **)v40;
        v39 = 0LL;
        if ( (v24 & 1) == 0 )
          break;
        if ( !v40 )
          goto LABEL_37;
LABEL_33:
        v27 = v26[2];
        v28 = (const char **)v27;
        if ( (unsigned __int64)&v27[v25 + 2] >= v61 )
        {
          *(_QWORD *)&v48 = asc_7F780;
          *((_QWORD *)&v48 + 1) = <&T as core::fmt::Display>::fmt;
          v49 = (const char **)v62;
          *(_QWORD *)&v50 = <&T as core::fmt::Display>::fmt;
          *((_QWORD *)&v50 + 1) = 0LL;
          v51 = v38;
          v32 = (const char *)&off_6C87A0;
          v33 = (__int64 (__fastcall *)())(&dword_0 + 2);
          v36 = &unk_88E50;
          v37 = 2LL;
          v34 = &v48;
          v35 = (__int64 (__fastcall *)())(&dword_0 + 3);
          <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v57, &v32);
          v28 = (const char **)v26[2];
          v25 = 0LL;
        }
        v29 = v26[1];
        v53 = 0;
        v52 = 0LL;
        v54 = v31;
        v55 = 21;
        v48 = __PAIR128__((unsigned __int64)v29, 0x8000000000000000LL);
        v49 = v28;
        *(_QWORD *)&v50 = 0x8000000000000002LL;
        v63[0] = &v48;
        v63[1] = <nu_ansi_term::display::AnsiGenericString<str> as core::fmt::Display>::fmt;
        v32 = asc_7F780;
        v33 = (__int64 (__fastcall *)())(&dword_0 + 1);
        v36 = 0LL;
        v34 = (unsigned __int128 *)v63;
        v35 = (__int64 (__fastcall *)())(&dword_0 + 1);
        <&mut W as core::fmt::Write::write_fmt::SpecWriteFmt>::spec_write_fmt(&v57, &v32);
        core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v48);
        if ( *(_QWORD *)core::option::Option<T>::get_or_insert_with(&v39, &v41) )
          <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
            &v57,
            &unk_88E48,
            &unk_88E4A);
        v25 += (__int64)(v27 + 2);
        v24 = (char)v39;
      }
      v26 = v41;
      if ( v41 != (const char **)v42 )
        break;
LABEL_37:
      <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(
        &v57,
        asc_84F00,
        aHome34r7hm4nCa_27);
      core::ptr::drop_in_place<syntect::parsing::syntax_set::SyntaxReference>(dest);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(src, &v59);
      if ( *(_QWORD *)src == 0x8000000000000000LL )
        goto LABEL_38;
    }
    v41 += 3;
    goto LABEL_33;
  }
LABEL_38:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<syntect::parsing::syntax_set::SyntaxReference>>(&v59);
LABEL_39:
  v30 = v56;
  *(_QWORD *)(v56 + 24) = v58;
  *(_OWORD *)(v30 + 8) = v57;
  *(_BYTE *)v30 = 13;
  core::ptr::drop_in_place<std::collections::hash::map::HashMap<&str,alloc::vec::Vec<alloc::string::String>>>(v66);
  return core::ptr::drop_in_place<bat::assets::HighlightingAssets>(&v67);
}