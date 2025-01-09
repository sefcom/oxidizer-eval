bool __rustcall uu_tail::follow::files::FileHandling::contains_key(long param_1)

{
  long lVar1;
  
  lVar1 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_1 + 0x18);
  return lVar1 != 0;
}