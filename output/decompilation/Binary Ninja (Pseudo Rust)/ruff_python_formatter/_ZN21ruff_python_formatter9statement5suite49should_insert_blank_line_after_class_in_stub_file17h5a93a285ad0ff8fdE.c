
  fn ruff_python_formatter::statement::suite::should_insert_blank_line_after_class_in_stub_file::h5a93a285ad0ff8fd(arg1: i64, arg2: *mut c_void, arg3: i64, arg4: *mut c_void, arg5: *mut c_void) -> *mut c_void

{
    let mut var_50: i64 = arg1;
    let mut result: *mut c_void = nullptr;
    
    if arg3 != 0x5e && *arg5.byte_offset(0x33) == 1
    {
        if arg1 != 3
        {
            let mut rax_2: i64;
            let mut rdx_2: i64;
            rax_2 = ruff_python_ast::node::_$LT$impl$u20$ruff_python_ast..generated..AnyNodeRef$GT$::last_child_in_body::h106de3f3c845d12e(&var_50);
            let mut var_40: i64 = rax_2;
            let var_38_1: i64 = rdx_2;
            let var_28_1: i8 = 0;
            let var_30_1: *mut c_void = arg5.byte_offset(0x10);
            return _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h0e6737ab96195750(
                _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h639535931336aded(&var_40), 
                1);
        }
        
        let rbx_1: *mut c_void = *arg5.byte_offset(0x10);
        
        if ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(
            *arg2.byte_offset(0x20), *arg2.byte_offset(0x28), rbx_1) == 0
        {
            result =
                ruff_python_formatter::comments::Comments::has_trailing_own_line::h8c381b2842dc94aa(
                rbx_1, 3) ^ 1;
        }
        else
        {
            let r14_2: i64 = *arg2.byte_offset(0x10);
            
            if arg3 != 3
            {
                result = 1;
                
                if r14_2 == 0
                {
                    result = arg3 == 2;
                }
            }
            else
            {
                result = 1;
                
                if ruff_python_formatter::statement::suite::contains_only_an_ellipsis::hc074c7c945b43356(*arg4.byte_offset(0x20), *arg4.byte_offset(0x28), rbx_1) != 0
                    && (r14_2 | *arg4.byte_offset(0x10)) == 0
                {
                    result = arg3 == 2;
                }
            }
        }
    }
    
    result
}
