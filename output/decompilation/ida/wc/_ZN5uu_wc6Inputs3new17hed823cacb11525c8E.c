__int64 __fastcall uu_wc::Inputs::new(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int128 v8; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v9; // [rsp+10h] [rbp-B8h]
  __int128 v10; // [rsp+20h] [rbp-A8h] BYREF
  __int128 v11; // [rsp+30h] [rbp-98h]
  __int128 v12; // [rsp+40h] [rbp-88h]
  __int128 v13; // [rsp+50h] [rbp-78h]
  _OWORD v14[5]; // [rsp+70h] [rbp-58h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v10);
  clap_builder::parser::error::MatchesError::unwrap(v14, &v10);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v10);
  v2 = clap_builder::parser::error::MatchesError::unwrap(&v10);
  if ( !*(_QWORD *)&v14[0] )
  {
    if ( !v2 )
    {
      *(_QWORD *)a1 = 0LL;
      return a1;
    }
    <uu_wc::Input as core::convert::From<&T>>::from(&v8, *(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16));
    uu_wc::Input::try_as_files0(&v10, &v8);
    if ( __OFSUB__(-(__int64)v10, 1LL) )
    {
      *(_QWORD *)(a1 + 24) = v9;
      *(_OWORD *)(a1 + 8) = v8;
      v6 = 2LL;
    }
    else
    {
      v4 = *((_QWORD *)&v10 + 1);
      v5 = v11;
      if ( (_QWORD)v10 == 0x8000000000000001LL )
      {
        *(_QWORD *)(a1 + 8) = *((_QWORD *)&v10 + 1);
        *(_QWORD *)(a1 + 16) = v5;
        *(_QWORD *)a1 = 3LL;
        core::ptr::drop_in_place<uu_wc::Input>(&v8);
        return a1;
      }
      *(_QWORD *)(a1 + 8) = v10;
      *(_QWORD *)(a1 + 16) = v4;
      *(_QWORD *)(a1 + 24) = v5;
      core::ptr::drop_in_place<uu_wc::Input>(&v8);
      v6 = 1LL;
    }
    *(_QWORD *)a1 = v6;
    return a1;
  }
  if ( v2 )
  {
    v13 = v14[3];
    v12 = v14[2];
    v11 = v14[1];
    v10 = v14[0];
    v3 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(
           &v10,
           a2);
    if ( !v3 )
      core::option::unwrap_failed(&off_F9060);
    uu_wc::WcError::files_disabled(&v8, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
    *(_QWORD *)(a1 + 8) = alloc::boxed::Box<T>::new(&v8);
    *(_QWORD *)(a1 + 16) = &off_F9098;
    *(_QWORD *)a1 = 3LL;
  }
  else
  {
    core::iter::traits::iterator::Iterator::collect(a1 + 8, v14);
    *(_QWORD *)a1 = 1LL;
  }
  return a1;
}