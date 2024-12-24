_QWORD *__fastcall uu_wc::Inputs::new(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int128 v7; // [rsp+0h] [rbp-118h] BYREF
  __int64 v8; // [rsp+10h] [rbp-108h]
  __int128 v9; // [rsp+20h] [rbp-F8h] BYREF
  __int128 v10; // [rsp+30h] [rbp-E8h]
  __int128 v11; // [rsp+40h] [rbp-D8h]
  __int128 v12; // [rsp+50h] [rbp-C8h]
  __int128 v13; // [rsp+60h] [rbp-B8h] BYREF
  __int128 v14; // [rsp+70h] [rbp-A8h]
  __int128 v15; // [rsp+80h] [rbp-98h]
  __int128 v16; // [rsp+90h] [rbp-88h]
  _OWORD v17[6]; // [rsp+B0h] [rbp-68h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many(&v13, a2, aFiles, 5LL);
  clap_builder::parser::error::MatchesError::unwrap(&v9, aFiles, 5LL, &v13);
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(
    &v13,
    a2,
    anon_8aac807fac66dc3af2ac0bbb77a0c346_4_llvm_9965479195333595493,
    11LL);
  v2 = clap_builder::parser::error::MatchesError::unwrap(
         anon_8aac807fac66dc3af2ac0bbb77a0c346_4_llvm_9965479195333595493,
         11LL,
         &v13);
  if ( (_QWORD)v9 )
  {
    if ( v2 )
    {
      v16 = v12;
      v15 = v11;
      v14 = v10;
      v13 = v9;
      if ( !<clap_builder::parser::matches::arg_matches::ValuesRef<T> as core::iter::traits::iterator::Iterator>::next(&v13) )
        core::option::unwrap_failed(&off_131F50);
      uu_wc::WcError::files_disabled((__int64)&v7);
      a1[1] = alloc::boxed::Box<T>::new(&v7);
      a1[2] = &off_131FA0;
      *a1 = 3LL;
    }
    else
    {
      v17[3] = v12;
      v17[2] = v11;
      v17[1] = v10;
      v17[0] = v9;
      <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(a1 + 1, v17);
      *a1 = 1LL;
    }
  }
  else if ( v2 )
  {
    <uu_wc::Input as core::convert::From<&T>>::from(&v7, v2);
    uu_wc::Input::try_as_files0(&v13, &v7);
    v3 = v13;
    if ( (_QWORD)v13 == 0x8000000000000000LL )
    {
      a1[3] = v8;
      *(_OWORD *)(a1 + 1) = v7;
      *a1 = 2LL;
    }
    else
    {
      v4 = *((_QWORD *)&v13 + 1);
      v5 = v14;
      if ( (_QWORD)v13 == 0x8000000000000001LL )
      {
        a1[1] = *((_QWORD *)&v13 + 1);
        a1[2] = v5;
        *a1 = 3LL;
      }
      else
      {
        *a1 = 1LL;
        a1[1] = v3;
        a1[2] = v4;
        a1[3] = v5;
      }
      core::ptr::drop_in_place<uu_wc::Input>(&v7, 0x8000000000000001LL, v4);
    }
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
