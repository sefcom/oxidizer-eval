__int64 __fastcall uu_dd::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  const char *v3; // rsi
  void (__fastcall __noreturn *v4)(); // rax
  const char *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v12; // rax
  __int64 v13; // [rsp+0h] [rbp-578h] BYREF
  __int64 v14; // [rsp+18h] [rbp-560h] BYREF
  __int128 v15; // [rsp+20h] [rbp-558h]
  __int128 v16; // [rsp+30h] [rbp-548h]
  __int128 v17; // [rsp+40h] [rbp-538h]
  __int128 v18; // [rsp+50h] [rbp-528h]
  __int128 v19; // [rsp+60h] [rbp-518h]
  __int128 v20; // [rsp+70h] [rbp-508h]
  __int128 v21; // [rsp+80h] [rbp-4F8h]
  __int128 v22; // [rsp+90h] [rbp-4E8h]
  __int128 v23; // [rsp+A0h] [rbp-4D8h]
  __int128 v24; // [rsp+B0h] [rbp-4C8h]
  __int128 v25; // [rsp+C0h] [rbp-4B8h]
  __int128 v26; // [rsp+D0h] [rbp-4A8h]
  _BYTE v27[70]; // [rsp+E8h] [rbp-490h] BYREF
  _QWORD v28[2]; // [rsp+130h] [rbp-448h] BYREF
  __int128 v29; // [rsp+140h] [rbp-438h]
  __int128 v30; // [rsp+150h] [rbp-428h]
  __int64 v31; // [rsp+160h] [rbp-418h]
  __int64 v32; // [rsp+168h] [rbp-410h] BYREF
  _BYTE v33[48]; // [rsp+170h] [rbp-408h]
  __int128 v34; // [rsp+1A0h] [rbp-3D8h]
  __int128 v35; // [rsp+1B0h] [rbp-3C8h]
  __int128 v36; // [rsp+1C0h] [rbp-3B8h]
  __int128 v37; // [rsp+1D0h] [rbp-3A8h]
  __int128 v38; // [rsp+1E0h] [rbp-398h]
  __int128 v39; // [rsp+1F0h] [rbp-388h]
  __int128 v40; // [rsp+200h] [rbp-378h]
  _QWORD v41[2]; // [rsp+210h] [rbp-368h] BYREF
  __int128 v42; // [rsp+220h] [rbp-358h]
  __int128 v43; // [rsp+230h] [rbp-348h]
  const char *v44; // [rsp+240h] [rbp-338h]
  __int64 v45; // [rsp+248h] [rbp-330h]
  _QWORD v46[2]; // [rsp+250h] [rbp-328h] BYREF
  __int128 v47; // [rsp+260h] [rbp-318h]
  __int128 v48; // [rsp+270h] [rbp-308h]
  const char *v49; // [rsp+280h] [rbp-2F8h]
  __int64 v50; // [rsp+288h] [rbp-2F0h]
  __int128 v51; // [rsp+290h] [rbp-2E8h] BYREF
  __int128 v52; // [rsp+2A0h] [rbp-2D8h]
  __int64 v53; // [rsp+2B0h] [rbp-2C8h]
  __int64 v54; // [rsp+2C0h] [rbp-2B8h]
  __int128 v55; // [rsp+2D0h] [rbp-2A8h]
  __int128 v56; // [rsp+2E0h] [rbp-298h]
  __int64 v57; // [rsp+2F0h] [rbp-288h]
  unsigned __int64 v58; // [rsp+300h] [rbp-278h]
  unsigned __int64 v59; // [rsp+318h] [rbp-260h]
  __int128 v60; // [rsp+330h] [rbp-248h]
  __int128 v61; // [rsp+340h] [rbp-238h]
  __int128 v62; // [rsp+350h] [rbp-228h]
  char v63; // [rsp+360h] [rbp-218h]

  uu_dd::uu_app(&v51);
  clap_builder::builder::command::Command::try_get_matches_from(&v32, &v51, a1, a2);
  if ( v32 != 0x8000000000000000LL )
  {
    v31 = *(_QWORD *)&v33[40];
    v30 = *(_OWORD *)&v33[24];
    v29 = *(_OWORD *)&v33[8];
    v28[0] = v32;
    v28[1] = *(_QWORD *)v33;
    v58 = 0x8000000000000000LL;
    v59 = 0x8000000000000000LL;
    *(_QWORD *)&v51 = 0LL;
    *(_QWORD *)&v52 = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 2LL;
    v60 = 0LL;
    v61 = 0LL;
    v62 = 0LL;
    v63 = 3;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(
      v27,
      v28,
      "operandsESTRPIPENotFoundTimedOut",
      8LL);
    v3 = "operandsESTRPIPENotFoundTimedOut";
    clap_builder::parser::error::MatchesError::unwrap(v46, "operandsESTRPIPENotFoundTimedOut", 8LL, v27);
    v4 = (void (__fastcall __noreturn *)())v46[0];
    if ( v46[0] )
    {
      v5 = (const char *)v46[1];
      v6 = v47;
      v7 = v48;
      v3 = v49;
      v8 = v50;
    }
    else
    {
      v7 = 0LL;
      v6 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
      v5 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
      v4 = core::ops::function::FnOnce::call_once;
      v8 = 0LL;
    }
    v41[0] = v4;
    v41[1] = v5;
    v42 = v6;
    v43 = v7;
    v44 = v3;
    v45 = v8;
    <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v13, v41);
    uu_dd::parseargs::Parser::parse((__int64)&v32, &v51);
    v25 = *(_OWORD *)v33;
    v26 = *(_OWORD *)&v33[16];
    if ( v32 == 3 )
    {
      v52 = v26;
      v51 = v25;
      v2 = alloc::boxed::Box<T>::new(&v51);
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v13);
    }
    else
    {
      v24 = v40;
      v23 = v39;
      v22 = v38;
      v21 = v37;
      v20 = v36;
      v19 = v35;
      v18 = v34;
      v17 = *(_OWORD *)&v33[32];
      v15 = v25;
      v16 = v26;
      v14 = v32;
      core::ptr::drop_in_place<alloc::vec::Vec<&str>>(&v13);
      if ( *((_QWORD *)&v15 + 1) == 0x8000000000000000LL )
      {
        uu_dd::Input::new_stdin((__int64)&v51, (__int64)&v14);
      }
      else if ( uu_dd::is_fifo(v16, *((__int64 *)&v16 + 1)) )
      {
        uu_dd::Input::new_fifo((__int64)&v51, v16, *((__int64 *)&v16 + 1), (__int64)&v14);
      }
      else
      {
        uu_dd::Input::new_file((__int64)&v51, v16, *((__int64 *)&v16 + 1), (__int64)&v14);
      }
      v9 = *((_QWORD *)&v51 + 1);
      v10 = v52;
      v2 = *((_QWORD *)&v51 + 1);
      if ( !(_QWORD)v51 )
      {
        if ( (_QWORD)v17 == 0x8000000000000000LL )
        {
          if ( (unsigned __int8)uu_dd::is_stdout_redirected_to_seekable_file() )
            uu_dd::Output::new_file_from_stdout((__int64)&v51, (__int64)&v14);
          else
            uu_dd::Output::new_stdout((__int64)&v51, (__int64)&v14);
        }
        else if ( uu_dd::is_fifo(*((__int64 *)&v17 + 1), v18) )
        {
          uu_dd::Output::new_fifo((__int64)&v51, *((__int64 *)&v17 + 1), v18, (__int64)&v14);
        }
        else
        {
          uu_dd::Output::new_file((__int64)&v51, *((__int64 *)&v17 + 1), v18, (__int64)&v14);
        }
        if ( (_BYTE)v51 != 4 )
        {
          *(_DWORD *)&v27[3] = DWORD1(v51);
          *(_DWORD *)v27 = *(_DWORD *)((char *)&v51 + 1);
          v32 = v9;
          *(_QWORD *)v33 = v10;
          DWORD1(v51) = *(_DWORD *)&v27[3];
          v12 = uu_dd::dd_copy((__int64)&v32, (unsigned int *)&v51);
          v2 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(v12);
          core::ptr::drop_in_place<uu_dd::Settings>(&v14);
          goto LABEL_24;
        }
        v2 = *((_QWORD *)&v51 + 1);
        core::ptr::drop_in_place<uu_dd::Input>(HIDWORD(v9));
      }
      core::ptr::drop_in_place<uu_dd::Settings>(&v14);
    }
LABEL_24:
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v28);
    return v2;
  }
  return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(*(_QWORD *)v33);
}
