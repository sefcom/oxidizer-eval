
  fn uu_rm::handle_writable_directory::hdb36aba62dc09786(arg1: i64, arg2: i64, arg3: i8, arg4: i8) -> u64

{
    let mut var_a0: *mut c_void;
    let mut var_70: *mut i64;
    let mut var_58: *mut i64;
    let mut var_38: *mut c_void;
    
    if arg4 < 0
    {
        let mut result: u64;
        result = 1;
        
        if arg3 != 2
        {
            return result;
        }
        
        let mut rax_2: *mut i64;
        let mut rdx_2: i64;
        rax_2 = uucore::util_name::h60d842bf27b05e82();
        var_58 = rax_2;
        let var_50_5: i64 = rdx_2;
        var_70 = &var_58;
        let var_68_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        var_a0 = &data_527970;
        let var_98_6: i64 = 2;
        let var_80_5: i64 = 0;
        let var_90_6: *mut *mut i64 = &var_70;
        let var_88_5: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_58 = 1;
        let var_50_6: i64 = arg1;
        let var_48_2: i64 = arg2;
        let var_40_2: i8 = 1;
        var_70 = &var_58;
        let var_68_5: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_a0 = &data_527bd8;
        let var_98_7: i64 = 2;
        let var_80_6: i64 = 0;
        let var_90_7: *mut *mut i64 = &var_70;
        let mut var_88_6: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_a0 = &data_527b08;
        let var_98_8: i64 = 1;
        let var_90_8: i64 = 8;
        var_88_6 = {0};
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_38 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
        _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
            &var_38);
    }
    else
    {
        let mut rax: *mut i64;
        let mut rdx: i64;
        rax = uucore::util_name::h60d842bf27b05e82();
        var_58 = rax;
        let var_50_1: i64 = rdx;
        var_70 = &var_58;
        let var_68_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h051bb22b4e362819;
        var_a0 = &data_527970;
        let var_98_1: i64 = 2;
        let var_80_1: i64 = 0;
        let var_90_1: *mut *mut i64 = &var_70;
        let var_88_1: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_58 = 1;
        let var_50_2: i64 = arg1;
        let var_48_1: i64 = arg2;
        let var_40_1: i8 = 1;
        var_70 = &var_58;
        let var_68_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_a0 = &data_527bb8;
        let var_98_2: i64 = 2;
        let var_80_2: i64 = 0;
        let var_90_2: *mut *mut i64 = &var_70;
        let mut var_88_2: i64 = 1;
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_a0 = &data_527b08;
        let var_98_3: i64 = 1;
        let var_90_3: i64 = 8;
        var_88_2 = {0};
        std::io::stdio::_eprint::hcdfeec148c7134f7(&var_a0);
        var_38 = &std::io::stdio::stderr::INSTANCE::ha28648ccba9ff424;
        _$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::flush::hf7b2528795edb6d7(
            &var_38);
    }
    uucore::read_yes::hc350e858ab85cf03()
}
