
  fn uu_sort::open::h7400e7736be99f1e(arg1: *mut i64, arg2: i64) -> *mut i64

{
    let mut rax: i64;
    let mut rdx_1: u64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::he8fe143150012059(arg2);
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb9af56cf5f49fd41(rax, rdx_1, "-invalid suffix in -- argument i…", 1) == 0
    {
        let mut var_90: i32;
        std::fs::File::open::h9456c693d56c0e76(&var_90, rax);
        
        if var_90 == 0
        {
            let var_8c: i32;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hea03e04285d5c204(var_8c);
            arg1[2] = &data_5fff40;
            *arg1 = 0;
        }
        else
        {
            let var_88: i64;
            let var_80_1: i64 = var_88;
            let mut var_78: i128;
            std::sys::pal::unix::os::split_paths::bytes_to_path::h0549813f23b52483(&var_78, rax, 
                rdx_1);
            let var_68: i64;
            let var_40_1: i64 = var_68;
            let var_50_1: i128 = var_78;
            let var_58_1: i64 = var_88;
            let mut var_60: i8 = 2;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hebf92c849c48588d(&var_60);
            arg1[2] = &data_5ff678;
            *arg1 = 1;
        }
    }
    else
    {
        std::io::stdio::stdin::h7215cc131abb55d8();
        arg1[1] = alloc::boxed::Box$LT$T$GT$::new::hc855b7433b77958f(
            &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5);
        arg1[2] = &data_5fff98;
        *arg1 = 0;
    }
    
    arg1
}
