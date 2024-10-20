__int64 uu_hashsum::create_algorithm_from_flags::{{closure}}()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  _BYTE src[144]; // [rsp+8h] [rbp-90h] BYREF

  <generic_array::GenericArray<T,N> as generic_array::sequence::GenericSequence<T>>::generate(src);
  v0 = _rust_alloc(352LL, 8LL);
  if ( !v0 )
    alloc::alloc::handle_alloc_error(8LL, 352LL);
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
  memcpy((void *)(v0 + 208), src, 0x88uLL);
  *(_BYTE *)(v1 + 344) = 0;
  return v1;
}
