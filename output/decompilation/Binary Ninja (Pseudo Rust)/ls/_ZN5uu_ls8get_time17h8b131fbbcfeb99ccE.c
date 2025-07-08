
  fn uu_ls::get_time::h8b131fbbcfeb99cc(arg1: *mut i32, arg2: *mut i64, arg3: *mut c_void) -> *mut *mut c_void

{
    let mut result: *mut *mut c_void;
    let mut rdx: i32;
    result = uu_ls::get_system_time::hcb9369b24593e222(arg2, arg3);
    
    if rdx != 0x3b9aca00
    {
        /* tailcall */
        return _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h8f61e1a3c0275b73(arg1);
    }
    
    *arg1 = 0;
    result
}
