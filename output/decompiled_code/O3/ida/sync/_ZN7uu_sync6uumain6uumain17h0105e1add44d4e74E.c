__int64 __fastcall uu_sync::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned int v9; // edx
  unsigned int v10; // ebp
  __int64 v11; // rax
  _BYTE v13[24]; // [rsp+0h] [rbp-3A8h] BYREF
  const char *v14; // [rsp+18h] [rbp-390h]
  __int128 v15; // [rsp+20h] [rbp-388h] BYREF
  __int128 v16; // [rsp+30h] [rbp-378h]
  __int128 v17; // [rsp+40h] [rbp-368h]
  __int128 v18; // [rsp+50h] [rbp-358h]
  _OWORD v19[3]; // [rsp+60h] [rbp-348h] BYREF
  __int64 v20; // [rsp+90h] [rbp-318h]
  __int64 v21; // [rsp+98h] [rbp-310h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-308h]
  __int128 dest; // [rsp+B0h] [rbp-2F8h] BYREF
  __int128 v24; // [rsp+C0h] [rbp-2E8h]
  __int128 v25; // [rsp+D0h] [rbp-2D8h]
  __int128 v26; // [rsp+E0h] [rbp-2C8h]

  uu_sync::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v15, &dest, a1, a2);
  if ( (_QWORD)v15 != 0x8000000000000000LL )
  {
    v20 = v18;
    v19[2] = v17;
    v19[1] = v16;
    v19[0] = v15;
    v3 = (__int64)*(&uu_sync::ARG_FILES + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v19, aFiles, v3);
    clap_builder::parser::error::MatchesError::unwrap(&v15, aFiles, v3, &dest);
    if ( (_QWORD)v15
      && (v26 = v18,
          v25 = v17,
          v24 = v16,
          dest = v15,
          <alloc::vec::Vec<T> as alloc::vec::spec_from_iter_nested::SpecFromIterNested<T,I>>::from_iter(&v21, &dest),
          dest = v22,
          v21 != 0x8000000000000000LL) )
    {
      *(_OWORD *)&v13[8] = dest;
      *(_QWORD *)v13 = v21;
    }
    else
    {
      *(_QWORD *)v13 = 0LL;
      *(_QWORD *)&v13[8] = 8LL;
      *(_QWORD *)&v13[16] = 0LL;
    }
    v4 = (__int64)*(&uu_sync::options::DATA + 1);
    if ( ((*(_QWORD *)&v13[16] == 0LL) & (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                                            v19,
                                                            aData,
                                                            v4)) != 0 )
    {
      <T as alloc::slice::hack::ConvertVec>::to_vec(&v15, aDataNeedsAtLea, 34LL);
      *(_QWORD *)&v24 = v16;
      dest = v15;
      DWORD2(v24) = 1;
      v2 = alloc::boxed::Box<T>::new(&dest);
LABEL_24:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v13);
LABEL_25:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
      return v2;
    }
    v14 = aData;
    *(_QWORD *)&dest = *(_QWORD *)&v13[8];
    *((_QWORD *)&dest + 1) = *(_QWORD *)&v13[8] + 24LL * *(_QWORD *)&v13[16];
    v5 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&dest);
    if ( v5 )
    {
      v6 = v5;
      do
      {
        v7 = *(_QWORD *)(v6 + 8);
        v8 = *(_QWORD *)(v6 + 16);
        if ( (unsigned int)nix::fcntl::open(v7, v8, 2048LL, 0LL) == 1 )
        {
          v10 = v9;
          if ( v9 != 13 || (unsigned __int8)std::path::Path::is_dir(v7, v8) )
          {
            v2 = <nix::errno::consts::Errno as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                   v10,
                   v6);
            if ( v2 )
              goto LABEL_24;
          }
        }
        v6 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&dest);
      }
      while ( v6 );
    }
    if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                            v19,
                            aFileSystem,
                            *(&uu_sync::options::FILE_SYSTEM + 1)) )
    {
      *(_QWORD *)&v24 = *(_QWORD *)&v13[16];
      dest = *(_OWORD *)v13;
      v11 = uu_sync::syncfs(&dest, v14);
    }
    else
    {
      if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v19, v14, v4) )
      {
        v2 = uu_sync::sync();
        if ( v2 )
          goto LABEL_24;
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v13);
LABEL_28:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
        return 0LL;
      }
      *(_QWORD *)&v24 = *(_QWORD *)&v13[16];
      dest = *(_OWORD *)v13;
      v11 = uu_sync::fdatasync(&dest);
    }
    v2 = v11;
    if ( v11 )
      goto LABEL_25;
    goto LABEL_28;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*((_QWORD *)&v15 + 1));
}
