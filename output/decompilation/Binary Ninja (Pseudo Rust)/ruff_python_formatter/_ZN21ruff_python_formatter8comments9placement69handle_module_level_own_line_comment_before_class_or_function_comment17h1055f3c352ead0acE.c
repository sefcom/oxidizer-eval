
  fn ruff_python_formatter::comments::placement::handle_module_level_own_line_comment_before_class_or_function_comment::h1055f3c352ead0ac(arg1: *mut i64, arg2: *mut i128, arg3: *mut i8, arg4: i64) -> i512

{
    let rbp: i8 = *arg2.byte_offset(0x48);
    let mut result: i128;
    
    if rbp == 0
    {
        'label_702c76:
        *arg1.byte_offset(0x40) = arg2[4];
        result = *arg2;
        let zmm1: i128 = arg2[1];
        let zmm2: i128 = arg2[2];
        *arg1.byte_offset(0x30) = arg2[3];
        *arg1.byte_offset(0x20) = zmm2;
        *arg1.byte_offset(0x10) = zmm1;
        *arg1 = result;
    }
    else
    {
        let r14_1: i64 = arg2[1];
        let rax_1: i64 = arg2[2];
        
        if (rax_1 == 0x5e | r14_1 == 0x5e) != 0
        {
            goto 'label_702c76;
        }
        
        let r9_1: i64 = *arg2.byte_offset(0x18);
        let r8_1: i64 = *arg2.byte_offset(0x28);
        let mut var_40: i64 = rax_1;
        let var_38_1: i64 = r8_1;
        
        if (rax_1 & 0xfffffffe) != 2
        {
            goto 'label_702c76;
        }
        
        let rbx_1: i32 = *arg2.byte_offset(0x44);
        let rax_3: i32 = _$LT$ruff_python_ast..generated..AnyNodeRef$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h63c57de0951e4c55(&var_40);
        
        if rbx_1 > rax_3
        {
            core::panicking::panic::h85d6dd562679980c("assertion failed: start.raw <= e…");
            /* no return */
        }
        
        let mut rax_4: u64;
        let mut rdx: i64;
        rax_4 = ruff_text_size::range::_$LT$impl$u20$core..convert..From$LT$ruff_text_size..range..TextRange$GT$$u20$for$u20$core..ops..range..Range$LT$T$GT$$GT$::from::h5565193b43bb472c(rbx_1, rax_3);
        let mut rax_5: *mut c_void;
        let mut rdx_2: i64;
        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(rax_4, rdx, arg3, arg4);
        
        if rax_5 == 0
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg3, arg4, rax_4, rdx);
            /* no return */
        }
        
        let mut rax_6: i32;
        rax_6 = ruff_python_formatter::comments::placement::max_empty_lines::h787bd2fd7fcb014f(
            rax_5, rdx_2);
        let rcx_2: i32 = arg2[4];
        
        if rax_6 == 0
        {
            result = var_40;
            *arg1.byte_offset(8) = result;
            arg1[3] = rcx_2;
            *arg1.byte_offset(0x1c) = rbx_1;
            arg1[4] = 0;
            *arg1.byte_offset(0x21) = rbp;
            *arg1 = 0x5e;
        }
        else
        {
            arg1[1] = r14_1;
            arg1[2] = r9_1;
            arg1[3] = rcx_2;
            *arg1.byte_offset(0x1c) = rbx_1;
            arg1[4] = 0;
            *arg1.byte_offset(0x21) = rbp;
            *arg1 = 0x5f;
        }
    }
    
    result
}
