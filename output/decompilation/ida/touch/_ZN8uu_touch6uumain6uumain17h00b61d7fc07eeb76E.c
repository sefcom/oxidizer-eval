__int64 __fastcall uu_touch::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 flag; // r15
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  const char *v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  int v17; // ecx
  int v18; // esi
  __int64 *v19; // r14
  __int64 v20; // r13
  __int64 v21; // rsi
  __int64 v22; // r15
  unsigned __int64 v23; // r12
  char v24; // bp
  char v25; // bl
  char v26; // al
  char v27; // [rsp+Fh] [rbp-459h]
  unsigned __int64 v28; // [rsp+10h] [rbp-458h]
  __int64 v29; // [rsp+18h] [rbp-450h]
  __int128 v30; // [rsp+20h] [rbp-448h]
  __int128 v31; // [rsp+30h] [rbp-438h] BYREF
  __int64 v32; // [rsp+40h] [rbp-428h]
  __int128 v33; // [rsp+50h] [rbp-418h]
  __int64 v34; // [rsp+60h] [rbp-408h]
  __int64 v35; // [rsp+68h] [rbp-400h]
  char v36[8]; // [rsp+70h] [rbp-3F8h] BYREF
  __int64 v37; // [rsp+78h] [rbp-3F0h]
  __int64 v38; // [rsp+80h] [rbp-3E8h]
  _QWORD v39[2]; // [rsp+88h] [rbp-3E0h] BYREF
  __int128 v40; // [rsp+98h] [rbp-3D0h]
  __int128 v41; // [rsp+A8h] [rbp-3C0h]
  __int64 v42; // [rsp+B8h] [rbp-3B0h]
  __int64 v43; // [rsp+C0h] [rbp-3A8h] BYREF
  _BYTE v44[48]; // [rsp+C8h] [rbp-3A0h]
  __int64 v45; // [rsp+F8h] [rbp-370h]
  __int64 v46; // [rsp+100h] [rbp-368h] BYREF
  __int128 v47; // [rsp+108h] [rbp-360h]
  __int128 v48; // [rsp+118h] [rbp-350h]
  __int64 v49; // [rsp+128h] [rbp-340h]
  __int64 v50; // [rsp+130h] [rbp-338h] BYREF
  __int128 v51; // [rsp+138h] [rbp-330h]
  __int128 v52; // [rsp+148h] [rbp-320h]
  __int128 v53; // [rsp+158h] [rbp-310h]
  __int64 v54; // [rsp+168h] [rbp-300h]
  __int128 dest; // [rsp+170h] [rbp-2F8h] BYREF
  __int64 v56; // [rsp+180h] [rbp-2E8h]
  __int128 v57; // [rsp+188h] [rbp-2E0h]
  __int64 v58; // [rsp+198h] [rbp-2D0h]
  char v59; // [rsp+1A0h] [rbp-2C8h]
  char v60; // [rsp+1A1h] [rbp-2C7h]
  char v61; // [rsp+1A2h] [rbp-2C6h]
  char v62; // [rsp+1A3h] [rbp-2C5h]

  uu_touch::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v43, &dest, a1, a2);
  if ( __OFSUB__(-v43, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *(_QWORD *)v44,
             &dest,
             v2,
             -v43);
  v42 = *(_QWORD *)&v44[40];
  v41 = *(_OWORD *)&v44[24];
  v40 = *(_OWORD *)&v44[8];
  v39[0] = v43;
  v39[1] = *(_QWORD *)v44;
  v4 = (__int64)*(&uu_touch::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v39, aFiles, v4);
  clap_builder::parser::error::MatchesError::unwrap(&v43, aFiles, v4, &dest);
  if ( !v43 )
  {
    v11 = uu_touch::uumain::uumain::{{closure}}();
LABEL_34:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
    return v11;
  }
  v54 = v45;
  v53 = *(_OWORD *)&v44[32];
  v52 = *(_OWORD *)&v44[16];
  v50 = v43;
  v51 = *(_OWORD *)v44;
  core::iter::traits::iterator::Iterator::collect(&v31, &v50);
  flag = (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                         v39,
                         aNoDereference,
                         *(&uu_touch::options::NO_DEREF + 1));
  v6 = (__int64)*(&uu_touch::options::sources::REFERENCE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v39, aReference, v6);
  v7 = clap_builder::parser::error::MatchesError::unwrap(aReference, v6, &dest);
  v8 = (__int64)*(&uu_touch::options::sources::DATE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v39, "datethur]", v8);
  v9 = clap_builder::parser::error::MatchesError::unwrap("datethur]", v8, &dest);
  v10 = 0x8000000000000000LL;
  v27 = flag;
  if ( v9 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&dest, v9);
    flag = *((_QWORD *)&dest + 1);
    v10 = dest;
    v35 = v56;
  }
  v12 = aTimestamp;
  v13 = (__int64)*(&uu_touch::options::sources::TIMESTAMP + 1);
  *((_QWORD *)&v30 + 1) = flag;
  *(_QWORD *)&v30 = v10;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v39, aTimestamp, v13);
  v14 = clap_builder::parser::error::MatchesError::unwrap(aTimestamp, v13, &dest);
  if ( v14 )
  {
    <alloc::string::String as core::clone::Clone>::clone(&dest, v14);
    v15 = *((_QWORD *)&dest + 1);
    v16 = dest;
    v12 = (const char *)v56;
  }
  else
  {
    v16 = 0x8000000000000000LL;
  }
  v17 = 0;
  v18 = flag;
  if ( v10 == 0x8000000000000000LL )
    v18 = 0;
  v28 = v16;
  v29 = v15;
  if ( v16 != 0x8000000000000000LL )
    v17 = v15;
  v19 = (__int64 *)*((_QWORD *)&v31 + 1);
  v20 = v32;
  if ( !(unsigned __int8)uu_touch::is_first_filename_timestamp(v7, v18, v35, v17, (_DWORD)v12, DWORD2(v31), v32) )
  {
    v22 = v29;
    v23 = v16;
    if ( !v7 )
      goto LABEL_22;
LABEL_19:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, *(_QWORD *)(v7 + 8), *(_QWORD *)(v7 + 16));
    v34 = v56;
    v33 = dest;
    v24 = 1;
    goto LABEL_27;
  }
  if ( !v20 )
    core::panicking::panic_bounds_check(0LL, 0LL, &off_2784A8);
  v21 = *v19;
  if ( *(_QWORD *)(*v19 + 16) == 10LL )
    uu_touch::shr2(&dest, *(_QWORD *)(v21 + 8), 10LL);
  else
    <alloc::string::String as core::clone::Clone>::clone(&dest, v21);
  v22 = *((_QWORD *)&dest + 1);
  v23 = dest;
  v12 = (const char *)v56;
  core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v16, v29);
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, v19 + 1, v20 - 1);
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v31, v19);
  v32 = v56;
  v31 = dest;
  v29 = v22;
  v28 = v23;
  if ( v7 )
    goto LABEL_19;
