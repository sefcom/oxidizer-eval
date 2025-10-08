
  fn uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let rax: i64 = *arg2.byte_offset(0x18);
    *arg2.byte_offset(0x18) = -0x7fffffffffffffff;
    let mut var_20: i64;
    
    if rax != -0x7fffffffffffffff
    {
        let var_18_1: i128 = *arg2.byte_offset(0x20);
        var_20 = rax;
    }
    else
    {
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4dcbdc82a201ae23(&var_20, arg2.byte_offset(0x30));
    }
    
    uu_test::parser::Symbol::new::habde89fb8e284063(arg1, &var_20)
}
