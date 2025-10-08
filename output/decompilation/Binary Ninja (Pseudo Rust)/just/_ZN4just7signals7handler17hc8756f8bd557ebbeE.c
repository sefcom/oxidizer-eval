
  fn just::signals::handler::hc8756f8bd557ebbe(arg1: i32) -> *mut i32

{
    let rax: i32 =
        nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::last::hb04833c6376db30a();
    let mut rsi_1: i64;
    let mut rdi_2: *const i8;
    
    if arg1 >= 0x100
    {
        rsi_1 = 0x11;
        rdi_2 = "unexpected signalsignal iterator…";
    }
    else
    {
        let rax_1: i32 = core::sync::atomic::atomic_load::h3c60c6b857c954f9();
        
        if rax_1 == 0xffffffff
        {
            core::option::expect_failed::h3f620cfb8545dc61("fd != -1Asteriskpattern");
            /* no return */
        }
        
        let mut var_21: i8 = arg1;
        let mut var_20: i32;
        nix::unistd::write::hf31749d4a38336d7(&var_20, rax_1, &var_21, 1);
        
        if var_20 != 1
        {
            return nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::set::h2fbdd1d9ac94e96d(
                rax);
        }
        
        let var_1c: i8;
        let mut rax_3: *mut i8;
        let mut rdx_2: i64;
        rax_3 = nix::errno::_$LT$impl$u20$nix..errno..consts..Errno$GT$::desc::h73f6220358296083(
            var_1c);
        rdi_2 = rax_3;
        rsi_1 = rdx_2;
    }
    
    just::signals::die::hb64eaa78d67e7dd0(rdi_2, rsi_1);
    /* no return */
}
