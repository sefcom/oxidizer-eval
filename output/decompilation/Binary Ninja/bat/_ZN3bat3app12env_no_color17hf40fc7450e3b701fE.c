
  uint64_t bat::app::env_no_color::hf40fc7450e3b701f()

{
    int64_t var_20;
    std::env::var_os::hdd22989238190b61(&var_20, "NO_COLOR*.vbprojCOMPOS");
    int64_t rdi_1 = var_20;
    
    if (-(rdi_1) == -0x8000000000000000)
        return 0;
    
    int64_t var_10;
    int64_t rbx;
    rbx = var_10;
    int64_t var_18;
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9610fb1b2c5a1123(rdi_1, var_18);
    return rbx;
}
