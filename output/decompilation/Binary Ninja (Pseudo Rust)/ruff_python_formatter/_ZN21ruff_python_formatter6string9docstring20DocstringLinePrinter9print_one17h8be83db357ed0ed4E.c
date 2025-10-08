
  fn ruff_python_formatter::string::docstring::DocstringLinePrinter::print_one::h8be83db357ed0ed4(arg1: *mut i32, arg2: *mut c_void, arg3: *mut c_void) -> u64

{
    let mut result: u64;
    let mut rdx: i64;
    result = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc1c5622f93930984(
        *arg3.byte_offset(8), *arg3.byte_offset(0x10));
    let mut var_a0: i16;
    
    if rdx != 0
    {
        let rax: *mut i64 = *arg2.byte_offset(0x88);
        *rax;
        rax[1];
        let var_9c: i128;
        let var_8c: i32;
        let mut var_78: i32;
        let mut rax_6: i32;
        let mut r15_2: *mut i64;
        
        if *(ruff_formatter::formatter::Formatter$LT$Context$GT$::options::he55f9fce45a2dc4a()
            + 0xa) == 0
        {
            let mut var_60: ();
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_60, result, rdx);
            var_a0 = result;
            let var_98_2: i64 = result + rdx;
            let var_90_2: i8 = 0;
            let rax_14: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
                _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::hc76215088e4558d7(&var_a0), 
                1);
            let mut var_48: i32;
            ruff_python_formatter::string::docstring::Indentation::trim_start::ha15d1eb73502fc34(
                &var_48, &var_60, arg2.byte_offset(0x70));
            let mut r15_4: i32;
            
            if rax_14 == 0
            {
                r15_4 = var_48;
            }
            
            if rax_14 == 0 && r15_4 != 5
            {
                rax_6 = ruff_python_formatter::string::docstring::Indentation::text_len::h16847b427cd10733(arg2.byte_offset(0x70));
                
                if r15_4 != 3
                {
                    goto 'label_723c9a;
                }
                
                goto 'label_723dc6;
            }
            
            ruff_python_formatter::string::docstring::Indentation::text_len::h16847b427cd10733(arg2.
                byte_offset(0x70));
            'label_723dc6:
            ruff_python_formatter::string::docstring::Indentation::from_str::hcb1a24e2ab546984(
                &var_a0, result, rdx);
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h7a2733b42d32c749(&var_a0, 
                ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(
                    &var_a0) - ruff_python_formatter::string::docstring::Indentation::columns::h9e266497152669ca(arg2.byte_offset(0x70)));
            let mut rax_17: i64;
            let mut rdx_6: i64;
            rax_17 = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hd401112d4c765288(
                result, rdx);
            _$LT$alloc..string..String$u20$as$u20$core..ops..arith..Add$LT$$RF$str$GT$$GT$::add::hd8bff7acee645ba5(&var_78, &var_a0, rax_17, rdx_6);
            r15_2 = rax;
            let var_70: i64;
            let var_68: u64;
            _$LT$ruff_formatter..builders..Text$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hbf64ef42de3b23a6(&var_a0, var_70, var_68, *r15_2, r15_2[1]);
            let rax_18: i32 = var_a0;
            
            if rax_18 != 4
            {
                arg1[5] = var_8c;
                *arg1.byte_offset(4) = var_9c;
                *arg1 = rax_18;
                return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(
                    &var_78);
            }
            
            result =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_78);
            
            if *arg3.byte_offset(0x1c) == 0
            {
                'label_723ec1:
                var_a0 = 0x201;
                result = (*(r15_2[1] + 0x18))(*r15_2, &var_a0);
                *arg1 = 4;
            }
            else
            {
                *arg1 = 4;
            }
        }
        else
        {
            var_a0 = result;
            let var_98_1: i64 = result + rdx;
            let var_90_1: i8 = 0;
            
            if _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
                _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h89de4a36616f184c(&var_a0), 
                1) != 0
            {
                goto 'label_723dc6;
            }
            
            rax_6 =
                ruff_python_formatter::string::docstring::Indentation::text_len::h16847b427cd10733(
                arg2.byte_offset(0x70));
            'label_723c9a:
            
            if *arg2.byte_offset(0x94) != 0
            {
                let rbx_1: i32 = *arg3.byte_offset(0x18);
                core::result::Result$LT$T$C$E$GT$::unwrap::h1e98140e442e0df8(rdx >> 0x20 != 0);
                let temp0_1: i32 = rdx;
                let r12_2: i32 = rdx + rbx_1;
                
                if temp0_1 + rbx_1 < temp0_1
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                    /* no return */
                }
                
                let rbx_2: i32 = rbx_1 + rax_6;
                
                if rbx_2 > r12_2
                {
                    core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
                    /* no return */
                }
                
                var_78 = rbx_2;
                let var_74_1: i32 = r12_2;
                r15_2 = rax;
                _$LT$ruff_formatter..builders..SourceTextSliceBuilder$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hc7c589b7f57e065d(&var_a0, &var_78, r15_2);
                result = var_a0;
                
                if result == 4
                {
                    goto 'label_723eba;
                }
                
                goto 'label_723d0f;
            }
            
            let rbx_6: u64 = rax_6;
            let mut rax_19: *mut c_void;
            let mut rdx_10: u64;
            rax_19 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbx_6, result, rdx);
            
            if rax_19 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(result, rdx, rbx_6, rdx);
                /* no return */
            }
            
            r15_2 = rax;
            _$LT$ruff_formatter..builders..Text$u20$as$u20$ruff_formatter..Format$LT$Context$GT$$GT$::fmt::hbf64ef42de3b23a6(&var_a0, rax_19, rdx_10, *r15_2, r15_2[1]);
            result = var_a0;
            
            if result != 4
            {
                'label_723d0f:
                arg1[5] = var_8c;
                *arg1.byte_offset(4) = var_9c;
                *arg1 = result;
            }
            else
            {
                'label_723eba:
                
                if *arg3.byte_offset(0x1c) == 0
                {
                    goto 'label_723ec1;
                }
                
                *arg1 = 4;
            }
        }
    }
    else if *arg3.byte_offset(0x1c) != 0
    {
        *arg1 = 4;
    }
    else
    {
        let rax_9: *mut i64 = *arg2.byte_offset(0x88);
        var_a0 = 0x301;
        result = (*(rax_9[1] + 0x18))(*rax_9, &var_a0);
        *arg1 = 4;
    }
    result
}
