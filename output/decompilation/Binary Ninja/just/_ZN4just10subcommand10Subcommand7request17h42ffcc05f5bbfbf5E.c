
  int64_t just::subcommand::Subcommand::request::h42ffcc05f5bbfbf5(char* arg1, int64_t* arg2)

{
    uint64_t rbp;
    uint64_t var_8 = rbp;
    int64_t rax_4;
    int128_t var_c8;
    
    if (!(0 + -(*arg2)))
    {
        std::env::var_os::h6a2d090e3fc310b6(&var_c8, arg2);
        rax_4 = 0;
    }
    else
    {
        void var_98;
        nix::sys::signal::SigSet::all::h39c902f5cc9895d3(&var_98);
        core::result::Result$LT$T$C$E$GT$::unwrap::h7fa0aa2e5dcc9bbc(
            nix::sys::signal::SigSet::thread_block::h4072a70f25093496(&var_98));
        char rax_1;
        int32_t rdx_1;
        rax_1 = nix::sys::signal::SigSet::wait::hf05c2446d170d752(&var_98);
        core::result::Result$LT$T$C$E$GT$::unwrap::hec2edfbb93b95acd(rax_1, rdx_1);
        void* rax_2;
        uint64_t rdx_2;
        rax_2 = nix::sys::signal::Signal::as_str::h2b01f1d28a9b504f(rdx_1);
        int128_t var_b0;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_b0, rax_2, rdx_2);
        int64_t var_a0;
        int64_t var_b8_1 = var_a0;
        var_c8 = var_b0;
        rax_4 = 1;
    }
    int64_t var_d0 = rax_4;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t rax_5 = serde_json::ser::to_writer::hea1831a29e98e5e8(
        &std::io::stdio::STDOUT::h411b213c5c9add46, &var_d0);
    
    if (!rax_5)
        rbp = 0x38;
    else
    {
        *(arg1 + 8) = rax_5;
        rbp = 0x12;
    }
    
    int64_t result =
        core::ptr::drop_in_place$LT$just..request..Response$GT$::hb5e2b0f50bf67828(&var_d0);
    *arg1 = rbp;
    return result;
}
