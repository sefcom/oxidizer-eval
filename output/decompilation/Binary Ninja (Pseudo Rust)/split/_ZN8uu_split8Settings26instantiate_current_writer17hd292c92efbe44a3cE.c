
  fn uu_split::Settings::instantiate_current_writer::hd292c92efbe44a3c(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i8) -> *mut c_void

{
    let mut var_98: i64 = arg3;
    let var_90: i64 = arg4;
    
    if uu_split::platform::unix::paths_refer_to_same_file::h8ca9878e54b136ff(
        *arg2.byte_offset(0x78), *arg2.byte_offset(0x80), arg3) == 0
    {
        let mut rsi_2: i64;
        
        if *arg2.byte_offset(0x88) == -0x8000000000000000
        {
            rsi_2 = 0;
        }
        else
        {
            rsi_2 = *arg2.byte_offset(0x90);
        }
        
        /* tailcall */
        return uu_split::platform::unix::instantiate_current_writer::hfd480ac8732375ab(arg1, rsi_2, 
            *arg2.byte_offset(0x98), arg3, arg4, arg5);
    }
    
    let mut var_88: *mut i64 = &var_98;
    let var_80: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h791d0a6d89386828;
    let mut var_78: *mut *mut c_void = &data_50aea8;
    let var_70: i64 = 2;
    let var_58: i64 = 0;
    let var_68: *mut *mut i64 = &var_88;
    let var_60: i64 = 1;
    let mut var_48: ();
    core::option::Option$LT$T$GT$::map_or_else::he9a9868ebfde35f3(&var_48, 0, &var_78);
    let result: *mut c_void = std::io::error::Error::_new::hbf6e5d7f23cac6f9(0x28, 
        alloc::boxed::Box$LT$T$GT$::new::h8b7f7ad758f1175c(&var_48), &data_50ad88);
    arg1[1] = result;
    *arg1 = -0x8000000000000000;
    result
}
