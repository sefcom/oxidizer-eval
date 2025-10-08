
  fn just::subcommand::Subcommand::dump::h35772f52367b2bf4(arg1: *mut i8, arg2: i8, arg3: *mut i64) -> i64

{
    let mut var_50: *const i8;
    
    if (arg2 & 1) == 0
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        let rax_1: i64 = serde_json::ser::to_writer::h22d6927a44a61b5d(
            &std::io::stdio::STDOUT::h411b213c5c9add46, arg3);
        
        if rax_1 != 0
        {
            *arg1 = 0x12;
            *arg1.byte_offset(8) = rax_1;
            /* tailcall */
            return
                core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(
                arg3);
        }
        
        var_50 = &data_82dbf8;
        let var_48_1: i64 = 1;
        let var_40_1: i64 = 8;
        let mut var_38: i64;
        var_38 = {0};
        std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    }
    else
    {
        let mut var_58: i64 = just::compilation::Compilation::root_ast::hde4a084de7e3435a(arg3);
        let mut var_20: *mut i64 = &var_58;
        let var_18_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h713030161970f6bd;
        var_50 = &data_465db0;
        let var_48: i64 = 1;
        let var_30_1: i64 = 0;
        let var_40: *mut *mut i64 = &var_20;
        let var_38_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_50);
    }
    *arg1 = 0x38;
    core::ptr::drop_in_place$LT$just..compilation..Compilation$GT$::hcea2292c76e0cd86(arg3)
}
