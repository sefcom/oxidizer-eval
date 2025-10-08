__int64 __fastcall uu_sync::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // edx
  unsigned int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rax
  _BYTE v13[24]; // [rsp+0h] [rbp-3C8h] BYREF
  _OWORD v14[3]; // [rsp+18h] [rbp-3B0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-380h]
  __int128 v16; // [rsp+50h] [rbp-378h] BYREF
  __int128 v17; // [rsp+60h] [rbp-368h]
  __int128 v18; // [rsp+70h] [rbp-358h]
  __int64 v19; // [rsp+80h] [rbp-348h]
  _QWORD v20[8]; // [rsp+90h] [rbp-338h] BYREF
  _BYTE dest[24]; // [rsp+D0h] [rbp-2F8h] BYREF
  int v22; // [rsp+E8h] [rbp-2E0h]

  uu_sync::uu_app(dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v16, dest, a1, a2);
  if ( __OFSUB__(-(__int64)v16, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v16 + 1),
             dest,
             v2,
             -(__int64)v16);
  v15 = v19;
  v14[2] = v18;
  v14[1] = v17;
  v14[0] = v16;
  v4 = (__int64)*(&uu_sync::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, v14, aFiles, v4);
  clap_builder::parser::error::MatchesError::unwrap(v20, aFiles, v4, dest);
  if ( v20[0]
    && (core::iter::traits::iterator::Iterator::collect(dest, v20),
        v16 = *(_OWORD *)&dest[8],
        *(_QWORD *)dest != 0x8000000000000000LL) )
  {
    *(_OWORD *)&v13[8] = v16;
    *(_QWORD *)v13 = *(_QWORD *)dest;
  }
  else
  {
    *(_QWORD *)v13 = 0LL;
    *(_QWORD *)&v13[8] = 8LL;
    *(_QWORD *)&v13[16] = 0LL;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v14,
                          aData,
                          *(&uu_sync::options::DATA + 1)) )
  {
    if ( !*(_QWORD *)&v13[16] )
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, aDataNeedsAtLea, 34LL);
      *(_QWORD *)&dest[16] = v17;
      *(_OWORD *)dest = v16;
      v22 = 1;
      v5 = alloc::boxed::Box<T>::new(dest);
LABEL_17:
      core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v13);
LABEL_24:
      core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
      return v5;
    }
LABEL_11:
    v6 = 0LL;
    while ( 1 )
    {
      v7 = *(_QWORD *)(*(_QWORD *)&v13[8] + v6 + 8);
      v8 = *(_QWORD *)(*(_QWORD *)&v13[8] + v6 + 16);
      if ( (nix::fcntl::open(v7, v8) & 1) != 0 )
      {
        v10 = v9;
        if ( v9 != 13 || (unsigned __int8)std::path::Path::is_dir(v7, v8) )
          break;
      }
      v6 += 24LL;
      if ( 24LL * *(_QWORD *)&v13[16] == v6 )
        goto LABEL_18;
    }
    v5 = <nix::errno::consts::Errno as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
           v10,
           *(_QWORD *)(*(_QWORD *)&v13[8] + v6 + 8),
           *(_QWORD *)(*(_QWORD *)&v13[8] + v6 + 16));
    goto LABEL_17;
  }
  if ( *(_QWORD *)&v13[16] )
    goto LABEL_11;
LABEL_18:
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v14,
                          aFileSystem,
                          *(&uu_sync::options::FILE_SYSTEM + 1)) )
  {
    *(_QWORD *)&dest[16] = *(_QWORD *)&v13[16];
    *(_OWORD *)dest = *(_OWORD *)v13;
    v11 = uu_sync::syncfs(dest);
    goto LABEL_22;
  }
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          v14,
                          aData,
                          *(&uu_sync::options::DATA + 1)) )
  {
    *(_QWORD *)&dest[16] = *(_QWORD *)&v13[16];
    *(_OWORD *)dest = *(_OWORD *)v13;
    v11 = uu_sync::fdatasync(dest);
LABEL_22:
    if ( v11 )
    {
      v5 = v11;
      goto LABEL_24;
    }
    goto LABEL_28;
  }
  v12 = uu_sync::sync();
  if ( v12 )
  {
    v5 = v12;
    goto LABEL_17;
  }
  core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(v13);
LABEL_28:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
  return 0LL;
}