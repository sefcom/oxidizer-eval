__int64 __fastcall uu_tsort::uumain::uumain(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r12
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __m256i v16; // [rsp+10h] [rbp-3B8h] BYREF
  __int128 v17; // [rsp+30h] [rbp-398h]
  __int64 v18; // [rsp+40h] [rbp-388h]
  __int16 v19; // [rsp+48h] [rbp-380h]
  __int64 v20; // [rsp+50h] [rbp-378h] BYREF
  __int64 v21; // [rsp+58h] [rbp-370h]
  __int64 v22; // [rsp+60h] [rbp-368h]
  _QWORD v23[3]; // [rsp+68h] [rbp-360h] BYREF
  __m256i v24; // [rsp+80h] [rbp-348h] BYREF
  __int128 v25; // [rsp+A0h] [rbp-328h]
  __int64 v26; // [rsp+B0h] [rbp-318h]
  __int128 v27; // [rsp+B8h] [rbp-310h] BYREF
  __int64 v28; // [rsp+C8h] [rbp-300h]
  __int64 dest; // [rsp+D0h] [rbp-2F8h] BYREF
  __int128 v30; // [rsp+D8h] [rbp-2F0h]
  __int64 v31; // [rsp+E8h] [rbp-2E0h]

  uu_tsort::uu_app(&dest);
  clap_builder::builder::command::Command::try_get_matches_from(&v16, &dest, a1, a2);
  if ( __OFSUB__(-v16.m256i_i64[0], 1LL) )
    return uucore::mods::error::<impl core::convert::From<clap_builder::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(
             v16.m256i_i64[1],
             &dest,
             v2,
             -v16.m256i_i64[0]);
  v26 = v18;
  v25 = v17;
  v24 = v16;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&dest, &v24);
  v4 = clap_builder::parser::error::MatchesError::unwrap(&dest);
  v5 = v4;
  if ( !v4 )
    core::option::expect_failed(
      "Value is required by clap-mid > len/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/l"
      "ib/rustlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: \v",
      25LL,
      &off_EA788);
  v6 = *(_QWORD *)(v4 + 8);
  v7 = *(_QWORD *)(v4 + 16);
  if ( (unsigned __int8)<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(
                          v6,
                          v7,
                          "-mid > len/home/34r7hm4n/.rustup/toolchains/nightly-2025-05-22-x86_64-unknown-linux-gnu/lib/ru"
                          "stlib/src/rust/library/core/src/slice/iter.rsError flushing stdout: \v",
                          1LL) )
  {
    v8 = std::io::stdio::stdin();
    std::io::read_to_string(&dest, v8);
    v9 = dest;
    v10 = v30;
    if ( dest == 0x8000000000000000LL )
      goto LABEL_10;
    goto LABEL_11;
  }
  if ( !(unsigned __int8)std::path::Path::is_dir(v6, v7) )
  {
    std::fs::read_to_string(&dest, v6, v7);
    v9 = dest;
    v10 = v30;
    if ( dest == 0x8000000000000000LL )
    {
LABEL_10:
      v11 = uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v30);
      goto LABEL_17;
    }
LABEL_11:
    v12 = *((_QWORD *)&v30 + 1);
    <alloc::string::String as core::clone::Clone>::clone(&v16, v5);
    uu_tsort::Graph::new(&dest, &v16);
    <core::str::pattern::MultiCharEqPattern<C> as core::str::pattern::Pattern>::into_searcher(
      &v16.m256i_u64[2],
      v10,
      v12);
    v16.m256i_i64[0] = 0LL;
    v16.m256i_i64[1] = v12;
    v19 = 1;
    core::iter::traits::iterator::Iterator::collect(&v20, &v16);
    v13 = v21;
    v23[0] = v21;
    v23[1] = v22;
    v23[2] = 2LL;
    while ( 1 )
    {
      v14 = (_QWORD *)<core::slice::iter::Chunks<T> as core::iter::traits::iterator::Iterator>::next(v23);
      if ( !v14 )
      {
        core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v20, v13);
        uu_tsort::Graph::run_tsort(&dest);
        core::ptr::drop_in_place<uu_tsort::Graph>(&dest);
        core::ptr::drop_in_place<alloc::string::String>(v9, v10);
        core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v24);
        return 0LL;
      }
      if ( v15 != 2 )
        break;
      uu_tsort::Graph::add_edge(&dest, *v14, v14[1], v14[2], v14[3]);
    }
    <alloc::string::String as core::clone::Clone>::clone(&v27, v5);
    v16.m256i_i64[3] = v28;
    *(_OWORD *)&v16.m256i_u64[1] = v27;
    v16.m256i_i64[0] = 1LL;
    v11 = alloc::boxed::Box<T>::new(&v16);
    core::ptr::drop_in_place<alloc::vec::Vec<&str>>(v20, v13);
    core::ptr::drop_in_place<uu_tsort::Graph>(&dest);
    core::ptr::drop_in_place<alloc::string::String>(v9, v10);
    goto LABEL_17;
  }
  <alloc::string::String as core::clone::Clone>::clone(&v16, v5);
  v31 = v16.m256i_i64[2];
  v30 = *(_OWORD *)v16.m256i_i8;
  dest = 0LL;
  v11 = alloc::boxed::Box<T>::new(&dest);
LABEL_17:
  core::ptr::drop_in_place<clap_builder::parser::matches::arg_matches::ArgMatches>(&v24);
  return v11;
}