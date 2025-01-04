_QWORD *__fastcall uu_wc::Inputs::new(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int128 v8; // [rsp+0h] [rbp-118h] BYREF
  __int64 v9; // [rsp+10h] [rbp-108h]
  __int128 v10; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v11; // [rsp+30h] [rbp-E8h]
  __int128 v12; // [rsp+40h] [rbp-D8h]
  __int128 v13; // [rsp+50h] [rbp-C8h]
  __int128 v14; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+70h] [rbp-A8h]
  __int128 v16; // [rsp+80h] [rbp-98h]
  __int128 v17; // [rsp+90h] [rbp-88h]
  _OWORD v18[6]; // [rsp+B0h] [rbp-68h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v14, a2, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(&v10, aFiles, 5LL, &v14);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v14,
    a2,
    anon_ca8d8071f7923b59edada6fd769c66ed_24_llvm_12788460948389540269,
    11LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(
         anon_ca8d8071f7923b59edada6fd769c66ed_24_llvm_12788460948389540269,
         11LL,
         &v14);
  if ( (_QWORD)v10 )
  {
    if ( v2 )
    {
      v17 = v13;
      v16 = v12;
      v15 = v11;
      v14 = v10;
      v3 = <clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v14);
      if ( !v3 )
        core::option::unwrap_failed(&off_130F40);
      uu_wc::WcError::files_disabled(&v8, *(_QWORD *)(v3 + 8), *(_QWORD *)(v3 + 16));
      a1[1] = alloc::boxed::Box<T>::new(&v8);
      a1[2] = &off_130F90;
      *a1 = 3LL;
    }
    else
    {
      v18[3] = v13;
      v18[2] = v12;
      v18[1] = v11;
      v18[0] = v10;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1 + 1, v18);
      *a1 = 1LL;
    }
  }
  else if ( v2 )
  {
    <uu_wc::Input as core::convert::From<&T>>::from(&v8, v2);
    uu_wc::Input::try_as_files0(&v14, &v8);
    v4 = v14;
    if ( (_QWORD)v14 == 0x8000000000000000LL )
    {
      a1[3] = v9;
      *(_OWORD *)(a1 + 1) = v8;
      *a1 = 2LL;
    }
    else
    {
      v5 = *((_QWORD *)&v14 + 1);
      v6 = v15;
      if ( (_QWORD)v14 == 0x8000000000000001LL )
      {
        a1[1] = *((_QWORD *)&v14 + 1);
        a1[2] = v6;
        *a1 = 3LL;
      }
      else
      {
        *a1 = 1LL;
        a1[1] = v4;
        a1[2] = v5;
        a1[3] = v6;
      }
      core::ptr::drop_in_place<uu_wc::Input>(&v8, 0x8000000000000001LL, v5);
    }
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
