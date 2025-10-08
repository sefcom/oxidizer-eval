
  fn alacritty::ipc::send_reply_fallible::h775e89a0afb08361(arg1: *mut i32, arg2: *mut i64) -> *mut c_void

{
    let mut var_28: i64;
    serde_json::ser::to_vec::ha6c4e490e6469418(&var_28, arg2[1], arg2[2]);
    let rax: i64 = var_28;
    let mut result: *mut c_void;
    let var_20: i64;
    
    if -(rax) != -0x8000000000000000
    {
        var_28 = rax;
        let var_20_1: i64 = var_20;
        let var_18: u64;
        let var_18_1: u64 = var_18;
        result = std::io::Write::write_all::h7d16bb30299e266c(arg1, var_20, var_18);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_28);
    }
    else
    {
        result = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
            alloc::boxed::Box$LT$T$GT$::new::h933939d87bcfb98e(var_20), &data_c82fb8);
    }
    core::ptr::drop_in_place$LT$$LT$toml..value..MapDeserializer$u20$as$u20$serde..de..MapAccess$GT$..next_value_seed$LT$core..marker..PhantomData$LT$u8$GT$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h16862b29d1d1c4a4(arg2);
    result
}
