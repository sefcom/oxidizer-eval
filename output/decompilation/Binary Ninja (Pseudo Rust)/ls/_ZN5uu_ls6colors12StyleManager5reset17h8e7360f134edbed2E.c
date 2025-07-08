
  fn uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(arg1: *mut i64, arg2: *mut c_void, arg3: i8) -> *mut i64

{
    if *arg2.byte_offset(8) != 2 || arg3 != 0
    {
        *arg2.byte_offset(0x1d) = 1;
        *arg2.byte_offset(8) = 2;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h09d6369a280ff05a(arg1);
        return arg1;
    }
    
    *arg1 = 0;
    arg1[1] = 1;
    arg1[2] = 0;
    arg1
}
