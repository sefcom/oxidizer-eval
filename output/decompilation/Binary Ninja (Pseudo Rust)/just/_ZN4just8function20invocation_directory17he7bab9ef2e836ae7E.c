
  fn just::function::invocation_directory::he7bab9ef2e836ae7(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64) -> *mut i64

{
    let rax_1: *mut c_void = **arg2;
    let mut var_48: i32;
    let rdx: u64 = just::platform::unix::_$LT$impl$u20$just..platform_interface..PlatformInterface$u20$for$u20$just..platform..Platform$GT$::convert_native_path::hec5bfed77aedfe82(&var_48, arg2, arg3, arg4, *rax_1.byte_offset(0x20), *rax_1.byte_offset(0x28));
    let var_38: i128;
    
    if var_48 != 1
    {
        let zmm0: i128 = var_48;
        *arg1.byte_offset(0x10) = var_38;
        *arg1 = zmm0;
        return arg1;
    }
    
    let var_18: i64 = *var_38[8];
    let var_40: i128;
    let mut var_28: i128 = var_40;
    just::function::invocation_directory::_$u7b$$u7b$closure$u7d$$u7d$::h7e6e45b193e4e289(&arg1[1], 
        &var_28, rdx);
    *arg1 = 1;
    arg1
}
