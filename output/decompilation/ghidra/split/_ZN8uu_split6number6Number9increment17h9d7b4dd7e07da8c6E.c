undefined4 _ZN8uu_split6number6Number9increment17h9d7b4dd7e07da8c6E(long *param_1)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  ulong uVar5;
  char cVar6;
  undefined auStack_30 [8];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  if (*param_1 == -0x8000000000000000) {
    param_1[1] = param_1[1] + 1;
    return 0;
  }
  lVar2 = param_1[1];
  uVar3 = param_1[2];
  if (uVar3 != 0) {
    cVar1 = *(char *)(param_1 + 3);
    uVar5 = uVar3;
    do {
      uVar5 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_18backward_unchecked17hafc0b4d583767e83E
                        (uVar5);
      if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        _ZN4core9panicking18panic_bounds_check17h25a5330941572dd1E(uVar5,uVar3,&PTR_DAT_00249498);
      }
      cVar6 = *(char *)(lVar2 + uVar5) + '\x01';
      *(char *)(lVar2 + uVar5) = cVar6;
    } while ((cVar6 == cVar1) && (*(undefined *)(lVar2 + uVar5) = 0, uVar5 != 0));
  }
  _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h6057a164085cb6e9E
            (auStack_30,uVar3);
  uVar4 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h24144f0ec5aeede0E
                    (lVar2,uVar3,uStack_28,uStack_20);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h5c84a37d2a9393c1E(auStack_30);
  return uVar4;
}