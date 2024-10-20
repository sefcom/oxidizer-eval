_QWORD *__fastcall uu_tail::chunks::BytesChunk::fill(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  _OWORD *v4; // rax
  __int128 v6; // [rsp+8h] [rbp-30h]
  __int128 v7; // [rsp+18h] [rbp-20h]

  if ( <std::io::buffered::bufreader::BufReader<R> as std::io::Read>::read(a3, a2, 0x2000LL) )
  {
    *(_QWORD *)&v6 = 0x8000000000000000LL;
    *((_QWORD *)&v7 + 1) = v3;
    v4 = (_OWORD *)_rust_alloc(32LL, 8LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v4[1] = v7;
    *v4 = v6;
    a1[1] = v4;
    a1[2] = &anon_9b9ba72dabd212696498d24b7f543cb0_73_llvm_3928628070634382108;
    *a1 = 1LL;
  }
  else
  {
    *(_QWORD *)(a2 + 0x2000) = v3;
    if ( v3 )
    {
      a1[1] = 1LL;
      a1[2] = v3;
      *a1 = 0LL;
    }
    else
    {
      *(_OWORD *)a1 = 0LL;
    }
  }
  return a1;
}
