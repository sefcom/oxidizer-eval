__int64 __fastcall uu_link::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // r14
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // r14
  char **v13; // rdx
  __int64 v14; // rdi
  __int128 v15; // [rsp+8h] [rbp-370h] BYREF
  __int128 v16; // [rsp+18h] [rbp-360h]
  __int128 v17; // [rsp+28h] [rbp-350h]
  __int128 v18; // [rsp+38h] [rbp-340h]
  _OWORD v19[3]; // [rsp+48h] [rbp-330h] BYREF
  __int64 v20; // [rsp+78h] [rbp-300h]
  __int128 dest; // [rsp+80h] [rbp-2F8h] BYREF
  __int128 v22; // [rsp+90h] [rbp-2E8h]
  __int128 v23; // [rsp+A0h] [rbp-2D8h]
  __int128 v24; // [rsp+B0h] [rbp-2C8h]

  uu_link::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v15, &dest, a1, a2);
  if ( __OFSUB__(-(__int64)v15, 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             *((_QWORD *)&v15 + 1),
             &dest,
             v2,
             -(__int64)v15);
  v20 = v18;
  v19[2] = v17;
  v19[1] = v16;
  v19[0] = v15;
  v4 = (__int64)*(&uu_link::options::FILES + 1);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&dest, v19, aFiles, v4);
  clap_builder::parser::error::MatchesError::unwrap(&v15, aFiles, v4, &dest);
  if ( (_QWORD)v15 )
  {
    v24 = v18;
    v23 = v17;
    v22 = v16;
    dest = v15;
  }
  else
  {
    *(_QWORD *)&dest = core::ops::function::FnOnce::call_once;
    *((_QWORD *)&dest + 1) = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *(_QWORD *)&v22 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::default::Default>::default::EMPTY;
    *((_QWORD *)&v22 + 1) = 0LL;
    *((_QWORD *)&v23 + 1) = 0LL;
    *((_QWORD *)&v24 + 1) = 0LL;
  }
  core::iter::traits::iterator::Iterator::collect(&v15, &dest);
  v5 = *((_QWORD *)&v15 + 1);
  if ( !(_QWORD)v16 )
  {
    v13 = &off_DC040;
    v14 = 0LL;
    goto LABEL_11;
  }
  if ( (_QWORD)v16 == 1LL )
  {
    v13 = &off_DC058;
    v14 = 1LL;
LABEL_11:
    core::panicking::panic_bounds_check(v14, v14, v13);
  }
  v6 = *(_QWORD *)(**((_QWORD **)&v15 + 1) + 8LL);
  v7 = *(_QWORD *)(**((_QWORD **)&v15 + 1) + 16LL);
  v8 = *(_QWORD *)(*((_QWORD *)&v15 + 1) + 8LL);
  v9 = *(_QWORD *)(v8 + 8);
  v10 = *(_QWORD *)(v8 + 16);
  v11 = std::fs::hard_link(v6, v7, v9, v10);
  *(_QWORD *)&dest = v9;
  *((_QWORD *)&dest + 1) = v10;
  *(_QWORD *)&v22 = v6;
  *((_QWORD *)&v22 + 1) = v7;
  v12 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(
          v11,
          &dest);
  core::ptr::drop_in_place<alloc::vec::Vec<usize>>(v15, v5);
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(v19);
  return v12;
}