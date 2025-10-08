
  int64_t uu_test::parser::Parser::next_token::h4b6300a6fb2b38c8(int64_t* arg1, void* arg2)

{
    int64_t rax = *(arg2 + 0x18);
    *(arg2 + 0x18) = -0x7fffffffffffffff;
    int64_t var_20;
    
    if (rax != -0x7fffffffffffffff)
    {
        int128_t var_18_1 = *(arg2 + 0x20);
        var_20 = rax;
    }
    else
        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4dcbdc82a201ae23(&var_20, arg2 + 0x30);
    
    return uu_test::parser::Symbol::new::habde89fb8e284063(arg1, &var_20);
}
