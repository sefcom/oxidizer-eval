
  fn uu_join::Line::get_field::h7dd14bed39768627(arg1: *mut c_void, arg2: i64) -> i64

{
    if *arg1.byte_offset(0x10) <= arg2
    {
        return 0;
    }
    
    let rax: i64;
    let var_8: i64 = rax;
    let rcx: *mut i64 = *arg1.byte_offset(8);
    _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h5826f653046d1325(rcx[arg2 * 2], rcx[arg2 * 2 + 1], *arg1.byte_offset(0x20), *arg1.byte_offset(0x28))
}
