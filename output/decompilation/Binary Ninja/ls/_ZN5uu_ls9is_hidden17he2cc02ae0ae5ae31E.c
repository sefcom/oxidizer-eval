
  uint64_t uu_ls::is_hidden::he2cc02ae0ae5ae31(void* arg1)

{
    void var_28;
    std::fs::DirEntry::file_name::habdd235db90dd152(&var_28, arg1);
    int64_t var_40;
    char* var_20;
    int64_t var_18;
    std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_40, var_20, var_18);
    int32_t rbx;
    
    if (!var_40)
    {
        var_40 = 0;
        int64_t rax_1;
        uint64_t rdx_1;
        rax_1 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2e, &var_40);
        int64_t var_38;
        int64_t var_30;
        rbx = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h032fb0d9cebdd48e(var_38, 
            var_30, rax_1, rdx_1);
    }
    else
        rbx = 0;
    
    core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h51f173604a280fb6(&var_28);
    return rbx;
}
