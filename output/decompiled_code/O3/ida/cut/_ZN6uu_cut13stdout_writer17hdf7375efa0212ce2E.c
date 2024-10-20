__int64 uu_cut::stdout_writer()
{
  __int64 v0; // rbx
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int128 v4; // [rsp+0h] [rbp-38h]
  __int128 v5; // [rsp+10h] [rbp-28h]

  std::io::stdio::stdout();
  if ( isatty(1) )
  {
    v0 = std::io::stdio::stdout();
    result = _rust_alloc(8LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *(_QWORD *)result = v0;
  }
  else
  {
    v2 = std::io::stdio::stdout();
    v3 = _rust_alloc(0x2000LL, 1LL);
    if ( !v3 )
      alloc::raw_vec::handle_error(1LL, 0x2000LL);
    *(_QWORD *)&v4 = 0x2000LL;
    *((_QWORD *)&v4 + 1) = v3;
    *(_QWORD *)&v5 = 0LL;
    BYTE8(v5) = 0;
    result = _rust_alloc(40LL, 8LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 40LL);
    *(_QWORD *)(result + 32) = v2;
    *(_OWORD *)(result + 16) = v5;
    *(_OWORD *)result = v4;
  }
  return result;
}
