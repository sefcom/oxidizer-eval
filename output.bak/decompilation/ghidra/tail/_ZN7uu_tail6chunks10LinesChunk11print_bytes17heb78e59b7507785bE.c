undefined8 __rustcall
uu_tail::chunks::LinesChunk::print_bytes(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  uVar1 = get_buffer_with(param_1,0);
  lVar2 = std::io::impls::_<impl_std::io::Write_for&mut_W>::write_all(param_2,uVar1);
  if (lVar2 != 0) {
    uVar3 = uucore::mods::error::
            _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
            ::from(lVar2);
  }
  return uVar3;
}