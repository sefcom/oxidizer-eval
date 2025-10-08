__int64 __fastcall uu_pr::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r15
  __int128 v15; // [rsp+0h] [rbp-6F8h] BYREF
  __int64 v16; // [rsp+10h] [rbp-6E8h]
  _BYTE v17[8]; // [rsp+18h] [rbp-6E0h] BYREF
  __int64 v18; // [rsp+20h] [rbp-6D8h]
  __int64 v19; // [rsp+28h] [rbp-6D0h]
  __int128 v20; // [rsp+30h] [rbp-6C8h] BYREF
  __int128 v21; // [rsp+40h] [rbp-6B8h]
  unsigned __int64 v22; // [rsp+58h] [rbp-6A0h]
  __int64 v23; // [rsp+60h] [rbp-698h]
  __int64 v24; // [rsp+68h] [rbp-690h]
  _QWORD v25[3]; // [rsp+70h] [rbp-688h] BYREF
  _QWORD v26[2]; // [rsp+88h] [rbp-670h] BYREF
  __int128 v27; // [rsp+98h] [rbp-660h]
  __int128 v28; // [rsp+A8h] [rbp-650h]
  __int64 v29; // [rsp+B8h] [rbp-640h]
  _OWORD v30[2]; // [rsp+C0h] [rbp-638h] BYREF
  _QWORD v31[3]; // [rsp+E0h] [rbp-618h] BYREF
  _BYTE v32[32]; // [rsp+F8h] [rbp-600h] BYREF
  _BYTE v33[24]; // [rsp+118h] [rbp-5E0h] BYREF
  _BYTE dest[328]; // [rsp+130h] [rbp-5C8h] BYREF
  _QWORD v35[8]; // [rsp+278h] [rbp-480h] BYREF
  _QWORD src[41]; // [rsp+2B8h] [rbp-440h] BYREF
  _BYTE v37[760]; // [rsp+400h] [rbp-2F8h] BYREF

  uucore::Args::collect_ignore(v17, a1, a2);
  uu_pr::recreate_arguments(v33, v18, v19);
  uu_pr::uu_app(v37);
  clap_builder::builder::command::Command::try_get_matches_from_mut(dest, v37, v33);
  if ( __OFSUB__(-*(_QWORD *)dest, 1LL) )
  {
    v3 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           *(_QWORD *)&dest[8],
           v37,
           v2,
           -*(_QWORD *)dest);
LABEL_25:
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(v37);
    goto LABEL_26;
  }
  v29 = *(_QWORD *)&dest[48];
  v28 = *(_OWORD *)&dest[32];
  v27 = *(_OWORD *)&dest[16];
  v26[0] = *(_QWORD *)dest;
  v26[1] = *(_QWORD *)&dest[8];
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v26);
  clap_builder::parser::error::MatchesError::unwrap(v35, dest);
  if ( v35[0]
    && (core::iter::traits::iterator::Iterator::collect(dest, v35),
        v4 = *(_QWORD *)dest,
        *(_QWORD *)dest != 0x8000000000000000LL) )
  {
    v5 = *(_QWORD *)&dest[8];
    v6 = *(_QWORD *)&dest[16];
  }
  else
  {
    v5 = 8LL;
    v6 = 0LL;
    v4 = 0LL;
  }
  <alloc::vec::Vec<T,A> as core::clone::Clone>::clone(&v15, v5, v6);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v4, v5);
  if ( !v16 )
    alloc::vec::Vec<T,A>::insert(&v15);
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v26,
                          "mergeUnknownErrnoEPERMENOENTESRCHEINTREIOENXIOE2BIGENOEXECEBADFECHILDEAGAINENOMEMEACCESEFAULTE"
                          "NOTBLKEBUSYEEXISTEXDEVENODEVENOTDIREISDIREINVALENFILEEMFILEENOTTYETXTBSYEFBIGENOSPCESPIPEEROFSEMLINKEPIPE",
                          5LL) )
  {
    v7 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
    if ( !v7 )
      alloc::alloc::handle_alloc_error(8LL, 24LL);
    v8 = v15;
    *(_QWORD *)(v7 + 16) = v16;
    *(_OWORD *)v7 = v8;
    v31[0] = 1LL;
    v31[1] = v7;
    v31[2] = 1LL;
  }
  else
  {
    <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(dest, &v15);
    core::iter::traits::iterator::Iterator::collect(v31, dest);
  }
  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v32, v31);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v25, v32);
  v9 = v25[0];
  if ( v25[0] != 0x8000000000000000LL )
  {
    v24 = v18;
    v23 = v19;
    v22 = 0x8000000000000005LL;
    while ( 1 )
    {
      v10 = v25[1];
      v11 = v25[2];
      alloc::str::join_generic_copy(dest, v24, v23);
      v12 = *(_QWORD *)dest;
      v13 = *(_QWORD *)&dest[8];
      uu_pr::build_options(src, v26, v10, v11, *(_QWORD *)&dest[8], *(_QWORD *)&dest[16]);
      core::ptr::drop_in_place<alloc::string::String>(v12, v13);
      if ( LODWORD(src[0]) == 2 )
      {
        v21 = *(_OWORD *)&src[3];
        v20 = *(_OWORD *)&src[1];
        uu_pr::print_error(v26, &v20);
        v3 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
        core::ptr::drop_in_place<uu_pr::PrError>(&v20);
        goto LABEL_24;
      }
      memcpy(dest, src, sizeof(dest));
      itertools::Itertools::exactly_one(&v20, v10, v10 + 16 * v11);
      if ( (_DWORD)v20 == 2 )
        uu_pr::pr(v30, **((_QWORD **)&v20 + 1), *(_QWORD *)(*((_QWORD *)&v20 + 1) + 8LL), dest);
      else
        uu_pr::mpr(v30, v10, v11, dest);
      if ( *(_QWORD *)&v30[0] != v22 )
        break;
      core::ptr::drop_in_place<uu_pr::OutputOptions>(dest);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v9, v10);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v25, v32);
      v9 = v25[0];
      if ( v25[0] == 0x8000000000000000LL )
        goto LABEL_21;
    }
    v21 = v30[1];
    v20 = v30[0];
    uu_pr::print_error(v26, &v20);
    core::ptr::drop_in_place<uu_pr::PrError>(v30);
    v3 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1LL);
    core::ptr::drop_in_place<uu_pr::OutputOptions>(dest);
LABEL_24:
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v9, v10);
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(v32);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v26);
    goto LABEL_25;
  }
LABEL_21:
  core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<&str>>>(v32);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v26);
  core::ptr::drop_in_place<clap_builder::builder::command::Command>(v37);
  v3 = 0LL;
LABEL_26:
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v17);
  return v3;
}