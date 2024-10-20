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
    v4 = (_OWORD *)alloc::alloc::Global::alloc_impl(1LL, 8LL, 32LL, 0LL);
    if ( !v4 )
      alloc::alloc::handle_alloc_error(8LL, 32LL);
    v4[1] = v7;
    *v4 = v6;
    a1[1] = v4;
    a1[2] = &anon_f907210316a4f48a9c7de5c93e2a79ff_287_llvm_5503381581801417789;
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
