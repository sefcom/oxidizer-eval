
  uint64_t uu_ls::is_hidden::h56276072d631ca64(void* arg1)

{
    int64_t var_38;
    std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_38, arg1);
    int32_t var_50;
    char* var_30;
    int64_t var_28;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_50, var_30, var_28);
    int32_t rbp;
    
    if (var_50 != 1)
    {
        var_50 = 0;
        char* rax_1;
        uint64_t rdx_1;
        rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2e, &var_50);
        int64_t var_48;
        int64_t var_40;
        rbp = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h59d427cca09fdf3a(var_48, 
            var_40, rax_1, rdx_1);
    }
    else
        rbp = 0;
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h9930b46afeec8fe4(var_38, var_30);
    return rbp;
}
