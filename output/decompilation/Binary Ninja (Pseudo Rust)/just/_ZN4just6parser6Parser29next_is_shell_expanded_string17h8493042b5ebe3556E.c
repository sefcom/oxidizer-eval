
  fn just::parser::Parser::next_is_shell_expanded_string::h8493042b5ebe3556(arg1: *mut c_void) -> *mut c_void

{
    let rax: i64 = *arg1.byte_offset(0x18);
    let rcx: i64 = *arg1.byte_offset(0x20);
    let rdx: i64 = *arg1.byte_offset(0x58);
    let mut var_28: i64 = rax;
    let var_20: i64 = rax + rcx * 0x48;
    let var_18: i64 = rdx;
    let mut var_10: i8 = 0;
    let rax_1: *mut c_void = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h20ee6d2d274d07c4(&var_28, &var_10);
    
    if rax_1 != 0 && just::parser::Parser::next_is_shell_expanded_string::_$u7b$$u7b$closure$u7d$$u7d$::hf8f95d614f703e87(rax_1) != 0
    {
        let mut result: *mut c_void = _$LT$core..iter..adapters..skip..Skip$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::h20ee6d2d274d07c4(&var_28, &var_10);
        
        if result != 0
        {
            result = *result.byte_offset(0x40) == 0x21;
            return result;
        }
    }
    
    0
}
