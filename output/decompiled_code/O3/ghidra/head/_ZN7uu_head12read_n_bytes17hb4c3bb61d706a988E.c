undefined8 __rustcall uu_head::read_n_bytes(undefined8 param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0xffffffffffffffff;
  local_18 = param_1;
  local_20 = std::io::stdio::stdout();
  local_28 = std::io::stdio::Stderr::lock(&local_20);
                    /* try { // try from 001b953d to 001b9549 has its CatchHandler @ 001b9571 */
  auVar2 = _<std::sys::pal::unix::kernel_copy::Copier<R,W>as_std::sys::pal::unix::kernel_copy::SpecCopy>
           ::copy(&local_18,&local_28);
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