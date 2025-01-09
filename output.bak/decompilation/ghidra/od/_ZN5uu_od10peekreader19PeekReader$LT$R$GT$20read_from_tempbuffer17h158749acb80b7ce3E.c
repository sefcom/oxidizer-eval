undefined8 __rustcall
uu_od::peekreader::PeekReader<R>::read_from_tempbuffer
          (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [40];
  
  local_48 = param_2;
  local_40 = param_3;
  uVar1 = std::io::impls::_<impl_std::io::Write_for&mut[u8]>::write
                    (&local_48,*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
                    /* try { // try from 0017642a to 00176439 has its CatchHandler @ 00176459 */
  ::alloc::vec::Vec<T,A>::drain(local_38,param_1 + 0x48,uVar1);
  core::ptr::drop_in_place<alloc::vec::drain::Drain<u8>>(local_38);
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(0,uVar1);
  return uVar1;
}