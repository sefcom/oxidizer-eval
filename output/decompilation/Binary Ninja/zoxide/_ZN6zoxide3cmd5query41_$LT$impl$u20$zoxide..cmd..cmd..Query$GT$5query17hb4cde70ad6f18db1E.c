
  uint64_t zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query::hb4cde70ad6f18db1(void* arg1, void* arg2)

{
    char rax;
    uint64_t rdx;
    rax = zoxide::util::current_time::hc177626caa3eacce();
    
    if (rax & 1)
        return rdx;
    
    int64_t var_90;
    zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::get_stream::h9fa08a87e4cae412(
        &var_90, arg1, arg2, rdx);
    int64_t rax_1 = var_90;
    uint64_t var_88;
    uint64_t r15_1 = var_88;
    
    if (-(rax_1) != -0x8000000000000000)
    {
        int64_t var_20;
        int64_t var_98_1 = var_20;
        int128_t var_30;
        int128_t var_a8_1 = var_30;
        int128_t var_40;
        int128_t var_b8_1 = var_40;
        int128_t var_50;
        int128_t var_c8_1 = var_50;
        int128_t var_60;
        int128_t var_d8_1 = var_60;
        int128_t var_70;
        int128_t var_e8_1 = var_70;
        int128_t var_80;
        int128_t var_f8_1 = var_80;
        int64_t var_108 = rax_1;
        uint64_t var_100_1 = r15_1;
        uint64_t rax_2;
        
        if (*(arg1 + 0x49))
            rax_2 = zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_interactive::hb59cdf2fd68d3de0(arg1, &var_108);
        else if (!*(arg1 + 0x4a))
            rax_2 = zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_first::h2951b26d66defb32(arg1, &var_108);
        else
            rax_2 = zoxide::cmd::query::_$LT$impl$u20$zoxide..cmd..cmd..Query$GT$::query_list::h1793189bc91b0810(arg1, &var_108);
        
        r15_1 = rax_2;
        core::ptr::drop_in_place$LT$zoxide..db..stream..Stream$GT$::h136fa476fd0ea1b1(&var_108);
    }
    
    return r15_1;
}
