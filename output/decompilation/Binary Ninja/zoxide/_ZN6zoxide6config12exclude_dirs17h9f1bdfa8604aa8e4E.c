
  int64_t zoxide::config::exclude_dirs::h9f1bdfa8604aa8e4(int128_t* arg1)

{
    int64_t var_68;
    std::env::var_os::h745bce177e3d772b(&var_68, "_ZO_EXCLUDE_DI");
    int64_t r14 = var_68;
    uint64_t* (* var_50)(uint64_t* arg1, int64_t arg2, uint64_t arg3);
    
    if (-(r14) == -0x8000000000000000)
    {
        zoxide::config::exclude_dirs::_$u7b$$u7b$closure$u7d$$u7d$::h5139a1084dde13ae(&var_50);
        return core::iter::traits::iterator::Iterator::collect::hdd45a869f7636be8(arg1, &var_50);
    }
    
    var_50 = std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140;
    int64_t var_60;
    int64_t var_48 = var_60;
    int64_t var_58;
    int64_t var_40 = var_58;
    int64_t (* var_38)(char* arg1) =
        std::sys::pal::unix::os::split_paths::is_separator::hb66c58b70205f58d;
    char var_30 = 0;
    core::iter::traits::iterator::Iterator::collect::hfa210c25162442da(arg1, &var_50);
    /* tailcall */
    return core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h62f050d99d211acd(r14, 
        var_60);
}
