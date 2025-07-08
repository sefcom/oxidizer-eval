
  fn uu_tail::follow::watch::Observer::add_stdin::h52ffe74598bd409c(arg1: *mut c_void, arg2: i64, arg3: u64, arg4: i64, arg5: *mut i64, arg6: i8) -> *mut i128

{
    let rax: i8 = *arg1.byte_offset(0x8e);
    
    if rax == 2 || (rax & 1) != 0
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(arg4, arg5);
        return nullptr;
    }
    
    let mut var_48: i128;
    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&var_48, 
        "/dev/stdinToo many open files:  …", 0xa);
    let var_38: size_t;
    let var_58_1: size_t = var_38;
    let mut var_68: i128 = var_48;
    let mut result: *mut i128;
    let mut rdx_1: *mut i64;
    result = uu_tail::follow::watch::Observer::add_path::h2539e8b9bde14502(arg1, *var_68[8], 
        var_38, arg2, arg3, arg4, arg5, arg6);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hd68403fe0abd735b(&var_68);
    result
}
