void __rustcall
uu_split::custom_write_all
          (undefined2 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5)

{
  char cVar1;
  long lVar2;
  
  lVar2 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all(param_4);
  if (lVar2 == 0) {
    *param_1 = 0x100;
  }
  else {
    cVar1 = ignorable_io_error(lVar2,param_5);
    if (cVar1 != '\0') {
      *param_1 = 0;
      core::ptr::drop_in_place<std::io::error::Error>(lVar2);
      return;
    }
    *(long *)(param_1 + 4) = lVar2;
    *(undefined *)param_1 = 1;
  }
  return;
}