
  fn just::subcommand::Subcommand::request::h42ffcc05f5bbfbf5(arg1: *mut i8, arg2: *mut i64) -> i64

{
    let mut rbp: u64;
    let var_8: u64 = rbp;
    let mut rax_4: i64;
    let mut var_c8: i128;
    
    if !(0 + -(*arg2))
    {
        std::env::var_os::h6a2d090e3fc310b6(&var_c8, arg2);
        rax_4 = 0;
    }
    else
    {
        let mut var_98: ();
        nix::sys::signal::SigSet::all::h39c902f5cc9895d3(&var_98);
        core::result::Result$LT$T$C$E$GT$::unwrap::h7fa0aa2e5dcc9bbc(
            nix::sys::signal::SigSet::thread_block::h4072a70f25093496(&var_98));
        let mut rax_1: i8;
        let mut rdx_1: i32;
        rax_1 = nix::sys::signal::SigSet::wait::hf05c2446d170d752(&var_98);
        core::result::Result$LT$T$C$E$GT$::unwrap::hec2edfbb93b95acd(rax_1, rdx_1);
        let mut rax_2: *mut c_void;
        let mut rdx_2: u64;
        rax_2 = nix::sys::signal::Signal::as_str::h2b01f1d28a9b504f(rdx_1);
        let mut var_b0: i128;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_b0, rax_2, rdx_2);
        let var_a0: i64;
        let var_b8_1: i64 = var_a0;
        var_c8 = var_b0;
        rax_4 = 1;
    }
    let mut var_d0: i64 = rax_4;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let rax_5: i64 = serde_json::ser::to_writer::hea1831a29e98e5e8(
        &std::io::stdio::STDOUT::h411b213c5c9add46, &var_d0);
    
    if rax_5 == 0
    {
        rbp = 0x38;
    }
    else
    {
        *arg1.byte_offset(8) = rax_5;
        rbp = 0x12;
    }
    
    let result: i64 =
        core::ptr::drop_in_place$LT$just..request..Response$GT$::hb5e2b0f50bf67828(&var_d0);
    *arg1 = rbp;
    result
}
