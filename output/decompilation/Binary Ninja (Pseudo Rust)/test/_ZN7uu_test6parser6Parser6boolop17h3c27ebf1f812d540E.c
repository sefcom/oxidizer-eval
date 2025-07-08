
  fn uu_test::parser::Parser::boolop::h3c27ebf1f812d540(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_30: i128;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_30, 
        "-a-o===!=-eq-ge-gt-le-lt-ne-ef-n…", 2);
    let var_20: i64;
    let var_40: i64 = var_20;
    let zmm0: i128 = var_30;
    let mut var_58: i64 = 2;
    
    if _$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::h838c2774cc7a2a63(
        arg3, &var_58) == 0
    {
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_58);
        uu_test::parser::Parser::expr::h14b244d6254724ab(&var_58, arg2);
    }
    else
    {
        core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(&var_58);
        uu_test::parser::Parser::term::h385cc0ae73b5bef0(&var_58, arg2);
    }
    
    if var_58 != 7
    {
        let zmm0_1: i128 = var_58;
        *arg1.byte_offset(0x10) = zmm0;
        *arg1 = zmm0_1;
        return core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h2e64046051177754(arg3);
    }
    
    let var_38_1: i64 = arg3[4];
    let var_50: i128 = *arg3.byte_offset(0x10);
    var_58 = *arg3;
    let result: i64 = alloc::vec::Vec$LT$T$C$A$GT$::push::h254fc79c897546ac(arg2, &var_58);
    *arg1 = 7;
    result
}
