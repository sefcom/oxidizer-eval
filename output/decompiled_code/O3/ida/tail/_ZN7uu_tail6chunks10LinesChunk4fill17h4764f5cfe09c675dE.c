__int64 *__fastcall uu_tail::chunks::LinesChunk::fill(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdx
  _OWORD *v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  __int128 v8; // [rsp+0h] [rbp-38h]
  __int128 v9; // [rsp+10h] [rbp-28h]

  if ( <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a3, a2, 0x2000LL) )
  {
    *(_QWORD *)&v8 = 0x8000000000000000LL;
    *((_QWORD *)&v9 + 1) = v3;
    v4 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v4[1] = v9;
    *v4 = v8;
    a1[1] = (__int64)v4;
    a1[2] = (__int64)&anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
    v5 = 1LL;
  }
  else
  {
    *(_QWORD *)(a2 + 0x2000) = v3;
    if ( v3 )
    {
      if ( v3 >= 0x2001 )
        core::slice::index::slice_end_index_len_fail(
          v3,
          0x2000LL,
          &anon_260ad779062915721296377f2d114085_13_llvm_11775337101010531792);
      v6 = v3;
      *(_QWORD *)(a2 + 8200) = memchr::arch::x86_64::memchr::count_raw::FN();
      a1[1] = 1LL;
      a1[2] = v6;
    }
    else
    {
      *(_QWORD *)(a2 + 8200) = 0LL;
      a1[1] = 0LL;
    }
    v5 = 0LL;
  }
  *a1 = v5;
  return a1;
}
