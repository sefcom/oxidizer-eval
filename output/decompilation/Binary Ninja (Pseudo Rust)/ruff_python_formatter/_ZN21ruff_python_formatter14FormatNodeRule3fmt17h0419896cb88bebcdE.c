
  fn ruff_python_formatter::FormatNodeRule::fmt::h0419896cb88bebcd(arg1: *mut i32, arg2: i64, arg3: *mut i8, arg4: *mut i64) -> *mut i64

{
    let rax_1: *mut c_void = (*(arg4[1] + 0x30))(*arg4);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*rax_1.byte_offset(0x10));
    let r12_1: *mut c_void = *rax_1.byte_offset(0x10);
    let mut var_80: *mut c_void = r12_1;
    let mut var_60: i128;
    ruff_python_formatter::comments::Comments::leading_dangling_trailing::hdd0b3dae22e440ce(
        &var_60, r12_1, 0x13);
    let mut rax_3: *mut i64;
    let mut rdi_5: i64;
    rax_3 = (*(arg4[1] + 0x30))(*arg4);
    let var_40: i64;
    let var_38: i64;
    let mut var_b8: *mut i32;
    
    if _$LT$ruff_python_formatter..other..decorator..FormatDecorator$u20$as$u20$ruff_python_formatter..FormatNodeRule$LT$ruff_python_ast..nodes..Decorator$GT$$GT$::is_suppressed::hc9ae2f92d28eb27b(rdi_5, var_40, var_38, rax_3) != 0
    {
        let mut rax_12: *mut i32;
        let mut rdx_6: i64;
        rax_12 = ruff_python_formatter::verbatim::suppressed_node::h8e7a9edf2db54a04(0x13);
        var_b8 = rax_12;
        let var_b0_2: i64 = rdx_6;
        _$LT$ruff_python_formatter..verbatim..FormatSuppressedNode$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hf5668f026777978b(arg1, &var_b8, arg4);
    }
    else
    {
        let mut var_b0: i64;
        var_b0 = var_60;
        var_b8 = 1;
        let mut var_98: i32;
        _$LT$ruff_python_formatter..comments..format..FormatLeadingComments$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hc2058df1af78fa4d(&var_98, &var_b8, arg4);
        let mut zmm0_2: i128;
        let var_88: i64;
        
        if var_98 != 4
        {
            *arg1.byte_offset(0x10) = var_88;
            zmm0_2 = var_98;
        }
        else
        {
            *arg4;
            arg4[1];
            let mut rax_5: *mut c_void;
            let mut rsi_4: i64;
            rax_5 =
                ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a();
            let rbp_1: i8 = *rax_5.byte_offset(0xc);
            
            if rbp_1 == 1
            {
                let mut var_94: i32 = ruff_text_size::traits::Ranged::start::h03f6b3a3acca9993(
                    *arg3.byte_offset(0x40), *arg3.byte_offset(0x44));
                var_98 = 1;
                rsi_4 = _$LT$ruff_formatter..builders..SourcePosition$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::ha7e01fab67152475(&var_b8, &var_94, arg4);
            }
            
            let var_a8: i64;
            
            if rbp_1 == 1 && var_b8 != 4
            {
                *arg1.byte_offset(0x10) = var_a8;
                zmm0_2 = var_b8;
            }
            else
            {
                _$LT$ruff_python_formatter..statement..stmt_import_from..FormatStmtImportFrom$u20$as$u20$ruff_python_formatter..FormatNodeRule$LT$ruff_python_ast..generated..StmtImportFrom$GT$$GT$::fmt_fields::hfee05728508974f9(&var_b8, rsi_4, arg3, arg4);
                
                if var_b8 != 4
                {
                    *arg1.byte_offset(0x10) = var_a8;
                    zmm0_2 = var_b8;
                }
                else
                {
                    let mut rax_7: i32 = 0;
                    
                    if rbp_1 != 0
                    {
                        let var_74_1: i32 = ruff_text_size::traits::Ranged::end::h10785568a0bd3255(
                            *arg3.byte_offset(0x40), *arg3.byte_offset(0x44));
                        rax_7 = 1;
                    }
                    
                    let mut var_78: i32 = rax_7;
                    let mut var_70: i64 = var_40;
                    let var_68_1: i64 = var_38;
                    var_b8 = &var_78;
                    let var_b0_1: *mut c_void = &data_97e810;
                    let var_a8_1: *mut i64 = &var_70;
                    let var_a0_1: *mut c_void = &data_97d5a8;
                    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_98, arg4, &var_b8, 2);
                    *arg1.byte_offset(0x10) = var_88;
                    zmm0_2 = var_98;
                }
            }
        }
        *arg1 = zmm0_2;
    }
    core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(
        &var_80)
}
