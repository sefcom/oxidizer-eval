// bad sp value at call has been detected, the output may be wrong!
__int64 __fastcall uu_tac::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int8 v4; // bl
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned __int8 v8; // bp
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r14
  char *v12; // r15
  __int64 v13; // r14
  __int64 v14; // r13
  _QWORD *v15; // r12
  __int64 v16; // rsi
  _QWORD *v17; // rax
  __int64 v18; // rbx
  _QWORD v19[2]; // [rsp+0h] [rbp-3A8h] BYREF
  __int128 v20; // [rsp+10h] [rbp-398h]
  __int128 v21; // [rsp+20h] [rbp-388h]
  __int64 v22; // [rsp+30h] [rbp-378h]
  __int64 v23; // [rsp+38h] [rbp-370h] BYREF
  __int64 v24; // [rsp+40h] [rbp-368h]
  __int128 v25; // [rsp+48h] [rbp-360h]
  __int128 v26; // [rsp+58h] [rbp-350h]
  __int64 v27; // [rsp+68h] [rbp-340h]
  _QWORD v28[8]; // [rsp+70h] [rbp-338h] BYREF
  __int64 dest; // [rsp+B0h] [rbp-2F8h] BYREF
  _QWORD *v30; // [rsp+B8h] [rbp-2F0h]
  __int64 v31; // [rsp+C0h] [rbp-2E8h]

  uu_tac::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v23, &dest, a1, a2);
  if ( __OFSUB__(-v23, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v24,
             &dest,
             v2,
             -v23);
  v22 = v27;
  v21 = v26;
  v20 = v25;
  v19[0] = v23;
  v19[1] = v24;
  v4 = ((__int64 (__fastcall *)(_QWORD *, const char *, _QWORD))clap_builder::parser::matches::arg_matches::ArgMatches::get_flag)(
         v19,
         aBefore,
         *(&uu_tac::options::BEFORE + 1));
  v8 = ((__int64 (__fastcall *)(_QWORD *, const char *, _QWORD, __int64, __int64, __int64))clap_builder::parser::matches::arg_matches::ArgMatches::get_flag)(
         v19,
         aRegex,
         *(&uu_tac::options::REGEX + 1),
         v5,
         v6,
         v7);
  v9 = (__int64)*(&uu_tac::options::SEPARATOR + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, v19, aSeparator, v9);
  v10 = clap_builder::parser::error::MatchesError::unwrap(aSeparator, v9, &dest);
  if ( v10 )
  {
    v11 = *(_QWORD *)(v10 + 16);
    if ( v11 )
      v12 = *(char **)(v10 + 8);
    else
      v12 = &byte_51E61;
  }
  else
  {
    v12 = asc_51DC2;
    v11 = 1LL;
  }
  v13 = (v11 == 0) + v11;
  v14 = (__int64)*(&uu_tac::options::FILE + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v19, aFile, v14);
  clap_builder::parser::error::MatchesError::unwrap(v28, aFile, v14, &dest);
  if ( v28[0] )
  {
    core::iter::traits::iterator::Iterator::collect(&dest, v28);
    v15 = v30;
    v16 = v31;
  }
  else
  {
    v17 = (_QWORD *)alloc::alloc::Global::alloc_impl(8LL, 16LL);
    if ( !v17 )
      alloc::alloc::handle_alloc_error(8LL, 16LL);
    v15 = v17;
    *v17 = asc_51E6C;
    v17[1] = 1LL;
    dest = 1LL;
    v30 = v17;
    v31 = 1LL;
    v16 = 1LL;
  }
  v18 = uu_tac::tac(v15, v16, v4, v8, v12, v13);
  core::ptr::drop_in_place<alloc::vec::Vec<&str>>(dest, v15);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
  return v18;
}