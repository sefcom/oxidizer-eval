__int64 __fastcall uu_realpath::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  char flag; // bl
  char v5; // r14
  char v6; // r13
  char v7; // bp
  char v8; // cl
  unsigned __int8 v9; // al
  unsigned __int8 v10; // r15
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rdx
  void *v25; // [rsp+8h] [rbp-430h] BYREF
  __int64 v26; // [rsp+10h] [rbp-428h]
  __int128 *v27; // [rsp+18h] [rbp-420h]
  __int64 v28; // [rsp+20h] [rbp-418h] BYREF
  __int64 v29; // [rsp+28h] [rbp-410h]
  __int128 v30; // [rsp+30h] [rbp-408h] BYREF
  __int64 v31; // [rsp+40h] [rbp-3F8h]
  _QWORD v32[2]; // [rsp+50h] [rbp-3E8h] BYREF
  __int128 v33; // [rsp+60h] [rbp-3D8h] BYREF
  int v34; // [rsp+70h] [rbp-3C8h]
  __int128 v35; // [rsp+74h] [rbp-3C4h]
  __int128 v36; // [rsp+84h] [rbp-3B4h]
  int v37; // [rsp+94h] [rbp-3A4h]
  __int128 v38; // [rsp+98h] [rbp-3A0h] BYREF
  _BYTE v39[48]; // [rsp+A8h] [rbp-390h]
  _BYTE v40[8]; // [rsp+D8h] [rbp-360h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-358h]
  __int64 v42; // [rsp+E8h] [rbp-350h]
  _QWORD v43[2]; // [rsp+F0h] [rbp-348h] BYREF
  _OWORD v44[4]; // [rsp+100h] [rbp-338h] BYREF
  void *v45; // [rsp+140h] [rbp-2F8h] BYREF
  __int64 v46; // [rsp+148h] [rbp-2F0h]
  __int128 *v47; // [rsp+150h] [rbp-2E8h]
  __int128 v48; // [rsp+158h] [rbp-2E0h]
  __int64 v49; // [rsp+168h] [rbp-2D0h]

  uu_realpath::uu_app(&v45);
  clap_builder::builder::command::Command::try_get_matches_from(&v38, &v45, a1, a2);
  if ( (_QWORD)v38 == 0x8000000000000000LL )
    return alloc::boxed::Box<T>::new(*((_QWORD *)&v38 + 1), 1LL);
  v35 = *(_OWORD *)&v39[4];
  v36 = *(_OWORD *)&v39[20];
  v37 = *(_DWORD *)&v39[36];
  v33 = v38;
  v34 = *(_DWORD *)v39;
  v3 = (__int64)*(&uu_realpath::ARG_FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v45, &v33, aFiles, v3);
  clap_builder::parser::error::MatchesError::unwrap(&v38, aFiles, v3, &v45);
  if ( !(_QWORD)v38 )
    core::option::unwrap_failed(&off_120E68);
  v44[3] = *(_OWORD *)&v39[32];
  v44[2] = *(_OWORD *)&v39[16];
  v44[1] = *(_OWORD *)v39;
  v44[0] = v38;
  <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(v40, v44);
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v33, aStrip, *(&uu_realpath::OPT_STRIP + 1));
  v5 = 10;
  if ( (unsigned __int8)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
                          &v33,
                          aZero_0,
                          *(&uu_realpath::OPT_ZERO + 1)) )
    v5 = 0;
  v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v33, aQuiet, *(&uu_realpath::OPT_QUIET + 1));
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(
         &v33,
         aLogical,
         *(&uu_realpath::OPT_LOGICAL + 1));
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v33, aCanonicalizeEx, 21LL);
  v9 = 1;
  if ( !v8 )
    v9 = 2 * clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(&v33, aCanonicalizeMi, 20LL);
  v10 = 0;
  if ( !flag )
    v10 = v7 + 1;
  v11 = v9;
  uu_realpath::prepare_relative_options(&v45, (__int64)&v33, v9, v10);
  v2 = v46;
  if ( v45 == (void *)0x8000000000000001LL )
  {
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v40);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v33);
  }
  else
  {
    v31 = v49;
    v30 = v48;
    v25 = v45;
    v26 = v46;
    v27 = v47;
    v32[0] = v41;
    v32[1] = v41 + 24 * v42;
    v12 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v32);
    if ( v12 )
    {
      v13 = v12;
      if ( v6 )
      {
        do
        {
          v14 = 0LL;
          if ( v25 != (void *)0x8000000000000000LL )
            v14 = v26;
          v15 = 0LL;
          if ( (_QWORD)v30 != 0x8000000000000000LL )
            v15 = *((_QWORD *)&v30 + 1);
          v16 = uu_realpath::resolve_path(
                  *(_QWORD *)(v13 + 8),
                  *(_QWORD *)(v13 + 16),
                  v5,
                  v10,
                  v11,
                  v14,
                  (__int64)v27,
                  v15,
                  v31);
          core::ptr::drop_in_place<core::result::Result<(),std::io::error::Error>>(v16);
          v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v32);
        }
        while ( v13 );
      }
      else
      {
        do
        {
          v18 = 0LL;
          if ( v25 != (void *)0x8000000000000000LL )
            v18 = v26;
          v19 = 0LL;
          if ( (_QWORD)v30 != 0x8000000000000000LL )
            v19 = *((_QWORD *)&v30 + 1);
          v20 = uu_realpath::resolve_path(
                  *(_QWORD *)(v13 + 8),
                  *(_QWORD *)(v13 + 16),
                  v5,
                  v10,
                  v11,
                  v18,
                  (__int64)v27,
                  v19,
                  v31);
          v21 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
                  v20,
                  v13);
          if ( v21 )
          {
            v28 = v21;
            v29 = v22;
            v23 = (*(unsigned int (__fastcall **)(__int64))(v22 + 96))(v21);
            uucore::mods::error::set_exit_code(v23);
            v43[0] = uucore::util_name();
            v43[1] = v24;
            *(_QWORD *)&v38 = v43;
            *((_QWORD *)&v38 + 1) = <&T as core::fmt::Display>::fmt;
            *(_QWORD *)v39 = &v28;
            *(_QWORD *)&v39[8] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
            v45 = &unk_120E38;
            v46 = 3LL;
            v47 = &v38;
            v48 = 2uLL;
            std::io::stdio::_eprint(&v45);
            core::ptr::drop_in_place<alloc::boxed::Box<dyn core::error::Error+core::marker::Sync+core::marker::Send>>(
              v28,
              v29);
          }
          v13 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(v32);
        }
        while ( v13 );
      }
    }
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v30);
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&v25);
    core::ptr::drop_in_place<alloc::vec::Vec<std::path::PathBuf>>(v40);
    core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v33);
    return 0LL;
  }
  return v2;
}
