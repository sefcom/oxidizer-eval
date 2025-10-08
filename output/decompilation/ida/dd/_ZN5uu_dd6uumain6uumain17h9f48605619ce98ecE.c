// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_dd::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int128 v13; // kr00_16
  __int64 v14; // rax
  __int128 v15; // [rsp+0h] [rbp-528h] BYREF
  __int128 v16; // [rsp+10h] [rbp-518h]
  __int128 v17; // [rsp+20h] [rbp-508h]
  __int128 v18; // [rsp+30h] [rbp-4F8h]
  __int64 v19; // [rsp+50h] [rbp-4D8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-4D0h]
  __int128 v21; // [rsp+68h] [rbp-4C0h]
  __int128 v22; // [rsp+78h] [rbp-4B0h]
  __int128 v23; // [rsp+88h] [rbp-4A0h]
  __int128 v24; // [rsp+98h] [rbp-490h]
  __int128 v25; // [rsp+A8h] [rbp-480h]
  __int128 v26; // [rsp+B8h] [rbp-470h]
  __int128 v27; // [rsp+C8h] [rbp-460h]
  __int128 v28; // [rsp+D8h] [rbp-450h]
  __int128 v29; // [rsp+E8h] [rbp-440h]
  _QWORD v30[2]; // [rsp+F8h] [rbp-430h] BYREF
  __int128 v31; // [rsp+108h] [rbp-420h]
  __int128 v32; // [rsp+118h] [rbp-410h]
  __int64 v33; // [rsp+128h] [rbp-400h]
  __int128 v34; // [rsp+130h] [rbp-3F8h] BYREF
  __int128 v35; // [rsp+140h] [rbp-3E8h]
  _BYTE v36[56]; // [rsp+158h] [rbp-3D0h] BYREF
  __int128 v37; // [rsp+190h] [rbp-398h]
  __int128 v38; // [rsp+1A0h] [rbp-388h]
  __int128 v39; // [rsp+1B0h] [rbp-378h]
  __int128 v40; // [rsp+1C0h] [rbp-368h]
  __int128 v41; // [rsp+1D0h] [rbp-358h]
  __int128 v42; // [rsp+1E0h] [rbp-348h]
  __int128 v43; // [rsp+1F0h] [rbp-338h]
  _OWORD v44[4]; // [rsp+200h] [rbp-328h] BYREF
  __int64 dest; // [rsp+240h] [rbp-2E8h] BYREF
  __int128 v46; // [rsp+248h] [rbp-2E0h]
  __int64 v47; // [rsp+260h] [rbp-2C8h]
  __int64 v48; // [rsp+270h] [rbp-2B8h]
  __int128 v49; // [rsp+280h] [rbp-2A8h]
  __int128 v50; // [rsp+290h] [rbp-298h]
  __int64 v51; // [rsp+2A0h] [rbp-288h]
  unsigned __int64 v52; // [rsp+2B0h] [rbp-278h]
  unsigned __int64 v53; // [rsp+2C8h] [rbp-260h]
  __int128 v54; // [rsp+2E0h] [rbp-248h]
  __int128 v55; // [rsp+2F0h] [rbp-238h]
  __int128 v56; // [rsp+300h] [rbp-228h]
  char v57; // [rsp+310h] [rbp-218h]

  uu_dd::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(v36, &dest, a1, a2);
  if ( __OFSUB__(-*(_QWORD *)v36, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *(_QWORD *)&v36[8],
             &dest,
             v2,
             -*(_QWORD *)v36);
  v33 = *(_QWORD *)&v36[48];
  v32 = *(_OWORD *)&v36[32];
  v31 = *(_OWORD *)&v36[16];
  v30[0] = *(_QWORD *)v36;
  v30[1] = *(_QWORD *)&v36[8];
  v52 = 0x8000000000000000LL;
  v53 = 0x8000000000000000LL;
  dest = 0LL;
  *((_QWORD *)&v46 + 1) = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  v50 = 0LL;
  v51 = 2LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 3;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v15, v30);
  clap_builder::parser::error::MatchesError::unwrap(v44, &v15);
  if ( *(_QWORD *)&v44[0] )
  {
    v18 = v44[3];
    v17 = v44[2];
    v16 = v44[1];
    v15 = v44[0];
  }
  else
  {
    *(_QWORD *)&v15 = core::ops::function::FnOnce::call_once;
    *((_QWORD *)&v15 + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *(_QWORD *)&v16 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *((_QWORD *)&v16 + 1) = 0LL;
    *((_QWORD *)&v17 + 1) = 0LL;
    *((_QWORD *)&v18 + 1) = 0LL;
  }
  ((void (__fastcall *)(_BYTE *, __int64 *, __int128 *))uu_dd::parseargs::Parser::parse)(v36, &dest, &v15);
  v34 = *(_OWORD *)&v36[8];
  v35 = *(_OWORD *)&v36[24];
  if ( *(_QWORD *)v36 == 3LL )
  {
    v8 = alloc::boxed::Box<T>::new(
           &v34,
           &dest,
           v4,
           v5,
           v6,
           v7,
           v15,
           *((_QWORD *)&v15 + 1),
           v16,
           *((_QWORD *)&v16 + 1),
           v17,
           *((_QWORD *)&v17 + 1),
           v18,
           *((_QWORD *)&v18 + 1));
  }
  else
  {
    v29 = v43;
    v28 = v42;
    v27 = v41;
    v26 = v40;
    v25 = v39;
    v24 = v38;
    v23 = v37;
    v22 = *(_OWORD *)&v36[40];
    v20 = v34;
    v21 = v35;
    v19 = *(_QWORD *)v36;
    if ( *((_QWORD *)&v34 + 1) == 0x8000000000000000LL )
    {
      uu_dd::Input::new_stdin(
        &dest,
        &v19,
        v4,
        v5,
        v6,
        v7,
        v15,
        *((_QWORD *)&v15 + 1),
        v16,
        *((_QWORD *)&v16 + 1),
        v17,
        *((_QWORD *)&v17 + 1),
        v18,
        *((_QWORD *)&v18 + 1));
    }
    else if ( (unsigned __int8)uu_dd::is_fifo(
                                 v21,
                                 *((_QWORD *)&v21 + 1),
                                 v4,
                                 v5,
                                 v6,
                                 v7,
                                 v15,
                                 *((_QWORD *)&v15 + 1),
                                 v16,
                                 *((_QWORD *)&v16 + 1),
                                 v17,
                                 *((_QWORD *)&v17 + 1),
                                 v18,
                                 *((_QWORD *)&v18 + 1)) )
    {
      uu_dd::Input::new_fifo(&dest, v21, *((_QWORD *)&v21 + 1), &v19);
    }
    else
    {
      uu_dd::Input::new_file(&dest, v21, *((_QWORD *)&v21 + 1), &v19);
    }
    v13 = v46;
    v8 = v46;
    if ( (dest & 1) == 0 )
    {
      if ( (_QWORD)v22 == 0x8000000000000000LL )
      {
        if ( (unsigned __int8)uu_dd::is_stdout_redirected_to_seekable_file() )
          uu_dd::Output::new_file_from_stdout(&dest, &v19);
        else
          uu_dd::Output::new_stdout(&dest, &v19);
      }
      else if ( (unsigned __int8)uu_dd::is_fifo(
                                   *((_QWORD *)&v22 + 1),
                                   v23,
                                   v9,
                                   v10,
                                   v11,
                                   v12,
                                   v15,
                                   *((_QWORD *)&v15 + 1),
                                   v16,
                                   *((_QWORD *)&v16 + 1),
                                   v17,
                                   *((_QWORD *)&v17 + 1),
                                   v18,
                                   *((_QWORD *)&v18 + 1)) )
      {
        uu_dd::Output::new_fifo(&dest, *((_QWORD *)&v22 + 1), v23, &v19);
      }
      else
      {
        uu_dd::Output::new_file(&dest, *((_QWORD *)&v22 + 1), v23, &v19);
      }
      if ( (_BYTE)dest != 4 )
      {
        *(_DWORD *)((char *)&v15 + 3) = HIDWORD(dest);
        LODWORD(v15) = *(_DWORD *)((char *)&dest + 1);
        *(_OWORD *)v36 = v13;
        HIDWORD(dest) = *(_DWORD *)((char *)&v15 + 3);
        v14 = uu_dd::dd_copy(v36, &dest);
        v8 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v14);
        core::ptr::drop_in_place<uu_dd::Settings>(&v19);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v30);
        return v8;
      }
      v8 = v46;
      core::ptr::drop_in_place<uu_dd::Input>(DWORD1(v13));
    }
    core::ptr::drop_in_place<uu_dd::Settings>(&v19);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v30);
  return v8;
}