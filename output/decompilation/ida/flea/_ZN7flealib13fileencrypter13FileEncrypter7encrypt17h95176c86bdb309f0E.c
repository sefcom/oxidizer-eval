__int64 __fastcall flealib::fileencrypter::FileEncrypter::encrypt(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // [rsp+3h] [rbp-7E5h] BYREF
  _BYTE v6[12]; // [rsp+4h] [rbp-7E4h] BYREF
  _BYTE v7[8]; // [rsp+10h] [rbp-7D8h] BYREF
  __int64 v8; // [rsp+18h] [rbp-7D0h]
  __int64 v9; // [rsp+20h] [rbp-7C8h]
  __int128 dest; // [rsp+30h] [rbp-7B8h] BYREF
  __int64 v11; // [rsp+40h] [rbp-7A8h]
  _BYTE v12[1016]; // [rsp+3F0h] [rbp-3F8h] BYREF

  aead::AeadCore::generate_nonce(v6, &v5);
  generic_array::functional::FunctionalSequence::map(v7, a2);
  <aes::autodetect::Aes256 as crypto_common::KeyInit>::new(&dest);
  <aes_gcm::AesGcm<Aes,NonceSize,TagSize> as core::convert::From<Aes>>::from(v12, &dest);
  <Alg as aead::Aead>::encrypt(&dest, v12, v6, *(_QWORD *)(a3 + 8), *(_QWORD *)(a3 + 16));
  core::result::Result<T,E>::expect(v7, &dest);
  <T as alloc::slice::hack::ConvertVec>::to_vec(&dest, v6, 12LL);
  alloc::vec::Vec<T,A>::append_elements(&dest, v8, v9, &off_70A108);
  *(_QWORD *)(a1 + 16) = v11;
  *(_OWORD *)a1 = dest;
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v7);
  core::ptr::drop_in_place<aes_gcm::AesGcm<aes::autodetect::Aes256,typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UTerm,typenum::bit::B1>,typenum::bit::B1>,typenum::bit::B0>,typenum::bit::B0>>>();
  return core::ptr::drop_in_place<alloc::string::String>(a3);
}