undefined8 __rustcall
uu_tail::chunks::LinesChunk::print_bytes(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = get_buffer_with(param_1,param_3);
  lVar2 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all(param_2,uVar1);
  if (lVar2 != 0) {
    uVar1 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar2);
    return uVar1;
  }
  return 0;
}