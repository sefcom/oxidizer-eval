
  fn bat::app::env_no_color::hf40fc7450e3b701f() -> u64

{
    let mut var_20: i64;
    std::env::var_os::hdd22989238190b61(&var_20, "NO_COLOR*.vbprojCOMPOS");
    let rdi_1: i64 = var_20;
    
    if -(rdi_1) == -0x8000000000000000
    {
        return 0;
    }
    
    let var_10: i64;
    let mut rbx: i64;
    rbx = var_10 != 0;
    let var_18: i64;
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9610fb1b2c5a1123(rdi_1, var_18);
    rbx
}
