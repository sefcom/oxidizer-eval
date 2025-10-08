
  fn uu_df::table::RowFormatter::scaled_inodes::h53c80a3954ed717b(arg1: *mut i128, arg2: *mut c_void, arg3: i64, arg4: i64) -> i64

{
    let var_10: i64 = arg4;
    let mut var_18: i64 = arg3;
    let rax: i8 = *arg2.byte_offset(0x54);
    
    if rax != 2
    {
        /* tailcall */
        return uu_df::blocks::to_magnitude_and_suffix::hab68afb684dfcc4e(arg1, arg3, arg4, rax);
    }
    
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hd1726df42c6324b3(arg1, 
        &var_18)
}
