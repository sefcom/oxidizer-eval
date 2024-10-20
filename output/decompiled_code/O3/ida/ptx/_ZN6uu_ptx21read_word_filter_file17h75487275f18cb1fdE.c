_OWORD *__fastcall uu_ptx::read_word_filter_file(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  _OWORD *result; // rax
  int v8; // ebp
  __int64 v9; // rax
  __int128 *v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  _QWORD *v14; // rax
  __int128 v15; // [rsp+0h] [rbp-138h] BYREF
  __int128 v16; // [rsp+10h] [rbp-128h]
  int fd[4]; // [rsp+20h] [rbp-118h]
  _QWORD *v18; // [rsp+38h] [rbp-100h]
  __int128 v19; // [rsp+40h] [rbp-F8h] BYREF
  __int128 v20; // [rsp+50h] [rbp-E8h]
  __int128 v21; // [rsp+60h] [rbp-D8h]
  __int128 v22; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v23; // [rsp+88h] [rbp-B0h]
  __int128 v24; // [rsp+98h] [rbp-A0h]
  _QWORD *v25; // [rsp+A8h] [rbp-90h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+B0h] [rbp-88h]
  __int128 *v27; // [rsp+B8h] [rbp-80h]
  __int64 (__fastcall *v28)(); // [rsp+C0h] [rbp-78h]
  __int64 v29; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v30; // [rsp+D0h] [rbp-68h]
  __int64 v31; // [rsp+D8h] [rbp-60h]
  _QWORD v32[2]; // [rsp+E0h] [rbp-58h] BYREF
  _QWORD v33[9]; // [rsp+F0h] [rbp-48h] BYREF

  clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one(&v22);
  v32[0] = a3;
  v32[1] = a4;
  if ( (_DWORD)v22 != 2 )
  {
    *(_QWORD *)&v21 = v24;
    v20 = v23;
    v19 = v22;
    v25 = v32;
    v26 = <&T as core::fmt::Display>::fmt;
    v27 = &v19;
    v28 = <clap_builder::parser::error::MatchesError as core::fmt::Display>::fmt;
    *(_QWORD *)&v15 = &anon_982ebfe6603d1d7445e24895863ba0e8_2_llvm_17676394313059082282;
    *((_QWORD *)&v15 + 1) = 2LL;
    *(_QWORD *)fd = 0LL;
    *(_QWORD *)&v16 = &v25;
    *((_QWORD *)&v16 + 1) = 2LL;
    ((void (__fastcall __noreturn *)(__int128 *, char **))core::panicking::panic_fmt)(
      &v15,
      &anon_982ebfe6603d1d7445e24895863ba0e8_4_llvm_17676394313059082282);
  }
  if ( !*((_QWORD *)&v22 + 1) )
    core::option::expect_failed(aParsingOptions, 23LL, &off_27B330);
  <alloc::string::String as core::clone::Clone>::clone(&v29);
  *(_QWORD *)&v15 = 0x1B600000000LL;
  DWORD2(v15) = 1;
  WORD6(v15) = 0;
  v6 = v30;
  std::fs::OpenOptions::_open(&v19, &v15, v30, v31);
  if ( v29 )
    _rust_dealloc(v6, v29, 1LL);
  if ( (_DWORD)v19 )
  {
    result = (_OWORD *)*((_QWORD *)&v19 + 1);
    a1[1] = *((_QWORD *)&v19 + 1);
    *a1 = 0LL;
  }
  else
  {
    v8 = DWORD1(v19);
    v9 = _rust_alloc(0x2000LL, 1LL);
    if ( !v9 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)&v22 = v9;
    *((_QWORD *)&v22 + 1) = 0x2000LL;
    v23 = 0LL;
    *(_QWORD *)&v24 = 0LL;
    DWORD2(v24) = v8;
    v10 = (__int128 *)core::ops::function::FnOnce::call_once(0LL);
    v18 = a1;
    if ( !v10 )
      core::result::unwrap_failed(
        anon_0fac0acfa44b1c763f97960489e7b454_5_llvm_1023991217553494206,
        70LL,
        &v15,
        &anon_0fac0acfa44b1c763f97960489e7b454_9_llvm_1023991217553494206,
        &anon_0fac0acfa44b1c763f97960489e7b454_7_llvm_1023991217553494206);
    v11 = *v10;
    ++*(_QWORD *)v10;
    v20 = xmmword_27BCB8;
    v19 = *(_OWORD *)&anon_585b1728ec6435d03fbe081b5952853c_2_llvm_8033991318799290767;
    v21 = v11;
    *(_OWORD *)fd = v24;
    v16 = v23;
    v15 = v22;
    while ( 1 )
    {
      <std::io::Lines<B> as core::iter::traits::iterator::Iterator>::next(&v25, &v15);
      if ( v25 == (_QWORD *)0x8000000000000001LL )
        break;
      if ( v25 == (_QWORD *)0x8000000000000000LL )
      {
        v14 = v18;
        v18[1] = v26;
        *v14 = 0LL;
        if ( *((_QWORD *)&v15 + 1) )
          _rust_dealloc(v15, *((_QWORD *)&v15 + 1), 1LL);
        close(fd[2]);
        return (_OWORD *)<hashbrown::raw::RawTable<T,A> as core::ops::drop::Drop>::drop(&v19);
      }
      v33[0] = v25;
      v33[1] = v26;
      v33[2] = v27;
      hashbrown::map::HashMap<K,V,S,A>::insert(&v19, v33);
    }
    if ( *((_QWORD *)&v15 + 1) )
      _rust_dealloc(v15, *((_QWORD *)&v15 + 1), 1LL);
    close(fd[2]);
    v12 = v19;
    v13 = v20;
    result = v18;
    *((_OWORD *)v18 + 2) = v21;
    result[1] = v13;
    *result = v12;
  }
  return result;
}
