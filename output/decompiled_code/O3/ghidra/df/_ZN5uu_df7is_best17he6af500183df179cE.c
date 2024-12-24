undefined8 __rustcall uu_df::is_best(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long local_38;
  long local_30;
  
  local_30 = param_2 * 0x98 + param_1;
  local_38 = param_1;
  lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next(&local_38);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(param_3 + 8);
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    do {
      cVar3 = ::alloc::vec::partial_eq::
              _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                        (*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10),uVar1,uVar2);
      if ((cVar3 != '\0') && (cVar3 = mount_info_lt(param_3,lVar4), cVar3 != '\0')) {
        return 0;
      }
      lVar4 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                        (&local_38);
    } while (lVar4 != 0);
  }
  return 1;
}