undefined8 * __rustcall
uu_tail::chunks::BytesChunk::fill(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined auVar2 [16];
  
  auVar2 = _<std::io::buffered::bufreader::BufReader<R>as_std::io::Read>::read
                     (param_3,param_2,0x2000);
  lVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 0) {
    *(long *)(param_2 + 0x2000) = lVar1;
    if (lVar1 == 0) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      param_1[1] = 1;
      param_1[2] = lVar1;
      *param_1 = 0;
    }
  }
  else {
    auVar2 = uucore::mods::error::
             _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
             ::from(lVar1);
    *(undefined (*) [16])(param_1 + 1) = auVar2;
    *param_1 = 1;
  }
  return param_1;
}