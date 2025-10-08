
  fn alacritty::config::parse_config::hb79bebbd33e5efa7(arg1: *mut i64, arg2: i64, arg3: u64, arg4: *mut i64, arg5: i64) -> i64

{
    let mut result_1: i64;
    std::sys::pal::unix::os::split_paths::bytes_to_path::h3f69b771c0ce4140(&result_1, arg2, arg3);
    alloc::vec::Vec$LT$T$C$A$GT$::push::h86a2df8af84df241(arg4, &result_1);
    alacritty::config::deserialize_config::h5c79ebe9ac2f1598(&result_1, arg2, arg3, 0);
    let mut result: i64 = result_1;
    let mut var_a0: i128;
    let var_90: i128;
    
    if result != 7
    {
        let var_60: i128;
        *arg1.byte_offset(0x48) = var_60;
        let var_70: i128;
        *arg1.byte_offset(0x38) = var_70;
        let var_80: i128;
        *arg1.byte_offset(0x28) = var_80;
        *arg1.byte_offset(0x18) = var_90;
        *arg1.byte_offset(8) = var_a0;
        *arg1 = result;
    }
    else
    {
        let mut var_e8: i128 = var_a0;
        let mut var_50: ();
        alacritty::config::load_imports::h54203247dc29364f(&var_50, &var_e8, arg2, arg3, arg4, 
            arg5);
        var_a0 = var_90;
        result_1 = var_e8;
        result =
            alacritty::config::serde_utils::merge::h0b6a4a70fea81bc1(&arg1[1], &var_50, &result_1);
        *arg1 = 7;
    }
    result
}
