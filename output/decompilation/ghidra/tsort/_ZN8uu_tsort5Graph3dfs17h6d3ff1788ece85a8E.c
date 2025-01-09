ulong __rustcall
uu_tsort::Graph::dfs
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 unaff_RBP;
  ulong uVar4;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  long local_30;
  
  local_48 = param_2;
  local_40 = param_3;
  cVar1 = _<T_as_core::slice::cmp::SliceContains>::slice_contains
                    (&local_48,*(undefined8 *)(param_5 + 8),*(undefined8 *)(param_5 + 0x10));
  uVar4 = CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if (cVar1 == '\0') {
    lVar2 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_4,&local_48);
    if (lVar2 == 0) {
      hashbrown::map::HashMap<K,V,S,A>::insert(param_4,local_48,local_40);
      ::alloc::vec::Vec<T,A>::push(param_5,local_48,local_40);
      lVar2 = hashbrown::map::HashMap<K,V,S,A>::get_inner(param_1,local_48,local_40);
      if (lVar2 != 0) {
        local_38 = *(long *)(lVar2 + 0x18);
        local_30 = *(long *)(lVar2 + 0x20) * 0x10 + local_38;
        do {
          puVar3 = (undefined8 *)
                   _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                             (&local_38);
          if (puVar3 == (undefined8 *)0x0) goto LAB_001b6c08;
          cVar1 = dfs(param_1,*puVar3,puVar3[1],param_4,param_5);
        } while (cVar1 == '\0');
        goto LAB_001b6c1a;
      }
LAB_001b6c08:
      if (*(long *)(param_5 + 0x10) != 0) {
        *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + -1;
      }
    }
    uVar4 = 0;
  }
LAB_001b6c1a:
  return uVar4 & 0xffffffff;
}