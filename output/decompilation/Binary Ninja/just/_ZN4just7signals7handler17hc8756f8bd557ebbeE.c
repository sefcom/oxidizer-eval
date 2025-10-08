
  int32_t* just::signals::handler::hc8756f8bd557ebbe(int32_t arg1)

{
    int32_t rax =
        nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::last::hb04833c6376db30a();
    int64_t rsi_1;
    char const* const rdi_2;
    
    if (arg1 >= 0x100)
    {
        rsi_1 = 0x11;
        rdi_2 = "unexpected signalsignal iterator…";
    }
    else
    {
        int32_t rax_1 = core::sync::atomic::atomic_load::h3c60c6b857c954f9();
        
        if (rax_1 == 0xffffffff)
        {
            core::option::expect_failed::h3f620cfb8545dc61("fd != -1Asteriskpattern");
            /* no return */
        }
        
        char var_21 = arg1;
        int32_t var_20;
        nix::unistd::write::hf31749d4a38336d7(&var_20, rax_1, &var_21, 1);
        
        if (var_20 != 1)
            return nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::set::h2fbdd1d9ac94e96d(
                rax);
        
        char var_1c;
        char* rax_3;
        int64_t rdx_2;
        rax_3 = nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::desc::h73f6220358296083(
            var_1c);
        rdi_2 = rax_3;
        rsi_1 = rdx_2;
    }
    
    just::signals::die::hb64eaa78d67e7dd0(rdi_2, rsi_1);
    /* no return */
}
