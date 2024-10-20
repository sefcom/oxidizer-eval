__int64 __fastcall uu_ptx::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int128 v8; // kr00_16
  __int64 v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rax
  _QWORD *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  char **v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // [rsp+0h] [rbp-4D8h] BYREF
  __int64 v21; // [rsp+8h] [rbp-4D0h]
  __int64 v22; // [rsp+10h] [rbp-4C8h]
  _OWORD v23[3]; // [rsp+18h] [rbp-4C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-490h]
  _BYTE v25[56]; // [rsp+50h] [rbp-488h] BYREF
  __int128 v26; // [rsp+88h] [rbp-450h]
  __int128 v27; // [rsp+98h] [rbp-440h]
  __int128 v28; // [rsp+A8h] [rbp-430h]
  __int128 v29; // [rsp+B8h] [rbp-420h]
  __int64 v30; // [rsp+C8h] [rbp-410h]
  char **v31; // [rsp+D0h] [rbp-408h] BYREF
  __int128 v32; // [rsp+D8h] [rbp-400h]
  __int128 v33; // [rsp+E8h] [rbp-3F0h]
  __int128 v34; // [rsp+F8h] [rbp-3E0h]
  __int128 v35; // [rsp+108h] [rbp-3D0h]
  __int128 v36; // [rsp+118h] [rbp-3C0h]
  __int64 v37; // [rsp+128h] [rbp-3B0h]
  __int64 v38; // [rsp+130h] [rbp-3A8h] BYREF
  __int64 v39; // [rsp+138h] [rbp-3A0h]
  __int64 v40; // [rsp+140h] [rbp-398h]
  __int128 v41; // [rsp+148h] [rbp-390h]
  __int64 v42; // [rsp+158h] [rbp-380h]
  char ***v43; // [rsp+160h] [rbp-378h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+168h] [rbp-370h]
  __int128 v45; // [rsp+170h] [rbp-368h]
  __int128 v46; // [rsp+180h] [rbp-358h]
  __int64 v47; // [rsp+190h] [rbp-348h]
  __int64 v48; // [rsp+198h] [rbp-340h]
  _QWORD v49[3]; // [rsp+1A0h] [rbp-338h] BYREF
  __int128 v50; // [rsp+1B8h] [rbp-320h]
  __int64 v51; // [rsp+1C8h] [rbp-310h]
  __int128 v52; // [rsp+1D0h] [rbp-308h] BYREF
  __int64 v53; // [rsp+1E0h] [rbp-2F8h]
  char **v54; // [rsp+1E8h] [rbp-2F0h] BYREF
  _BYTE v55[48]; // [rsp+1F0h] [rbp-2E8h] BYREF
  __int128 v56; // [rsp+220h] [rbp-2B8h]
  __int128 v57; // [rsp+230h] [rbp-2A8h]
  __int128 v58; // [rsp+240h] [rbp-298h]
  __int128 v59; // [rsp+250h] [rbp-288h]
  __int64 v60; // [rsp+260h] [rbp-278h]

  uu_ptx::uu_app(&v54);
  clap_builder::builder::command::Command::try_get_matches_from(v25, &v54, a1, a2);
  if ( *(_QWORD *)v25 != 0x8000000000000000LL )
  {
    v24 = *(_QWORD *)&v25[48];
    v23[2] = *(_OWORD *)&v25[32];
    v23[1] = *(_OWORD *)&v25[16];
    v23[0] = *(_OWORD *)v25;
    v10 = (__int64)*(&uu_ptx::options::FILE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v54, v23, "filemode{", v10);
    clap_builder::parser::error::MatchesError::unwrap(v25, "filemode{", v10, &v54);
    if ( *(_QWORD *)v25 )
    {
      <core::iter::adapters::flatten::Flatten<I> as core::clone::Clone>::clone(v55, &v25[8]);
      v54 = *(char ***)v25;
      v45 = *(_OWORD *)&v55[8];
      v46 = *(_OWORD *)&v55[24];
      v47 = *(_QWORD *)&v55[40];
      v43 = *(char ****)v25;
      v44 = *(__int64 (__fastcall **)())v55;
      v48 = v26;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v20, &v43);
    }
    else
    {
      v11 = _rust_alloc(24LL, 8LL);
      if ( !v11 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v12 = (_QWORD *)v11;
      alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v54, 1LL, 0LL);
      v13 = *(_QWORD *)v55;
      if ( v54 )
        alloc::raw_vec::handle_error(*(_QWORD *)v55, *(_QWORD *)&v55[8]);
      v14 = *(_QWORD *)&v55[8];
      **(_BYTE **)&v55[8] = 45;
      *v12 = v13;
      v12[1] = v14;
      v12[2] = 1LL;
      alloc::slice::hack::into_vec(&v20, v12, 1LL);
    }
    uu_ptx::get_config(&v54, v23);
    v4 = *(_QWORD *)&v55[8];
    v2 = *(_QWORD *)v55;
    if ( v54 != (char **)0x8000000000000000LL )
    {
      v37 = v58;
      v36 = v57;
      v35 = v56;
      v34 = *(_OWORD *)&v55[32];
      v33 = *(_OWORD *)&v55[16];
      v31 = v54;
      v32 = *(_OWORD *)v55;
      uu_ptx::WordFilter::new(&v54, v23, &v31);
      v4 = *(_QWORD *)&v55[8];
      v2 = *(_QWORD *)v55;
      if ( v54 != (char **)0x8000000000000000LL )
      {
        v30 = v60;
        v29 = v59;
        v28 = v58;
        v27 = v57;
        v26 = v56;
        *(_OWORD *)&v25[40] = *(_OWORD *)&v55[32];
        *(_OWORD *)&v25[24] = *(_OWORD *)&v55[16];
        *(_QWORD *)v25 = v54;
        *(_OWORD *)&v25[8] = *(_OWORD *)v55;
        uu_ptx::read_input(&v54, v21, v22, &v31);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          &v38,
          &v54);
        v2 = v39;
        v4 = v40;
        if ( v38 )
        {
          v51 = v42;
          v50 = v41;
          v49[0] = v38;
          v49[1] = v39;
          v49[2] = v40;
          uu_ptx::create_word_set(&v38, &v31, v25, v49);
          if ( (_BYTE)v37 || v22 != 2 )
          {
            alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v54, 1LL, 0LL);
            v18 = *(char ***)v55;
            if ( v54 )
              alloc::raw_vec::handle_error(*(_QWORD *)v55, *(_QWORD *)&v55[8]);
            v15 = *(_QWORD *)&v55[8];
            **(_BYTE **)&v55[8] = 45;
            v54 = v18;
            *(_QWORD *)v55 = v15;
            *(_QWORD *)&v55[8] = 1LL;
            v16 = 1LL;
          }
          else
          {
            v22 = 1LL;
            if ( *(_QWORD *)(v21 + 24) == 0x8000000000000000LL )
              core::option::unwrap_failed(&off_278738);
            v54 = *(char ***)(v21 + 24);
            *(_OWORD *)v55 = *(_OWORD *)(v21 + 32);
            v16 = *(_QWORD *)&v55[8];
            v15 = *(_QWORD *)v55;
          }
          v2 = uu_ptx::write_traditional_output(&v31, v49, &v38, v15, v16);
          v4 = v19;
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v54);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v54);
          <alloc::collections::btree::map::BTreeMap<K,V,A> as core::ops::drop::Drop>::drop(&v38);
          <hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(v49);
          core::ptr::drop_in_place<uu_ptx::WordFilter>(v25);
          core::ptr::drop_in_place<uu_ptx::Config>(&v31);
          <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v20);
          <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v20);
