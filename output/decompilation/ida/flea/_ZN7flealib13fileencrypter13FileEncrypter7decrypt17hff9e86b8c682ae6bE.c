__int64 __fastcall flealib::fileencrypter::FileEncrypter::decrypt(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int128 *v13; // rdi
  __int64 v14; // rdx
  __int64 v16; // [rsp+0h] [rbp-818h] BYREF
  __int128 v17; // [rsp+8h] [rbp-810h] BYREF
  __int64 v18; // [rsp+18h] [rbp-800h]
  __int64 v19; // [rsp+28h] [rbp-7F0h] BYREF
  __int128 v20; // [rsp+30h] [rbp-7E8h]
  __int64 dest; // [rsp+40h] [rbp-7D8h] BYREF
  __int128 v22; // [rsp+48h] [rbp-7D0h]
  _QWORD v23[131]; // [rsp+400h] [rbp-418h] BYREF

  v5 = *(_QWORD *)(a3 + 8);
  v6 = *(_QWORD *)(a3 + 16);
  v7 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index(12LL, v5, v6, &off_70A120);
  v16 = v9;
  if ( v9 != 12 )
  {
    v23[0] = 0LL;
    ((void (__fastcall __noreturn *)(_QWORD, __int64 *, void *, _QWORD *, char **, __int64))core::panicking::assert_failed)(
      0LL,
      &v16,
      &unk_50AF0,
      v23,
      &off_709D40,
      v8);
  }
  if ( v6 < 0xC )
    core::slice::index::slice_start_index_len_fail(12LL, v6, &off_70A150);
  v10 = v7;
  generic_array::functional::FunctionalSequence::map(&v17, a2);
  <aes::autodetect::Aes256 as crypto_common::KeyInit>::new(&dest);
  <aes_gcm::AesGcm<Aes,NonceSize,TagSize> as core::convert::From<Aes>>::from(v23, &dest);
  <Alg as aead::Aead>::decrypt(&dest, v23, v10, v5 + 12, v6 - 12);
  v12 = -dest;
  if ( __OFSUB__(-dest, 1LL) )
  {
    v13 = (__int128 *)core::ops::function::FnOnce::call_once(&dest, v23, v11, v12);
    a1[1] = anyhow::error::<impl core::convert::From<anyhow::Error> for alloc::boxed::Box<dyn core::error::Error+core::marker::Send+core::marker::Sync>>::from(v13);
    a1[2] = v14;
    *a1 = 0x8000000000000000LL;
  }
  else
  {
    v19 = dest;
    v20 = v22;
    alloc::string::String::from_utf8(&dest, &v19, v11, v12);
    v13 = &v17;
    core::result::Result<T,E>::unwrap(&v17, &dest);
    a1[2] = v18;
    *(_OWORD *)a1 = v17;
  }
  core::ptr::drop_in_place<aes_gcm::AesGcm<aes::autodetect::Aes256,typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UInt<typenum::uint::UTerm,typenum::bit::B1>,typenum::bit::B1>,typenum::bit::B0>,typenum::bit::B0>>>(v13);
  return core::ptr::drop_in_place<alloc::vec::Vec<u8>>(a3);
}