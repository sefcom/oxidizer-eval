
  fn ruff_python_formatter::string::docstring::CodeExampleDoctest::new::ha37bb5f7affe40a9(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rdi: *mut i8 = *arg2;
    let r15: i64 = arg2[1];
    let mut rax: i64;
    let mut rdx: i64;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(rdi, r15);
    let mut result: i64;
    let mut rdx_2: i64;
    result =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        ">>> VS78VS20VS21Repr:", 4, rax, rdx);
    
    if result == 0
    {
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let rbp_2: i64 = r15 - rdx;
        
        if r15 < rdx
        {
            core::option::expect_failed::h3f620cfb8545dc61("suffix is <= original.. ::/rustc…");
            /* no return */
        }
        
        let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x38);
        
        if rax_1 == 0
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *(rax_1 + 0x20) = arg2[4];
        let zmm0_1: i128 = *arg2;
        *(rax_1 + 0x10) = *arg2.byte_offset(0x10);
        *rax_1 = zmm0_1;
        *(rax_1 + 0x28) = result;
        *(rax_1 + 0x30) = rdx_2;
        let mut rdx_4: i64;
        result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rbp_2, rdi, r15);
        
        if result == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(rdi, r15, 0, rbp_2);
            /* no return */
        }
        
        *arg1 = 1;
        arg1[1] = rax_1;
        arg1[2] = 1;
        arg1[3] = result;
        arg1[4] = rdx_4;
    }
    
    result
}
