__int64 __fastcall uu_realpath::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  char flag; // bp
  char v6; // r13
  unsigned int v7; // ebx
  char v8; // r14
  char v9; // cl
  unsigned __int8 v10; // al
  unsigned int v11; // r15d
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 v16; // rbp
  unsigned __int8 v17; // di
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 i; // rax
  __int64 v29; // rax
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // [rsp+Ch] [rbp-3ECh]
  __int64 v33; // [rsp+10h] [rbp-3E8h]
  __int64 v34; // [rsp+18h] [rbp-3E0h]
  __int128 v35; // [rsp+20h] [rbp-3D8h]
  __int64 v36; // [rsp+38h] [rbp-3C0h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+40h] [rbp-3B8h]
  __int64 v38; // [rsp+48h] [rbp-3B0h]
  __int64 v39; // [rsp+50h] [rbp-3A8h]
  __int64 v40; // [rsp+58h] [rbp-3A0h]
  __int128 v41; // [rsp+60h] [rbp-398h] BYREF
  int v42; // [rsp+70h] [rbp-388h]
  __int128 v43; // [rsp+74h] [rbp-384h]
  __int128 v44; // [rsp+84h] [rbp-374h]
  int v45; // [rsp+94h] [rbp-364h]
  __int128 v46; // [rsp+98h] [rbp-360h] BYREF
  _BYTE v47[48]; // [rsp+A8h] [rbp-350h]
  _BYTE v48[8]; // [rsp+D8h] [rbp-320h] BYREF
  __int64 v49; // [rsp+E0h] [rbp-318h]
  __int64 v50; // [rsp+E8h] [rbp-310h]
  _QWORD v51[2]; // [rsp+F0h] [rbp-308h] BYREF
  __int128 dest; // [rsp+100h] [rbp-2F8h] BYREF
  __int128 v53; // [rsp+110h] [rbp-2E8h]
  __int128 v54; // [rsp+120h] [rbp-2D8h]
  __int128 v55; // [rsp+130h] [rbp-2C8h]

  uu_realpath::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v46, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v46, 1LL) )
    return alloc::boxed::Box<T>::new(*((_QWORD *)&v46 + 1), 1LL, v2, -(__int64)v46);
  v43 = *(_OWORD *)&v47[4];
  v44 = *(_OWORD *)&v47[20];
  v45 = *(_DWORD *)&v47[36];
  v41 = v46;
  v42 = *(_DWORD *)v47;
  v4 = (__int64)*(&uu_realpath::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, &v41, aFiles, v4);
  clap_builder::parser::error::MatchesError::unwrap(&v46, aFiles, v4, &dest);
  if ( !(_QWORD)v46 )
    core::option::unwrap_failed(&off_EB9E0);
  v55 = *(_OWORD *)&v47[32];
  v54 = *(_OWORD *)&v47[16];
  v53 = *(_OWORD *)v47;
  dest = v46;
  core::iter::traits::iterator::Iterator::collect(v48, &dest);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v41, aStrip, *(&uu_realpath::OPT_STRIP + 1));
  v6 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          &v41,
                          aZero_0,
                          *(&uu_realpath::OPT_ZERO + 1)) )
    v6 = 0;
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v41, aQuiet, *(&uu_realpath::OPT_QUIET + 1));
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         &v41,
         aLogical,
         *(&uu_realpath::OPT_LOGICAL + 1));
  v9 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v41, aCanonicalizeEx, 21LL);
  v10 = 1;
  if ( !v9 )
    v10 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v41, aCanonicalizeMi, 20LL);
  v11 = 0;
  if ( !flag )
    v11 = (unsigned __int8)(v8 + 1);
  v32 = v10;
  uu_realpath::prepare_relative_options(&dest, &v41, v10, v11);
  v12 = v7;
  v13 = 0x8000000000000000LL;
  v15 = *((_QWORD *)&dest + 1);
  v14 = dest;
  v16 = v53;
  if ( (_QWORD)dest == 0x8000000000000001LL )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v48);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v41);
    return v15;
  }
  else
  {
    v35 = dest;
    v33 = *((_QWORD *)&v53 + 1);
    v34 = v54;
    if ( v50 )
    {
      v17 = v6;
      v40 = *((_QWORD *)&v54 + 1);
      v18 = v49;
      v19 = 0LL;
      v20 = *((_QWORD *)&dest + 1);
      if ( (_QWORD)dest == 0x8000000000000000LL )
        v20 = 0LL;
      v38 = v20;
      if ( *((_QWORD *)&v53 + 1) != 0x8000000000000000LL )
        v19 = v54;
      v39 = v19;
      v21 = 24 * v50;
      if ( (_BYTE)v12 )
      {
        v22 = 0LL;
        do
        {
          v23 = uu_realpath::resolve_path(
                  *(_QWORD *)(v18 + v22 + 8),
                  *(_QWORD *)(v18 + v22 + 16),
                  v17,
                  (unsigned __int8)v11,
                  v32,
                  v38,
                  v16,
                  v39,
                  v40);
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v23);
          v22 += 24LL;
        }
        while ( v21 != v22 );
      }
      else
      {
        v27 = 0LL;
        for ( i = uu_realpath::resolve_path(
                    *(_QWORD *)(v49 + 8),
                    *(_QWORD *)(v49 + 16),
                    v17,
                    (unsigned __int8)v11,
                    v32,
                    v38,
                    v53,
                    v39,
                    v40);
              ;
              i = uu_realpath::resolve_path(
                    *(_QWORD *)(v18 + v27 + 8),
                    *(_QWORD *)(v18 + v27 + 16),
                    v17,
                    (unsigned __int8)v11,
                    v32,
                    v38,
                    v16,
                    v39,
                    v40) )
        {
          v29 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                  i,
                  *(_QWORD *)(v18 + v27 + 8),
                  *(_QWORD *)(v18 + v27 + 16));
          if ( v29 )
          {
            v36 = v29;
            v37 = &off_EBB08;
            v30 = uucore::mods::error::UError::code();
            uucore::mods::error::set_exit_code(v30);
            v51[0] = uucore::util_name();
            v51[1] = v31;
            *(_QWORD *)&v46 = v51;
            *((_QWORD *)&v46 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v47 = &v36;
            *(_QWORD *)&v47[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            *(_QWORD *)&dest = &unk_EB9B0;
            *((_QWORD *)&dest + 1) = 3LL;
            *(_QWORD *)&v54 = 0LL;
            *(_QWORD *)&v53 = &v46;
            *((_QWORD *)&v53 + 1) = 2LL;
            std::io::stdio::_eprint(&dest);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(
              v36,
              v37);
          }
          else
          {
            core::ptr::drop_in_place<core::result::Result<(),alloc::boxed::Box<dyn uucore::mods::error::UError>>>(
              0LL,
              &off_EBB08);
          }
          v27 += 24LL;
          if ( v21 == v27 )
            break;
        }
      }
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v33, v34, v14, v13, v12);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(v35, *((_QWORD *)&v35 + 1), v24, v25, v26);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v48);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v41);
    return 0LL;
  }
}