LABEL_26:
          core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v23);
          if ( v2 )
            goto LABEL_3;
          return (unsigned int)uucore::mods::error::get_exit_code();
        }
        core::ptr::drop_in_place<uu_ptx::WordFilter>(v25);
      }
      core::ptr::drop_in_place<uu_ptx::Config>(&v31);
    }
    <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(&v20);
    <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(&v20);
    goto LABEL_26;
  }
  v2 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)&v25[8]);
  v4 = v3;
  if ( !v2 )
    return (unsigned int)uucore::mods::error::get_exit_code();
LABEL_3:
  *(_QWORD *)&v23[0] = v2;
  *((_QWORD *)&v23[0] + 1) = v4;
  *(_QWORD *)v25 = v23;
  *(_QWORD *)&v25[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
  v54 = (char **)&anon_ed1ebb40829bf58f514fb8171dd91230_55_llvm_9077216822178002531;
  *(_QWORD *)v55 = 1LL;
  *(_QWORD *)&v55[8] = v25;
  *(_OWORD *)&v55[16] = 1uLL;
  alloc::fmt::format::format_inner(&v52, &v54);
  *(_OWORD *)v25 = v52;
  *(_QWORD *)&v25[16] = v53;
  if ( !(unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((_QWORD *)&v52 + 1), v53, 1LL, 0LL) )
  {
    v31 = (char **)uucore::util_name();
    *(_QWORD *)&v32 = v5;
    v43 = &v31;
    v44 = <&T as core::fmt::Display>::fmt;
    v54 = (char **)&unk_2786D8;
    *(_QWORD *)v55 = 2LL;
    *(_QWORD *)&v55[8] = &v43;
    *(_OWORD *)&v55[16] = 1uLL;
    std::io::stdio::_eprint(&v54);
    v31 = (char **)v25;
    *(_QWORD *)&v32 = <alloc::string::String as core::fmt::Display>::fmt;
    v54 = (char **)&unk_2786F8;
    *(_QWORD *)v55 = 2LL;
    *(_QWORD *)&v55[8] = &v31;
    *(_OWORD *)&v55[16] = 1uLL;
    std::io::stdio::_eprint(&v54);
  }
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*((_QWORD *)&v23[0] + 1) + 104LL))(*(_QWORD *)&v23[0]) )
  {
    v31 = (char **)uucore::execution_phrase();
    *(_QWORD *)&v32 = v6;
    v43 = &v31;
    v44 = <&T as core::fmt::Display>::fmt;
    v54 = &off_278718;
    *(_QWORD *)v55 = 2LL;
    *(_QWORD *)&v55[8] = &v43;
    *(_OWORD *)&v55[16] = 1uLL;
    std::io::stdio::_eprint(&v54);
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)&v23[0] + 1) + 96LL))(*(_QWORD *)&v23[0]);
  <alloc::vec::Vec<T,A> as core::ops::drop::Drop>::drop(v25);
  <alloc::raw_vec::RawVec<T,A> as core::ops::drop::Drop>::drop(v25);
  v8 = v23[0];
  if ( **((_QWORD **)&v23[0] + 1) )
    (**((void (__fastcall ***)(_QWORD))&v23[0] + 1))(*(_QWORD *)&v23[0]);
  v9 = *(_QWORD *)(*((_QWORD *)&v8 + 1) + 8LL);
  if ( v9 )
    _rust_dealloc(v8, v9, *(_QWORD *)(*((_QWORD *)&v8 + 1) + 16LL));
  return v7;
}
