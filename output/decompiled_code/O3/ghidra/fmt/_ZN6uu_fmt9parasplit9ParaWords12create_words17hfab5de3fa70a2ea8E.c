void __rustcall uu_fmt::parasplit::ParaWords::create_words(long param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  undefined8 local_178;
  long local_170;
  long local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined local_120;
  undefined local_f0;
  long local_e8;
  long local_e0;
  undefined local_9f;
  undefined local_5f;
  undefined local_58 [48];
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(char *)(lVar1 + 0x68) != '\0') {
    local_e8 = *(long *)(lVar1 + 8);
    local_e0 = local_e8 + *(long *)(lVar1 + 0x10) * 0x18;
    local_9f = 2;
    local_5f = 2;
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend
              (param_1,&local_e8);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x18);
  if ((*(char *)(lVar2 + 0x48) == '\0') && (*(char *)(lVar2 + 0x49) == '\0')) {
    if (*(long *)(lVar1 + 0x10) != 0) {
      uVar5 = *(undefined8 *)(lVar1 + 0x60);
      uVar4 = *(undefined8 *)(*(long *)(lVar1 + 8) + 8);
      uVar6 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x10);
      auVar7 = core::str::traits::
               _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::
               get(uVar5,uVar4,uVar6);
      if (auVar7._0_8_ != 0) {
LAB_001ba935:
        WordSplit::new(local_58,lVar2,auVar7._0_8_,auVar7._8_8_);
        _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend
                  (param_1,local_58);
        lVar1 = *(long *)(param_1 + 0x20);
        if (1 < *(ulong *)(lVar1 + 0x10)) {
          local_178 = *(undefined8 *)(lVar1 + 0x60);
          local_158 = *(undefined8 *)(param_1 + 0x18);
          local_170 = *(long *)(lVar1 + 8);
          local_168 = local_170 + *(ulong *)(lVar1 + 0x10) * 0x18;
          local_160 = 1;
          local_120 = 2;
          local_f0 = 2;
          local_150 = (undefined *)&local_178;
          _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend
                    (param_1,&local_170);
        }
        return;
      }
      ppuVar3 = &PTR_s_src_uu_fmt_src_parasplit_rs_002279e8;
      goto LAB_001baa1f;
    }
  }
  else {
    if (*(long *)(lVar1 + 0x10) == 0) {
      ppuVar3 = &PTR_s_src_uu_fmt_src_parasplit_rs_00227a00;
      goto LAB_001baa0e;
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x50);
    uVar4 = *(undefined8 *)(*(long *)(lVar1 + 8) + 8);
    uVar6 = *(undefined8 *)(*(long *)(lVar1 + 8) + 0x10);
    auVar7 = core::str::traits::
             _<impl_core::slice::index::SliceIndex<str>for_core::ops::range::RangeFrom<usize>>::get
                       (uVar5,uVar4,uVar6);
    if (auVar7._0_8_ != 0) goto LAB_001ba935;
    ppuVar3 = &PTR_s_src_uu_fmt_src_parasplit_rs_00227a18;
LAB_001baa1f:
    core::str::slice_error_fail(uVar4,uVar6,uVar5,uVar6,ppuVar3);
  }
  ppuVar3 = &PTR_s_src_uu_fmt_src_parasplit_rs_002279d0;
LAB_001baa0e:
                    /* WARNING: Subroutine does not return */
  core::panicking::panic_bounds_check(0,0,ppuVar3);
}