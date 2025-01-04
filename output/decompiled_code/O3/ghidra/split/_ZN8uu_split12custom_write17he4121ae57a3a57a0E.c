undefined8 __rustcall
uu_split::custom_write(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  auVar3 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write
                     (param_3,param_1,param_2);
  if (auVar3._0_8_ == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = ignorable_io_error(auVar3._8_8_,param_4);
    uVar2 = 1;
    if (cVar1 != '\0') {
      core::ptr::drop_in_place<std::io::error::Error>(auVar3._8_8_);
      uVar2 = 0;
    }
  }
  return uVar2;
}