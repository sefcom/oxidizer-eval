__int64 __fastcall uu_more::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r14
  __int64 v5; // rbx
  char i; // al
  __int64 (__fastcall *v7)(); // r13
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rax
  __int64 *v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // eax
  __int64 (__fastcall *v15)(); // rdx
  int v16; // r12d
  unsigned int v17; // eax
  __int64 (__fastcall *v18)(); // rdx
  __int64 v19; // rbx
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 (__fastcall *v22)(); // rdx
  unsigned int v23; // r12d
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rdx
  char v29; // [rsp+Fh] [rbp-4D9h] BYREF
  __int64 v30; // [rsp+10h] [rbp-4D8h] BYREF
  __int64 (__fastcall **v31)(); // [rsp+18h] [rbp-4D0h]
  _QWORD **v32; // [rsp+20h] [rbp-4C8h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+28h] [rbp-4C0h]
  __int64 *v34; // [rsp+30h] [rbp-4B8h]
  __int64 (__fastcall *v35)(); // [rsp+38h] [rbp-4B0h]
  _QWORD *v36; // [rsp+40h] [rbp-4A8h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+48h] [rbp-4A0h]
  __int64 *v38; // [rsp+50h] [rbp-498h]
  __int64 (__fastcall *v39)(); // [rsp+58h] [rbp-490h]
  __int64 v40; // [rsp+60h] [rbp-488h] BYREF
  __int64 v41; // [rsp+68h] [rbp-480h] BYREF
  __int128 v42; // [rsp+70h] [rbp-478h] BYREF
  __int128 v43; // [rsp+80h] [rbp-468h]
  __int128 v44; // [rsp+90h] [rbp-458h]
  __int64 v45; // [rsp+A0h] [rbp-448h]
  __int64 v46; // [rsp+A8h] [rbp-440h]
  unsigned __int64 v47; // [rsp+B0h] [rbp-438h]
  _DWORD v48[2]; // [rsp+B8h] [rbp-430h] BYREF
  __int64 v49; // [rsp+C0h] [rbp-428h]
  __int128 v50; // [rsp+C8h] [rbp-420h] BYREF
  _BYTE v51[40]; // [rsp+D8h] [rbp-410h] BYREF
  __int128 v52; // [rsp+100h] [rbp-3E8h]
  __int64 v53; // [rsp+110h] [rbp-3D8h]
  __int64 v54; // [rsp+118h] [rbp-3D0h]
  __int64 v55; // [rsp+120h] [rbp-3C8h] BYREF
  __int64 v56; // [rsp+128h] [rbp-3C0h]
  _OWORD v57[3]; // [rsp+148h] [rbp-3A0h] BYREF
  __int64 v58; // [rsp+178h] [rbp-370h]
  __int128 v59; // [rsp+180h] [rbp-368h] BYREF
  __int64 v60; // [rsp+190h] [rbp-358h]
  __int64 v61; // [rsp+198h] [rbp-350h]
  __int128 v62; // [rsp+1A8h] [rbp-340h] BYREF
  __int64 v63; // [rsp+1B8h] [rbp-330h]
  __int128 v64; // [rsp+1C0h] [rbp-328h] BYREF
  __int64 v65; // [rsp+1D0h] [rbp-318h]
  __int128 v66; // [rsp+1D8h] [rbp-310h] BYREF
  __int64 v67; // [rsp+1E8h] [rbp-300h]
  __int128 dest; // [rsp+1F0h] [rbp-2F8h] BYREF
  _QWORD *v69; // [rsp+200h] [rbp-2E8h]
  __int64 v70; // [rsp+208h] [rbp-2E0h]
  __int64 v71; // [rsp+210h] [rbp-2D8h]

  v2 = alloc::boxed::Box<T>::new();
  std::panicking::set_hook(v2, &unk_1243C8);
  uu_more::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v50, &dest, a1, a2);
  if ( !__OFSUB__(-(__int64)v50, 1LL) )
  {
    v58 = *(_QWORD *)&v51[32];
    v57[2] = *(_OWORD *)&v51[16];
    v57[1] = *(_OWORD *)v51;
    v57[0] = v50;
    uu_more::Options::from(&v55, v57);
    uu_more::setup_term(&dest);
    v4 = dest;
    if ( !(_QWORD)dest )
    {
      v41 = *((_QWORD *)&dest + 1);
      clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v57);
      clap_builder::parser::error::MatchesError::unwrap(&v42, &dest);
      if ( (_QWORD)v42 )
      {
        v5 = v46;
        v47 = core::iter::traits::exact_size::ExactSizeIterator::len(v46);
        v53 = v45;
        v52 = v44;
        *(_OWORD *)&v51[24] = v43;
        *(_OWORD *)&v51[8] = v42;
        v54 = v5;
        for ( i = 0; ; i = v50 )
        {
          v7 = (__int64 (__fastcall *)())*((_QWORD *)&v50 + 1);
          v8 = *(__int64 **)v51;
          *(_QWORD *)&v50 = 0LL;
          if ( (i & 1) == 0 )
          {
            v9 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v51[8]);
            if ( v9 )
            {
              v7 = *(__int64 (__fastcall **)())(v9 + 8);
              v8 = *(__int64 **)(v9 + 16);
            }
            else
            {
              v7 = 0LL;
            }
          }
          v10 = (__int64 *)core::option::Option<T>::get_or_insert_with(&v50, &v51[8]);
          if ( !v7 )
            break;
          v11 = v10;
          v12 = *v10;
          if ( (unsigned __int8)std::path::Path::is_dir(v7, v8) )
          {
            v13 = crossterm::terminal::disable_raw_mode();
            if ( v13 )
              goto LABEL_19;
            v32 = (_QWORD **)(&dword_0 + 1);
            v33 = v7;
            v34 = v8;
            LOBYTE(v35) = 1;
            v36 = &v32;
            v37 = <os_display::Quoted as core::fmt::Display>::fmt;
            *(_QWORD *)&dest = &unk_124338;
            *((_QWORD *)&dest + 1) = 2LL;
            v71 = 0LL;
            v69 = &v36;
            v70 = 1LL;
            core::option::Option<T>::map_or_else(&v62, &dest);
            LODWORD(v70) = 0;
            dest = v62;
            v69 = (_QWORD *)v63;
            v30 = alloc::boxed::Box<T>::new(&dest);
            v31 = &off_1244A0;
            v14 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v30);
            uucore::mods::error::set_exit_code(v14);
            v36 = (_QWORD *)uucore::util_name();
            v37 = v15;
            v32 = &v36;
            v33 = <&T as core::fmt::Display>::fmt;
            v34 = &v30;
            v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&dest = &unk_124358;
            *((_QWORD *)&dest + 1) = 3LL;
            v71 = 0LL;
            v69 = &v32;
            v70 = 2LL;
            std::io::stdio::_eprint(&dest);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v30,
              v31);
            v13 = crossterm::terminal::enable_raw_mode();
            if ( v13 )
              goto LABEL_19;
          }
          else
          {
            std::fs::metadata(&dest);
            v16 = dest;
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&dest, v7);
            if ( v16 == 2 )
            {
              v13 = crossterm::terminal::disable_raw_mode();
              if ( v13 )
                goto LABEL_19;
              v32 = (_QWORD **)(&dword_0 + 1);
              v33 = v7;
              v34 = v8;
              LOBYTE(v35) = 1;
              v36 = &v32;
              v37 = <os_display::Quoted as core::fmt::Display>::fmt;
              *(_QWORD *)&dest = &off_124388;
              *((_QWORD *)&dest + 1) = 2LL;
              v71 = 0LL;
              v69 = &v36;
              v70 = 1LL;
              core::option::Option<T>::map_or_else(&v64, &dest);
              LODWORD(v70) = 0;
              dest = v64;
              v69 = (_QWORD *)v65;
              v30 = alloc::boxed::Box<T>::new(&dest);
              v31 = &off_124418;
              v17 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v30);
              uucore::mods::error::set_exit_code(v17);
              v36 = (_QWORD *)uucore::util_name();
              v37 = v18;
              v32 = &v36;
              v33 = <&T as core::fmt::Display>::fmt;
              v34 = &v30;
              v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
              *(_QWORD *)&dest = &unk_124358;
              *((_QWORD *)&dest + 1) = 3LL;
              v71 = 0LL;
              v69 = &v32;
              v70 = 2LL;
              std::io::stdio::_eprint(&dest);
              core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
                v30,
                v31);
              v13 = crossterm::terminal::enable_raw_mode();
              if ( v13 )
              {
LABEL_19:
                v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v13);
                goto LABEL_40;
              }
            }
            else
            {
              std::fs::File::open(v48, v7, v8);
              if ( v48[0] == 1 )
              {
                v19 = v49;
                v40 = v49;
                v20 = crossterm::terminal::disable_raw_mode();
                if ( v20 )
                  goto LABEL_39;
                v32 = (_QWORD **)(&dword_0 + 1);
                v33 = v7;
                v34 = v8;
                LOBYTE(v35) = 1;
                LOBYTE(v30) = std::io::error::Error::kind(v19);
                v36 = &v32;
                v37 = <os_display::Quoted as core::fmt::Display>::fmt;
                v38 = &v30;
                v39 = <std::io::error::ErrorKind as core::fmt::Display>::fmt;
                *(_QWORD *)&dest = &off_1243A8;
                *((_QWORD *)&dest + 1) = 2LL;
                v71 = 0LL;
                v69 = &v36;
                v70 = 2LL;
                core::option::Option<T>::map_or_else(&v66, &dest);
                LODWORD(v70) = 0;
                dest = v66;
                v69 = (_QWORD *)v67;
                v30 = alloc::boxed::Box<T>::new(&dest);
                v31 = &off_124418;
                v21 = <uucore::mods::error::UUsageError as uucore::mods::error::UError>::code(v30);
                uucore::mods::error::set_exit_code(v21);
                v36 = (_QWORD *)uucore::util_name();
                v37 = v22;
                v32 = &v36;
                v33 = <&T as core::fmt::Display>::fmt;
                v34 = &v30;
                v35 = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
                *(_QWORD *)&dest = &unk_124358;
                *((_QWORD *)&dest + 1) = 3LL;
                v71 = 0LL;
                v69 = &v32;
                v70 = 2LL;
                std::io::stdio::_eprint(&dest);
                core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
                  v30,
                  v31);
                v20 = crossterm::terminal::enable_raw_mode();
                if ( v20 )
                {
LABEL_39:
                  v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
                  core::ptr::drop_in_place<std::io::error::Error>(&v40);
                  goto LABEL_40;
                }
                core::ptr::drop_in_place<std::io::error::Error>(&v40);
              }
              else
              {
                v23 = v48[1];
                v24 = core::str::converts::from_utf8(&dest, v7, v8);
                v25 = 0LL;
                v26 = 0LL;
                if ( !(_BYTE)dest )
                  v26 = *((_QWORD *)&dest + 1);
                if ( v12 )
                {
                  v25 = *v11;
                  v24 = v11[1];
                }
                v4 = uu_more::more(v23, (__int64)&v41, v47 >= 2, v26, (__int64)v69, v25, v24, (__int64)&v55);
                if ( v4 )
                  goto LABEL_40;
              }
            }
          }
        }
        goto LABEL_34;
      }
      *(_QWORD *)&v42 = 0LL;
      *((_QWORD *)&v42 + 1) = 1LL;
      *(_QWORD *)&v43 = 0LL;
      *(_QWORD *)&dest = std::io::stdio::stdin();
      if ( (<std::io::stdio::Stdin as std::io::Read>::read_to_string(&dest, &v42) & 1) != 0 )
      {
        v4 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v27);
LABEL_37:
        core::ptr::drop_in_place<alloc::string::String>(v42, *((_QWORD *)&v42 + 1));
        goto LABEL_40;
      }
      if ( !(_QWORD)v43 )
      {
        <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v50, aBadUsage, 9LL);
        v69 = *(_QWORD **)v51;
        dest = v50;
        LODWORD(v70) = 1;
        v4 = alloc::boxed::Box<T>::new(&dest);
        goto LABEL_37;
      }
      v60 = v43;
      v59 = v42;
      v61 = 0LL;
      v4 = uu_more::more(&v59, &v41, &v55);
      if ( !v4 )
      {
LABEL_34:
        core::ptr::drop_in_place<uu_more::Options>(v55, v56);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v57);
        v4 = 0LL;
        goto LABEL_41;
      }
    }
LABEL_40:
    core::ptr::drop_in_place<uu_more::Options>(v55, v56);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v57);
    goto LABEL_41;
  }
  v4 = uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
         *((_QWORD *)&v50 + 1),
         &dest,
         v3,
         -(__int64)v50);
LABEL_41:
  core::ptr::drop_in_place<uu_more::TerminalGuard>(&v29);
  return v4;
}