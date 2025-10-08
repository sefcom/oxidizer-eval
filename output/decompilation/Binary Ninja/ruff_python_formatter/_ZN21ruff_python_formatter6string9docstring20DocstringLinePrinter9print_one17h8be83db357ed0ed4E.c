
  uint64_t ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one::h8be83db357ed0ed4(int32_t* arg1, void* arg2, void* arg3)

{
    uint64_t result;
    int64_t rdx;
    result = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc1c5622f93930984(*(arg3 + 8), 
        *(arg3 + 0x10));
    int16_t var_a0;
    
    if (rdx)
    {
        int64_t* rax = *(arg2 + 0x88);
        *rax;
        rax[1];
        int128_t var_9c;
        int32_t var_8c;
        int32_t var_78;
        int32_t rax_6;
        int64_t* r15_2;
        
        if (!*(ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a()
            + 0xa))
        {
            void var_60;
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_60, result, rdx);
            var_a0 = result;
            int64_t var_98_2 = result + rdx;
            char var_90_2 = 0;
            char rax_14 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
                _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hc76215088e4558d7(&var_a0), 
                1);
            int32_t var_48;
            ruff_python_formatter::string::docstring::Indentation::trim_start::ha15d1eb73502fc34(
                &var_48, &var_60, arg2 + 0x70);
            int32_t r15_4;
            
            if (!rax_14)
                r15_4 = var_48;
            
            if (!rax_14 && r15_4 != 5)
            {
                rax_6 = ruff_python_formatter::string::docstring::Indentation::text_len::h16847b427cd10733(arg2 + 0x70);
                
                if (r15_4 != 3)
                    goto label_723c9a;
                
                goto label_723dc6;
            }
            
            ruff_python_formatter::string::docstring::Indentation::text_len::h16847b427cd10733(arg2
                + 0x70);
            label_723dc6:
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_a0, result, rdx);
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h7a2733b42d32c749(&var_a0, 
                ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(
                    &var_a0) - ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(arg2 + 0x70));
            int64_t rax_17;
            int64_t rdx_6;
            rax_17 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(
                result, rdx);
            _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_78, &var_a0, rax_17, rdx_6);
            r15_2 = rax;
            int64_t var_70;
            uint64_t var_68;
            _$LT$ruff_formatter..builders..Text$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hbf64ef42de3b23a6(&var_a0, var_70, var_68, *r15_2, r15_2[1]);
            int32_t rax_18 = var_a0;
            
            if (rax_18 != 4)
            {
                arg1[5] = var_8c;
                *(arg1 + 4) = var_9c;
                *arg1 = rax_18;
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(
                    &var_78);
            }
            
            result =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_78);
            
            if (!*(arg3 + 0x1c))
            {
                label_723ec1:
                var_a0 = 0x201;
                result = (*(r15_2[1] + 0x18))(*r15_2, &var_a0);
                *arg1 = 4;
            }
            else
                *arg1 = 4;
        }
        else
        {
            var_a0 = result;
            int64_t var_98_1 = result + rdx;
            char var_90_1 = 0;
            
            if (_$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
                    _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h89de4a36616f184c(&var_a0), 
                    1))
                goto label_723dc6;
            
            rax_6 =
                ruff_python_formatter::string::docstring::Indentation::text_len::h16847b427cd10733(
                arg2 + 0x70);
            label_723c9a:
            
            if (*(arg2 + 0x94))
            {
                int32_t rbx_1 = *(arg3 + 0x18);
                core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(rdx >> 0x20);
                int32_t temp0_1 = rdx;
                int32_t r12_2 = rdx + rbx_1;
                
                if (temp0_1 + rbx_1 < temp0_1)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                    /* no return */
                }
                
                int32_t rbx_2 = rbx_1 + rax_6;
                
                if (rbx_2 > r12_2)
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                    /* no return */
                }
                
                var_78 = rbx_2;
                int32_t var_74_1 = r12_2;
                r15_2 = rax;
                _$LT$ruff_formatter..builders..SourceTextSliceBuilder$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hc7c589b7f57e065d(&var_a0, &var_78, r15_2);
                result = var_a0;
                
                if (result == 4)
                    goto label_723eba;
                
                goto label_723d0f;
            }
            
            uint64_t rbx_6 = rax_6;
            void* rax_19;
            uint64_t rdx_10;
            rax_19 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_6, result, rdx);
            
            if (!rax_19)
            {
                core::str::slice_error_fail::h1a2885084e28d077(result, rdx, rbx_6, rdx);
                /* no return */
            }
            
            r15_2 = rax;
            _$LT$ruff_formatter..builders..Text$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hbf64ef42de3b23a6(&var_a0, rax_19, rdx_10, *r15_2, r15_2[1]);
            result = var_a0;
            
            if (result != 4)
            {
                label_723d0f:
                arg1[5] = var_8c;
                *(arg1 + 4) = var_9c;
                *arg1 = result;
            }
            else
            {
                label_723eba:
                
                if (!*(arg3 + 0x1c))
                    goto label_723ec1;
                
                *arg1 = 4;
            }
        }
    }
    else if (*(arg3 + 0x1c))
        *arg1 = 4;
    else
    {
        int64_t* rax_9 = *(arg2 + 0x88);
        var_a0 = 0x301;
        result = (*(rax_9[1] + 0x18))(*rax_9, &var_a0);
        *arg1 = 4;
    }
    return result;
}
