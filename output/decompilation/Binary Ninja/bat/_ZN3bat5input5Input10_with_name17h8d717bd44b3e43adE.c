
  int64_t bat::input::Input::_with_name::h8d717bd44b3e43ad(int64_t arg1, void* arg2, int64_t arg3, uint64_t arg4)

{
    int128_t var_38;
    int64_t r15_1;
    
    if (!arg3)
        r15_1 = -0x8000000000000000;
    else
    {
        int64_t var_50;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_50, arg3, arg4);
        int64_t var_48;
        uint64_t var_40;
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_38, var_48, var_40);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(arg2 + 0x28);
        int64_t var_28;
        *(arg2 + 0x38) = var_28;
        *(arg2 + 0x28) = var_38;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_50);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_50, arg3, arg4);
        r15_1 = var_50;
        var_38 = var_48;
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h0b23a5e9f361e5bf(arg2 + 0x10);
    *(arg2 + 0x10) = r15_1;
    *(arg2 + 0x18) = var_38;
    memcpy(arg1, arg2, 0xa0);
    return arg1;
}
