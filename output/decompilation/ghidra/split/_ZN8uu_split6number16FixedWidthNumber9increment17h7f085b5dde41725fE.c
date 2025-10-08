undefined4 _ZN8uu_split6number16FixedWidthNumber9increment17h7f085b5dde41725fE(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long lVar5;
  char cVar6;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  lVar2 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    cVar1 = *(char *)(param_1 + 0x18);
    lVar5 = lVar3;
    do {
      cVar6 = *(char *)(lVar2 + -1 + lVar5) + '\x01';
      *(char *)(lVar2 + -1 + lVar5) = cVar6;
      if (cVar6 != cVar1) break;
      *(undefined *)(lVar2 + -1 + lVar5) = 0;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  _ZN63__LT_u8_u20_as_u20_alloc__vec__spec_from_elem__SpecFromElem_GT_9from_elem17h2ddf162ee73cff42E
            (&local_30,lVar3,&PTR_s_src_uu_split_src_number_rs_0020abd8);
  uVar4 = _ZN5alloc3vec10partial_eq117__LT_impl_u20_core__cmp__PartialEq_LT_alloc__vec__Vec_LT_U_C_A2_GT__GT__u20_for_u20_alloc__vec__Vec_LT_T_C_A1_GT__GT_2eq17h510731c8117896c7E
                    (lVar2,lVar3,local_28,local_20);
  _ZN4core3ptr46drop_in_place_LT_alloc__vec__Vec_LT_u8_GT__GT_17h8db16a3a7b207659E
            (local_30,local_28);
  return uVar4;
}