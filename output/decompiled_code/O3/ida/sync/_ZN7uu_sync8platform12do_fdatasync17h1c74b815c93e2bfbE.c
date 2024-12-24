__int64 __fastcall uu_sync::platform::do_fdatasync(__int64 a1)
{
  __int64 v1; // rbp
  __int128 v3; // [rsp+8h] [rbp-90h] BYREF
  __int64 v4; // [rsp+18h] [rbp-80h]
  __int128 v5; // [rsp+20h] [rbp-78h] BYREF
  __int64 v6; // [rsp+30h] [rbp-68h]
  _BYTE v7[32]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v8[64]; // [rsp+58h] [rbp-40h] BYREF

  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v7, a1);
  <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3, v7);
  while ( (_QWORD)v3 != 0x8000000000000000LL )
  {
    v6 = v4;
    v5 = v3;
    std::fs::File::open(v8, &v5);
    v1 = (unsigned int)core::result::Result<T,E>::unwrap(v8, &off_110328);
    syscall(75LL, v1);
    core::ptr::drop_in_place<std::fs::File>((unsigned int)v1);
    <alloc::vec::into_iter::IntoIter<T,A> as core::iter::traits::iterator::Iterator>::next(&v3, v7);
  }
  return core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::string::String>>(v7);
}
