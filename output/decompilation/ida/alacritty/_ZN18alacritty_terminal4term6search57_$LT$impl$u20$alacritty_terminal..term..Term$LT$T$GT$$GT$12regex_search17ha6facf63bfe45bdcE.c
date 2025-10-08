__int64 __fastcall alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+18h] [rbp-A0h]
  const char *v13; // [rsp+20h] [rbp-98h] BYREF
  __int64 v14; // [rsp+28h] [rbp-90h]
  const char *v15; // [rsp+30h] [rbp-88h]
  __int64 v16; // [rsp+38h] [rbp-80h]
  __int64 v17; // [rsp+40h] [rbp-78h]
  __int128 v18; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+58h] [rbp-60h]
  char **v20; // [rsp+60h] [rbp-58h] BYREF
  __int64 v21; // [rsp+68h] [rbp-50h]
  _QWORD *v22; // [rsp+70h] [rbp-48h]
  __int128 v23; // [rsp+78h] [rbp-40h]
  _QWORD v24[5]; // [rsp+90h] [rbp-28h] BYREF

  alacritty_terminal::term::search::<impl alacritty_terminal::term::Term<T>>::regex_search_internal(
    (unsigned int)&v18,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7);
  if ( (_DWORD)v18 == 2 )
  {
    v7 = *((_QWORD *)&v18 + 1);
    v8 = v19;
    v11 = *((_QWORD *)&v18 + 1);
    v12 = v19;
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 2 )
    {
      v20 = &off_8779E0;
      v21 = 1LL;
      v22 = (_QWORD *)&byte_8;
      v23 = 0LL;
      v13 = aAlacrittyTermi_0;
      v14 = 32LL;
      v15 = aAlacrittyTermi_0;
      v16 = 32LL;
      v17 = log::__private_api::loc(&off_877A00);
      log::__private_api::log(&v20, 2LL, &v13);
    }
    if ( (unsigned __int64)core::sync::atomic::atomic_load(&log::MAX_LOG_LEVEL_FILTER, 0LL) >= 4 )
    {
      v24[0] = &v11;
      v24[1] = <alloc::boxed::Box<T,A> as core::fmt::Display>::fmt;
      v20 = &off_8779F0;
      v21 = 1LL;
      v22 = v24;
      v23 = 1uLL;
      v9 = log::__private_api::loc(&off_877A18);
      v13 = aAlacrittyTermi_0;
      v14 = 32LL;
      v15 = aAlacrittyTermi_0;
      v16 = 32LL;
      v17 = v9;
      log::__private_api::log(&v20, 4LL, &v13);
      v7 = v11;
      v8 = v12;
    }
    *a1 = 0LL;
    return core::ptr::drop_in_place<alloc::boxed::Box<dyn clap_builder::builder::value_parser::AnyValueParser>>(v7, v8);
  }
  else
  {
    result = v19;
    a1[2] = v19;
    *(_OWORD *)a1 = v18;
  }
  return result;
}