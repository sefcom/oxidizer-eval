__int64 __fastcall uu_tr::operation::SqueezeOperation::new(__int64 a1, __int64 a2)
{
  _BYTE v3[48]; // [rsp+8h] [rbp-30h] BYREF

  <alloc::vec::Vec<T,A> as core::iter::traits::collect::IntoIterator>::into_iter(v3, a2);
  core::iter::traits::iterator::Iterator::collect(a1, v3);
  *(_BYTE *)(a1 + 48) = 0;
  return a1;
}