ulong __rustcall uu_expr::syntax_tree::is_truthy(long *param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined uVar4;
  uint uVar5;
  char *pcVar6;
  undefined8 unaff_RBX;
  undefined7 uVar8;
  ulong uVar7;
  long local_38;
  long local_30;
  undefined8 local_28;
  char local_20;
  
  uVar8 = (undefined7)((ulong)unaff_RBX >> 8);
  if (*param_1 == -0x8000000000000000) {
    lVar1 = param_1[2];
    lVar2 = param_1[3];
    cVar3 = _<[A]as_core::slice::cmp::SlicePartialEq<B>>::equal(lVar1,lVar2,"-*/%:",1);
    uVar7 = CONCAT71(uVar8,1);
    if (cVar3 == '\0') {
      local_30 = lVar2 + lVar1;
      local_38 = lVar1;
      pcVar6 = (char *)_<core::slice::iter::Iter<T>as_core::iter::traits::iterator::Iterator>::next
                                 (&local_38);
      if (pcVar6 == (char *)0x0) {
        uVar7 = 0;
      }
      else if ((*pcVar6 == '0') || (uVar7 = CONCAT71(uVar8,1), *pcVar6 == '-')) {
        uVar4 = core::iter::traits::iterator::Iterator::try_fold(&local_38);
        uVar5 = _<core::ops::control_flow::ControlFlow<B,C>as_core::cmp::PartialEq>::eq(uVar4);
        uVar7 = (ulong)uVar5 ^ 1;
      }
    }
  }
  else {
    num_bigint::bigint::convert::_<impl_core::convert::From<i64>for_num_bigint::bigint::BigInt>::
    from(&local_38);
    uVar7 = CONCAT71(uVar8,1);
    if (*(char *)(param_1 + 3) == local_20) {
      if (*(char *)(param_1 + 3) == '\x01') {
        uVar7 = 0;
      }
      else {
                    /* try { // try from 00230d82 to 00230d86 has its CatchHandler @ 00230da4 */
        uVar5 = ::alloc::vec::partial_eq::
                _<impl_core::cmp::PartialEq<alloc::vec::Vec<U,A2>>for_alloc::vec::Vec<T,A1>>::eq
                          (param_1[1],param_1[2],local_30,local_28);
        uVar7 = (ulong)uVar5 ^ 1;
      }
    }
    core::ptr::drop_in_place<num_bigint::bigint::BigInt>(&local_38);
  }
  return uVar7 & 0xffffffff;
}