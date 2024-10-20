__int64 uu_hashsum::create_algorithm_from_flags::{{closure}}()
{
  __int64 result; // rax
  __int128 v1; // xmm1
  __int128 v2; // xmm2
  __int128 v3; // xmm3
  _OWORD v4[4]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v5; // [rsp+40h] [rbp-8h]

  <generic_array::GenericArray<T,N> as generic_array::sequence::GenericSequence<T>>::generate(v4);
  result = _rust_alloc(288LL, 8LL);
  if ( !result )
    alloc::alloc::handle_alloc_error(8LL, 288LL);
  *(_OWORD *)(result + 176) = 0LL;
  *(_OWORD *)(result + 160) = 0LL;
  *(_OWORD *)(result + 144) = 0LL;
  *(_OWORD *)(result + 128) = 0LL;
  *(_OWORD *)(result + 112) = 0LL;
  *(_OWORD *)(result + 96) = 0LL;
  *(_OWORD *)(result + 80) = 0LL;
  *(_OWORD *)(result + 64) = 0LL;
  *(_OWORD *)(result + 48) = 0LL;
  *(_OWORD *)(result + 32) = 0LL;
  *(_OWORD *)(result + 16) = 0LL;
  *(_OWORD *)result = 0LL;
  *(_QWORD *)(result + 192) = 0LL;
  *(_QWORD *)(result + 200) = 24LL;
  v1 = v4[1];
  v2 = v4[2];
  v3 = v4[3];
  *(_OWORD *)(result + 208) = v4[0];
  *(_OWORD *)(result + 224) = v1;
  *(_OWORD *)(result + 240) = v2;
  *(_OWORD *)(result + 256) = v3;
  *(_QWORD *)(result + 272) = v5;
  *(_BYTE *)(result + 280) = 0;
  return result;
}
