
  fn uu_sort::get_rlimit::h790b745a9692d371(arg1: *mut *mut i128) -> *mut *mut i128

{
    let mut rlimits: i128 = {0};
    let mut rax_1: *mut i128;
    let mut rcx: *mut *mut c_void;
    
    if getrlimit(RLIMIT_NOFILE, &rlimits) == 0
    {
        rcx = rlimits;
        rax_1 = nullptr;
    }
    else
    {
        let mut var_30: ();
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1d4334c76f34ab0e(&var_30, 
            "Failed to fetch rlimit0.0.28Disp…", 0x16);
        let var_18_1: i32 = 2;
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hab49dd9f0ca1dd34(&var_30);
        rcx = &data_5ffc90;
    }
    
    arg1[1] = rcx;
    *arg1 = rax_1;
    arg1
}
