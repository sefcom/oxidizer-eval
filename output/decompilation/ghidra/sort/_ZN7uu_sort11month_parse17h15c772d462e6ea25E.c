undefined _ZN7uu_sort11month_parse17h15c772d462e6ea25E(void)

{
  char cVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined auVar4 [16];
  undefined **local_30;
  undefined **local_28;
  
  auVar4 = _ZN4core3str21__LT_impl_u20_str_GT_12trim_matches17h13cb0d7168f45d26E();
  local_30 = &PTR_s_JANFEBMARAPRMAYJUNJULAUGSEPOCTNO_002ffe20;
  local_28 = &PTR__ZN4core3ptr34drop_in_place_LT_std__fs__File_GT_17hbb578aa8d27e7bc5E_002fff40;
  puVar2 = (undefined8 *)
           _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45e2651b910dc2d2E
                     (&local_30);
  if (puVar2 != (undefined8 *)0x0) {
    do {
      uVar3 = puVar2[1];
      if (uVar3 == 0) {
        uVar3 = 0;
LAB_002245b7:
        cVar1 = _ZN4core5slice5ascii30__LT_impl_u20__u5b_u8_u5d__GT_20eq_ignore_ascii_case17he7c08894b5496a04E
                          (auVar4._0_8_,uVar3,*puVar2,uVar3);
        if (cVar1 != '\0') {
          return *(undefined *)(puVar2 + 2);
        }
      }
      else if (uVar3 < auVar4._8_8_) {
        if (-0x41 < *(char *)(auVar4._0_8_ + uVar3)) goto LAB_002245b7;
      }
      else if (uVar3 == auVar4._8_8_) goto LAB_002245b7;
      puVar2 = (undefined8 *)
               _ZN91__LT_core__slice__iter__Iter_LT_T_GT__u20_as_u20_core__iter__traits__iterator__Iterator_GT_4next17h45e2651b910dc2d2E
                         (&local_30);
    } while (puVar2 != (undefined8 *)0x0);
  }
  return 0;
}