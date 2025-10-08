
  fn ruff_python_formatter::string::docstring::CodeExampleMarkdown::new::h1a5e52a692fa8785(arg1: *mut i64, arg2: *mut i8) -> i64

{
    let mut var_c8: i64;
    let rdx: i64;
    ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(&var_c8, arg2, 
        rdx);
    let rbp: i64 = var_c8;
    let var_b8: i64;
    let var_b0: u64;
    let rax: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(
        var_b8, var_b0, "```~~~tickstilds/home/34r7hm4n/.…", 3);
    let mut result: i8;
    
    if rax == 0
    {
        result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(var_b8, 
            var_b0, "~~~tickstilds/home/34r7hm4n/.car…", 3);
    }
    
    if rax != 0 || result != 0
    {
        std::sync::poison::once::Once::call_once::h1a70ca06d963a972(&data_9c19e0, 
            &ruff_python_formatter::string::docstring::CodeExampleMarkdown::new::FENCE_START::h7993c76b4e12af8e);
        result =
            regex::regex::string::Regex::captures_at::hc64621ccd4f9cc0f(&var_c8, var_b8, var_b0);
        
        if var_c8 != 2
        {
            let zmm0_1: i128 = var_c8;
            let var_a8: i128;
            let var_58_1: i128 = var_a8;
            let mut var_68: i128 = var_b8;
            let mut var_78: i128 = zmm0_1;
            let mut zmm0_2: [i32; 0x4] =
                regex_automata::util::captures::Captures::get_group_by_name::hc3ca7075ebed43bf(
                &var_c8, &var_68);
            let mut r15_1: i64 = var_c8;
            
            if r15_1 != 1
            {
                zmm0_2 =
                    regex_automata::util::captures::Captures::get_group_by_name::hc3ca7075ebed43bf(
                    &var_c8, &var_68);
                
                if var_c8 != 1
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "no ticks means it must be tildes…");
                    /* no return */
                }
            }
            
            let var_98: i128;
            let r12_1: *mut i8 = *var_98[8];
            let var_c0: i64;
            let var_88: i64;
            let mut rax_2: *mut c_void;
            let mut rdx_3: *mut c_void;
            rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(var_c0, var_b8, r12_1, var_88);
            
            if rax_2 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(r12_1, var_88, var_c0, var_b8);
                /* no return */
            }
            
            let rax_3: i64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h41a8767c0185b7ec(rax_2, rdx_3.byte_offset(rax_2), zmm0_2);
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_c8, rbp, var_c0);
            r15_1 ^= 1;
            arg1[5] = var_b8;
            *arg1.byte_offset(0x18) = var_c8;
            *arg1 = 0;
            arg1[1] = 8;
            arg1[2] = 0;
            arg1[6] = rax_3;
            arg1[7] = r15_1;
            return 
                core::ptr::drop_in_place$LT$regex..regex..string..Captures$GT$::hdf6a059fdc7a7ad5(
                &var_78);
        }
    }
    
    *arg1 = -0x8000000000000000;
    result
}
