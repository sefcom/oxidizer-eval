long _ZN7uu_join15Repr_LT_Sep_GT_12print_fields17hb1432fea054a9535E
               (long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(ulong *)(param_3 + 0x10);
  if (uVar1 != 0) {
    uVar6 = 0;
    do {
      uVar3 = _ZN49__LT_usize_u20_as_u20_core__iter__range__Step_GT_17forward_unchecked17he44ce7238773bbb8E
                        (uVar6);
      if (uVar6 != param_4) {
        uVar4 = _ZN58__LT_uu_join__OneByteSep_u20_as_u20_uu_join__Separator_GT_16output_separator17h46f4732182ca8865E
                          (param_1 + 0x29);
        lVar5 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
                          (param_2,uVar4,1);
        if (lVar5 != 0) {
          return lVar5;
        }
        lVar5 = (*(code *)PTR__ZN7uu_join4Line9get_field17h7dd14bed39768627E_00239320)
                          (param_3,uVar6);
        if (lVar5 == 0) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h0e11329e76906eaaE_00239328)
                    (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002325d8);
          pcVar2 = (code *)swi(3);
          lVar5 = (*pcVar2)();
          return lVar5;
        }
        lVar5 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17hccae4f1a94cdd6f8E
                          (param_2,lVar5);
        if (lVar5 != 0) {
          return lVar5;
        }
      }
      uVar6 = uVar3;
    } while (uVar3 < uVar1);
  }
  return 0;
}