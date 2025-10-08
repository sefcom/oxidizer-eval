
  uint64_t rg::special::h2a430c08df28a109(char* arg1, char arg2)

{
    int128_t var_88;
    int64_t var_78;
    int128_t var_60;
    char var_48;
    char rbp;
    
    switch (arg2)
    {
        case 0:
        {
            rg::flags::doc::help::generate_short::hdde8bd32c057b3d4(&var_88);
            rbp = 0;
            break;
        }
        case 1:
        {
            rg::flags::doc::help::generate_long::h613fc9da1a2baeb6(&var_88);
            rbp = 0;
            break;
        }
        case 2:
        {
            rg::flags::doc::version::generate_short::h331b40a84196a55d(&var_88);
            rbp = 0;
            break;
        }
        case 3:
        {
            rg::flags::doc::version::generate_long::h39101dedc081911d(&var_88);
            rbp = 0;
            break;
        }
        case 4:
        {
            rg::flags::doc::version::generate_pcre2::ha65a2e5d72f36cf8(&var_60);
            int64_t var_50;
            var_78 = var_50;
            var_88 = var_60;
            rbp = var_48 ^ 1;
            break;
        }
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_68 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t rax_4;
    int64_t rdx;
    rax_4 =
        core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(*var_88[8], var_78);
    int64_t var_20 = rax_4;
    int64_t var_18 = rdx;
    int64_t* var_30 = &var_20;
    int64_t (* var_28)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    var_60 = &data_7ea800;
    *var_60[8] = 2;
    int64_t var_40 = 0;
    int64_t** var_50_1 = &var_30;
    var_48 = 1;
    void* rax_5 =
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        &var_68, &var_60);
    
    if (!rax_5)
    {
        arg1[1] = rbp;
        *arg1 = 0;
    }
    else
    {
        *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(rax_5);
        *arg1 = 1;
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_88);
}
