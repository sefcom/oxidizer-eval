__int64 __fastcall uu_od::peekreader::PeekReader<R>::read_from_tempbuffer(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-70h]
  _QWORD v7[2]; // [rsp+18h] [rbp-60h] BYREF
  __int64 v8; // [rsp+28h] [rbp-50h]
  __int64 v9; // [rsp+30h] [rbp-48h] BYREF
  __int64 v10; // [rsp+38h] [rbp-40h]
  _BYTE v11[56]; // [rsp+40h] [rbp-38h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v3 = alloc::vec::Vec<T,A>::as_mut_slice(a1 + 72);
  v9 = std::io::impls::<impl std::io::Write for &mut [u8]>::write(v7, v3);
  v10 = v4;
  if ( v9 )
  {
    v8 = 0LL;
  }
  else
  {
    v6 = v10;
    alloc::vec::Vec<T,A>::drain(v11, a1 + 72);
    core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(v11);
    v8 = v6;
  }
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v9);
  return v8;
}
