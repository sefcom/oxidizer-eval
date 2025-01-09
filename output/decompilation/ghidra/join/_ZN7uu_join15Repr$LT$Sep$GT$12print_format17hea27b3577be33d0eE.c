long __rustcall uu_join::Repr<Sep>::print_format(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined auVar3 [16];
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined auVar7 [16];
  
  lVar1 = *(long *)(param_1 + 8);
  uVar2 = *(ulong *)(param_1 + 0x10);
  auVar3 = *(undefined (*) [16])(param_1 + 0x18);
  uVar6 = 0;
  while( true ) {
    if (uVar2 <= uVar6) {
      return 0;
    }
    uVar4 = _<usize_as_core::iter::range::Step>::forward_unchecked(uVar6);
    if ((uVar6 != 0) &&
       (lVar5 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                          (param_2,&DAT_0010b685,1), lVar5 != 0)) break;
    auVar7 = State::combine::___closure__(param_3,uVar6 * 0x10 + lVar1);
    if (auVar7._0_8_ == 0) {
      auVar7 = auVar3;
    }
    lVar5 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                      (param_2,auVar7._0_8_,auVar7._8_8_);
    uVar6 = uVar4;
    if (lVar5 != 0) {
      return lVar5;
    }
  }
  return lVar5;
}