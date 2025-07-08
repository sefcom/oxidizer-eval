
  fn uu_split::Settings::instantiate_current_writer::h325c265ed321d02d(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64, arg5: i8) -> *mut i64

{
    let mut var_90: i64 = arg3;
    let var_88: i64 = arg4;
    
    if uu_split::platform::unix::paths_refer_to_same_file::h083a83a0b2f9c23e(
        *arg2.byte_offset(0x78), *arg2.byte_offset(0x80), arg3, arg4) == 0
    {
        uu_split::platform::unix::instantiate_current_writer::h64f110ef12de1802(arg1, 
            arg2.byte_offset(0x88), arg3, arg4, arg5);
    }
    else
    {
        let mut var_80: *mut i64 = &var_90;
        let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h07748dddbe8bbb98;
        let mut var_70: *mut *mut c_void = &data_548380;
        let var_68_1: i64 = 2;
        let var_50_1: i64 = 0;
        let var_60_1: *mut *mut i64 = &var_80;
        let var_58_1: i64 = 1;
        let mut var_40: ();
        core::option::Option$LT$T$GT$::map_or_else::ha1a29b635627d471(&var_40, 0, &var_70);
        arg1[1] = std::io::error::Error::new::hd2fa1afc07f95968(0x27, &var_40);
        *arg1 = -0x8000000000000000;
    }
    
    arg1
}
