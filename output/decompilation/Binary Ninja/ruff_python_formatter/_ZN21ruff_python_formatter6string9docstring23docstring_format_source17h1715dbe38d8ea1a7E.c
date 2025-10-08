
  int64_t ruff_python_formatter::string::docstring::docstring_format_source::h1715dbe38d8ea1a7(int64_t* arg1, int128_t* arg2, char arg3, int64_t arg4, int64_t arg5)

{
    int64_t rax;
    rax = *(arg2 + 7) >= 2;
    int64_t var_110;
    ruff_python_parser::parse::h7a366e13514d0cfa(&var_110, arg4, arg5, rax * 3 + 0x90300);
    int64_t rax_1 = var_110;
    int128_t var_108;
    int128_t var_278 = var_108;
    int128_t var_f8;
    int64_t result;
    
    if (-(rax_1) == -0x8000000000000000)
    {
        arg1[5] = result;
        int128_t zmm0 = var_278;
        *(arg1 + 0x18) = var_f8;
        *(arg1 + 8) = zmm0;
        *arg1 = -0x8000000000000000;
        return result;
    }
    
    int128_t var_b0;
    int128_t var_178_1 = var_b0;
    int128_t var_c0;
    int128_t var_188 = var_c0;
    int128_t var_d0;
    int128_t var_198 = var_d0;
    int128_t var_e0;
    int128_t var_1a8_1 = var_e0;
    int128_t var_1d0_1 = var_278;
    int128_t var_1c0_1 = var_f8;
    int64_t result_1 = result;
    int64_t var_1d8 = rax_1;
    int64_t var_2b0;
    ruff_python_parser::_$LT$impl$u20$core..convert..From$LT$$RF$ruff_python_parser..Tokens$GT$$u20$for$u20$ruff_python_trivia..comment_ranges..CommentRanges$GT$::from::hbc86bd11c9666a5f(&var_2b0, &var_1d8);
    int64_t temp1_1 = *var_198[8];
    int64_t rdi_2;
    rdi_2 = temp1_1 == -0x8000000000000000;
    int128_t* rsi_2 = &var_188;
    
    if (temp1_1 != -0x8000000000000000)
        rsi_2 = &*var_198[8];
    
    uint64_t rax_3 =
        ruff_python_formatter::comments::Comments::from_ast::collect_comments::h79a548927313f77b(
        rdi_2, rsi_2, arg4, arg5, &var_2b0);
    int128_t var_1ec_1 = *arg2;
    int64_t var_218 = arg4;
    int64_t var_210_1 = arg5;
    uint64_t var_208_1 = rax_3;
    int64_t* var_200_1 = &var_1d8;
    int16_t var_1f8_1 = 0x100;
    int16_t var_1f0_1 = 0;
    char var_1dc_1 = arg3;
    char var_1ee_1 = 2;
    void* var_280 = &*var_198[8];
    var_278 = &var_280;
    *var_278[8] = &data_97f528;
    ruff_formatter::format::hfa250cea0bef8d02(&var_110, &var_218, &var_278);
    int64_t rax_4 = var_110;
    int128_t var_298_1 = var_108;
    int64_t rcx_5 = var_f8;
    
    if (rax_4 != -0x8000000000000000)
    {
        int64_t var_118_1 = var_c0;
        int128_t var_128_1 = var_d0;
        int128_t var_138_1 = var_e0;
        int128_t var_148_1 = var_f8;
        int128_t var_160_1 = var_298_1;
        int64_t var_150_1 = rcx_5;
        int64_t var_168 = rax_4;
        ruff_formatter::Formatted$LT$Context$GT$::create_printer::h166771db7bb4b0ee(&var_110, 
            &var_168);
        ruff_formatter::printer::Printer::print::h79a287b6ceef9323(&var_278, &var_110, &var_168);
        int64_t rcx_9 = var_278;
        int64_t rax_7 = *var_278[8];
        
        if (rcx_9 != -0x8000000000000000)
        {
            int64_t var_228;
            arg1[0xa] = var_228;
            int128_t var_238;
            *(arg1 + 0x40) = var_238;
            int128_t var_248;
            *(arg1 + 0x30) = var_248;
            *(arg1 + 0x20) = result;
            *(arg1 + 0x10) = var_f8;
            *arg1 = rcx_9;
            arg1[1] = rax_7;
            core::ptr::drop_in_place$LT$ruff_formatter..Formatted$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::h53f507e52bb77463(&var_168);
        }
        else
        {
            arg1[1] = 0x2a;
            *(arg1 + 0xc) = rax_7;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$ruff_formatter..Formatted$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::h53f507e52bb77463(&var_168);
        }
    }
    else
    {
        *var_108[0xf] = rcx_5;
        *var_110[7] = var_298_1;
        arg1[1] = 0x29;
        *(arg1 + 9) = var_110;
        arg1[3] = *var_108[7];
        arg1[4] = *var_108[0xf];
        *arg1 = -0x8000000000000000;
    }
    
    int64_t var_2a8;
    core::ptr::drop_in_place$LT$ruff_python_trivia..comment_ranges..CommentRanges$GT$::hf53ca0f277f8a08a(var_2b0, var_2a8);
    return core::ptr::drop_in_place$LT$ruff_python_parser..Parsed$LT$ruff_python_ast..generated..Mod$GT$$GT$::h61797061966acb6e(&var_1d8);
}
