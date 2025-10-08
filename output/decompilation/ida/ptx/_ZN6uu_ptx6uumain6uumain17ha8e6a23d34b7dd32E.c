// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_ptx::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r14
  __int128 *v8; // r13
  __int64 v9; // rax
  __int64 v10; // rbx
  __int128 v11; // rdi
  __int64 v12; // r15
  __int128 *v13; // r14
  __int64 v14; // r12
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // r12
  __int64 v18; // r13
  __int128 v19; // [rsp+0h] [rbp-578h] BYREF
  __int64 v20; // [rsp+10h] [rbp-568h]
  __int128 v21; // [rsp+20h] [rbp-558h] BYREF
  __int64 v22; // [rsp+30h] [rbp-548h]
  __int128 v23; // [rsp+38h] [rbp-540h]
  __int64 v24; // [rsp+48h] [rbp-530h]
  __int128 v25; // [rsp+50h] [rbp-528h] BYREF
  _BYTE v26[56]; // [rsp+60h] [rbp-518h]
  __int128 v27; // [rsp+98h] [rbp-4E0h]
  __int128 v28; // [rsp+A8h] [rbp-4D0h]
  __int128 v29; // [rsp+B8h] [rbp-4C0h]
  __int64 v30; // [rsp+C8h] [rbp-4B0h]
  __int128 v31; // [rsp+D0h] [rbp-4A8h] BYREF
  __int64 v32; // [rsp+E0h] [rbp-498h]
  __int128 v33; // [rsp+E8h] [rbp-490h]
  __int64 v34; // [rsp+F8h] [rbp-480h]
  _OWORD v35[3]; // [rsp+100h] [rbp-478h] BYREF
  __int64 v36; // [rsp+130h] [rbp-448h]
  __int128 v37; // [rsp+138h] [rbp-440h] BYREF
  __int128 *v38; // [rsp+148h] [rbp-430h]
  __int128 v39; // [rsp+150h] [rbp-428h]
  __int128 v40; // [rsp+160h] [rbp-418h]
  __int128 v41; // [rsp+170h] [rbp-408h]
  __int128 v42; // [rsp+180h] [rbp-3F8h]
  __int64 v43; // [rsp+190h] [rbp-3E8h]
  __int128 v44; // [rsp+198h] [rbp-3E0h] BYREF
  __int128 *v45; // [rsp+1A8h] [rbp-3D0h]
  __int128 dest; // [rsp+1B0h] [rbp-3C8h] BYREF
  __int128 *v47; // [rsp+1C0h] [rbp-3B8h]
  __int128 v48; // [rsp+1C8h] [rbp-3B0h]
  __int128 v49; // [rsp+1D8h] [rbp-3A0h]
  __int128 v50; // [rsp+1E8h] [rbp-390h]
  __int128 v51; // [rsp+1F8h] [rbp-380h]
  __int128 v52; // [rsp+208h] [rbp-370h]
  __int128 v53; // [rsp+218h] [rbp-360h]
  __int64 v54; // [rsp+228h] [rbp-350h]
  __int64 v55; // [rsp+480h] [rbp-F8h] BYREF
  __int128 v56; // [rsp+488h] [rbp-F0h]
  __int128 v57; // [rsp+498h] [rbp-E0h]
  __int128 v58; // [rsp+4A8h] [rbp-D0h]
  __int128 v59; // [rsp+4B8h] [rbp-C0h]
  __int64 v60; // [rsp+4C8h] [rbp-B0h]
  __int64 v61; // [rsp+508h] [rbp-70h]

  uu_ptx::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v25, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v25, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v25 + 1),
             &dest,
             v2,
             -(__int64)v25);
  v36 = *(_QWORD *)&v26[32];
  v35[2] = *(_OWORD *)&v26[16];
  v35[1] = *(_OWORD *)v26;
  v35[0] = v25;
  uu_ptx::get_config(&dest, v35);
  v4 = *((_QWORD *)&dest + 1);
  if ( (_QWORD)dest != 0x8000000000000000LL )
  {
    v43 = v52;
    v42 = v51;
    v41 = v50;
    v40 = v49;
    v39 = v48;
    v37 = dest;
    v38 = v47;
    v5 = (__int64)*(&uu_ptx::options::FILE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v35, aFile_0, v5);
    clap_builder::parser::error::MatchesError::unwrap(&v25, aFile_0, v5, &dest);
    v56 = v25;
    v57 = *(_OWORD *)v26;
    v58 = *(_OWORD *)&v26[16];
    v59 = *(_OWORD *)&v26[32];
    v55 = 1LL;
    v60 = 0LL;
    v61 = 0LL;
    if ( (_BYTE)v43 )
    {
      core::iter::traits::iterator::Iterator::collect(&v21, &v55);
      if ( !v22 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, asc_53B91, 1LL);
        *(_QWORD *)v26 = v47;
        v25 = dest;
        alloc::vec::Vec<T,A>::push(&v21, &v25);
      }
      v20 = v22;
      v19 = v21;
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, asc_53B91, 1LL);
      v7 = *((_QWORD *)&dest + 1);
      v6 = dest;
      v8 = v47;
    }
    else
    {
      v9 = alloc::alloc::Global::alloc_impl(8LL, 24LL);
      if ( !v9 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v10 = v9;
      <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v25, &v55);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, asc_53B91, 1LL);
      v11 = dest;
      v12 = v25;
      if ( (_QWORD)v25 == 0x8000000000000000LL )
      {
        v13 = v47;
      }
      else
      {
        v14 = *((_QWORD *)&v25 + 1);
        v13 = *(__int128 **)v26;
        core::ptr::drop_in_place<alloc::string::String>(dest, *((_QWORD *)&dest + 1));
        *((_QWORD *)&v11 + 1) = v14;
        *(_QWORD *)&v11 = v12;
      }
      *(_OWORD *)v10 = v11;
      *(_QWORD *)(v10 + 16) = v13;
      *(_QWORD *)&v19 = 1LL;
      *((_QWORD *)&v19 + 1) = v10;
      v20 = 1LL;
      <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v25, &v55);
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&dest, asc_53B91, 1LL);
      v7 = *((_QWORD *)&dest + 1);
      v6 = dest;
      v15 = v25;
      if ( (_QWORD)v25 == 0x8000000000000000LL )
      {
        v8 = v47;
      }
      else
      {
        v16 = *((_QWORD *)&v25 + 1);
        v8 = *(__int128 **)v26;
        core::ptr::drop_in_place<alloc::string::String>(dest, *((_QWORD *)&dest + 1));
        v7 = v16;
        v6 = v15;
      }
      <core::iter::adapters::cloned::Cloned<I> as core::iter::traits::iterator::Iterator>::next(&v21, &v55);
      v17 = v21;
      if ( (_QWORD)v21 != 0x8000000000000000LL )
      {
        v18 = *((_QWORD *)&v21 + 1);
        *(_QWORD *)&v25 = 0LL;
        *((_QWORD *)&v25 + 1) = *((_QWORD *)&v21 + 1);
        *(_QWORD *)v26 = v22;
        v26[8] = 1;
        *(_QWORD *)&v31 = &v25;
        *((_QWORD *)&v31 + 1) = <os_display::Quoted as core::fmt::Display>::fmt;
        *(_QWORD *)&dest = &off_250498;
        *((_QWORD *)&dest + 1) = 1LL;
        v47 = &v31;
        v48 = 1uLL;
        core::option::Option<T>::map_or_else(&v44, &dest);
        LODWORD(v48) = 1;
        dest = v44;
        v47 = v45;
        v4 = alloc::boxed::Box<T>::new(&dest);
        core::ptr::drop_in_place<alloc::string::String>(v17, v18);
LABEL_22:
        core::ptr::drop_in_place<alloc::string::String>(v6, v7);
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v19);
        core::ptr::drop_in_place<uu_ptx::Config>(&v37);
        goto LABEL_23;
      }
      core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v21);
    }
    uu_ptx::WordFilter::new(&dest, v35, &v37);
    v4 = *((_QWORD *)&dest + 1);
    if ( (_QWORD)dest != 0x8000000000000000LL )
    {
      v30 = v54;
      v29 = v53;
      v28 = v52;
      v27 = v51;
      *(_OWORD *)&v26[40] = v50;
      *(_OWORD *)&v26[24] = v49;
      *(_OWORD *)&v26[8] = v48;
      v25 = dest;
      *(_QWORD *)v26 = v47;
      uu_ptx::read_input(&dest, *((_QWORD *)&v19 + 1), v20);
      <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
        &v21,
        &dest);
      v4 = *((_QWORD *)&v21 + 1);
      if ( (_QWORD)v21 )
      {
        v34 = v24;
        v33 = v23;
        v31 = v21;
        v32 = v22;
        uu_ptx::create_word_set(&dest, &v37, &v25, &v31);
        v4 = uu_ptx::write_traditional_output(&v37, &v31, &dest, v7, v8);
        core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<uu_ptx::WordRef>>(&dest);
        core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>(&v31);
      }
      core::ptr::drop_in_place<uu_ptx::WordFilter>(&v25);
    }
    goto LABEL_22;
  }
LABEL_23:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v35);
  return v4;
}