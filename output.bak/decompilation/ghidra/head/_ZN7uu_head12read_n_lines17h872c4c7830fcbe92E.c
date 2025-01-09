undefined8 __rustcall uu_head::read_n_bytes(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined local_18 [16];
  
  local_18 = std::io::Read::take();
  local_20 = std::io::stdio::stdout();
  local_28 = std::io::stdio::Stderr::lock(&local_20);
                    /* try { // try from 001b93ae to 001b93ba has its CatchHandler @ 001b93e2 */
  auVar2 = _<std::sys::pal::unix::kernel_copy::Copier<R,W>as_std::sys::pal::unix::kernel_copy::SpecCopy>
           ::copy(local_18,&local_28);
  uVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 0) {
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_28);
    uVar1 = 0;
  }
  else {
    core::ptr::drop_in_place<std::io::stdio::StdoutLock>(local_28);
  }
  return uVar1;
}