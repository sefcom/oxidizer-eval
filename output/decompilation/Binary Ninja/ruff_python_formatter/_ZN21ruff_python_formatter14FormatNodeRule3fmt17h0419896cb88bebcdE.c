
  int64_t* ruff_python_formatter::FormatNodeRule::fmt::h0419896cb88bebcd(int32_t* arg1, int64_t arg2, char* arg3, int64_t* arg4)

{
    void* rax_1 = (*(arg4[1] + 0x30))(*arg4);
    alloc::rc::RcInnerPtr::inc_strong::h8686aaaa10b78ebb(*(rax_1 + 0x10));
    void* r12_1 = *(rax_1 + 0x10);
    void* var_80 = r12_1;
    int128_t var_60;
    ruff_python_formatter::comments::Comments::leading_dangling_trailing::hdd0b3dae22e440ce(
        &var_60, r12_1, 0x13);
    int64_t* rax_3;
    int64_t rdi_5;
    rax_3 = (*(arg4[1] + 0x30))(*arg4);
    int64_t var_40;
    int64_t var_38;
    int32_t* var_b8;
    
    if (_$LT$ruff_python_formatter..other..decorator..FormatDecorator$u20$as$u20$ruff_python_formatter..FormatNodeRule$LT$ruff_python_ast..nodes..Decorator$GT$$GT$::is_suppressed::hc9ae2f92d28eb27b(rdi_5, var_40, var_38, rax_3))
    {
        int32_t* rax_12;
        int64_t rdx_6;
        rax_12 = ruff_python_formatter::verbatim::suppressed_node::h8e7a9edf2db54a04(0x13);
        var_b8 = rax_12;
        int64_t var_b0_2 = rdx_6;
        _$LT$ruff_python_formatter..verbatim..FormatSuppressedNode$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hf5668f026777978b(arg1, &var_b8, arg4);
    }
    else
    {
        int64_t var_b0;
        var_b0 = var_60;
        var_b8 = 1;
        int32_t var_98;
        _$LT$ruff_python_formatter..comments..format..FormatLeadingComments$u20$as$u20$ruff_formatter..Format$LT$ruff_python_formatter..context..PyFormatContext$GT$$GT$::fmt::hc2058df1af78fa4d(&var_98, &var_b8, arg4);
        int128_t zmm0_2;
        int64_t var_88;
        
        if (var_98 != 4)
        {
            *(arg1 + 0x10) = var_88;
            zmm0_2 = var_98;
        }
        else
        {
            *arg4;
            arg4[1];
            void* rax_5;
            int64_t rsi_4;
            rax_5 =
                ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a();
            char rbp_1 = *(rax_5 + 0xc);
            
            if (rbp_1 == 1)
            {
                int32_t var_94 = ruff_text_size::traits::Ranged::start::h03f6b3a3acca9993(
                    *(arg3 + 0x40), *(arg3 + 0x44));
                var_98 = 1;
                rsi_4 = _$LT$ruff_formatter..builders..SourcePosition$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::ha7e01fab67152475(&var_b8, &var_94, arg4);
            }
            
            int64_t var_a8;
            
            if (rbp_1 == 1 && var_b8 != 4)
            {
                *(arg1 + 0x10) = var_a8;
                zmm0_2 = var_b8;
            }
            else
            {
                _$LT$ruff_python_formatter..statement..stmt_import_from..FormatStmtImportFrom$u20$as$u20$ruff_python_formatter..FormatNodeRule$LT$ruff_python_ast..generated..StmtImportFrom$GT$$GT$::fmt_fields::hfee05728508974f9(&var_b8, rsi_4, arg3, arg4);
                
                if (var_b8 != 4)
                {
                    *(arg1 + 0x10) = var_a8;
                    zmm0_2 = var_b8;
                }
                else
                {
                    int32_t rax_7 = 0;
                    
                    if (rbp_1)
                    {
                        int32_t var_74_1 = ruff_text_size::traits::Ranged::end::h10785568a0bd3255(
                            *(arg3 + 0x40), *(arg3 + 0x44));
                        rax_7 = 1;
                    }
                    
                    int32_t var_78 = rax_7;
                    int64_t var_70 = var_40;
                    int64_t var_68_1 = var_38;
                    var_b8 = &var_78;
                    void* const var_b0_1 = &data_97e810;
                    int64_t* var_a8_1 = &var_70;
                    void* const var_a0_1 = &data_97d5a8;
                    _$LT$ruff_formatter..formatter..Formatter$LT$Context$GT$$u20$as$u20$ruff_formatter..buffer..Buffer$GT$::write_fmt::h7287e9dfefd137ea(&var_98, arg4, &var_b8, 2);
                    *(arg1 + 0x10) = var_88;
                    zmm0_2 = var_98;
                }
            }
        }
        *arg1 = zmm0_2;
    }
    return core::ptr::drop_in_place$LT$ruff_python_formatter..comments..Comments$GT$::he9abffb240eba4a8(&var_80);
}
