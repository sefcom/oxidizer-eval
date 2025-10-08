
  int64_t* ruff_python_formatter::string::docstring::DocstringLinePrinter::format::h14b7da932fffcf32(int64_t* arg1, void* arg2, int64_t* arg3)

{
    int64_t* rbx = *(arg2 + 0x88);
    *rbx;
    rbx[1];
    uint32_t rbp =
        *(ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a() + 2);
    int128_t var_168;
    
    if (!rbp)
    {
        *rbx;
        rbx[1];
        uint32_t rbp_1 = *(
            ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a() + 4);
        *rbx;
        rbx[1];
        char r12_1 = *(
            ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a() + 6);
        int32_t r12_2 =
            ruff_python_formatter::context::IndentLevel::to_ascii_spaces::h17245e80483057f0(
            *((*(rbx[1] + 0x30))(*rbx) + 0x28), r12_1);
        
        if (*arg3 == -0x8000000000000000)
        {
            int16_t temp2_1 = r12_2;
            r12_2 += 4;
            int32_t rax_5 = 0xffff;
            
            if (temp2_1 < 0xfffc)
                rax_5 = r12_2;
            
            r12_2 = rax_5;
        }
        
        ruff_python_formatter::string::docstring::CodeExampleKind::indent::hefc35518797d9953(
            &var_168, arg3);
        int64_t rax_6 =
            ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(
            &var_168);
        int64_t rax_7 =
            ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(arg2
            + 0x70);
        int64_t rax_8 = 0;
        
        if (rax_6 >= rax_7)
            rax_8 = rax_6 - rax_7;
        
        int16_t rdx = -1;
        
        if (rax_8 < 0xffff)
            rdx = rax_8;
        
        int16_t rax_9 = -1;
        
        if (rdx + r12_2 >= rdx)
            rax_9 = rdx + r12_2;
        
        int16_t temp4_1 = rbp_1;
        rbp_1 -= rax_9;
        
        if (temp4_1 < rax_9)
            rbp_1 = 0;
        
        rbp = core::cmp::Ord::max::h3b2f6553bef24c8c(rbp_1);
        core::result::Result$LT$T$C$E$GT$::expect::h237c85128dfd4736(rbp);
    }
    
    int64_t rax_11;
    int64_t rdx_1;
    rax_11 =
        ruff_python_formatter::string::docstring::CodeExampleKind::code::h9330386394a94940(arg3);
    int64_t r13_3 = rax_11;
    
    if (!rdx_1)
        r13_3 = rdx_1;
    
    int64_t r12_3 = rax_11 + rdx_1 * 0x38 - 0x38;
    
    if (!rdx_1)
        r12_3 = rdx_1;
    
    int64_t rcx_2;
    rcx_2 = !r13_3;
    
    if ((!r12_3 | rcx_2) == 1)
    {
        arg1[1] = -0x8000000000000000;
        *arg1 = 0;
        return arg1;
    }
    
    int64_t var_d8;
    core::iter::traits::iterator::Iterator::collect::h2ab73ba370af25e5(&var_d8, rax_11);
    int64_t var_d0;
    int64_t var_c8;
    alloc::str::join_generic_copy::h4f8d2b32aad8ce9f(&var_168, var_d0, var_c8);
    int128_t var_f8 = var_168;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd7dae555c39c42ab(var_d8, 
        var_d0);
    *rbx;
    rbx[1];
    int32_t* rax_14 =
        ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a();
    int32_t rdx_5 = *(rax_14 + 6);
    char rsi_10 = *(rax_14 + 0xb);
    char var_1b1_1 = *(rax_14 + 0xf);
    int16_t var_1b3_1 = *(rax_14 + 0xd);
    int32_t var_1c0 = *rax_14;
    int16_t var_1bc_1 = rbp;
    int32_t var_1ba_1 = rdx_5;
    char var_1b6_1 = 1;
    char var_1b5_1 = rsi_10;
    char var_1b4_1 = 0;
    char rbp_2 = *(arg2 + 0x95);
    int64_t var_158;
    ruff_python_formatter::string::docstring::docstring_format_source::h1715dbe38d8ea1a7(&var_168, 
        &var_1c0, rbp_2, *var_f8[8], var_158);
    int128_t var_148;
    
    if (var_168 != -0x8000000000000000)
    {
        int64_t var_118;
        int64_t var_88_1 = var_118;
        int128_t var_128;
        int128_t var_98_1 = var_128;
        int128_t var_138;
        int128_t var_a8_1 = var_138;
        int128_t var_b8_1 = var_148;
        var_c8 = var_158;
        var_d8 = var_168;
        int64_t var_1b0;
        int64_t var_1a8_1;
        int128_t var_80;
        int64_t r14_1;
        int64_t r15_2;
        int64_t* var_178;
        
        if (!rbp_2)
        {
            r15_2 = var_d0;
            r14_1 = var_c8;
            var_1b0 = r15_2;
            var_1a8_1 = r14_1;
            var_178 = &var_1b0;
            int64_t (* var_170_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb2fd416f06f629c;
            var_168 = &data_97f148;
            *var_168[8] = 2;
            var_148 = 0;
            int64_t** var_158_2 = &var_178;
            int64_t var_150_2 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h9c3ecc8c56a3befd(&var_80, &var_168);
        }
        else
        {
            r15_2 = var_d0;
            r14_1 = var_c8;
            var_1b0 = r15_2;
            var_1a8_1 = r14_1;
            var_178 = &var_1b0;
            int64_t (* var_170_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb2fd416f06f629c;
            var_168 = &data_97f168;
            *var_168[8] = 2;
            var_148 = 0;
            int64_t** var_158_1 = &var_178;
            int64_t var_150_1 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h9c3ecc8c56a3befd(&var_80, &var_168);
        }
        int128_t var_198 = var_80;
        int64_t rbp_3 = *var_198[8];
        *rbx;
        rbx[1];
        int64_t rcx_6;
        rcx_6 =
            *(ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a() + 7)
            >= 2;
        int64_t var_70;
        ruff_python_parser::parse::h7a366e13514d0cfa(&var_168, rbp_3, var_70, rcx_6 * 3 + 0x90300);
        
        if (var_168 != -0x8000000000000000)
        {
            void var_68;
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
                &var_68, 0xa, r15_2, r14_1);
            *var_80[8] = 0;
            int64_t var_70_1 = r14_1;
            int16_t var_38_1 = 0;
            var_80 = r13_3;
            core::iter::traits::iterator::Iterator::collect::hac61881637a69526(&var_1b0, &var_80);
            int64_t var_1a0;
            void* rax_24 = (var_1a0 << 5) + var_1a8_1;
            
            if (!(rax_24 == 0x20 | !var_1a0))
                *(rax_24 - 4) = !*(r12_3 + 0x10);
            
            arg1[3] = var_1a0;
            *(arg1 + 8) = var_1b0;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$ruff_python_parser..Parsed$LT$ruff_python_ast..generated..Mod$GT$$C$ruff_python_parser..error..ParseError$GT$$GT$::h80e3e5096fa422bb(&var_168);
        }
        else
        {
            arg1[1] = -0x8000000000000000;
            *arg1 = 0;
            core::ptr::drop_in_place$LT$core..result..Result$LT$ruff_python_parser..Parsed$LT$ruff_python_ast..generated..Mod$GT$$C$ruff_python_parser..error..ParseError$GT$$GT$::h80e3e5096fa422bb(&var_168);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_198);
        core::ptr::drop_in_place$LT$ruff_formatter..Printed$GT$::h2ca1bd91910370f1(&var_d8);
    }
    else
    {
        int64_t rax_17;
        
        if (*var_168[8] != 0x29)
        {
            arg1[1] = -0x8000000000000000;
            rax_17 = 0;
        }
        else
        {
            arg1[3] = var_148;
            *(arg1 + 8) = var_158;
            rax_17 = 1;
        }
        
        *arg1 = rax_17;
        core::ptr::drop_in_place$LT$core..result..Result$LT$ruff_formatter..Printed$C$ruff_python_formatter..FormatModuleError$GT$$GT$::h1cf06ffe18cb5342(&var_168);
    }
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_f8);
}
