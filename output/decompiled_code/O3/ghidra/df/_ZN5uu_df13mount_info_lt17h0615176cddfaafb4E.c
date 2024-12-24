ulong __rustcall uu_df::mount_info_lt(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char cVar5;
  ulong in_RAX;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 local_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_38 = in_RAX & 0xffffffff00000000;
  uVar6 = core::char::methods::encode_utf8_raw(&local_38);
  cVar5 = core::slice::_<impl[T]>::starts_with(uVar1,uVar2,uVar6,1);
  if (cVar5 != '\0') {
    uVar6 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    local_38 = local_38 & 0xffffffff;
    uVar7 = core::char::methods::encode_utf8_raw((long)&local_38 + 4);
    cVar5 = core::slice::_<impl[T]>::starts_with(uVar6,uVar3,uVar7,1);
    if (cVar5 == '\0') {
      return 0;
    }
  }
  uVar8 = *(ulong *)(param_1 + 0x70);
  uVar4 = *(ulong *)(param_2 + 0x70);
  if ((*(ulong *)(param_1 + 0x58) == 0) || (*(ulong *)(param_2 + 0x58) == 0)) {
    if (uVar4 <= uVar8) goto LAB_001c6d3d;
  }
  else if ((uVar4 <= uVar8) || (*(ulong *)(param_2 + 0x58) < *(ulong *)(param_1 + 0x58))) {
LAB_001c6d3d:
    cVar5 = ::alloc::vec::partial_eq::
            _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                      (uVar1,uVar2,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x28));
    if (cVar5 == '\0') {
      uVar8 = ::alloc::vec::partial_eq::
              _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                        (*(undefined8 *)(param_1 + 0x68),uVar8,*(undefined8 *)(param_2 + 0x68),uVar4
                        );
      return uVar8 ^ 1;
    }
    return 1;
  }
  return 0;
}