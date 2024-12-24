void __rustcall
uu_tr::operation::translate_input(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_58 [16];
  long local_48;
  long local_40;
  undefined8 local_38;
  
  puVar1 = PTR_read_until_00233568;
  local_88 = 0;
  local_80 = 1;
  local_78 = 0;
  local_70 = 0;
  local_68 = 1;
  local_60 = 0;
  while( true ) {
                    /* try { // try from 0016cbb0 to 0016cbbc has its CatchHandler @ 0016cc74 */
    auVar3 = (*(code *)puVar1)(param_1,10,&local_88);
    local_58 = auVar3;
    if ((auVar3._0_8_ != 0) || (auVar3._8_8_ == 0)) break;
    local_40 = local_78 + local_80;
    local_48 = local_80;
                    /* try { // try from 0016cbed to 0016cc15 has its CatchHandler @ 0016cc79 */
    local_38 = param_3;
    _<alloc::vec::Vec<T,A>as_alloc::vec::spec_extend::SpecExtend<T,I>>::spec_extend
              (&local_70,&local_48);
    uVar2 = _<std::io::buffered::bufwriter::BufWriter<W>as_std::io::Write>::write_all
                      (param_2,local_68,local_60);
    core::result::Result<T,E>::unwrap(uVar2);
    local_78 = 0;
    local_60 = 0;
                    /* try { // try from 0016cc28 to 0016cc2f has its CatchHandler @ 0016cc74 */
    core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(local_58);
  }
                    /* try { // try from 0016cc35 to 0016cc3e has its CatchHandler @ 0016cc72 */
  core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(local_58);
                    /* try { // try from 0016cc3f to 0016cc48 has its CatchHandler @ 0016cc6d */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_70);
                    /* try { // try from 0016cc49 to 0016cc50 has its CatchHandler @ 0016cc68 */
  core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&local_88);
  core::ptr::
  drop_in_place<uu_tr::operation::ChainedSymbolTranslator<uu_tr::operation::DeleteOperation,uu_tr::operation::SqueezeOperation>>
            (param_3);
  return;
}