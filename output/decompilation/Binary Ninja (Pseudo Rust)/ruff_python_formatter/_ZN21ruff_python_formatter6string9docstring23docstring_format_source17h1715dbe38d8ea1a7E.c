
  fn ruff_python_formatter::string::docstring::docstring_format_source::h1715dbe38d8ea1a7(arg1: *mut i64, arg2: *mut i128, arg3: i8, arg4: i64, arg5: i64) -> i64

{
    let mut rax: i64;
    rax = *arg2.byte_offset(7) >= 2;
    let mut var_110: i64;
    ruff_python_parser::parse::h7a366e13514d0cfa(&var_110, arg4, arg5, rax * 3 + 0x90300);
    let rax_1: i64 = var_110;
    let mut var_108: i128;
    let mut var_278: i128 = var_108;
    let var_f8: i128;
    let result: i64;
    
    if -(rax_1) == -0x8000000000000000
    {
        arg1[5] = result;
        let zmm0: i128 = var_278;
        *arg1.byte_offset(0x18) = var_f8;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    let var_b0: i128;
    let var_178_1: i128 = var_b0;
    let var_c0: i128;
    let mut var_188: i128 = var_c0;
    let var_d0: i128;
    let mut var_198: i128 = var_d0;
    let var_e0: i128;
    let var_1a8_1: i128 = var_e0;
    let var_1d0_1: i128 = var_278;
    let var_1c0_1: i128 = var_f8;
    let result_1: i64 = result;
    let mut var_1d8: i64 = rax_1;
    let mut var_2b0: i64;
    ruff_python_parser::_$LT$impl$u20$core..convert..From$LT$$RF$ruff_python_parser..Tokens$GT$$u20$for$u20$ruff_python_trivia..comment_ranges..CommentRanges$GT$::from::hbc86bd11c9666a5f(&var_2b0, &var_1d8);
    let temp1_1: i64 = *var_198[8];
    let mut rdi_2: i64;
    rdi_2 = temp1_1 == -0x8000000000000000;
    let mut rsi_2: *mut i128 = &var_188;
    
    if temp1_1 != -0x8000000000000000
    {
        rsi_2 = &*var_198[8];
    }
    
    let rax_3: u64 =
        ruff_python_formatter::comments::Comments::from_ast::collect_comments::h79a548927313f77b(
        rdi_2, rsi_2, arg4, arg5, &var_2b0);
    let var_1ec_1: i128 = *arg2;
    let mut var_218: i64 = arg4;
    let var_210_1: i64 = arg5;
    let var_208_1: u64 = rax_3;
    let var_200_1: *mut i64 = &var_1d8;
    let var_1f8_1: i16 = 0x100;
    let var_1f0_1: i16 = 0;
    let var_1dc_1: i8 = arg3;
    let var_1ee_1: i8 = 2;
    let mut var_280: *mut c_void = &*var_198[8];
    var_278 = &var_280;
    *var_278[8] = &data_97f528;
    ruff_formatter::format::hfa250cea0bef8d02(&var_110, &var_218, &var_278);
    let rax_4: i64 = var_110;
    let var_298_1: i128 = var_108;
    let rcx_5: i64 = var_f8;
    
    if rax_4 != -0x8000000000000000
    {
        let var_118_1: i64 = var_c0;
        let var_128_1: i128 = var_d0;
        let var_138_1: i128 = var_e0;
        let var_148_1: i128 = var_f8;
        let var_160_1: i128 = var_298_1;
        let var_150_1: i64 = rcx_5;
        let mut var_168: i64 = rax_4;
        ruff_formatter::Formatted$LT$Context$GT$::create_printer::h166771db7bb4b0ee(&var_110, 
            &var_168);
        ruff_formatter::printer::Printer::print::h79a287b6ceef9323(&var_278, &var_110, &var_168);
        let rcx_9: i64 = var_278;
        let rax_7: i64 = *var_278[8];
        
        if rcx_9 != -0x8000000000000000
        {
            let var_228: i64;
            arg1[0xa] = var_228;
            let var_238: i128;
            *arg1.byte_offset(0x40) = var_238;
            let var_248: i128;
            *arg1.byte_offset(0x30) = var_248;
            *arg1.byte_offset(0x20) = result;
            *arg1.byte_offset(0x10) = var_f8;
            *arg1 = rcx_9;
            arg1[1] = rax_7;
            core::ptr::drop_in_place$LT$ruff_formatter..Formatted$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::h53f507e52bb77463(&var_168);
        }
        else
        {
            arg1[1] = 0x2a;
            *arg1.byte_offset(0xc) = rax_7;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$ruff_formatter..Formatted$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::h53f507e52bb77463(&var_168);
        }
    }
    else
    {
        *var_108[0xf] = rcx_5;
        *var_110[7] = var_298_1;
        arg1[1] = 0x29;
        *arg1.byte_offset(9) = var_110;
        arg1[3] = *var_108[7];
        arg1[4] = *var_108[0xf];
        *arg1 = -0x8000000000000000;
    }
    
    let var_2a8: i64;
    core::ptr::drop_in_place$LT$ruff_python_trivia..comment_ranges..CommentRanges$GT$::hf53ca0f277f8a08a(var_2b0, var_2a8);
    core::ptr::drop_in_place$LT$ruff_python_parser..Parsed$LT$ruff_python_ast..generated..Mod$GT$$GT$::h61797061966acb6e(&var_1d8)
}
