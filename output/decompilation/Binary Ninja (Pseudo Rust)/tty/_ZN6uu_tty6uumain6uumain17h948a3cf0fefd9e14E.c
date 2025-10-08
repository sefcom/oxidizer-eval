
  fn uu_tty::uumain::uumain::h948a3cf0fefd9e14(arg1: *mut c_void) -> u64

{
    let mut var_2e8: *mut *mut c_void;
    uu_tty::uu_app::h4ff84cf484ac9a18(&var_2e8);
    let mut var_320: ();
    clap_builder::builder::command::Command::get_matches_from::h1ee2b3a9a6502d55(&var_320, 
        &var_2e8, arg1);
    let mut result: u64;
    
    if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_320, "silent/home/34r7hm4n/.rustup/too…", 6) == 0
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        let mut var_360: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        let mut var_338: *mut c_void;
        nix::unistd::ttyname::h7ae26345a5b9308f(&var_338);
        let r14: *mut c_void = var_338;
        let mut rbx_1: *mut c_void;
        
        if -(r14) != -0x8000000000000000
        {
            let var_330: i64;
            let mut var_348: i64 = var_330;
            let var_328: i64;
            let var_340_1: i64 = var_328;
            let mut var_358: *mut i64 = &var_348;
            let var_350_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_2e8 = &data_4d1ef8;
            let var_2e0_2: i64 = 2;
            let var_2c8_1: i64 = 0;
            let var_2d8_2: *mut *mut i64 = &var_358;
            let var_2d0_1: i64 = 1;
            rbx_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(&var_360, &var_2e8);
            core::mem::drop::h9ed9ac10acc51626(r14, var_330);
        }
        else
        {
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            var_2e8 = &data_4d1f50;
            let var_2e0_1: i64 = 1;
            let var_2d8_1: i64 = 8;
            let mut var_2d0: i64;
            var_2d0 = {0};
            rbx_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(&var_360, &var_2e8);
        }
        
        if rbx_1 != 0
        {
            std::process::exit::hcda678ff272dfed1(3);
            /* no return */
        }
        
        let rax_8: ssize_t =
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
            &var_360);
        
        if rax_8 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h01a2581c66e511fb(rax_8);
            std::process::exit::hcda678ff272dfed1(3);
            /* no return */
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h01a2581c66e511fb(0);
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h01a2581c66e511fb(0);
        result = 0;
    }
    else
    {
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        
        if std::sys::io::is_terminal::isatty::is_terminal::h27a830004054efc0() != 0
        {
            result = 0;
        }
        else
        {
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
        }
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb869daef5177f7f0(&var_320);
    result
}
