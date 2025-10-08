
  fn uu_test::parser::Parser::peek::h996512ad2aa27c9f(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    core::option::Option$LT$T$GT$::get_or_insert_with::h7c4ea0268d7a4400(arg2.byte_offset(0x18));
    let mut var_28: i64;
    
    if !(0 + -(*arg2.byte_offset(0x18)))
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h8f79c611ccbacb59(&var_28, *arg2.byte_offset(0x20), *arg2.byte_offset(0x28));
    }
    else
    {
        var_28 = -0x8000000000000000;
    }
    
    uu_test::parser::Symbol::new::habde89fb8e284063(arg1, &var_28)
}
