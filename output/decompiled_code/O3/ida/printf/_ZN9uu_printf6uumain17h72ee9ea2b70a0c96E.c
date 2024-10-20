__int64 __fastcall uu_printf::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __m256i *v7; // rax
  __m256i *v8; // rbx
  __int128 v9; // xmm0
  __int64 (__fastcall **v10)(); // rax
  __int64 v11; // rcx
  char v12; // r13
  __int64 v13; // rax
  __m256i *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __m256i *v17; // rax
  __int128 v18; // rax
  __int128 v19; // rax
  unsigned int v20; // ebx
  __int128 v21; // kr00_16
  __int64 v22; // rsi
  __m256i v24; // [rsp+0h] [rbp-4B8h]
  __int128 v25; // [rsp+0h] [rbp-4B8h]
  __int128 v26; // [rsp+10h] [rbp-4A8h]
  __int64 v27; // [rsp+28h] [rbp-490h] BYREF
  __int64 v28; // [rsp+30h] [rbp-488h]
  __int64 v29; // [rsp+38h] [rbp-480h]
  _BYTE v30[39]; // [rsp+40h] [rbp-478h] BYREF
  __int64 v31; // [rsp+68h] [rbp-450h] BYREF
  __int64 v32; // [rsp+70h] [rbp-448h]
  __int64 v33; // [rsp+78h] [rbp-440h]
  __int64 v34; // [rsp+80h] [rbp-438h]
  __int64 v35; // [rsp+88h] [rbp-430h] BYREF
  __int64 v36; // [rsp+90h] [rbp-428h]
  __int32 v37; // [rsp+98h] [rbp-420h] BYREF
  __int8 v38; // [rsp+9Ch] [rbp-41Ch]
  _BYTE v39[27]; // [rsp+9Dh] [rbp-41Bh]
  _BYTE *v40; // [rsp+B8h] [rbp-400h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+C0h] [rbp-3F8h]
  _BYTE v42[48]; // [rsp+F0h] [rbp-3C8h] BYREF
  __int128 v43; // [rsp+120h] [rbp-398h]
  __int64 v44; // [rsp+130h] [rbp-388h]
  __int64 v45; // [rsp+138h] [rbp-380h]
  __int128 v46; // [rsp+140h] [rbp-378h] BYREF
  __int128 v47; // [rsp+150h] [rbp-368h]
  __int128 v48; // [rsp+160h] [rbp-358h]
  __int128 v49; // [rsp+170h] [rbp-348h]
  _BYTE v50[39]; // [rsp+180h] [rbp-338h]
  __int128 v51; // [rsp+1A8h] [rbp-310h] BYREF
  __int64 v52; // [rsp+1B8h] [rbp-300h]
  _BYTE v53[760]; // [rsp+1C0h] [rbp-2F8h] BYREF

  uu_printf::uu_app(v53);
  clap_builder::builder::command::Command::get_matches_from(&v40, v53, a1, a2);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(v53, &v40, aFormatstring, 12LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(aFormatstring, 12LL, v53);
  if ( !v2 )
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(v53, 15LL, 0LL);
    v5 = *(_QWORD *)&v53[8];
    if ( *(_QWORD *)v53 )
      alloc::raw_vec::handle_error(*(_QWORD *)&v53[8], *(_QWORD *)&v53[16]);
    v6 = *(_QWORD **)&v53[16];
    *(_QWORD *)(*(_QWORD *)&v53[16] + 7LL) = 0x646E617265706F20LL;
    *v6 = 0x20676E697373696DLL;
    *(_DWORD *)&v53[24] = 1;
    *(_QWORD *)v53 = v5;
    *(_QWORD *)&v53[8] = v6;
    *(_QWORD *)&v53[16] = 15LL;
    v7 = (__m256i *)_rust_alloc(32LL, 8LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v8 = v7;
    v9 = *(_OWORD *)v53;
    *(_OWORD *)&v7->m256i_u64[2] = *(_OWORD *)&v53[16];
    *(_OWORD *)v7->m256i_i8 = v9;
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
    v10 = &off_E9C40;
    goto LABEL_40;
  }
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(v53, &v40, aArgument_0, 8LL);
  clap_builder::parser::error::MatchesError::unwrap(v42, aArgument_0, 8LL, v53);
  if ( *(_QWORD *)v42 )
  {
    v49 = v43;
    v48 = *(_OWORD *)&v42[32];
    v47 = *(_OWORD *)&v42[16];
    v46 = *(_OWORD *)v42;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v27, &v46);
    v3 = v28;
    v4 = v29;
  }
  else
  {
    v27 = 0LL;
    v28 = 8LL;
    v29 = 0LL;
    v3 = 8LL;
    v4 = 0LL;
  }
  v33 = v3;
  v34 = v3 + 32 * v4;
  v31 = 0LL;
  v11 = *(_QWORD *)(v2 + 16);
  v45 = *(_QWORD *)(v2 + 8);
  v35 = v45;
  v44 = v11;
  v36 = v11;
  v12 = 0;
  while ( 1 )
  {
    uucore::features::format::parse_spec_and_escape::{{closure}}(v42, &v35);
    if ( v42[0] == 9 )
      break;
    *(_QWORD *)&v50[31] = *(_QWORD *)&v42[32];
    *(_OWORD *)&v50[16] = *(_OWORD *)&v42[17];
    *(_OWORD *)v50 = *(_OWORD *)&v42[1];
    if ( (unsigned __int8)(v42[0] - 7) >= 2u )
    {
      v12 = 1;
    }
    else if ( v42[0] == 8 )
    {
      v26 = *(_OWORD *)&v50[23];
      v25 = *(_OWORD *)&v50[7];
      v17 = (__m256i *)_rust_alloc(32LL, 8LL);
      if ( !v17 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_37:
      v8 = v17;
      *(_OWORD *)&v17->m256i_u64[2] = v26;
      *(_OWORD *)v17->m256i_i8 = v25;
LABEL_38:
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v27);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v27);
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
      if ( !v8 )
        return (unsigned int)uucore::mods::error::get_exit_code();
      v10 = &off_E9CE8;
LABEL_40:
      *(_QWORD *)v30 = v8;
      *(_QWORD *)&v30[8] = v10;
      *(_QWORD *)&v46 = v30;
      *((_QWORD *)&v46 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      *(_QWORD *)v53 = &unk_10BE0;
      *(_QWORD *)&v53[8] = 1LL;
      *(_QWORD *)&v53[32] = 0LL;
      *(_QWORD *)&v53[16] = &v46;
      *(_QWORD *)&v53[24] = 1LL;
      alloc::fmt::format::format_inner(&v51, v53);
      v46 = v51;
      *(_QWORD *)&v47 = v52;
      if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v51 + 1), v52, 1LL, 0LL) )
      {
        *(_QWORD *)&v18 = uucore::util_name();
        *(_OWORD *)v42 = v18;
        v40 = v42;
        v41 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v53 = &unk_E9BA8;
        *(_QWORD *)&v53[8] = 2LL;
        *(_QWORD *)&v53[32] = 0LL;
        *(_QWORD *)&v53[16] = &v40;
        *(_QWORD *)&v53[24] = 1LL;
        std::io::stdio::_eprint(v53);
        *(_QWORD *)v42 = &v46;
        *(_QWORD *)&v42[8] = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)v53 = &unk_E9BC8;
        *(_QWORD *)&v53[8] = 2LL;
        *(_QWORD *)&v53[32] = 0LL;
        *(_QWORD *)&v53[16] = v42;
        *(_QWORD *)&v53[24] = 1LL;
        std::io::stdio::_eprint(v53);
      }
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)&v30[8] + 104LL))(*(_QWORD *)v30) )
      {
        *(_QWORD *)&v19 = uucore::execution_phrase();
        *(_OWORD *)v42 = v19;
        v40 = v42;
        v41 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)v53 = &off_E9BE8;
        *(_QWORD *)&v53[8] = 2LL;
        *(_QWORD *)&v53[32] = 0LL;
        *(_QWORD *)&v53[16] = &v40;
        *(_QWORD *)&v53[24] = 1LL;
        std::io::stdio::_eprint(v53);
      }
      v20 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)&v30[8] + 96LL))(*(_QWORD *)v30);
      <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
      <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
      v21 = *(_OWORD *)v30;
      if ( **(_QWORD **)&v30[8] )
        (**(void (__fastcall ***)(_QWORD))&v30[8])(*(_QWORD *)v30);
      v22 = *(_QWORD *)(*((_QWORD *)&v21 + 1) + 8LL);
      if ( v22 )
        _rust_dealloc(v21, v22, *(_QWORD *)(*((_QWORD *)&v21 + 1) + 16LL));
      return v20;
    }
    *(_QWORD *)&v53[32] = *(_QWORD *)&v42[32];
    *(_OWORD *)&v53[17] = *(_OWORD *)&v42[17];
    *(_OWORD *)&v53[1] = *(_OWORD *)&v42[1];
    v53[0] = v42[0];
    v13 = std::io::stdio::stdout();
    uucore::features::format::FormatItem<C>::write(&v37, v53, v13, &v31);
    if ( v37 != 14 )
    {
      *(_OWORD *)&v24.m256i_u64[2] = *(_OWORD *)&v39[11];
      *(_OWORD *)&v24.m256i_u8[5] = *(_OWORD *)v39;
      v24.m256i_i32[0] = v37;
      v24.m256i_i8[4] = v38;
      v14 = (__m256i *)_rust_alloc(32LL, 8LL);
      if ( !v14 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_20:
      v8 = v14;
      *v14 = v24;
      goto LABEL_38;
    }
    if ( v38 )
    {
LABEL_16:
      v8 = 0LL;
      goto LABEL_38;
    }
  }
  if ( (v12 & 1) == 0 )
  {
    v8 = 0LL;
    goto LABEL_38;
  }
  while ( v31 )
  {
    if ( !v32 )
      goto LABEL_50;
LABEL_28:
    v35 = v45;
    v36 = v44;
    while ( 1 )
    {
      uucore::features::format::parse_spec_and_escape::{{closure}}(v42, &v35);
      if ( v42[0] == 9 )
        break;
      *(_QWORD *)&v30[31] = *(_QWORD *)&v42[32];
      *(_OWORD *)&v30[16] = *(_OWORD *)&v42[17];
      *(_OWORD *)v30 = *(_OWORD *)&v42[1];
      if ( v42[0] == 8 )
      {
        v26 = *(_OWORD *)&v30[23];
        v25 = *(_OWORD *)&v30[7];
        v17 = (__m256i *)_rust_alloc(32LL, 8LL);
        if ( !v17 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_37;
      }
      *(_QWORD *)&v53[32] = *(_QWORD *)&v42[32];
      *(_OWORD *)&v53[17] = *(_OWORD *)&v42[17];
      *(_OWORD *)&v53[1] = *(_OWORD *)&v42[1];
      v53[0] = v42[0];
      v16 = std::io::stdio::stdout();
      uucore::features::format::FormatItem<C>::write(&v37, v53, v16, &v31);
      if ( v37 != 14 )
      {
        *(_OWORD *)&v24.m256i_u64[2] = *(_OWORD *)&v39[11];
        *(_OWORD *)&v24.m256i_u8[5] = *(_OWORD *)v39;
        v24.m256i_i32[0] = v37;
        v24.m256i_i8[4] = v38;
        v14 = (__m256i *)_rust_alloc(32LL, 8LL);
        if ( !v14 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        goto LABEL_20;
      }
      if ( v38 )
        goto LABEL_16;
    }
  }
  v15 = v33;
  if ( v33 == v34 )
    v15 = 0LL;
  else
    v33 += 32LL;
  v31 = 1LL;
  v32 = v15;
  if ( v15 )
    goto LABEL_28;
LABEL_50:
  core::ptr::drop_in_place<alloc::vec::Vec<uucore::features::format::argument::FormatArgument>>(&v27);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v40);
  return (unsigned int)uucore::mods::error::get_exit_code();
}
