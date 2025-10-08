void *__fastcall bat::assets::asset_from_contents(char *dest)
{
  void *result; // rax
  _QWORD v2[2]; // [rsp+0h] [rbp-178h] BYREF
  _QWORD v3[3]; // [rsp+10h] [rbp-168h] BYREF
  _BYTE v4[72]; // [rsp+28h] [rbp-150h] BYREF
  _QWORD src[33]; // [rsp+70h] [rbp-108h] BYREF

  v2[0] = aLazyLoadedThem;
  v2[1] = 17LL;
  flate2::zlib::read::ZlibDecoder<R>::new(v4);
  v3[0] = 0LL;
  v3[1] = 1LL;
  v3[2] = 0LL;
  bincode::internal::deserialize_from_custom_seed(src, v3);
  if ( !__OFSUB__(0LL, src[0]) )
    return memcpy(dest, src, 0xF8uLL);
  result = (void *)bat::assets::asset_from_contents::{{closure}}(dest + 8, v2, src[1]);
  *(_QWORD *)dest = 0x8000000000000000LL;
  return result;
}