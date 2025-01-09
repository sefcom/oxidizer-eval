bool __fastcall uu_tail::follow::files::FileHandling::contains_key(__int64 a1)
{
  return hashbrown::map::HashMap<K,V,S,A>::get_inner(a1 + 24) != 0;
}
