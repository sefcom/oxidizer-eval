unsigned __int64 __fastcall uu_tail::follow::files::FileHandling::from(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 result; // rax

  v4 = std::thread::local::LocalKey<T>::with();
  hashbrown::map::HashMap<K,V,S>::with_capacity_and_hasher(a1 + 24, a2, v4, v5);
  result = 0x8000000000000000LL;
  *(_QWORD *)a1 = 0x8000000000000000LL;
  *(_WORD *)(a1 + 72) = a3;
  return result;
}