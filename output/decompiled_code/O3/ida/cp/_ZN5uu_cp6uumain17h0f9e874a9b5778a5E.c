__int64 __fastcall uu_cp::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // eax
  _OWORD *v4; // rax
  __int64 v5; // r15
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int64 (__fastcall **v9)(); // r12
  __int64 v10; // rdi
  _QWORD *v11; // rax
  _OWORD *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rax
  __int64 (__fastcall **v15)(); // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  _BYTE **v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // ebx
  __int64 (__fastcall *v22)(); // rdx
  unsigned int v23; // ebx
  _OWORD *v24; // rax
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int128 v32; // kr00_16
  __int64 v33; // rsi
  __int128 v35; // [rsp+0h] [rbp-4D8h] BYREF
  __m256i v36; // [rsp+10h] [rbp-4C8h]
  __int128 v37; // [rsp+30h] [rbp-4A8h]
  __int128 v38; // [rsp+40h] [rbp-498h]
  __int128 v39; // [rsp+50h] [rbp-488h]
  __int128 v40; // [rsp+60h] [rbp-478h]
  void *v41; // [rsp+70h] [rbp-468h] BYREF
  __int64 v42; // [rsp+78h] [rbp-460h]
  _BYTE **v43; // [rsp+80h] [rbp-458h]
  __int64 v44; // [rsp+88h] [rbp-450h]
  __int64 v45; // [rsp+90h] [rbp-448h]
  __int128 v46; // [rsp+A0h] [rbp-438h] BYREF
  __int64 v47; // [rsp+B0h] [rbp-428h]
  __int128 v48; // [rsp+C0h] [rbp-418h] BYREF
  __int64 v49; // [rsp+D0h] [rbp-408h]
  __int128 *v50; // [rsp+E0h] [rbp-3F8h] BYREF
  __int128 v51; // [rsp+E8h] [rbp-3F0h]
  __m256i v52; // [rsp+F8h] [rbp-3E0h]
  __int128 v53; // [rsp+118h] [rbp-3C0h]
  __int64 v54; // [rsp+128h] [rbp-3B0h]
  _OWORD v55[3]; // [rsp+130h] [rbp-3A8h] BYREF
  __int64 v56; // [rsp+160h] [rbp-378h]
  _BYTE *v57; // [rsp+168h] [rbp-370h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+170h] [rbp-368h]
  _OWORD v59[3]; // [rsp+178h] [rbp-360h] BYREF
  __int64 v60; // [rsp+1A8h] [rbp-330h]
  _QWORD v61[2]; // [rsp+1B0h] [rbp-328h] BYREF
  _BYTE v62[80]; // [rsp+1C0h] [rbp-318h] BYREF
  __int128 v63; // [rsp+210h] [rbp-2C8h]
  __int128 v64; // [rsp+220h] [rbp-2B8h]
  __int64 v65; // [rsp+490h] [rbp-48h] BYREF
  __int64 v66; // [rsp+498h] [rbp-40h]
  __int64 v67; // [rsp+4A0h] [rbp-38h]

  uu_cp::uu_app(v62);
  clap_builder::builder::command::Command::try_get_matches_from(v59, v62, a1, a2);
  if ( *(_QWORD *)&v59[0] == 0x8000000000000000LL )
  {
    v2 = *((_QWORD *)&v59[0] + 1);
    uu_cp::uu_app(v62);
    v3 = *(unsigned __int8 *)(v2 + 213);
    if ( v3 == 12 )
    {
      v14 = clap_builder::builder::command::Command::print_help(v62);
      if ( !v14 )
        goto LABEL_16;
      v5 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v14);
      v9 = v15;
      core::ptr::drop_in_place<clap_builder::builder::command::Command>(v62);
      core::ptr::drop_in_place<clap_builder::error::Error>(v2);
      if ( !v5 )
        return (unsigned int)uucore::mods::error::get_exit_code();
    }
    else
    {
      if ( v3 == 14 )
      {
        clap_builder::builder::command::Command::render_version(&v50, v62);
        *(_QWORD *)&v55[0] = &v50;
        *((_QWORD *)&v55[0] + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v35 = asc_18DC0;
        *((_QWORD *)&v35 + 1) = 1LL;
        v36.m256i_i64[0] = (__int64)v55;
        *(_OWORD *)&v36.m256i_u64[1] = 1uLL;
        ((void (__fastcall *)(__int128 *))std::io::stdio::_print)(&v35);
        <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v50);
        <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v50);
LABEL_16:
        core::ptr::drop_in_place<clap_builder::builder::command::Command>(v62);
        core::ptr::drop_in_place<clap_builder::error::Error>(v2);
        return (unsigned int)uucore::mods::error::get_exit_code();
      }
      v16 = _rust_alloc(16LL, 8LL);
      if ( !v16 )
        alloc::alloc::handle_alloc_error(8LL, 16LL);
      v5 = v16;
      *(_QWORD *)v16 = v2;
      *(_DWORD *)(v16 + 8) = 1;
      core::ptr::drop_in_place<clap_builder::builder::command::Command>(v62);
      v9 = &off_151B38;
    }
  }
  else
  {
    v56 = v60;
    v55[2] = v59[2];
    v55[1] = v59[1];
    v55[0] = v59[0];
    uu_cp::Options::from_matches(v62, v55);
    v35 = *(_OWORD *)&v62[8];
    v36 = *(__m256i *)&v62[24];
    v37 = *(_OWORD *)&v62[56];
    if ( *(_QWORD *)v62 == 0x8000000000000000LL )
    {
      *(_OWORD *)&v62[48] = v37;
      *(__m256i *)&v62[16] = v36;
      *(_OWORD *)v62 = v35;
      v4 = (_OWORD *)_rust_alloc(64LL, 8LL);
      if ( !v4 )
        alloc::alloc::handle_alloc_error(8LL, 64LL);
      v5 = (__int64)v4;
      v6 = *(_OWORD *)v62;
      v7 = *(_OWORD *)&v62[16];
      v8 = *(_OWORD *)&v62[32];
      v4[3] = *(_OWORD *)&v62[48];
      v4[2] = v8;
      v4[1] = v7;
      *v4 = v6;
      v9 = &off_151BE0;
    }
    else
    {
      v53 = v37;
      v51 = v35;
      v52 = v36;
      v50 = *(__int128 **)v62;
      v54 = *(_QWORD *)&v62[72];
      if ( BYTE4(v37) == 2 && (*(_QWORD *)&v62[72] & 0xFF00000000LL) != 0 )
      {
        alloc::raw_vec::RawVec<T,A>::try_allocate_in(v62, 56LL, 0LL);
        v10 = *(_QWORD *)&v62[8];
        if ( *(_QWORD *)v62 )
          alloc::raw_vec::handle_error(*(_QWORD *)&v62[8], *(_QWORD *)&v62[16]);
        v11 = *(_QWORD **)&v62[16];
        *(_OWORD *)(*(_QWORD *)&v62[16] + 32LL) = xmmword_19175;
        qmemcpy(v11, "options --backup and --no-clobbe", 32);
        v11[6] = 0x65766973756C6378LL;
        *(_DWORD *)&v62[24] = 1;
        *(_QWORD *)v62 = v10;
        *(_QWORD *)&v62[8] = v11;
        *(_QWORD *)&v62[16] = 56LL;
        v12 = (_OWORD *)_rust_alloc(32LL, 8LL);
        if ( !v12 )
          alloc::alloc::handle_alloc_error(8LL, 32LL);
        v5 = (__int64)v12;
        v13 = *(_OWORD *)v62;
        v12[1] = *(_OWORD *)&v62[16];
        *v12 = v13;
        v9 = &off_151C88;
      }
      else
      {
        clap_builder::parser::matches::arg_matches::ArgMatches::try_remove_many(v62, v55, aPaths, 5LL);
        clap_builder::parser::error::MatchesError::unwrap(&v35, aPaths, 5LL, v62);
        if ( (_QWORD)v35 )
        {
          v64 = v40;
          v63 = v39;
          *(_OWORD *)&v62[64] = v38;
          *(_OWORD *)&v62[48] = v37;
          *(__m256i *)&v62[16] = v36;
          *(_OWORD *)v62 = v35;
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v41, v62);
          v19 = (unsigned __int64)v41;
          v17 = v42;
          v18 = v43;
        }
        else
        {
          v19 = 0x8000000000000000LL;
        }
        if ( v19 == 0x8000000000000000LL )
          v18 = 0LL;
        v20 = 8LL;
        if ( v19 == 0x8000000000000000LL )
          v19 = 0LL;
        else
          v20 = v17;
        v41 = (void *)v19;
        v42 = v20;
        v43 = v18;
        uu_cp::parse_path_args(v62, &v41, &v50);
        v35 = *(_OWORD *)&v62[8];
        v36 = *(__m256i *)&v62[24];
        if ( *(_QWORD *)v62 == 13LL )
        {
          v47 = v36.m256i_i64[0];
          v46 = v35;
          v49 = v36.m256i_i64[3];
          v48 = *(_OWORD *)&v36.m256i_u64[1];
          uu_cp::copy(&v35, *((_QWORD *)&v35 + 1), v36.m256i_i64[0], v36.m256i_i64[2], v36.m256i_i64[3], &v50);
          v21 = v35;
          if ( (_QWORD)v35 != 13LL )
          {
            *(_OWORD *)v62 = v35;
            *(_OWORD *)&v62[48] = v37;
            *(__m256i *)&v62[16] = v36;
            if ( (_DWORD)v35 != 5 )
            {
              v57 = (_BYTE *)uucore::util_name();
              v58 = v22;
              v61[0] = &v57;
              v61[1] = <&T as core::fmt::Display>::fmt;
              v41 = &unk_151AA0;
              v42 = 2LL;
              v45 = 0LL;
              v43 = (_BYTE **)v61;
              v44 = 1LL;
              std::io::stdio::_eprint(&v41);
              v57 = v62;
              v58 = <uu_cp::Error as core::fmt::Display>::fmt;
              v41 = &unk_151AC0;
              v42 = 2LL;
              v45 = 0LL;
              v43 = &v57;
              v44 = 1LL;
              std::io::stdio::_eprint(&v41);
            }
            uucore::mods::error::set_exit_code(1LL);
            core::ptr::drop_in_place<uu_cp::Error>(v62);
          }
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v48);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v48);
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v46);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v46);
          core::ptr::drop_in_place<uu_cp::Options>(&v50);
          if ( v21 == 13 && (_DWORD)v35 != 13 )
            core::ptr::drop_in_place<uu_cp::Error>(&v35);
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v55);
          return (unsigned int)uucore::mods::error::get_exit_code();
        }
        *(__m256i *)&v62[24] = v36;
        *(_OWORD *)&v62[8] = v35;
        v24 = (_OWORD *)_rust_alloc(64LL, 8LL);
        if ( !v24 )
          alloc::alloc::handle_alloc_error(8LL, 64LL);
        v5 = (__int64)v24;
        v25 = *(_OWORD *)v62;
        v26 = *(_OWORD *)&v62[16];
        v27 = *(_OWORD *)&v62[32];
        v24[3] = *(_OWORD *)&v62[48];
        v24[2] = v27;
        v24[1] = v26;
        *v24 = v25;
        v9 = &off_151BE0;
      }
      core::ptr::drop_in_place<uu_cp::Options>(&v50);
    }
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v55);
  }
  *(_QWORD *)&v59[0] = v5;
  *((_QWORD *)&v59[0] + 1) = v9;
  *(_QWORD *)&v35 = v59;
  *((_QWORD *)&v35 + 1) = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  *(_QWORD *)v62 = asc_18DC0;
  *(_QWORD *)&v62[8] = 1LL;
  *(_QWORD *)&v62[32] = 0LL;
  *(_QWORD *)&v62[16] = &v35;
  *(_QWORD *)&v62[24] = 1LL;
  alloc::fmt::format::format_inner(&v65, v62);
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                           v66,
                           v67,
                           1LL,
                           0LL,
                           v28,
                           v29,
                           v65,
                           v66,
                           v67) )
  {
    v50 = (__int128 *)uucore::util_name();
    *(_QWORD *)&v51 = v30;
    *(_QWORD *)&v55[0] = &v50;
    *((_QWORD *)&v55[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v62 = &unk_151AA0;
    *(_QWORD *)&v62[8] = 2LL;
    *(_QWORD *)&v62[32] = 0LL;
    *(_QWORD *)&v62[16] = v55;
    *(_QWORD *)&v62[24] = 1LL;
    std::io::stdio::_eprint(v62);
    v50 = &v35;
    *(_QWORD *)&v51 = <alloc::string::String as core::fmt::Display>::fmt;
    *(_QWORD *)v62 = &unk_151AC0;
    *(_QWORD *)&v62[8] = 2LL;
    *(_QWORD *)&v62[32] = 0LL;
    *(_QWORD *)&v62[16] = &v50;
    *(_QWORD *)&v62[24] = 1LL;
    std::io::stdio::_eprint(v62);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v59[0] + 1) + 104LL))(*(_QWORD *)&v59[0]) )
  {
    v50 = (__int128 *)uucore::execution_phrase();
    *(_QWORD *)&v51 = v31;
    *(_QWORD *)&v55[0] = &v50;
    *((_QWORD *)&v55[0] + 1) = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v62 = &off_151AE0;
    *(_QWORD *)&v62[8] = 2LL;
    *(_QWORD *)&v62[32] = 0LL;
    *(_QWORD *)&v62[16] = v55;
    *(_QWORD *)&v62[24] = 1LL;
    std::io::stdio::_eprint(v62);
  }
  v23 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v59[0] + 1) + 96LL))(*(_QWORD *)&v59[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v35);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v35);
  v32 = v59[0];
  if ( **((_QWORD **)&v59[0] + 1) )
    (**((void (__fastcall ***)(_QWORD))&v59[0] + 1))(*(_QWORD *)&v59[0]);
  v33 = *(_QWORD *)(*((_QWORD *)&v32 + 1) + 8LL);
  if ( v33 )
    _rust_dealloc(v32, v33, *(_QWORD *)(*((_QWORD *)&v32 + 1) + 16LL));
  return v23;
}
