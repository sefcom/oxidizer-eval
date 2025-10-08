
  fn ruff_python_formatter::comments::placement::handle_pattern_match_class_comment::hf36f0e74ad330240(arg1: *mut i64, arg2: *mut i128, arg3: *mut c_void) -> i64

{
    let rdx: i32 = _$LT$ruff_python_ast..generated..Expr$u20$as$u20$ruff_text_size..traits..Ranged$GT$::range::h0f7a5d5c6b46f102(*arg3.byte_offset(0x40));
    let result: i32 = arg2[4];
    
    if rdx < result
    {
        let rcx_1: i32 = *arg2.byte_offset(0x44);
        
        if rcx_1 < *arg3.byte_offset(0x30)
        {
            let rdx_1: i8 = *arg2.byte_offset(0x48);
            *arg1.byte_offset(8) = *arg2;
            arg1[3] = result;
            *arg1.byte_offset(0x1c) = rcx_1;
            arg1[4] = 0;
            *arg1.byte_offset(0x21) = rdx_1;
            *arg1 = 0x60;
            return result;
        }
    }
    
    *arg1.byte_offset(0x40) = arg2[4];
    let zmm0: i128 = *arg2;
    let zmm1: i128 = arg2[1];
    let zmm2: i128 = arg2[2];
    *arg1.byte_offset(0x30) = arg2[3];
    *arg1.byte_offset(0x20) = zmm2;
    *arg1.byte_offset(0x10) = zmm1;
    *arg1 = zmm0;
    result
}
