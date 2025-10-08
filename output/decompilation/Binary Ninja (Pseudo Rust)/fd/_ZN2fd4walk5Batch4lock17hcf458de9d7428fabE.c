
  fn fd::walk::Batch::lock::hcf458de9d7428fab(arg1: *mut c_void) -> i64

{
    let mut var_20: ();
    std::sync::poison::mutex::Mutex$LT$T$GT$::lock::hb0703f1f60ba41f4(&var_20, 
        arg1.byte_offset(0x10));
    core::result::Result$LT$T$C$E$GT$::unwrap::hd6cef4bc861985e7(&var_20)
}
