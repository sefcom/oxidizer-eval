
  fn zoxide::cmd::init::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Init$GT$::run::h93ad17d79492bccc(arg1: *mut c_void) -> u64

{
    let r14: i64 = *arg1.byte_offset(0x10);
    let mut r15: i64;
    
    if *arg1.byte_offset(0x18) != 0
    {
        r15 = 0;
    }
    else
    {
        r15 = *arg1.byte_offset(8);
    }
    
    let rax: i8 = zoxide::config::echo::hc65ff0e744ad1419();
    let rax_1: i8 = zoxide::config::resolve_symlinks::h2e8c21983af893b2();
    let rcx: i8 = *arg1.byte_offset(0x19);
    let mut var_98: i64 = r15;
    let var_90: i64 = r14;
    let var_88: i8 = rcx;
    let var_87: i8 = rax;
    let var_86: i8 = rax_1;
    let mut var_68: *mut c_void;
    
    match *arg1.byte_offset(0x1a)
    {
        0 =>
        {
            askama::Template::render_with_values::h82d78edc0744e5e9(&var_68, &var_98);
        }
        1 =>
        {
            askama::Template::render_with_values::h857387d31013c4bc(&var_68, &var_98);
        }
        2 =>
        {
            askama::Template::render_with_values::hbbe085692df36090(&var_68, &var_98);
        }
        3 =>
        {
            askama::Template::render_with_values::hb2e5382566007d4e(&var_68, &var_98);
        }
        4 =>
        {
            askama::Template::render_with_values::hbcf5e1f55eaa7859(&var_68, &var_98);
        }
        5 =>
        {
            askama::Template::render_with_values::hc628349449be5e21(&var_68, &var_98);
        }
        6 =>
        {
            askama::Template::render_with_values::hcf83a0951552a129(&var_68, &var_98);
        }
        7 =>
        {
            askama::Template::render_with_values::h5c7202f23f1c6642(&var_68, &var_98);
        }
        8 =>
        {
            askama::Template::render_with_values::h6b0241f5dd1e97bc(&var_68, &var_98);
        }
    }
    
    let mut var_80: i64;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h9c1967eb8cf52771(&var_80, &var_68);
    let rcx_1: i64 = var_80;
    let var_78: u64;
    
    if -(rcx_1) == -0x8000000000000000
    {
        return var_78;
    }
    
    var_80 = rcx_1;
    let var_78_1: u64 = var_78;
    let var_70: i64;
    let var_70_1: i64 = var_70;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_38: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_30: *mut i64 = &var_80;
    let var_28_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_68 = &data_534950;
    let var_60_1: i64 = 2;
    let var_48_1: i64 = 0;
    let var_58_1: *mut *mut i64 = &var_30;
    let var_50_1: i64 = 1;
    let rax_7: u64 = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
            &var_38, &var_68), 
        "stdoutcould not read selection f…", 6);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_80);
    rax_7
}
