void __rustcall
uu_uniq::Uniq::skip_fields(undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  char cVar1;
  ulong uVar2;
  long local_78;
  long local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  long local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  if (param_2 == 0) {
    _<T_as_alloc::slice::hack::ConvertVec>::to_vec(param_1,param_4,param_5);
    return;
  }
  local_70 = param_5 + param_4;
  local_78 = param_4;
  if (param_3 != 0) {
    uVar2 = _<usize_as_core::iter::range::Step>::forward_unchecked(0);
    cVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::all(&local_78);
    if (cVar1 != '\0') {
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      return;
    }
    _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
              (&local_48,&local_78,0);
    local_58 = local_38;
    local_68 = local_48;
    uStack_64 = uStack_44;
    uStack_60 = uStack_40;
    uStack_5c = uStack_3c;
    if (local_38 == 0) {
LAB_001bcdf0:
      *param_1 = 0;
      param_1[1] = 1;
      param_1[2] = 0;
      goto LAB_001bce07;
    }
    local_78 = CONCAT44(uStack_3c,uStack_40);
    local_70 = local_38 + local_78;
    if (uVar2 < param_3) {
      do {
        local_68 = local_48;
        uStack_64 = uStack_44;
        uStack_60 = uStack_40;
        uStack_5c = uStack_3c;
        local_58 = local_38;
        uVar2 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar2);
        cVar1 = _<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::all
                          (&local_78);
        if (cVar1 != '\0') goto LAB_001bcdf0;
                    /* try { // try from 001bcd97 to 001bcda3 has its CatchHandler @ 001bce43 */
        _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
                  (&local_48,&local_78,0);
                    /* try { // try from 001bcda4 to 001bcdab has its CatchHandler @ 001bce2a */
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_68);
        local_58 = local_38;
        local_68 = local_48;
        uStack_64 = uStack_44;
        uStack_60 = uStack_40;
        uStack_5c = uStack_3c;
        if (local_38 == 0) goto LAB_001bcdf0;
        local_78 = CONCAT44(uStack_3c,uStack_40);
        local_70 = local_38 + local_78;
      } while (uVar2 < param_3);
    }
  }
                    /* try { // try from 001bcddb to 001bcde8 has its CatchHandler @ 001bce20 */
  _<alloc::vec::Vec<T>as_alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter
            (param_1,local_78,local_70);
  if (param_3 == 0) {
    return;
  }
LAB_001bce07:
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_68);
  return;
}