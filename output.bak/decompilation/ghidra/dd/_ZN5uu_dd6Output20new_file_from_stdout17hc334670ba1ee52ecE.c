undefined * __rustcall uu_dd::Output::new_file_from_stdout(undefined *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 extraout_EDX;
  ulong extraout_RDX;
  undefined auVar4 [16];
  int local_28;
  undefined4 local_24;
  undefined8 local_20;
  
  uVar3 = std::io::stdio::stdout();
  uucore::mods::io::OwnedFileDescriptorOrHandle::from(&local_28,uVar3);
  uVar1 = local_24;
  if (local_28 == 0) {
    iVar2 = make_linux_oflags(param_2 + 0x96);
    if (iVar2 == 1) {
      local_28 = 5;
      local_24 = extraout_EDX;
                    /* try { // try from 001d798d to 001d79a3 has its CatchHandler @ 001d79d1 */
      iVar2 = nix::fcntl::fcntl(uVar1,&local_28);
      if (iVar2 != 0) {
        auVar4 = uucore::mods::error::
                 _<impl_core::convert::From<nix::errno::consts::Errno>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
                 ::from(extraout_RDX & 0xffffffff);
        *(undefined (*) [16])(param_1 + 8) = auVar4;
        *param_1 = 4;
        core::ptr::drop_in_place<uucore::mods::io::OwnedFileDescriptorOrHandle>(uVar1);
        return param_1;
      }
    }
    prepare_file(param_1,uVar1,param_2);
  }
  else {
    auVar4 = uucore::mods::error::
             _<impl_core::convert::From<std::io::error::Error>for_alloc::boxed::Box<dyn_uucore::mods::error::UError>>
             ::from(local_20);
    *(undefined (*) [16])(param_1 + 8) = auVar4;
    *param_1 = 4;
  }
  return param_1;
}