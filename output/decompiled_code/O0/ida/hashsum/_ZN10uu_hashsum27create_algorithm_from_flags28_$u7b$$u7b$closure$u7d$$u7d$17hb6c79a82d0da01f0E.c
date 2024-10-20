__int64 uu_hashsum::create_algorithm_from_flags::{{closure}}()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  _BYTE v3[152]; // [rsp+0h] [rbp-98h] BYREF

  <generic_array::GenericArray<T,N> as generic_array::sequence::GenericSequence<T>>::generate(v3);
  v0 = _rust_alloc(360LL, 8LL);
  if ( !v0 )
    alloc::alloc::handle_alloc_error(8LL, 360LL);
  *(_OWORD *)(v0 + 176) = 0LL;
  *(_OWORD *)(v0 + 160) = 0LL;
  *(_OWORD *)(v0 + 144) = 0LL;
  *(_OWORD *)(v0 + 128) = 0LL;
  *(_OWORD *)(v0 + 112) = 0LL;
  *(_OWORD *)(v0 + 96) = 0LL;
  *(_OWORD *)(v0 + 80) = 0LL;
  *(_OWORD *)(v0 + 64) = 0LL;
  *(_OWORD *)(v0 + 48) = 0LL;
  *(_OWORD *)(v0 + 32) = 0LL;
  *(_OWORD *)(v0 + 16) = 0LL;
  *(_OWORD *)v0 = 0LL;
  *(_QWORD *)(v0 + 192) = 0LL;
  *(_QWORD *)(v0 + 200) = 24LL;
  v1 = v0;
  memcpy((void *)(v0 + 208), v3, 0x90uLL);
  *(_BYTE *)(v1 + 352) = 0;
  return v1;
}
