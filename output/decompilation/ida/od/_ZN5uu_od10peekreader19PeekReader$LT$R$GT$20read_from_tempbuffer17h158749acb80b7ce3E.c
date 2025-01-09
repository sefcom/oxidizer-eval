__int64 __fastcall uu_od::peekreader::PeekReader<R>::read_from_tempbuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD v5[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v6[56]; // [rsp+10h] [rbp-38h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v3 = std::io::impls::<impl std::io::Write for &mut [u8]>::write(v5, *(_QWORD *)(a1 + 80), *(_QWORD *)(a1 + 88));
  alloc::vec::Vec<T,A>::drain(v6, a1 + 72, v3);
  core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(v6);
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0LL, v3);
  return v3;
}
