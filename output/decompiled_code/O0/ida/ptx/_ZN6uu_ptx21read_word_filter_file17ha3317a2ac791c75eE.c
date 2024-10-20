__int64 __fastcall uu_ptx::read_word_filter_file(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rax
  __int128 *v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v13; // [rsp+8h] [rbp-210h] BYREF
  __int64 v14; // [rsp+10h] [rbp-208h]
  __int64 v15; // [rsp+18h] [rbp-200h]
  _OWORD v16[2]; // [rsp+20h] [rbp-1F8h] BYREF
  int fd[4]; // [rsp+40h] [rbp-1D8h]
  __int128 v18; // [rsp+50h] [rbp-1C8h] BYREF
  __int128 v19; // [rsp+60h] [rbp-1B8h]
  __int128 v20; // [rsp+70h] [rbp-1A8h]
  _DWORD v21[2]; // [rsp+88h] [rbp-190h] BYREF
  __int64 v22; // [rsp+90h] [rbp-188h]
  __int64 v23; // [rsp+98h] [rbp-180h] BYREF
  __int128 v24; // [rsp+A0h] [rbp-178h]
  __int128 v25; // [rsp+B0h] [rbp-168h]
  __int128 v26; // [rsp+C0h] [rbp-158h]
  __int128 v27; // [rsp+D0h] [rbp-148h]
  _QWORD v28[2]; // [rsp+E0h] [rbp-138h] BYREF
  __int64 v29; // [rsp+F0h] [rbp-128h] BYREF
  __int64 v30; // [rsp+F8h] [rbp-120h]
  __int64 v31; // [rsp+100h] [rbp-118h]
  _QWORD v32[3]; // [rsp+108h] [rbp-110h] BYREF
  _QWORD v33[4]; // [rsp+120h] [rbp-F8h] BYREF
  _QWORD v34[6]; // [rsp+140h] [rbp-D8h] BYREF
  _OWORD v35[3]; // [rsp+170h] [rbp-A8h] BYREF
  _OWORD v36[7]; // [rsp+1A0h] [rbp-78h] BYREF

  v6 = a1;
  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v23);
  v28[0] = a3;
  v28[1] = a4;
  if ( v23 )
  {
    v36[3] = v27;
    v36[2] = v26;
    v36[1] = v25;
    v36[0] = v24;
    v33[0] = v28;
    v33[1] = <&T as core::fmt::Display>::fmt;
    v33[2] = v36;
    v33[3] = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    v34[0] = &anon_fc8b0a57c72ccea5fed8d71b627fdd79_4_llvm_18322555434409866145;
    v34[1] = 2LL;
    v34[4] = 0LL;
    v34[2] = v33;
    v34[3] = 2LL;
    core::panicking::panic_fmt(v34, &off_2AA900);
  }
  if ( !(_QWORD)v24 )
    core::option::expect_failed(aParsingOptions, 23LL, &off_2AA918);
  <alloc::string::String as core::clone::Clone>::clone(&v13);
  v23 = 0x1B600000000LL;
  LODWORD(v24) = 1;
  WORD2(v24) = 0;
  if ( !v14 || v15 < 0 )
    core::panicking::panic_nounwind(anon_23a8c89669b7e3966eab8f1d3c4cd90c_23_llvm_2187995499940452454, 162LL);
  std::fs::OpenOptions::_open(v21, &v23);
  if ( v13 )
    _rust_dealloc(v14, v13, 1LL);
  if ( v21[0] )
  {
    *(_QWORD *)(a1 + 8) = v22;
    *(_QWORD *)a1 = 0LL;
    return v6;
  }
  std::io::buffered::bufreader::BufReader<R>::with_capacity(v35, 0x2000LL, v21[1]);
  v7 = (_QWORD *)(__readfsqword(0) - 64);
  if ( *v7 )
  {
    if ( *v7 == 1LL )
    {
      v8 = (__int128 *)(v7 + 1);
      goto LABEL_13;
    }
LABEL_29:
    core::result::unwrap_failed(
      anon_36ed41eda6fe4f586c1075cc8653ab23_8_llvm_8279379623583455147,
      70LL,
      &v23,
      &anon_fc29c7c6ca22db7019ef23aa61119845_34_llvm_4141834359802392258,
      &anon_36ed41eda6fe4f586c1075cc8653ab23_10_llvm_8279379623583455147);
  }
  v8 = (__int128 *)std::sys::thread_local::native::lazy::Storage<T,D>::initialize(__readfsqword(0) - 64, 0LL);
  if ( !v8 )
    goto LABEL_29;
LABEL_13:
  v9 = *v8;
  ++*(_QWORD *)v8;
  v19 = xmmword_2AB5D0;
  v18 = *(_OWORD *)&anon_397063f1f014473d61d2154b9752ab14_42_llvm_15845615741859781558;
  v20 = v9;
  v16[0] = v35[0];
  v16[1] = v35[1];
  *(_OWORD *)fd = v35[2];
  while ( 1 )
  {
    <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v29, v16);
    if ( v29 == 0x8000000000000001LL )
      break;
    if ( v29 == 0x8000000000000000LL )
    {
      v6 = a1;
      *(_QWORD *)(a1 + 8) = v30;
      *(_QWORD *)a1 = 0LL;
      if ( *((_QWORD *)&v16[0] + 1) )
        _rust_dealloc(*(_QWORD *)&v16[0], *((_QWORD *)&v16[0] + 1), 1LL);
      std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd[2]);
      close(fd[2]);
      if ( *((_QWORD *)&v18 + 1) )
      {
        hashbrown::raw::RawTableInner::drop_elements(&v18);
        hashbrown::raw::TableLayout::calculate_layout_for(&v23, 24LL, 16LL, *((_QWORD *)&v18 + 1) + 1LL);
        if ( (_QWORD)v24 )
          _rust_dealloc(v18 - *((_QWORD *)&v24 + 1), v24, v23);
      }
      return v6;
    }
    v32[0] = v29;
    v32[1] = v30;
    v32[2] = v31;
    hashbrown::map::HashMap<K,V,S,A>::insert(&v18, v32);
  }
  if ( *((_QWORD *)&v16[0] + 1) )
    _rust_dealloc(*(_QWORD *)&v16[0], *((_QWORD *)&v16[0] + 1), 1LL);
  std::sys::pal::unix::fs::debug_assert_fd_is_open((unsigned int)fd[2]);
  v6 = a1;
  close(fd[2]);
  v10 = v19;
  v11 = v20;
  *(_OWORD *)a1 = v18;
  *(_OWORD *)(a1 + 16) = v10;
  *(_OWORD *)(a1 + 32) = v11;
  return v6;
}
