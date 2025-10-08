
  fn uu_ls::colors::StyleManager::is_current_style::haceb8fa00830989f(arg1: *mut c_void, arg2: *mut c_void) -> i64

{
    if *arg1.byte_offset(8) != 2
    {
        /* tailcall */
        return
            _$LT$lscolors..style..Style$u20$as$u20$core..cmp..PartialEq$GT$::eq::hba09d25475cb0585(
            arg1.byte_offset(8), arg2);
    }
    
    0
}
