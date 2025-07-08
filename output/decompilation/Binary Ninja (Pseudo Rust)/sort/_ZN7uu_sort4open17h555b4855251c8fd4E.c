
  fn uu_sort::open::h555b4855251c8fd4(arg1: *mut i64, arg2: *mut c_void) -> *mut c_void

{
    let mut rax: i64;
    let mut rdx: u64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h969c1f4f28c13ced(arg2);
    let mut result: *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h5782e5335acfa2e9(rax, rdx, "-", 1) == 0
    {
        let mut var_90: i32;
        std::fs::File::open::h2552637d7afe39d9(&var_90, rax);
        
        if var_90 == 0
        {
            let var_8c: i32;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hcfd57132bb0abfed(var_8c);
            result = &data_5fbef8;
            arg1[2] = result;
            *arg1 = 0;
        }
        else
        {
            let var_88: i64;
            let var_80_1: i64 = var_88;
            let mut var_78: i128;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_78, rax, 
                rdx);
            let var_68: i64;
            let var_40_1: i64 = var_68;
            let var_50_1: i128 = var_78;
            let var_58_1: i64 = var_88;
            let mut var_60: i8 = 2;
            result = alloc::boxed::Box$LT$T$GT$::new::h5e2c0ba71893b6a1(&var_60);
            arg1[1] = result;
            arg1[2] = &data_5fbf88;
            *arg1 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7f1df9b4eebae042(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        result = &data_5fbff8;
        arg1[2] = result;
        *arg1 = 0;
    }
    
    result
}
