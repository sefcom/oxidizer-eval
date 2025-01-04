long __rustcall
uu_join::Repr<Sep>::print_fields(long param_1,undefined8 param_2,long param_3,ulong param_4)

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
      uVar3 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar6);
      if (uVar6 != param_4) {
        uVar4 = _<uu_join::OneByteSep_as_uu_join::Separator>::output_separator(param_1 + 0x29);
        lVar5 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                          (param_2,uVar4,1);
        if (lVar5 != 0) {
          return lVar5;
        }
        lVar5 = (*(code *)PTR_get_field_00239320)(param_3,uVar6);
        if (lVar5 == 0) {
          (*(code *)PTR_unwrap_failed_00239328)(&PTR_s__home_34r7hm4n_dev_oxidizer_oxid_002325d8);
          pcVar2 = (code *)swi(3);
          lVar5 = (*pcVar2)();
          return lVar5;
        }
        lVar5 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
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