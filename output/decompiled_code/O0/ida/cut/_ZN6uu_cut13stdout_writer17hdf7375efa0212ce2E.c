__int64 uu_cut::stdout_writer()
{
  int v0; // ebp
  __int64 v1; // rbx
  __int64 result; // rax
  __int128 v3; // [rsp+8h] [rbp-50h]
  __int128 v4; // [rsp+18h] [rbp-40h]
  __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  __int128 v6; // [rsp+38h] [rbp-20h]

  std::io::stdio::stdout();
  v0 = isatty(1);
  v1 = std::io::stdio::stdout();
  if ( v0 )
  {
    result = alloc::alloc::Global::alloc_impl(1LL, 8LL, 8LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 8LL);
    *(_QWORD *)result = v1;
  }
  else
  {
    alloc::raw_vec::RawVec<T,A>::try_allocate_in(&v5, 0x2000LL, 0LL);
    if ( v5 )
      alloc::raw_vec::handle_error(v6, *((_QWORD *)&v6 + 1));
    v3 = v6;
    *(_QWORD *)&v4 = 0LL;
    BYTE8(v4) = 0;
    result = alloc::alloc::Global::alloc_impl(1LL, 8LL, 40LL, 0LL);
    if ( !result )
      alloc::alloc::handle_alloc_error(8LL, 40LL);
    *(_QWORD *)(result + 32) = v1;
    *(_OWORD *)(result + 16) = v4;
    *(_OWORD *)result = v3;
  }
  return result;
}
