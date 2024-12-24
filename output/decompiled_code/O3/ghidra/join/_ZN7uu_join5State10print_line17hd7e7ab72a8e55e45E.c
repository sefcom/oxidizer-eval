void __rustcall
uu_join::State::print_line(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 in_RAX;
  long lVar2;
  undefined auVar3 [16];
  undefined8 uStack_28;
  
  uStack_28 = in_RAX;
  if (*(long *)(param_4 + 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    auVar3 = (*(code *)PTR_get_field_00239ee0)(param_3,uVar1);
    if (auVar3._0_8_ == 0) {
      auVar3 = *(undefined (*) [16])(param_4 + 0x18);
    }
    lVar2 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                      (param_2,auVar3._0_8_,auVar3._8_8_);
    if (lVar2 != 0) {
      return;
    }
    lVar2 = Repr<Sep>::print_fields(param_2,param_3,uVar1);
  }
  else {
    lVar2 = Repr<Sep>::print_format(param_4,param_2);
  }
  if (lVar2 == 0) {
    uStack_28 = CONCAT17(*(undefined *)(param_4 + 0x28),(undefined7)uStack_28);
    _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
              (param_2,(long)&uStack_28 + 7,1);
  }
  return;
}