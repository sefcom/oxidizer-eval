
  fn bat::input::Input::_with_name::h8d717bd44b3e43ad(arg1: i64, arg2: *mut c_void, arg3: i64, arg4: u64) -> i64

{
    let mut var_38: i128;
    let mut r15_1: i64;
    
    if arg3 == 0
    {
        r15_1 = -0x8000000000000000;
    }
    else
    {
        let mut var_50: i64;
        alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_50, arg3, arg4);
        let var_48: i64;
        let var_40: u64;
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_38, var_48, var_40);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(arg2.
            byte_offset(0x28));
        let var_28: i64;
        *arg2.byte_offset(0x38) = var_28;
        *arg2.byte_offset(0x28) = var_38;
        core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..path..StripPrefixError$GT$$GT$::h7b85c5c873696979(&var_50);
        std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&var_50, arg3, arg4);
        r15_1 = var_50;
        var_38 = var_48;
    }
    
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h0b23a5e9f361e5bf(arg2.byte_offset(0x10));
    *arg2.byte_offset(0x10) = r15_1;
    *arg2.byte_offset(0x18) = var_38;
    memcpy(arg1, arg2, 0xa0);
    arg1
}
