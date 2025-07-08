
  int64_t* uu_test::parser::Parser::peek::hd4e8be8df06376c2(int64_t* arg1, void* arg2)

{
    core::option::Option$LT$T$GT$::get_or_insert_with::h03d1de6add56340d(arg2 + 0x18, arg2 + 0x30);
    int64_t var_38;
    
    if (*(arg2 + 0x18) != -0x8000000000000000)
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha4fac1976132f377(&var_38, arg2 + 0x18);
    else
        var_38 = -0x8000000000000000;
    
    return uu_test::parser::Symbol::new::ha5314f5fa26867b7(arg1, &var_38);
}
