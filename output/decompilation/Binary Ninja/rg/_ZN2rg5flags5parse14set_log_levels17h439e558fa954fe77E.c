
  int64_t rg::flags::parse::set_log_levels::h439e558fa954fe77(void* arg1)

{
    rg::messages::set_messages::h3dbf7f04d5c7e618(*(arg1 + 0x242) ^ 1);
    rg::messages::set_ignore_messages::haf3e3e018d552ea8(*(arg1 + 0x23f) ^ 1);
    uint64_t rax = *(arg1 + 0x257);
    uint64_t rsi = rax + 4;
    
    if (rax == 2)
        rsi = rax;
    
    /* tailcall */
    return core::sync::atomic::atomic_store::h203af5ccc9196054(
        &log::MAX_LOG_LEVEL_FILTER::hb16df1a2b362bf4c, rsi);
}
