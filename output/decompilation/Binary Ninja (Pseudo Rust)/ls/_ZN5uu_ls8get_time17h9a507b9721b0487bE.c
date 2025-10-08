
  fn uu_ls::get_time::h9a507b9721b0487b(arg1: *mut i32, arg2: *mut i32, arg3: i8) -> *mut *mut [i8; 0xa5]

{
    let mut result: *mut *mut [i8; 0xa5];
    let mut rdx: i32;
    result = uu_ls::get_system_time::haabab7985650bb67(arg2, arg3);
    
    if rdx != 0x3b9aca00
    {
        /* tailcall */
        return _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h7e660df65a8958b4(arg1, result);
    }
    
    *arg1 = 0;
    result
}
