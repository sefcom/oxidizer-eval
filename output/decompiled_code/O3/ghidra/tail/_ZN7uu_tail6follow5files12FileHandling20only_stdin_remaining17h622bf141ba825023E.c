bool __rustcall uu_tail::follow::files::FileHandling::only_stdin_remaining(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x30) == 1) {
    lVar1 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_1 + 0x18,"-",1);
    return lVar1 != 0;
  }
  return false;
}