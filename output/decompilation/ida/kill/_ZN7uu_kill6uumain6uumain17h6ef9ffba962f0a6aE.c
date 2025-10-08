__int64 __fastcall uu_kill::uumain::uumain(__int64 a1, __int64 a2)
{
  char v2; // r14
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v11; // r12d
  char v12; // al
  unsigned int v13; // edx
  __int64 v14; // r15
  __int64 v16; // rbx
  __int64 v17; // [rsp+8h] [rbp-3E0h] BYREF
  __int128 v18; // [rsp+10h] [rbp-3D8h]
  __int128 v19; // [rsp+20h] [rbp-3C8h] BYREF
  __int128 v20; // [rsp+30h] [rbp-3B8h]
  __int128 v21; // [rsp+40h] [rbp-3A8h]
  __int64 v22; // [rsp+50h] [rbp-398h]
  __int128 v23; // [rsp+60h] [rbp-388h] BYREF
  __int128 v24; // [rsp+70h] [rbp-378h]
  __int128 v25; // [rsp+80h] [rbp-368h]
  __int64 v26; // [rsp+90h] [rbp-358h]
  __int128 v27; // [rsp+98h] [rbp-350h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-340h]
  _QWORD v29[8]; // [rsp+B0h] [rbp-338h] BYREF
  _BYTE dest[24]; // [rsp+F0h] [rbp-2F8h] BYREF
  int v31; // [rsp+108h] [rbp-2E0h]

  uucore::Args::collect_ignore(&v27, a1, a2);
  v2 = uu_kill::handle_obsolete(&v27);
  v4 = v3;
  uu_kill::uu_app(dest);
  *(_QWORD *)&v20 = v28;
  v19 = v27;
  clap_builder::builder::command::Command::try_get_matches_from(&v23, dest, &v19);
  if ( !__OFSUB__(-(__int64)v23, 1LL) )
  {
    v22 = v26;
    v21 = v25;
    v20 = v24;
    v19 = v23;
    v7 = 1LL;
    if ( !(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                             &v19,
                             aTable,
                             *(&uu_kill::options::TABLE + 1)) )
      v7 = 2
         * (unsigned int)(unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                                            &v19,
                                            aList,
                                            *(&uu_kill::options::LIST + 1));
    v8 = (__int64)*(&uu_kill::options::PIDS_OR_SIGNALS + 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(dest, &v19, aPidsOrSignals, v8);
    clap_builder::parser::error::MatchesError::unwrap(v29, aPidsOrSignals, v8, dest);
    if ( v29[0]
      && (core::iter::traits::iterator::Iterator::collect(dest, v29),
          v23 = *(_OWORD *)&dest[8],
          *(_QWORD *)dest != 0x8000000000000000LL) )
    {
      v18 = v23;
      v17 = *(_QWORD *)dest;
      if ( v7 )
        goto LABEL_8;
    }
    else
    {
      v17 = 0LL;
      v18 = 8uLL;
      if ( v7 )
      {
LABEL_8:
        if ( (_DWORD)v7 == 1 )
          uu_kill::table();
        else
          uu_kill::list(&v17);
        v6 = 0LL;
        goto LABEL_24;
      }
    }
    if ( (v2 & 1) == 0 )
    {
      v9 = (__int64)*(&uu_kill::options::SIGNAL + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(dest, &v19, aSignal_0, v9);
      v10 = clap_builder::parser::error::MatchesError::unwrap(aSignal_0, v9, dest);
      if ( !v10 )
      {
        v4 = 15LL;
        goto LABEL_20;
      }
      uu_kill::parse_signal_value(dest, *(_QWORD *)(v10 + 8), *(_QWORD *)(v10 + 16));
      v4 = *(_QWORD *)&dest[8];
      v6 = *(_QWORD *)dest;
      if ( *(_QWORD *)dest )
      {
LABEL_24:
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v17);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v19);
        return v6;
      }
    }
    if ( v4 >= 0x20 )
    {
LABEL_21:
      v12 = <nix::sys::signal::Signal as core::convert::TryFrom<i32>>::try_from((unsigned int)v4);
      v11 = v13;
      if ( (v12 & 1) != 0 )
      {
        v6 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(((unsigned __int64)v13 << 32) | 2);
        goto LABEL_24;
      }
LABEL_23:
      uu_kill::parse_pids(dest, v18, *((_QWORD *)&v18 + 1));
      v6 = *(_QWORD *)&dest[8];
      v14 = *(_QWORD *)dest;
      if ( *(_QWORD *)dest != 0x8000000000000000LL )
      {
        if ( *(_QWORD *)&dest[16] )
        {
          uu_kill::kill(v11, *(_QWORD *)&dest[8], *(_QWORD *)&dest[16]);
          v16 = 0LL;
        }
        else
        {
          <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v23, aNoProcessIdSpe, 56LL);
          *(_QWORD *)&dest[16] = v24;
          *(_OWORD *)dest = v23;
          v31 = 1;
          v16 = alloc::boxed::Box<T>::new(dest);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v14, v6);
        v6 = v16;
      }
      goto LABEL_24;
    }
LABEL_20:
    v11 = 0;
    if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                            *(&uucore::features::signals::ALL_SIGNALS + 2 * v4),
                            *(&uucore::features::signals::ALL_SIGNALS + 2 * v4 + 1),
                            &unk_17B0C,
                            4LL) )
      goto LABEL_23;
    goto LABEL_21;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
           *((_QWORD *)&v23 + 1),
           dest,
           v5,
           -(__int64)v23);
}