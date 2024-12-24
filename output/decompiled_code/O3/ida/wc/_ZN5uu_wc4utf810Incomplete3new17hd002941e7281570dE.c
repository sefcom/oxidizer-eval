unsigned __int64 __fastcall uu_wc::utf8::Incomplete::new(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _DWORD v5[5]; // [rsp+0h] [rbp-14h] BYREF

  v5[0] = 0;
  v2 = <core::ops::range::Range<usize> as core::slice::index::SliceIndex<[T]>>::index_mut(a2, v5, 4LL, &off_132550);
  core::slice::<impl [T]>::copy_from_slice(v2, v3, a1, a2, &off_132568);
  return v5[0] | (unsigned __int64)(a2 << 32);
}
