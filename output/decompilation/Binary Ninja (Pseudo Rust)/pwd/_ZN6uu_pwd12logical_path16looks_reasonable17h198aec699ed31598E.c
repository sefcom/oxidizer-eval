
  fn uu_pwd::logical_path::looks_reasonable::h198aec699ed31598(arg1: i64, arg2: size_t) -> u64

{
    let mut var_2e0: i64;
    std::path::Path::components::h4f3217acf0fc8653(&var_2e0, arg1, arg2);
    let mut var_2d0: i8;
    let var_2a6: i8;
    let mut rbx_1: i32;
    
    if var_2a6 != 0 || var_2d0 - 5 >= 2
    {
        let mut var_180: ();
        std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_180, arg1, arg2);
        let var_178: i64;
        let var_170: i64;
        _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h5315a6138ce3f3a6(&var_2d0, var_178, var_170);
        var_2e0 = 0;
        let var_2d8_1: i64 = var_170;
        let var_2a8_1: i16 = 1;
        let rax_3: i8 = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h70e2399de7263019(core::iter::traits::iterator::Iterator::try_fold::h97fbd32b5f6f333f(
            &var_2e0));
        core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h85c5af602e16d02e(&var_180);
        
        if rax_3 == 0
        {
            let mut var_d0: ();
            std::fs::metadata::ha33fb8332834a0bc(&var_d0, arg1);
            std::fs::metadata::he569619eb99e21fb(&var_180, "...0.0.28Display the full filena…");
            memcpy(&var_2e0, &var_d0, 0xb0);
            let mut var_230: i64;
            memcpy(&var_230, &var_180, 0xb0);
            rbx_1 = 0;
            let var_2c0: i64;
            let var_2b8: i64;
            let var_210: i64;
            let var_208: i64;
            
            if var_2e0 != 2 && var_230 != 2
            {
                rbx_1 = ((var_2b8 ^ var_208) | (var_2c0 ^ var_210)) == 0;
            }
            core::ptr::drop_in_place$LT$$LP$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$C$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$RP$$GT$::h6986155f6bfd8c39(&var_2e0);
        }
        else
        {
            rbx_1 = 0;
        }
    }
    else
    {
        rbx_1 = 0;
    }
    
    rbx_1
}
