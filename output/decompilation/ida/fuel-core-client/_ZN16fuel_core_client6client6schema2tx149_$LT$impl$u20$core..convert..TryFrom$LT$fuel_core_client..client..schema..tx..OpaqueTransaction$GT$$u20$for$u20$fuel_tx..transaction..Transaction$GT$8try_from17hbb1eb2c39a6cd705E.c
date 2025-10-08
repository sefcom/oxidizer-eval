_QWORD *__fastcall fuel_core_client::client::schema::tx::<impl core::convert::TryFrom<fuel_core_client::client::schema::tx::OpaqueTransaction> for fuel_tx::transaction::Transaction>::try_from(
        _QWORD *dest,
        __int64 *a2)
{
  __int64 v2; // r15
  __int64 v3; // rbx
  _QWORD src[57]; // [rsp+10h] [rbp-1C8h] BYREF

  v2 = *a2;
  v3 = a2[1];
  fuel_types::canonical::Deserialize::decode(src);
  if ( src[0] == 0x8000000000000006LL )
  {
    dest[4] = src[3];
    *((_OWORD *)dest + 1) = *(_OWORD *)&src[1];
    dest[1] = 6LL;
    *dest = 0x8000000000000006LL;
  }
  else
  {
    memcpy(dest, src, 0x1B0uLL);
  }
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v2, v3);
  return dest;
}