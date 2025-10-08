
  fn forc_crypto::args::read_content_filepath_or_stdin::h735eec317a7ae007(arg1: *mut i64, arg2: *mut i64) -> *mut i64

{
    let mut var_40: i64;
    forc_crypto::args::checked_read_file::h22b9faaf715a9a45(&var_40, arg2);
    
    if !(0 + -(var_40))
    {
        let var_30: i64;
        arg1[2] = var_30;
        *arg1 = var_40;
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        let mut var_48: *mut c_void = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
        let mut rax: *mut i32;
        let mut rdx_1: i8;
        rax = std::io::stdio::Stdin::lock::h8b2bf765bae79e2f(&var_48);
        let mut var_28: i64;
        forc_crypto::args::checked_read_stdin::hc53103be1c9a90d0(&var_28, arg2, rax, rdx_1 & 1);
        
        if var_28 != -0x8000000000000000
        {
            let var_18: i64;
            arg1[2] = var_18;
            *arg1 = var_28;
        }
        else
        {
            forc_crypto::args::read_as_binary::h6ffe604cc99fdccc(arg1, arg2);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hcdf0fe8cbfd4dfb2(arg2);
    arg1
}
