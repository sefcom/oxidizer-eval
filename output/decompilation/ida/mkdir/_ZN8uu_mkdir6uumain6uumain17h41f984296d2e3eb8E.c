__int64 __fastcall uu_mkdir::uumain::uumain(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 v3; // rdx
  void (__fastcall __noreturn *v5)(); // r13
  char flag; // bp
  char v7; // r14
  char v8; // r15
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // [rsp+8h] [rbp-690h]
  const char *v12; // [rsp+10h] [rbp-688h]
  __int64 v13; // [rsp+18h] [rbp-680h]
  _QWORD v14[2]; // [rsp+20h] [rbp-678h] BYREF
  __int128 v15; // [rsp+30h] [rbp-668h]
  __int128 v16; // [rsp+40h] [rbp-658h]
  __int64 v17; // [rsp+50h] [rbp-648h]
  __int64 v18; // [rsp+58h] [rbp-640h] BYREF
  __int64 v19; // [rsp+60h] [rbp-638h]
  __int128 v20; // [rsp+68h] [rbp-630h]
  __int128 v21; // [rsp+78h] [rbp-620h]
  __int64 v22; // [rsp+88h] [rbp-610h]
  __int128 v23; // [rsp+90h] [rbp-608h]
  __int128 v24; // [rsp+A0h] [rbp-5F8h]
  __int128 v25; // [rsp+B8h] [rbp-5E0h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-5D0h]
  __int128 src; // [rsp+D0h] [rbp-5C8h] BYREF
  __int128 v28; // [rsp+E0h] [rbp-5B8h]
  __int128 v29; // [rsp+F0h] [rbp-5A8h]
  __int64 v30; // [rsp+100h] [rbp-598h]
  __int64 v31; // [rsp+108h] [rbp-590h]
  __int128 dest; // [rsp+3A0h] [rbp-2F8h] BYREF
  __int128 v33; // [rsp+3B0h] [rbp-2E8h]
  __int128 v34; // [rsp+3C0h] [rbp-2D8h]
  __int64 v35; // [rsp+3D0h] [rbp-2C8h]
  __int64 v36; // [rsp+3D8h] [rbp-2C0h]

  uucore::Args::collect_lossy(&v25, a1, a2);
  v2 = uu_mkdir::strip_minus_from_mode(&v25);
  uu_mkdir::uu_app(&src);
  clap_builder::builder::command::Command::after_help(&dest, &src);
  *(_QWORD *)&v28 = v26;
  src = v25;
  clap_builder::builder::command::Command::try_get_matches_from(&v18, &dest, &src);
  if ( __OFSUB__(-v18, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v19,
             &dest,
             v3,
             -v18);
  v17 = v22;
  v16 = v21;
  v15 = v20;
  v14[0] = v18;
  v14[1] = v19;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&src, v14);
  clap_builder::parser::error::MatchesError::unwrap(&dest, &src);
  v5 = (void (__fastcall __noreturn *)())dest;
  if ( (_QWORD)dest )
  {
    v12 = (const char *)*((_QWORD *)&dest + 1);
    v23 = v33;
    v24 = v34;
    v13 = v35;
    v11 = v36;
  }
  else
  {
    v24 = 0LL;
    v23 = (unsigned __int64)<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v12 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    v5 = core::ops::function::FnOnce::call_once;
    v11 = 0LL;
  }
  flag = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v14, aVerbose, 7LL);
  v7 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v14, aParents, 7LL);
  v8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag(v14, aZ, 1LL);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&src, v14);
  v9 = clap_builder::parser::error::MatchesError::unwrap(&src);
  uu_mkdir::get_mode(&dest, v14, v2);
  if ( (_QWORD)dest == 0x8000000000000000LL )
  {
    BYTE4(v19) = v7;
    LODWORD(v19) = DWORD2(dest);
    BYTE5(v19) = flag;
    BYTE6(v19) = (v9 != 0) | v8;
    v18 = v9;
    *(_QWORD *)&src = v5;
    *((_QWORD *)&src + 1) = v12;
    v28 = v23;
    v29 = v24;
    v30 = v13;
    v31 = v11;
    v10 = uu_mkdir::exec(&src, &v18);
  }
  else
  {
    *(_QWORD *)&v28 = v33;
    src = dest;
    DWORD2(v28) = 1;
    v10 = alloc::boxed::Box<T>::new(&src);
  }
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v14);
  return v10;
}