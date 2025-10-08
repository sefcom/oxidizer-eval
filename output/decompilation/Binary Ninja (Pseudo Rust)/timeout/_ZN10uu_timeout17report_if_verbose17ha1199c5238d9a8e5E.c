
  fn uu_timeout::report_if_verbose::ha1199c5238d9a8e5(arg1: i64, arg2: i64, arg3: i64, arg4: i32)

{
    if arg4 != 0
    {
        if arg1 >= 0x20
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        let mut var_40: i128 =
            *(&uucore::features::signals::ALL_SIGNALS::hb6c41a286543a4a8).byte_offset(arg1 << 4);
        let mut rax_1: i64;
        let mut rdx: i64;
        rax_1 = uucore::util_name::h074417a1e6395129();
        let mut var_60: i64 = rax_1;
        let var_58_1: i64 = rdx;
        let mut var_80: *mut i64 = &var_60;
        let var_78_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfb845f87f4f905f7;
        let mut var_b0: *mut c_void = &data_5127c8;
        let var_a8_1: i64 = 2;
        let var_90_1: i64 = 0;
        let var_a0_1: *mut *mut i64 = &var_80;
        let var_98_1: i64 = 1;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
        var_60 = 0;
        let var_58_2: i64 = arg2;
        let var_50_1: i64 = arg3;
        let var_48_1: i8 = 1;
        var_80 = &var_40;
        let var_78_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hfb845f87f4f905f7;
        let var_70_1: *mut i64 = &var_60;
        let var_68_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_b0 = &data_5127e8;
        let var_a8_2: i64 = 3;
        let var_90_2: i64 = 0;
        let var_a0_2: *mut *mut i64 = &var_80;
        let var_98_2: i64 = 2;
        std::io::stdio::_eprint::h57899770eacec2ad(&var_b0);
    }
}
