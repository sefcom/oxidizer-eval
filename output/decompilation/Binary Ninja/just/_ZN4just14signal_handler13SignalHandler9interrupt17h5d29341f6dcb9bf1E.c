
  int32_t* just::signal_handler::SignalHandler::interrupt::h5d29341f6dcb9bf1(int64_t* arg1, int32_t arg2)

{
    int32_t* i = arg1[2];
    
    if (!i)
    {
        std::process::exit::hcda678ff272dfed1(just::signal::Signal::code::ha56ff543d8ac6eb8(arg2));
        /* no return */
    }
    
    if (!arg1[3])
    {
        arg1[3] = arg2;
        
        if (arg2 > 3)
        {
            label_68a8ad:
            int32_t* i_2 = *arg1;
            int64_t rdx_1 = arg1[1];
            int64_t rsi;
            rsi = i_2;
            
            if (!i_2)
                i = i_2;
            
            int64_t var_a8 = rsi;
            int64_t var_a0_1 = 0;
            int32_t* i_3 = i_2;
            int64_t var_90_1 = rdx_1;
            int64_t var_88_1 = rsi;
            int64_t var_80_1 = 0;
            int32_t* i_4 = i_2;
            int64_t var_70_1 = rdx_1;
            int32_t* i_1 = i;
            i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha8dc7643b5748a3c(&var_a8);
            
            if (i)
            {
                if (*(arg1 + 0x1c) <= 1)
                {
                    do
                    {
                        nix::sys::signal::kill::hbdca6dbb133b60f3(*i);
                        i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha8dc7643b5748a3c(&var_a8);
                    } while (i);
                }
                else
                {
                    do
                    {
                        int32_t var_bc = *i;
                        int32_t* var_b8 = &var_bc;
                        uint64_t (* var_b0_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
                        char const (** const var_60)[0xcb] = &data_830f20;
                        int64_t var_58_1 = 2;
                        int64_t var_40_1 = 0;
                        int32_t** var_50_1 = &var_b8;
                        int64_t var_48_1 = 1;
                        std::io::stdio::_eprint::h57899770eacec2ad(&var_60);
                        nix::sys::signal::kill::hbdca6dbb133b60f3(var_bc);
                        i = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::ha8dc7643b5748a3c(&var_a8);
                    } while (i);
                }
            }
        }
    }
    else if (arg2 > 3)
        goto label_68a8ad;
    
    return i;
}
