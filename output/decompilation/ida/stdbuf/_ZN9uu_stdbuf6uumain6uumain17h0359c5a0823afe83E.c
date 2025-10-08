__int64 __fastcall uu_stdbuf::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  char v8; // bp
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  char **v20; // rdi
  __int128 v21; // [rsp+0h] [rbp-518h] BYREF
  _BYTE v22[48]; // [rsp+10h] [rbp-508h]
  __int64 v23; // [rsp+40h] [rbp-4D8h] BYREF
  char **v24; // [rsp+48h] [rbp-4D0h] BYREF
  __int64 (__fastcall *v25)(); // [rsp+50h] [rbp-4C8h]
  __int64 *v26; // [rsp+58h] [rbp-4C0h]
  __int64 (__fastcall *v27)(); // [rsp+60h] [rbp-4B8h]
  _QWORD v28[3]; // [rsp+68h] [rbp-4B0h] BYREF
  _BYTE v29[28]; // [rsp+80h] [rbp-498h] BYREF
  _BYTE v30[24]; // [rsp+A8h] [rbp-470h] BYREF
  __int128 v31; // [rsp+C0h] [rbp-458h] BYREF
  int v32; // [rsp+D0h] [rbp-448h]
  __int128 v33; // [rsp+D4h] [rbp-444h]
  __int128 v34; // [rsp+E4h] [rbp-434h]
  int v35; // [rsp+F4h] [rbp-424h]
  int v36; // [rsp+F8h] [rbp-420h] BYREF
  _BYTE v37[28]; // [rsp+FCh] [rbp-41Ch]
  __int128 v38; // [rsp+118h] [rbp-400h] BYREF
  __int64 v39; // [rsp+128h] [rbp-3F0h]
  __int64 v40; // [rsp+130h] [rbp-3E8h] BYREF
  __int128 v41; // [rsp+138h] [rbp-3E0h] BYREF
  __int128 v42; // [rsp+148h] [rbp-3D0h] BYREF
  __int64 v43; // [rsp+158h] [rbp-3C0h]
  __int128 v44; // [rsp+160h] [rbp-3B8h] BYREF
  __int64 v45; // [rsp+170h] [rbp-3A8h]
  __int128 v46; // [rsp+180h] [rbp-398h] BYREF
  __int64 v47; // [rsp+190h] [rbp-388h]
  __int128 v48; // [rsp+198h] [rbp-380h] BYREF
  __int64 v49; // [rsp+1A8h] [rbp-370h]
  __int128 v50; // [rsp+1B0h] [rbp-368h] BYREF
  __int64 v51; // [rsp+1C0h] [rbp-358h]
  __int128 v52; // [rsp+1C8h] [rbp-350h] BYREF
  __int64 v53; // [rsp+1D8h] [rbp-340h]
  _OWORD v54[4]; // [rsp+1E0h] [rbp-338h] BYREF
  __int64 dest; // [rsp+228h] [rbp-2F0h] BYREF
  __int128 v56; // [rsp+230h] [rbp-2E8h]
  __int128 v57; // [rsp+240h] [rbp-2D8h]
  __int64 v58; // [rsp+250h] [rbp-2C8h]

  uu_stdbuf::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v21, &dest, a1, a2);
  if ( !__OFSUB__(-(__int64)v21, 1LL) )
  {
    v33 = *(_OWORD *)&v22[4];
    v34 = *(_OWORD *)&v22[20];
    v35 = *(_DWORD *)&v22[36];
    v31 = v21;
    v32 = *(_DWORD *)v22;
    <uu_stdbuf::ProgramOptions as core::convert::TryFrom<&clap_builder::parser::matches::arg_matches::ArgMatches>>::try_from(
      &dest,
      &v31);
    if ( dest == 3 )
    {
      *(_QWORD *)v22 = v57;
      v21 = v56;
      *(_DWORD *)&v22[8] = 125;
      v3 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, _QWORD, __int64, __int64))alloc::boxed::Box<T>::new)(
             &v21,
             &v31,
             v4,
             v57,
             v5,
             v6);
      goto LABEL_26;
    }
    v43 = v58;
    v42 = v57;
    v40 = dest;
    v41 = v56;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, &v31);
    clap_builder::parser::error::MatchesError::unwrap(&v21, &dest);
    if ( (_QWORD)v21 )
    {
      v54[3] = *(_OWORD *)&v22[32];
      v54[2] = *(_OWORD *)&v22[16];
      v54[1] = *(_OWORD *)v22;
      v54[0] = v21;
      v7 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(v54);
      if ( v7 )
      {
        std::process::Command::new(&dest, v7);
        core::iter::traits::iterator::Iterator::collect(v28, v54);
        tempfile::dir::tempdir(&v21);
        core::result::Result<T,E>::unwrap(v30, &v21);
        uu_stdbuf::get_preload_env(&v21, v30);
        v3 = *((_QWORD *)&v21 + 1);
        if ( (_QWORD)v21 == 0x8000000000000000LL )
        {
          v8 = 1;
        }
        else
        {
          v45 = *(_QWORD *)&v22[24];
          v44 = *(_OWORD *)&v22[8];
          v38 = v21;
          v39 = *(_QWORD *)v22;
          std::process::Command::env(&dest, &v38, &v44);
          uu_stdbuf::set_command_env(&dest, aStdbufI, 9LL, &v40);
          uu_stdbuf::set_command_env(&dest, aStdbufO, 9LL, (char *)&v41 + 8);
          uu_stdbuf::set_command_env(&dest, aStdbufE, 9LL, (char *)&v42 + 8);
          std::process::Command::args(&dest, v28);
          std::process::Command::spawn(&v36, &dest);
          if ( v36 == 1 )
          {
            v23 = *(_QWORD *)&v37[4];
            v9 = std::io::error::Error::kind();
            if ( v9 )
            {
              v24 = &off_4A8250;
              v25 = <&T as core::fmt::Display>::fmt;
              if ( v9 == 1 )
              {
                *(_QWORD *)&v21 = &unk_4A8070;
                *((_QWORD *)&v21 + 1) = 2LL;
                *(_QWORD *)&v22[16] = 0LL;
                *(_QWORD *)v22 = &v24;
                *(_QWORD *)&v22[8] = 1LL;
                core::option::Option<T>::map_or_else(&v46, &v21);
                *(_DWORD *)&v22[8] = 126;
                v21 = v46;
                *(_QWORD *)v22 = v47;
              }
              else
              {
                v26 = &v23;
                v27 = <std::io::error::Error as core::fmt::Display>::fmt;
                *(_QWORD *)&v21 = &unk_4A80B0;
                *((_QWORD *)&v21 + 1) = 2LL;
                *(_QWORD *)&v22[16] = 0LL;
                *(_QWORD *)v22 = &v24;
                *(_QWORD *)&v22[8] = 2LL;
                core::option::Option<T>::map_or_else(&v50, &v21);
                *(_DWORD *)&v22[8] = 1;
                v21 = v50;
                *(_QWORD *)v22 = v51;
              }
              v14 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
                      &v21,
                      &v21,
                      v10,
                      v11,
                      v12,
                      v13);
            }
            else
            {
              v24 = &off_4A8250;
              v25 = <&T as core::fmt::Display>::fmt;
              *(_QWORD *)&v21 = &unk_4A8090;
              *((_QWORD *)&v21 + 1) = 2LL;
              *(_QWORD *)&v22[16] = 0LL;
              *(_QWORD *)v22 = &v24;
              *(_QWORD *)&v22[8] = 1LL;
              core::option::Option<T>::map_or_else(&v48, &v21);
              *(_DWORD *)&v22[8] = 127;
              v21 = v48;
              *(_QWORD *)v22 = v49;
              v14 = ((__int64 (__fastcall *)(__int128 *, __int128 *, __int64, __int64, __int64, __int64))alloc::boxed::Box<T>::new)(
                      &v21,
                      &v21,
                      v15,
                      v16,
                      v17,
                      v18);
            }
            v3 = v14;
            core::ptr::drop_in_place<std::io::error::Error>(&v23);
          }
          else
          {
            *(_OWORD *)&v29[12] = *(_OWORD *)&v37[12];
            *(_OWORD *)v29 = *(_OWORD *)v37;
            std::process::Child::wait(&v21, v29);
            <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
              &v24,
              &v21);
            v3 = (__int64)v24;
            if ( !v24 )
            {
              if ( ((unsigned __int8)v25 & 0x7F) != 0 )
              {
                if ( (char)(((unsigned __int8)v25 & 0x7F) + 1) < 2 )
                  core::option::unwrap_failed(&off_4A81B0);
                v36 = (unsigned __int8)v25 & 0x7F;
                v24 = (char **)&v36;
                v25 = core::fmt::num::imp::<impl core::fmt::Display for i32>::fmt;
                *(_QWORD *)&v21 = &off_4A80D0;
                *((_QWORD *)&v21 + 1) = 1LL;
                *(_QWORD *)&v22[16] = 0LL;
                *(_QWORD *)v22 = &v24;
                *(_QWORD *)&v22[8] = 1LL;
                core::option::Option<T>::map_or_else(&v52, &v21);
                *(_DWORD *)&v22[8] = 1;
                v21 = v52;
                *(_QWORD *)v22 = v53;
                v3 = ((__int64 (__fastcall *)(__int128 *))alloc::boxed::Box<T>::new)(&v21);
              }
              else if ( BYTE1(v25) )
              {
                v3 = uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from();
              }
              else
              {
                v3 = 0LL;
              }
              core::ptr::drop_in_place<std::process::Child>(v29);
              core::ptr::drop_in_place<tempfile::dir::TempDir>(v30);
              core::ptr::drop_in_place<std::process::Command>(&dest);
              goto LABEL_26;
            }
            core::ptr::drop_in_place<std::process::Child>(v29);
          }
          v8 = 0;
        }
        core::ptr::drop_in_place<tempfile::dir::TempDir>(v30);
        if ( v8 )
          core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v28[0], v28[1]);
        core::ptr::drop_in_place<std::process::Command>(&dest);
LABEL_26:
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v31);
        return v3;
      }
      v20 = &off_4A8180;
    }
    else
    {
      v20 = &off_4A8168;
    }
    core::option::unwrap_failed(v20);
  }
  return alloc::boxed::Box<T>::new(*((_QWORD *)&v21 + 1), 125LL, v2, -(__int64)v21);
}