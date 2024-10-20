__int64 __fastcall uu_dd::progress::ProgUpdate::print_transfer_stats(int *a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int128 v4; // rax
  __int128 v5; // xmm0
  void *v7; // [rsp+8h] [rbp-40h] BYREF
  __int128 v8; // [rsp+10h] [rbp-38h] BYREF
  _OWORD v9[2]; // [rsp+20h] [rbp-28h]

  v7 = &std::io::stdio::stderr::INSTANCE;
  if ( a2 )
  {
    *(_QWORD *)&v8 = &anon_09342749f2f0afc509120f10eba31a78_31_llvm_15503904748741807753;
    *((_QWORD *)&v8 + 1) = 1LL;
    v9[0] = 8uLL;
    v2 = <std::io::stdio::Stderr as std::io::Write>::write_fmt(&v7, &v8);
    if ( v2 )
    {
      *(_QWORD *)&v8 = 0x8000000000000000LL;
      *((_QWORD *)&v9[0] + 1) = v2;
      *(_QWORD *)&v4 = _rust_alloc(32LL, 8LL);
      if ( !(_QWORD)v4 )
        alloc::alloc::handle_alloc_error(8LL, 32LL);
      goto LABEL_10;
    }
  }
  v3 = uu_dd::progress::ProgUpdate::write_io_lines(a1, (__int64)&v7);
  if ( v3 )
  {
    *(_QWORD *)&v8 = 0x8000000000000000LL;
    *((_QWORD *)&v9[0] + 1) = v3;
    *(_QWORD *)&v4 = _rust_alloc(32LL, 8LL);
    if ( !(_QWORD)v4 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
LABEL_10:
    v5 = v8;
    *(_OWORD *)(v4 + 16) = v9[0];
    *(_OWORD *)v4 = v5;
    *((_QWORD *)&v4 + 1) = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
LABEL_11:
    v8 = v4;
    core::result::unwrap_failed(
      anon_09342749f2f0afc509120f10eba31a78_2_llvm_15503904748741807753,
      43LL,
      &v8,
      &anon_09342749f2f0afc509120f10eba31a78_3_llvm_15503904748741807753,
      &anon_09342749f2f0afc509120f10eba31a78_34_llvm_15503904748741807753);
  }
  *(_QWORD *)&v4 = uu_dd::progress::ProgUpdate::write_prog_line((unsigned __int64 *)a1, (__int64)&v7, 0);
  if ( (_QWORD)v4 )
    goto LABEL_11;
  return v4;
}
