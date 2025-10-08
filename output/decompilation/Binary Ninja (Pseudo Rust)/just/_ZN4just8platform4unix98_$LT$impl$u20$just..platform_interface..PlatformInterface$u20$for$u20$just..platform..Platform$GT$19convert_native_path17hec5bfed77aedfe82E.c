
  fn just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::convert_native_path::hec5bfed77aedfe82(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: *mut i8, arg6: i64) -> *mut i64

{
    let mut var_20: i32;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_20, arg5, arg6);
    let mut rax: i64;
    
    if var_20 != 1
    {
        let var_18: i64;
        let var_10: u64;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_20, var_18, var_10);
        let rax_1: i64 = var_20;
        *arg1.byte_offset(0x10) = var_18;
        arg1[1] = rax_1;
        rax = 0;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&arg1[1], "Error getting current directory:…", 0x35);
        rax = 1;
    }
    
    *arg1 = rax;
    arg1
}
