_BOOL8 __fastcall rg::flags::parse::FlagMap::find(__int64 a1)
{
  return hashbrown::map::HashMap<K,V,S,A>::get_inner(a1) != 0;
}