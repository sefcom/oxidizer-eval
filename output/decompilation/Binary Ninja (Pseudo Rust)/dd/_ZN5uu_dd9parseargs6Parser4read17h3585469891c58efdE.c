
  fn uu_dd::parseargs::Parser::read::h3585469891c58efd(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64) -> i64

{
    let mut var_50: i64 = arg3;
    let var_48: i64 = (arg4 << 4) + arg3;
    
    for let mut i: *mut i64 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h12a8649b6eb511d9(&var_50); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h12a8649b6eb511d9(&var_50)
    {
        let mut var_40: i32;
        uu_dd::parseargs::Parser::parse_operand::h4dfdd7ca9dce5d89(&var_40, arg2, *i, i[1]);
        
        if var_40 != 0xe
        {
            let zmm0: i128 = var_40;
            let var_30: i128;
            *arg1.byte_offset(0x18) = var_30;
            *arg1.byte_offset(8) = zmm0;
            *arg1 = 2;
            /* tailcall */
            return core::ptr::drop_in_place$LT$uu_dd..parseargs..Parser$GT$::h57b892102145e56e(
                arg2);
        }
    }
    
    /* tailcall */
    memcpy(arg1, arg2, 0xd8)
}
