__int64 __fastcall uu_sync::platform::do_syncfs(__int64 a1)
{
  __int64 v1; // rbp
  _QWORD v3[3]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v4[32]; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v5[64]; // [rsp+38h] [rbp-40h] BYREF

  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v4, a1);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v3, v4);
  if ( !__OFSUB__(0LL, v3[0]) )
  {
    do
    {
      std::fs::File::open(v5, v3);
      v1 = (unsigned int)core::result::Result<T,E>::unwrap(v5, &off_DE580);
      syscall(306LL, v1);
      core::ptr::drop_in_place<std::fs::File>((unsigned int)v1);
      <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(v3, v4);
    }
    while ( v3[0] != 0x8000000000000000LL );
  }
  return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v4);
}