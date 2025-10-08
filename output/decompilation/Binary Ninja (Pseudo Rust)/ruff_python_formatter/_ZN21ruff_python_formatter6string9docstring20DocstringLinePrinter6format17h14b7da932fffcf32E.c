
  fn ruff_python_formatter::string::docstring::DocstringLinePrinter::format::h14b7da932fffcf32(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64) -> *mut i64

{
    let rbx: *mut i64 = *arg2.byte_offset(0x88);
    *rbx;
    rbx[1];
    let mut rbp: u32 =
        *ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a().
        byte_offset(2);
    let mut var_168: i128;
    
    if rbp == 0
    {
        *rbx;
        rbx[1];
        let mut rbp_1: u32 =
            *ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a().
            byte_offset(4);
        *rbx;
        rbx[1];
        let r12_1: i8 =
            *ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a().
            byte_offset(6);
        let mut r12_2: i32 =
            ruff_python_formatter::context::IndentLevel::to_ascii_spaces::h17245e80483057f0(
            *(*(rbx[1] + 0x30))(*rbx).byte_offset(0x28), r12_1);
        
        if *arg3 == -0x8000000000000000
        {
            let temp2_1: i16 = r12_2;
            r12_2 += 4;
            let mut rax_5: i32 = 0xffff;
            
            if temp2_1 < 0xfffc
            {
                rax_5 = r12_2;
            }
            
            r12_2 = rax_5;
        }
        
        ruff_python_formatter::string::docstring::CodeExampleKind::indent::hefc35518797d9953(
            &var_168, arg3);
        let rax_6: i64 =
            ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(
            &var_168);
        let rax_7: i64 =
            ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(arg2.
            byte_offset(0x70));
        let mut rax_8: i64 = 0;
        
        if rax_6 >= rax_7
        {
            rax_8 = rax_6 - rax_7;
        }
        
        let mut rdx: i16 = -1;
        
        if rax_8 < 0xffff
        {
            rdx = rax_8;
        }
        
        let mut rax_9: i16 = -1;
        
        if rdx + r12_2 >= rdx
        {
            rax_9 = rdx + r12_2;
        }
        
        let temp4_1: i16 = rbp_1;
        rbp_1 -= rax_9;
        
        if temp4_1 < rax_9
        {
            rbp_1 = 0;
        }
        
        rbp = core::cmp::Ord::max::h3b2f6553bef24c8c(rbp_1);
        core::result::Result$LT$T$C$E$GT$::expect::h237c85128dfd4736(rbp);
    }
    
    let mut rax_11: i64;
    let mut rdx_1: i64;
    rax_11 =
        ruff_python_formatter::string::docstring::CodeExampleKind::code::h9330386394a94940(arg3);
    let mut r13_3: i64 = rax_11;
    
    if rdx_1 == 0
    {
        r13_3 = rdx_1;
    }
    
    let mut r12_3: i64 = rax_11 + rdx_1 * 0x38 - 0x38;
    
    if rdx_1 == 0
    {
        r12_3 = rdx_1;
    }
    
    let mut rcx_2: i64;
    rcx_2 = r13_3 == 0;
    
    if (r12_3 == 0 | rcx_2) == 1
    {
        arg1[1] = -0x8000000000000000;
        *arg1 = 0;
        return arg1;
    }
    
    let mut var_d8: i64;
    core::iter::traits::iterator::Iterator::collect::h2ab73ba370af25e5(&var_d8, rax_11);
    let var_d0: i64;
    let mut var_c8: i64;
    alloc::str::join_generic_copy::h4f8d2b32aad8ce9f(&var_168, var_d0, var_c8);
    let mut var_f8: i128 = var_168;
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$str$GT$$GT$::hd7dae555c39c42ab(var_d8, 
        var_d0);
    *rbx;
    rbx[1];
    let rax_14: *mut i32 =
        ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a();
    let rdx_5: i32 = *rax_14.byte_offset(6);
    let rsi_10: i8 = *rax_14.byte_offset(0xb);
    let var_1b1_1: i8 = *rax_14.byte_offset(0xf);
    let var_1b3_1: i16 = *rax_14.byte_offset(0xd);
    let mut var_1c0: i32 = *rax_14;
    let var_1bc_1: i16 = rbp;
    let var_1ba_1: i32 = rdx_5;
    let var_1b6_1: i8 = 1;
    let var_1b5_1: i8 = rsi_10;
    let var_1b4_1: i8 = 0;
    let rbp_2: i8 = *arg2.byte_offset(0x95);
    let var_158: i64;
    ruff_python_formatter::string::docstring::docstring_format_source::h1715dbe38d8ea1a7(&var_168, 
        &var_1c0, rbp_2, *var_f8[8], var_158);
    let mut var_148: i128;
    
    if var_168 != -0x8000000000000000
    {
        let var_118: i64;
        let var_88_1: i64 = var_118;
        let var_128: i128;
        let var_98_1: i128 = var_128;
        let var_138: i128;
        let var_a8_1: i128 = var_138;
        let var_b8_1: i128 = var_148;
        var_c8 = var_158;
        var_d8 = var_168;
        let mut var_1b0: i64;
        let mut var_1a8_1: i64;
        let mut var_80: i128;
        let mut r14_1: i64;
        let mut r15_2: i64;
        let mut var_178: *mut i64;
        
        if rbp_2 == 0
        {
            r15_2 = var_d0;
            r14_1 = var_c8;
            var_1b0 = r15_2;
            var_1a8_1 = r14_1;
            var_178 = &var_1b0;
            let var_170_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb2fd416f06f629c;
            var_168 = &data_97f148;
            *var_168[8] = 2;
            var_148 = 0;
            let var_158_2: *mut *mut i64 = &var_178;
            let var_150_2: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h9c3ecc8c56a3befd(&var_80, &var_168);
        }
        else
        {
            r15_2 = var_d0;
            r14_1 = var_c8;
            var_1b0 = r15_2;
            var_1a8_1 = r14_1;
            var_178 = &var_1b0;
            let var_170_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdb2fd416f06f629c;
            var_168 = &data_97f168;
            *var_168[8] = 2;
            var_148 = 0;
            let var_158_1: *mut *mut i64 = &var_178;
            let var_150_1: i64 = 1;
            core::option::Option$LT$T$GT$::map_or_else::h9c3ecc8c56a3befd(&var_80, &var_168);
        }
        let mut var_198: i128 = var_80;
        let rbp_3: i64 = *var_198[8];
        *rbx;
        rbx[1];
        let mut rcx_6: i64;
        rcx_6 = *ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a().
            byte_offset(7) >= 2;
        let var_70: i64;
        ruff_python_parser::parse::h7a366e13514d0cfa(&var_168, rbp_3, var_70, rcx_6 * 3 + 0x90300);
        
        if var_168 != -0x8000000000000000
        {
            let mut var_68: ();
            _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(
                &var_68, 0xa, r15_2, r14_1);
            *var_80[8] = 0;
            let var_70_1: i64 = r14_1;
            let var_38_1: i16 = 0;
            var_80 = r13_3;
            core::iter::traits::iterator::Iterator::collect::hac61881637a69526(&var_1b0, &var_80);
            let var_1a0: i64;
            let rax_24: *mut c_void = (var_1a0 << 5) + var_1a8_1;
            
            if (rax_24 == 0x20 | var_1a0 == 0) == 0
            {
                *rax_24.byte_offset(-4) = *(r12_3 + 0x10) == 0;
            }
            
            arg1[3] = var_1a0;
            *arg1.byte_offset(8) = var_1b0;
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
        let mut rax_17: i64;
        
        if *var_168[8] != 0x29
        {
            arg1[1] = -0x8000000000000000;
            rax_17 = 0;
        }
        else
        {
            arg1[3] = var_148;
            *arg1.byte_offset(8) = var_158;
            rax_17 = 1;
        }
        
        *arg1 = rax_17;
        core::ptr::drop_in_place$LT$core..result..Result$LT$ruff_formatter..Printed$C$ruff_python_formatter..FormatModuleError$GT$$GT$::h1cf06ffe18cb5342(&var_168);
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_f8)
}
