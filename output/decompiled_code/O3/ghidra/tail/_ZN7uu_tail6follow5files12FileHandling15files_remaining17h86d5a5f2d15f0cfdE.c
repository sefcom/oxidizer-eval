bool __rustcall uu_tail::follow::files::FileHandling::files_remaining(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined auStack_58 [40];
  
  hashbrown::map::HashMap<K,V,S,A>::iter(auStack_58,param_1 + 0x18);
  do {
    lVar4 = _<hashbrown::map::Iter<K,V>as_core::iter::traits::iterator::Iterator>::next(auStack_58);
    if (lVar4 == 0) break;
    uVar1 = *(undefined8 *)(lVar4 + 8);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    cVar3 = _<std::path::Path_as_uu_tail::paths::PathExtTail>::is_tailable(uVar1,uVar2);
    if (cVar3 != '\0') break;
    cVar3 = _<std::path::Path_as_uu_tail::paths::PathExtTail>::is_stdin(uVar1,uVar2);
  } while (cVar3 == '\0');
  return lVar4 != 0;
}