LABEL_22:
  if ( v23 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v33 = 0x8000000000000001LL;
    v24 = 1;
    goto LABEL_27;
  }
  uu_touch::parse_timestamp(&dest, v22, v12);
  v11 = *((_QWORD *)&dest + 1);
  if ( (_DWORD)dest == 1 )
  {
    core::ptr::drop_in_place<alloc::string::String>(v28, v29);
    core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(v30, *((_QWORD *)&v30 + 1));
    core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v31, *((_QWORD *)&v31 + 1));
    goto LABEL_34;
  }
  *((_QWORD *)&v33 + 1) = *((_QWORD *)&dest + 1);
  LODWORD(v34) = v56;
  *(_QWORD *)&v33 = 0x8000000000000000LL;
  core::ptr::drop_in_place<alloc::string::String>(v28, v29);
  v24 = 0;
LABEL_27:
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(&dest, &v31);
  core::iter::traits::iterator::Iterator::collect(v36, &dest);
  v25 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
          v39,
          aNoCreate,
          *(&uu_touch::options::NO_CREATE + 1));
  v26 = uu_touch::determine_atime_mtime_change(v39);
  v59 = v25;
  v60 = v27;
  v57 = v33;
  v58 = v34;
  dest = v30;
  v56 = v35;
  v62 = v26;
  v61 = 0;
  uu_touch::touch(&v46, v37, v38, &dest);
  if ( v46 != 0x8000000000000004LL )
  {
    *(_QWORD *)&v44[32] = v49;
    *(_OWORD *)&v44[16] = v48;
    *(_OWORD *)v44 = v47;
    v43 = v46;
    v11 = alloc::boxed::Box<T>::new(&v43);
    core::ptr::drop_in_place<uu_touch::Options>(&dest);
    core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>(v36);
    if ( ((unsigned __int8)v24 & (v28 != 0x8000000000000000LL)) == 1 )
      core::ptr::drop_in_place<alloc::string::String>(v28, v29);
    goto LABEL_34;
  }
  core::ptr::drop_in_place<uu_touch::Options>(&dest);
  core::ptr::drop_in_place<alloc::vec::Vec<uu_touch::InputFile>>(v36);
  if ( v28 != 0x8000000000000000LL )
  {
    if ( v24 )
      core::ptr::drop_in_place<alloc::string::String>(v28, v29);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v39);
  return 0LL;
}