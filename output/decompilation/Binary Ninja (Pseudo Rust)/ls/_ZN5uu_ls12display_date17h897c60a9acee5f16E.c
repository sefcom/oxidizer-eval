
  fn uu_ls::display_date::h897c60a9acee5f16(arg1: *mut i128, arg2: *mut i32, arg3: i8, arg4: *mut c_void) -> i64

{
    let mut var_20: i32;
    uu_ls::get_time::h9a507b9721b0487b(&var_20, arg2, arg3);
    
    if var_20 == 0
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h24216b49f21f2baf(arg1, &data_4d4206[0x12], 3);
    }
    
    uu_ls::TimeStyler::format::hbbf46b74a2bc22e6(arg1, arg4.byte_offset(0x28), &var_20)
}
