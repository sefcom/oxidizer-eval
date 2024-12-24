long __rustcall uu_join::Repr<Sep>::print_fields(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(ulong *)(param_2 + 0x10);
  if (uVar1 != 0) {
    uVar5 = 0;
    do {
      uVar3 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar5);
      if (uVar5 != param_3) {
        lVar4 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                          (param_1,1,0);
        if (lVar4 != 0) {
          return lVar4;
        }
        lVar4 = (*(code *)PTR_get_field_00239ee0)(param_2,uVar5);
        if (lVar4 == 0) {
          (*(code *)PTR_unwrap_failed_00239ee8)(&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_00233178);
          pcVar2 = (code *)swi(3);
          lVar4 = (*pcVar2)();
          return lVar4;
        }
        lVar4 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                          (param_1,lVar4);
        if (lVar4 != 0) {
          return lVar4;
        }
      }
      uVar5 = uVar3;
    } while (uVar3 < uVar1);
  }
  return 0;
}