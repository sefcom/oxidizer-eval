
  fn just::source::Source::root::hc15322b4e8fc1460(arg1: *mut i128, arg2: i64, arg3: u64) -> i64

{
    let rax: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x18);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    let mut var_80: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, arg2, arg3);
    let result: i64;
    let result_1: i64 = result;
    let zmm0: i128 = var_80;
    let var_68: i128 = zmm0;
    *(rax + 0x10) = result;
    *rax = zmm0;
    let var_50: i64 = 1;
    let var_48: u64 = rax;
    let var_40: i64 = 1;
    let var_38: i64 = -0x8000000000000000;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, arg2, arg3);
    let zmm0_1: i128 = var_80;
    let mut rax_3: *mut i8;
    let mut rdx_2: u64;
    rax_3 = std::path::Path::parent::hef287f60afa56900(arg2, arg3);
    
    if rax_3 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, rax_3, rdx_2);
    *arg1.byte_offset(0x58) = result;
    *arg1.byte_offset(0x48) = var_80;
    *arg1.byte_offset(0x78) = 0;
    *arg1 = var_50;
    arg1[1] = var_40;
    *arg1.byte_offset(0x18) = 0;
    arg1[2] = 8;
    *arg1.byte_offset(0x28) = 0;
    arg1[6] = var_38;
    let var_28: i64;
    arg1[7] = var_28;
    arg1[3] = zmm0_1;
    arg1[4] = result;
    result
}
