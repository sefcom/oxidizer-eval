__int64 __fastcall uu_sort::random_shuffle(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbp
  __int64 result; // rax
  char v10; // [rsp+Eh] [rbp-3Ah] BYREF
  char v11; // [rsp+Fh] [rbp-39h] BYREF
  _QWORD v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[0] = 0xCBF29CE484222325LL;
  <fnv::FnvHasher as core::hash::Hasher>::write(v12, a1, a2);
  v10 = -1;
  <fnv::FnvHasher as core::hash::Hasher>::write(v12, &v10, 1LL);
  core::hash::impls::<impl core::hash::Hash for &T>::hash(a5, v12);
  v8 = v12[0];
  v12[0] = 0xCBF29CE484222325LL;
  <fnv::FnvHasher as core::hash::Hasher>::write(v12, a3, a4);
  v11 = -1;
  <fnv::FnvHasher as core::hash::Hasher>::write(v12, &v11, 1LL);
  core::hash::impls::<impl core::hash::Hash for &T>::hash(a5, v12);
  result = 255LL;
  if ( v8 >= v12[0] )
    return v8 != v12[0];
  return result;
}
