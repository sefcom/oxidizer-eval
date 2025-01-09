undefined8 __rustcall uu_head::read_n_lines(undefined8 param_1,undefined8 param_2,undefined param_3)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38;
  undefined local_30 [40];
  
  local_48 = param_1;
  local_40 = param_2;
  local_38 = param_3;
  local_50 = std::io::stdio::stdout();
  uVar1 = std::io::stdio::Stderr::lock(&local_50);
  std::io::buffered::bufwriter::BufWriter<W>::with_capacity(local_30,0x4000,uVar1);
                    /* try { // try from 001b94ce to 001b94da has its CatchHandler @ 001b9504 */
  auVar2 = _<std::sys::pal::unix::kernel_copy::Copier<R,W>as_std::sys::pal::unix::kernel_copy::SpecCopy>
           ::copy(&local_48,local_30);
  uVar1 = auVar2._8_8_;
  if (auVar2._0_8_ == 0) {
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
              (local_30);
    uVar1 = 0;
  }
  else {
    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<std::io::stdio::StdoutLock>>
              (local_30);
  }
  return uVar1;
}