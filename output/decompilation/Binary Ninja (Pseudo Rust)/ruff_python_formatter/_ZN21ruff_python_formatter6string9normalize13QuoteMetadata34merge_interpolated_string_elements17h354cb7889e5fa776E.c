
  fn ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements::h354cb7889e5fa776(arg1: *mut u128, arg2: *mut i128, arg3: *mut c_void, arg4: bool, arg5: *mut i64, arg6: i8) -> *mut u128

{
    let mut zmm0: u128 = *arg2;
    let mut var_88: u128 = zmm0;
    let rax: i64 = *arg3.byte_offset(0x10);
    
    if rax != 0
    {
        let rbx_1: *mut i64 = *arg3.byte_offset(8);
        let rdi: *mut i8 = *arg5;
        let rdx_1: i64 = arg5[1];
        let mut i: i64 = 0;
        
        do
        {
            let mut rax_5: i64 = *rbx_1.byte_offset(i);
            let mut var_40: u128;
            
            if rax_5 != -0x7fffffffffffffff
            {
                rax_5 = rax_5 != -0x8000000000000000;
                rax_5 |= *rbx_1.byte_offset(i).byte_offset(0x40) == 0;
                
                if rax_5 == 0
                {
                    ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements::h354cb7889e5fa776(&var_40, &var_88);
                    zmm0 = var_40;
                    var_88 = zmm0;
                }
            }
            else
            {
                let mut rax_4: *mut c_void;
                let mut rdx_4: i64;
                rax_4 = _$LT$str$u20$as$u20$ruff_text_size..traits..TextSlice$GT$::slice::h2d697908481a106a(rdi, rdx_1, (&rbx_1[1]).byte_offset(i));
                ruff_python_formatter::string::normalize::QuoteMetadata::from_str::h18c8ad1316633cd8(&var_40, rax_4, rdx_4, arg4, arg6);
                let mut var_50: u128;
                ruff_python_formatter::string::normalize::QuoteMetadata::merge::h66c204295fe4e704(
                    &var_50, &var_88, &var_40, zmm0);
                let var_44: i8;
                
                if var_44 == 2
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "Merge to succeed because all par…");
                    /* no return */
                }
                
                zmm0 = var_50;
                var_88 = zmm0;
            }
            i += 0x50;
        } while rax * 0x50 != i;
    }
    
    *arg1 = var_88;
    arg1
}
