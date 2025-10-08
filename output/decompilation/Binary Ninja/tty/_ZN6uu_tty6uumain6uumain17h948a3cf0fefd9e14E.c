
  uint64_t uu_tty::uumain::uumain::h948a3cf0fefd9e14(void* arg1)

{
    void** const var_2e8;
    uu_tty::uu_app::h4ff84cf484ac9a18(&var_2e8);
    void var_320;
    clap_builder::builder::command::Command::get_matches_from::h1ee2b3a9a6502d55(&var_320, 
        &var_2e8, arg1);
    uint64_t result;
    
    if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_320, "silent/home/34r7hm4n/.rustup/too…", 6))
    {
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        int64_t* var_360 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        std::io::stdio::stdin::h9a05a2c3e7544b2a();
        void* var_338;
        nix::unistd::ttyname::h7ae26345a5b9308f(&var_338);
        void* const r14 = var_338;
        void* rbx_1;
        
        if (-(r14) != -0x8000000000000000)
        {
            int64_t var_330;
            int64_t var_348 = var_330;
            int64_t var_328;
            int64_t var_340_1 = var_328;
            int64_t* var_358 = &var_348;
            uint64_t (* var_350_1)(int64_t* arg1, int64_t arg2) =
                _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
            var_2e8 = &data_4d1ef8;
            int64_t var_2e0_2 = 2;
            int64_t var_2c8_1 = 0;
            int64_t** var_2d8_2 = &var_358;
            int64_t var_2d0_1 = 1;
            rbx_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(&var_360, &var_2e8);
            core::mem::drop::h9ed9ac10acc51626(r14, var_330);
        }
        else
        {
            uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
            var_2e8 = &data_4d1f50;
            int64_t var_2e0_1 = 1;
            int64_t var_2d8_1 = 8;
            int64_t var_2d0;
            var_2d0 = {0};
            rbx_1 = _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(&var_360, &var_2e8);
        }
        
        if (rbx_1)
        {
            std::process::exit::hcda678ff272dfed1(3);
            /* no return */
        }
        
        ssize_t rax_8 =
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::flush::hfb2969f84e2164f2(
            &var_360);
        
        if (rax_8)
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
        
        if (std::sys::io::is_terminal::isatty::is_terminal::h27a830004054efc0())
            result = 0;
        else
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb869daef5177f7f0(&var_320);
    return result;
}
