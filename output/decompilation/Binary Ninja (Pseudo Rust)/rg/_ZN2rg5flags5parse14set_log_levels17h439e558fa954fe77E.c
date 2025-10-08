
  fn rg::flags::parse::set_log_levels::h439e558fa954fe77(arg1: *mut c_void) -> i64

{
    rg::messages::set_messages::h3dbf7f04d5c7e618(*arg1.byte_offset(0x242) ^ 1);
    rg::messages::set_ignore_messages::haf3e3e018d552ea8(*arg1.byte_offset(0x23f) ^ 1);
    let rax: u64 = *arg1.byte_offset(0x257);
    let mut rsi: u64 = rax + 4;
    
    if rax == 2
    {
        rsi = rax;
    }
    
    /* tailcall */
    core::sync::atomic::atomic_store::h203af5ccc9196054(
        &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, rsi)
}
