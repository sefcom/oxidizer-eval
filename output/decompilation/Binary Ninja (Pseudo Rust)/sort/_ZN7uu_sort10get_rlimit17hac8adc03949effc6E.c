
  fn uu_sort::get_rlimit::hac8adc03949effc6(arg1: *mut u64) -> *mut u64

{
    let mut rlimits: i128 = {0};
    let mut rax_1: u64;
    let mut rcx: *mut *mut c_void;
    
    if getrlimit(RLIMIT_NOFILE, &rlimits) == 0
    {
        rcx = rlimits;
        rax_1 = 0;
    }
    else
    {
        let mut var_30: ();
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h1bb0423170e7fa7c(&var_30, "Failed to fetch rlimit(uutils co…", 0x16);
        let var_18_1: i32 = 2;
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::h36d410590b50ab7f(&var_30);
        rcx = &data_58d250;
    }
    
    arg1[1] = rcx;
    *arg1 = rax_1;
    arg1
}
