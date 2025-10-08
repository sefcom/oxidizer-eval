void *__fastcall sniffnet::mmdb::types::mmdb_reader::MmdbReader::from(char *dest, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // r12
  void *result; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  _QWORD v11[2]; // [rsp+8h] [rbp-1C0h] BYREF
  int v12; // [rsp+18h] [rbp-1B0h]
  __int128 v13; // [rsp+20h] [rbp-1A8h] BYREF
  __int128 v14; // [rsp+30h] [rbp-198h]
  __int128 v15; // [rsp+40h] [rbp-188h]
  __int128 v16; // [rsp+50h] [rbp-178h]
  __int128 v17; // [rsp+60h] [rbp-168h]
  __int128 v18; // [rsp+70h] [rbp-158h]
  __int128 v19; // [rsp+80h] [rbp-148h]
  __int128 v20; // [rsp+90h] [rbp-138h]
  _OWORD v21[8]; // [rsp+A0h] [rbp-128h] BYREF
  _QWORD src[21]; // [rsp+120h] [rbp-A8h] BYREF

  maxminddb::Reader<alloc::vec::Vec<u8>>::open_readfile(src);
  if ( !__OFSUB__(0LL, src[0]) )
    return memcpy(dest, src, 0x88uLL);
  v6 = 0x8000000000000000LL;
  core::ptr::drop_in_place<core::result::Result<maxminddb::Reader<alloc::vec::Vec<u8>>,maxminddb::MaxMindDbError>>(src);
  result = (void *)maxminddb::Reader<S>::from_source(&v13, a3, a4);
  if ( (_QWORD)v13 == 0x8000000000000000LL )
  {
    v21[7] = v20;
    v21[6] = v19;
    v21[5] = v18;
    v21[4] = v17;
    v21[3] = v16;
    v21[2] = v15;
    v21[1] = v14;
    v21[0] = v13;
    v11[0] = aSrcMmdbTypesMm;
    v11[1] = 29LL;
    v12 = 29;
    <core::result::Result<T,E> as sniffnet::utils::error_logger::ErrorLogger<T,E>>::log_err(src, v21, v11);
    result = (void *)core::ptr::drop_in_place<core::result::Result<maxminddb::Reader<&[u8]>,maxminddb::MaxMindDbError>>(src);
    v6 = 0x8000000000000002LL;
  }
  else
  {
    *(_OWORD *)(dest + 120) = v20;
    *(_OWORD *)(dest + 104) = v19;
    *(_OWORD *)(dest + 88) = v18;
    *(_OWORD *)(dest + 72) = v17;
    v8 = v13;
    v9 = v14;
    v10 = v15;
    *(_OWORD *)(dest + 56) = v16;
    *(_OWORD *)(dest + 40) = v10;
    *(_OWORD *)(dest + 24) = v9;
    *(_OWORD *)(dest + 8) = v8;
  }
  *(_QWORD *)dest = v6;
  return result;
}