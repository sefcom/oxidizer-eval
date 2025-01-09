__int64 __fastcall uu_ptx::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // r14
  __int128 v6; // xmm0
  _BYTE v8[8]; // [rsp+8h] [rbp-4E0h] BYREF
  __int64 v9; // [rsp+10h] [rbp-4D8h]
  __int64 v10; // [rsp+18h] [rbp-4D0h]
  _BYTE v11[24]; // [rsp+20h] [rbp-4C8h] BYREF
  __int128 v12; // [rsp+38h] [rbp-4B0h]
  __int64 v13; // [rsp+48h] [rbp-4A0h]
  _OWORD v14[3]; // [rsp+58h] [rbp-490h] BYREF
  __int64 v15; // [rsp+88h] [rbp-460h]
  __int128 v16; // [rsp+90h] [rbp-458h] BYREF
  __int64 v17; // [rsp+A0h] [rbp-448h]
  __int128 v18; // [rsp+A8h] [rbp-440h]
  __int128 v19; // [rsp+B8h] [rbp-430h]
  __int128 v20; // [rsp+C8h] [rbp-420h]
  __int128 v21; // [rsp+D8h] [rbp-410h]
  __int64 v22; // [rsp+E8h] [rbp-400h]
  __int128 v23; // [rsp+F8h] [rbp-3F0h] BYREF
  _BYTE v24[40]; // [rsp+108h] [rbp-3E0h]
  __int128 v25; // [rsp+130h] [rbp-3B8h]
  __int128 v26; // [rsp+140h] [rbp-3A8h]
  __int128 v27; // [rsp+150h] [rbp-398h]
  __int128 v28; // [rsp+160h] [rbp-388h]
  __int64 v29; // [rsp+170h] [rbp-378h]
  __int128 v30; // [rsp+178h] [rbp-370h] BYREF
  __int64 v31; // [rsp+188h] [rbp-360h]
  __int128 v32; // [rsp+190h] [rbp-358h]
  __int64 v33; // [rsp+1A0h] [rbp-348h]
  __int64 v34[3]; // [rsp+1A8h] [rbp-340h] BYREF
  _OWORD v35[3]; // [rsp+1C0h] [rbp-328h] BYREF
  __int64 v36; // [rsp+1F0h] [rbp-2F8h]
  __int64 v37; // [rsp+1F8h] [rbp-2F0h]
  __int128 v38; // [rsp+200h] [rbp-2E8h] BYREF
  _BYTE v39[40]; // [rsp+210h] [rbp-2D8h]
  __int128 v40; // [rsp+238h] [rbp-2B0h]
  __int128 v41; // [rsp+248h] [rbp-2A0h]
  __int128 v42; // [rsp+258h] [rbp-290h]
  __int128 v43; // [rsp+268h] [rbp-280h]
  __int64 v44; // [rsp+278h] [rbp-270h]

  uu_ptx::uu_app(&v38);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, &v38, a1, a2);
  if ( (_QWORD)v23 != 0x8000000000000000LL )
  {
    v15 = *(_QWORD *)&v24[32];
    v14[2] = *(_OWORD *)&v24[16];
    v14[1] = *(_OWORD *)v24;
    v14[0] = v23;
    v3 = (__int64)*(&uu_ptx::options::FILE + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v38, v14, "filemode{", v3);
    clap_builder::parser::error::MatchesError::unwrap(&v23, "filemode{", v3, &v38);
    if ( (_QWORD)v23 )
    {
      <core::iter::adapters::map::Map<I,F> as core::clone::Clone>::clone(&v38, &v23);
      v35[0] = v38;
      v35[1] = *(_OWORD *)v39;
      v35[2] = *(_OWORD *)&v39[16];
      v36 = *(_QWORD *)&v39[32];
      v37 = v25;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v8, v35);
    }
    else
    {
      v4 = alloc::alloc::Global::alloc_impl(24LL);
      if ( !v4 )
        alloc::alloc::handle_alloc_error(8LL, 24LL);
      v5 = v4;
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v38);
      v17 = *(_QWORD *)v39;
      v6 = v38;
      v16 = v38;
      *(_QWORD *)(v5 + 16) = *(_QWORD *)v39;
      *(_OWORD *)v5 = v6;
      alloc::slice::hack::into_vec(v8, v5, 1LL);
    }
    uu_ptx::get_config((__int64)&v38, (__int64)v14);
    v2 = *((_QWORD *)&v38 + 1);
    if ( (_QWORD)v38 != 0x8000000000000000LL )
    {
      v22 = v42;
      v21 = v41;
      v20 = v40;
      v19 = *(_OWORD *)&v39[24];
      v18 = *(_OWORD *)&v39[8];
      v16 = v38;
      v17 = *(_QWORD *)v39;
      uu_ptx::WordFilter::new((__int64)&v38, (__int64)v14, (__int64)&v16);
      v2 = *((_QWORD *)&v38 + 1);
      if ( (_QWORD)v38 != 0x8000000000000000LL )
      {
        v29 = v44;
        v28 = v43;
        v27 = v42;
        v26 = v41;
        v25 = v40;
        *(_OWORD *)&v24[24] = *(_OWORD *)&v39[24];
        *(_OWORD *)&v24[8] = *(_OWORD *)&v39[8];
        v23 = v38;
        *(_QWORD *)v24 = *(_QWORD *)v39;
        uu_ptx::read_input((__int64)&v38, v9, v10, (__int64)&v16);
        <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v11,
          &v38);
        v2 = *(_QWORD *)&v11[8];
        if ( *(_QWORD *)v11 )
        {
          v33 = v13;
          v32 = v12;
          v30 = *(_OWORD *)v11;
          v31 = *(_QWORD *)&v11[16];
          uu_ptx::create_word_set((__int64)v34, (__int64)&v16, (__int64)&v23, (__int64)&v30);
          if ( (_BYTE)v22 || v10 != 2 )
          {
            <T as alloc::slice::hack::ConvertVec>::to_vec(&v38);
            *(_QWORD *)&v11[16] = *(_QWORD *)v39;
            *(_OWORD *)v11 = v38;
          }
          else
          {
            v10 = 1LL;
            if ( *(_QWORD *)(v9 + 24) == 0x8000000000000000LL )
              core::option::unwrap_failed(&off_2EADF0);
            *(_QWORD *)v11 = *(_QWORD *)(v9 + 24);
            *(_OWORD *)&v11[8] = *(_OWORD *)(v9 + 32);
          }
          v2 = uu_ptx::write_traditional_output(
                 (__int64)&v16,
                 (__int64)&v30,
                 v34,
                 *(__int64 *)&v11[8],
                 *(__int64 *)&v11[16]);
          core::ptr::drop_in_place<alloc::string::String>(v11);
          core::ptr::drop_in_place<alloc::collections::btree::set::BTreeSet<uu_ptx::WordRef>>(v34);
          core::ptr::drop_in_place<std::collections::hash::map::HashMap<alloc::string::String,uu_ptx::FileContent>>(&v30);
          core::ptr::drop_in_place<uu_ptx::WordFilter>(&v23);
          core::ptr::drop_in_place<uu_ptx::Config>(&v16);
          core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v8);
          goto LABEL_17;
        }
        core::ptr::drop_in_place<uu_ptx::WordFilter>(&v23);
      }
      core::ptr::drop_in_place<uu_ptx::Config>(&v16);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v8);
LABEL_17:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v23 + 1));
}
