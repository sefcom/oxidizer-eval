long _ZN7uu_join15Repr_LT_Sep_GT_12print_fields17h4210fd7bff018645E
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(param_4 + 0x10);
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      if (param_5 != lVar5) {
        uVar2 = _ZN3std3ffi6os_str103__LT_impl_u20_core__convert__AsRef_LT_std__ffi__os_str__OsStr_GT__u20_for_u20_alloc__string__String_GT_6as_ref17h5eb4ca0e0b17e13dE
                          (param_1,param_2);
        lVar3 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h6a39e9ebdd504d15E
                          (param_3,uVar2);
        if (lVar3 != 0) {
          return lVar3;
        }
        lVar3 = (*(code *)PTR__ZN7uu_join4Line9get_field17h5172ba7928bd7492E_00204ef0)
                          (param_4,lVar5);
        if (lVar3 == 0) {
          (*(code *)PTR__ZN4core6option13unwrap_failed17h893f57cb7db71cb7E_00204ef8)
                    (&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_001fd2c8);
          pcVar1 = (code *)swi(3);
          lVar4 = (*pcVar1)();
          return lVar4;
        }
        lVar3 = _ZN83__LT_std__io__buffered__bufwriter__BufWriter_LT_W_GT__u20_as_u20_std__io__Write_GT_9write_all17h6a39e9ebdd504d15E
                          (param_3,lVar3);
        if (lVar3 != 0) {
          return lVar3;
        }
      }
      lVar5 = lVar5 + 1;
    } while (lVar4 != lVar5);
  }
  return 0;
}