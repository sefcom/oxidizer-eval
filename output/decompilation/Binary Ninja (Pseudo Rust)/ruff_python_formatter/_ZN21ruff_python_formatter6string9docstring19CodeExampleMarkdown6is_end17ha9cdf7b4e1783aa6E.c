
  fn ruff_python_formatter::string::docstring::CodeExampleMarkdown::is_end::ha9cdf7b4e1783aa6(arg1: *mut c_void, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_38: *mut c_void;
    ruff_python_formatter::string::docstring::indent_with_suffix::h12389a359b6a5a71(&var_38, arg2, 
        arg3);
    let mut var_20: i64;
    let rbx: i64 = var_20;
    let var_28: *mut c_void;
    let rax: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(
        var_28, rbx, "```~~~tickstilds/home/34r7hm4n/.…", 3);
    let mut rax_1: i8;
    
    if rax == 0
    {
        rax_1 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf48f8dbcb851e47f(var_28, 
            rbx, "~~~tickstilds/home/34r7hm4n/.car…", 3);
    }
    
    if rax != 0 || rax_1 != 0
    {
        var_38 = var_28;
        let var_30_1: *mut c_void = var_28.byte_offset(rbx);
        var_20 = 0;
        let var_28_1: *mut c_void = arg1;
        let rax_3: i64 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h4e671f5b6eecc8f3(&var_38);
        
        if rax_3 >= *arg1.byte_offset(0x30)
        {
            let mut rax_5: *mut c_void;
            let mut rdx_1: *mut c_void;
            rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rax_3, var_28, rbx);
            
            if rax_5 == 0
            {
                core::str::slice_error_fail::h1a2885084e28d077(var_28, rbx, rax_3, rbx);
                /* no return */
            }
            
            var_38 = rax_5;
            let var_30_2: *mut c_void = rdx_1.byte_offset(rax_5);
            /* tailcall */
            return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(core::iter::traits::iterator::Iterator::try_fold::hdeb9c8256045f284(&var_38), 0);
        }
    }
    
    0
}
