
  uint64_t zoxide::cmd::init::_$LT$impl$u20$zoxide..cmd..Run$u20$for$u20$zoxide..cmd..cmd..Init$GT$::run::h93ad17d79492bccc(void* arg1)

{
    int64_t r14 = *(arg1 + 0x10);
    int64_t r15;
    
    if (*(arg1 + 0x18))
        r15 = 0;
    else
        r15 = *(arg1 + 8);
    
    char rax = zoxide::config::echo::hc65ff0e744ad1419();
    char rax_1 = zoxide::config::resolve_symlinks::h2e8c21983af893b2();
    char rcx = *(arg1 + 0x19);
    int64_t var_98 = r15;
    int64_t var_90 = r14;
    char var_88 = rcx;
    char var_87 = rax;
    char var_86 = rax_1;
    void* const var_68;
    
    switch (*(arg1 + 0x1a))
    {
        case 0:
        {
            askama::Template::render_with_values::h82d78edc0744e5e9(&var_68, &var_98);
            break;
        }
        case 1:
        {
            askama::Template::render_with_values::h857387d31013c4bc(&var_68, &var_98);
            break;
        }
        case 2:
        {
            askama::Template::render_with_values::hbbe085692df36090(&var_68, &var_98);
            break;
        }
        case 3:
        {
            askama::Template::render_with_values::hb2e5382566007d4e(&var_68, &var_98);
            break;
        }
        case 4:
        {
            askama::Template::render_with_values::hbcf5e1f55eaa7859(&var_68, &var_98);
            break;
        }
        case 5:
        {
            askama::Template::render_with_values::hc628349449be5e21(&var_68, &var_98);
            break;
        }
        case 6:
        {
            askama::Template::render_with_values::hcf83a0951552a129(&var_68, &var_98);
            break;
        }
        case 7:
        {
            askama::Template::render_with_values::h5c7202f23f1c6642(&var_68, &var_98);
            break;
        }
        case 8:
        {
            askama::Template::render_with_values::h6b0241f5dd1e97bc(&var_68, &var_98);
            break;
        }
    }
    
    int64_t var_80;
    anyhow::context::_$LT$impl$u20$anyhow..Context$LT$T$C$E$GT$$u20$for$u20$core..result..Result$LT$T$C$E$GT$$GT$::context::h9c1967eb8cf52771(&var_80, &var_68);
    int64_t rcx_1 = var_80;
    uint64_t var_78;
    
    if (-(rcx_1) == -0x8000000000000000)
        return var_78;
    
    var_80 = rcx_1;
    uint64_t var_78_1 = var_78;
    int64_t var_70;
    int64_t var_70_1 = var_70;
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_38 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* var_30 = &var_80;
    int64_t (* var_28_1)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_68 = &data_534950;
    int64_t var_60_1 = 2;
    int64_t var_48_1 = 0;
    int64_t** var_58_1 = &var_30;
    int64_t var_50_1 = 1;
    uint64_t rax_7 = _$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$u20$as$u20$zoxide..error..BrokenPipeHandler$GT$::pipe_exit::ha3034502edd4f0bb(
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
            &var_38, &var_68), 
        "stdoutcould not read selection f…", 6);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::he43bec8f5a515731(&var_80);
    return rax_7;
}
