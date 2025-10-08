__int64 __fastcall just::table::Table<V>::insert(__int64 a1, __int64 a2)
{
  _BYTE dest[176]; // [rsp+8h] [rbp-B0h] BYREF

  <just::set::Set as just::keyed::Keyed>::key(a2);
  alloc::collections::btree::map::BTreeMap<K,V,A>::insert(dest);
  return core::ptr::drop_in_place<core::option::Option<just::set::Set>>(dest, a1);
}