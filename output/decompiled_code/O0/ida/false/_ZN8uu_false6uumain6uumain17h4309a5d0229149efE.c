__int64 __fastcall uu_false::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  char v4; // [rsp+4Fh] [rbp-4F9h]
  int dest[178]; // [rsp+78h] [rbp-4D0h] BYREF
  __int128 v6; // [rsp+340h] [rbp-208h] BYREF
  __int64 v7; // [rsp+350h] [rbp-1F8h]
  int v8[2]; // [rsp+358h] [rbp-1F0h] BYREF
  __int64 v9[12]; // [rsp+360h] [rbp-1E8h] BYREF
  int v10[4]; // [rsp+3C0h] [rbp-188h] BYREF
  __int64 v11; // [rsp+3D0h] [rbp-178h]
  __int64 v12; // [rsp+3E0h] [rbp-168h] BYREF
  __int64 v13; // [rsp+3E8h] [rbp-160h] BYREF
  char v14; // [rsp+3F7h] [rbp-151h]
  __int64 v15; // [rsp+3F8h] [rbp-150h] BYREF
  _BYTE v16[48]; // [rsp+400h] [rbp-148h] BYREF
  __int128 v17; // [rsp+430h] [rbp-118h] BYREF
  __int128 v18; // [rsp+440h] [rbp-108h]
  _BYTE v19[24]; // [rsp+450h] [rbp-F8h] BYREF
  __int64 v20; // [rsp+468h] [rbp-E0h] BYREF
  __int64 v21; // [rsp+470h] [rbp-D8h] BYREF
  __int64 v22; // [rsp+478h] [rbp-D0h] BYREF
  _BYTE v23[48]; // [rsp+480h] [rbp-C8h] BYREF
  _OWORD v24[2]; // [rsp+4B0h] [rbp-98h] BYREF
  __int128 v25; // [rsp+4D0h] [rbp-78h]
  _QWORD v26[2]; // [rsp+4E0h] [rbp-68h] BYREF
  __int128 v27; // [rsp+4F0h] [rbp-58h]
  char v28; // [rsp+504h] [rbp-44h]
  char v29; // [rsp+505h] [rbp-43h]
  char v30; // [rsp+506h] [rbp-42h]
  char v31; // [rsp+507h] [rbp-41h]
  _QWORD *v32; // [rsp+518h] [rbp-30h]
  __int64 (__fastcall *v33)(); // [rsp+520h] [rbp-28h]
  _BYTE *v34; // [rsp+528h] [rbp-20h]
  __int64 (__fastcall *v35)(); // [rsp+530h] [rbp-18h]
  __int64 *v36; // [rsp+538h] [rbp-10h]
  __int64 (__fastcall *v37)(); // [rsp+540h] [rbp-8h]

  v30 = 0;
  v29 = 0;
  v28 = 0;
  v31 = 1;
  uu_false::uu_app(dest);
  uucore::mods::error::set_exit_code(1LL);
  v31 = 0;
  core::iter::traits::iterator::Iterator::collect(&v6, a1, a2);
  v30 = 1;
  if ( (unsigned __int64)alloc::vec::Vec<T,A>::len(&v6) > 2 )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<std::ffi::os_str::OsString>>(&v6);
    v30 = 0;
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
  }
  else
  {
    v30 = 0;
    v11 = v7;
    *(_OWORD *)v10 = v6;
    clap_builder::builder::command::Command::try_get_matches_from_mut(v8, dest, v10);
    v29 = 1;
    if ( *(_QWORD *)v8 == 0x8000000000000000LL )
    {
      v29 = 0;
      v12 = v9[0];
      v4 = clap_builder::error::Error<F>::kind(&v12);
      v14 = v4;
      if ( v4 == 12LL )
      {
        v13 = clap_builder::builder::command::Command::print_help(dest);
        v28 = 1;
      }
      else if ( v4 == 14LL )
      {
        v15 = std::io::stdio::stdout();
        clap_builder::builder::command::Command::render_version(v19, dest);
        v34 = v19;
        v35 = <alloc::string::String as core::fmt::Display>::fmt;
        *(_QWORD *)&v18 = v19;
        *((_QWORD *)&v18 + 1) = <alloc::string::String as core::fmt::Display>::fmt;
        v17 = v18;
        core::fmt::Arguments::new_v1(v16, &unk_EDB28, &v17);
        v13 = <std::io::stdio::Stdout as std::io::Write>::write_fmt(&v15, v16);
        v28 = 1;
        core::ptr::drop_in_place<alloc::string::String>(v19);
      }
      else
      {
        v28 = 1;
        v13 = 0LL;
      }
      if ( v13 != 0 )
      {
        v28 = 0;
        v20 = v13;
        v22 = std::io::stdio::stderr();
        v26[0] = uucore::util_name();
        v26[1] = v2;
        v32 = v26;
        v33 = <&T as core::fmt::Display>::fmt;
        *(_QWORD *)&v25 = v26;
        *((_QWORD *)&v25 + 1) = <&T as core::fmt::Display>::fmt;
        v36 = &v20;
        v37 = <std::io::error::Error as core::fmt::Display>::fmt;
        *(_QWORD *)&v27 = &v20;
        *((_QWORD *)&v27 + 1) = <std::io::error::Error as core::fmt::Display>::fmt;
        v24[0] = v25;
        v24[1] = v27;
        core::fmt::Arguments::new_v1(v23, &unk_EDB68, v24);
        v21 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v22, v23);
        core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(&v21);
        core::ptr::drop_in_place<std::io::error::Error>(&v20);
      }
      if ( v13 != 0 && (v28 & 1) != 0 )
        core::ptr::drop_in_place<std::io::error::Error>(&v13);
      v28 = 0;
      core::ptr::drop_in_place<clap_builder::error::Error>(&v12);
    }
    if ( *(_QWORD *)v8 == 0x8000000000000000LL )
    {
      if ( (v29 & 1) != 0 )
        core::ptr::drop_in_place<clap_builder::error::Error>(v9);
    }
    else
    {
      core::ptr::drop_in_place<core::result::Result<clap_builder::parser::matches::arg_matches::ArgMatches,clap_builder::error::Error>>(v8);
    }
    v29 = 0;
    v30 = 0;
    core::ptr::drop_in_place<clap_builder::builder::command::Command>(dest);
  }
  return 0LL;
}
