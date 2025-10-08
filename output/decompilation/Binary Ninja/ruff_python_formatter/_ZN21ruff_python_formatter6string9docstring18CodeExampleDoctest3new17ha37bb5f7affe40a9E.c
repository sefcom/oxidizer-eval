
  int64_t ruff_python_formatter::string::docstring::CodeExampleDoctest::new::ha37bb5f7affe40a9(int64_t* arg1, int64_t* arg2)

{
    char* rdi = *arg2;
    int64_t r15 = arg2[1];
    int64_t rax;
    int64_t rdx;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(rdi, r15);
    int64_t result;
    int64_t rdx_2;
    result =
        _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(
        ">>> VS78VS20VS21Repr:", 4, rax, rdx);
    
    if (!result)
        *arg1 = -0x8000000000000000;
    else
    {
        int64_t rbp_2 = r15 - rdx;
        
        if (r15 < rdx)
        {
            core::option::expect_failed::h3f620cfb8545dc61("suffix is <= original.. ::/rustc…");
            /* no return */
        }
        
        uint64_t rax_1 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x38);
        
        if (!rax_1)
        {
            alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
            /* no return */
        }
        
        *(rax_1 + 0x20) = arg2[4];
        int128_t zmm0_1 = *arg2;
        *(rax_1 + 0x10) = *(arg2 + 0x10);
        *rax_1 = zmm0_1;
        *(rax_1 + 0x28) = result;
        *(rax_1 + 0x30) = rdx_2;
        int64_t rdx_4;
        result = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(rbp_2, rdi, r15);
        
        if (!result)
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
    
    return result;
}
