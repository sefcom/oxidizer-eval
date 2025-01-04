undefined8 __rustcall uu_nproc::available_parallelism(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  auVar2 = std::thread::available_parallelism();
  uVar1 = 1;
  if (auVar2._0_8_ == 0) {
    uVar1 = auVar2._8_8_;
  }
  core::ptr::
  drop_in_place<core::result::Result<core::num::nonzero::NonZero<usize>,std::io::error::Error>>
            (auVar2._0_8_,auVar2._8_8_);
  return uVar1;
}