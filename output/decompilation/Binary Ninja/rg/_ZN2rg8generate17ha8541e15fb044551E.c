
  int64_t rg::generate::ha8541e15fb044551(char* arg1, char arg2)

{
    void var_78;
    
    switch (arg2)
    {
        case 0:
        {
            rg::flags::doc::man::generate::h4d97e8b2ccfffee2(&var_78);
            break;
        }
        case 1:
        {
            rg::flags::complete::bash::generate::h0c2749dd62c68378(&var_78);
            break;
        }
        case 2:
        {
            rg::flags::complete::zsh::generate::h88f53c6def813290(&var_78);
            break;
        }
        case 3:
        {
            rg::flags::complete::fish::generate::heb884ffa6677645b(&var_78);
            break;
        }
        case 4:
        {
            rg::flags::complete::powershell::generate::h627f818806070f85(&var_78);
            break;
        }
    }
    
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_60 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t var_70;
    int64_t var_68;
    int64_t rax_3;
    int64_t rdx;
    rax_3 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::h6abe8100f4b9b9b1(var_70, var_68);
    int64_t var_48 = rax_3;
    int64_t var_40 = rdx;
    int64_t* var_58 = &var_48;
    int64_t (* var_50)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8797fd25d6434092;
    void* const var_38 = &data_7ea800;
    int64_t var_30 = 2;
    int64_t var_18 = 0;
    int64_t** var_28 = &var_58;
    int64_t var_20 = 1;
    void* rax_4 =
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        &var_60, &var_38);
    
    if (!rax_4)
        *arg1 = 0;
    else
    {
        *(arg1 + 8) = anyhow::error::_$LT$impl$u20$core..convert..From$LT$E$GT$$u20$for$u20$anyhow..Error$GT$::from::h93265d5384100ee9(rax_4);
        *arg1 = 1;
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcf08c90eaee1f556(&var_78);
}
