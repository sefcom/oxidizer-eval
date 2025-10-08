char __fastcall uu_sort::random_shuffle(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v8; // rbp
  char v10; // [rsp+Fh] [rbp-49h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-40h] BYREF
  __int64 v13[7]; // [rsp+20h] [rbp-38h] BYREF

  v11 = 0xCBF29CE484222325LL;
  <fnv::FnvHasher as core::hash::Hasher>::write(&v11, a1, a2);
  v10 = -1;
  <fnv::FnvHasher as core::hash::Hasher>::write(&v11, &v10, 1LL);
  v13[0] = 16LL;
  <fnv::FnvHasher as core::hash::Hasher>::write(&v11, v13, 8LL);
  <fnv::FnvHasher as core::hash::Hasher>::write(&v11, a5, 16LL);
  v8 = v11;
  v12 = 0xCBF29CE484222325LL;
  <fnv::FnvHasher as core::hash::Hasher>::write(&v12, a3, a4);
  LOBYTE(v11) = -1;
  <fnv::FnvHasher as core::hash::Hasher>::write(&v12, &v11, 1LL);
  v11 = 16LL;
  <fnv::FnvHasher as core::hash::Hasher>::write(&v12, &v11, 8LL);
  <fnv::FnvHasher as core::hash::Hasher>::write(&v12, a5, 16LL);
  return (v8 > v12) - (v8 < v12);
}