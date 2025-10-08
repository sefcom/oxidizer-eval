
  fn uu_test::parser::Parser::boolop::h6f7fceace89c923f(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64) -> i64

{
    let mut var_40: i128;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h8a1d310fc48c8e88(&var_40, "-a-o===!=<>-eq-ge-gt-le-lt-ne-ef…", 2);
    let var_30: i64;
    let var_50: i64 = var_30;
    let zmm0: i128 = var_40;
    let mut var_68: i64 = 2;
    let rax_1: i8 =
        _$LT$uu_test..parser..Symbol$u20$as$u20$core..cmp..PartialEq$GT$::eq::ha9c8e6b311d8821d(
        arg3, &var_68);
    core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(&var_68);
    
    if rax_1 == 0
    {
        uu_test::parser::Parser::expr::hea95ff6631384a05(&var_68, arg2);
    }
    else
    {
        uu_test::parser::Parser::term::h32e18b63e31ea2d0(&var_68, arg2);
    }
    
    if var_68 == 7
    {
        let result: i64 = alloc::vec::Vec$LT$T$C$A$GT$::push::h51b67e1356e9af09(arg2, arg3);
        *arg1 = 7;
        return result;
    }
    
    let zmm0_1: i128 = var_68;
    *arg1.byte_offset(0x10) = zmm0;
    *arg1 = zmm0_1;
    /* tailcall */
    core::ptr::drop_in_place$LT$uu_test..parser..Symbol$GT$::h8755b663628e9a4a(arg3)
}
