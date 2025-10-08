
  int64_t uu_stat::Stater::generate_tokens::hafb5d93f144f9d1e(int128_t* arg1, char* arg2, uint64_t arg3, char arg4)

{
    int64_t var_b8 = 0;
    int64_t var_b0 = 8;
    int64_t var_a8 = 0;
    int64_t var_70;
    core::iter::traits::iterator::Iterator::collect::hc2256cc222372473(&var_70, arg2);
    int64_t var_c0 = 0;
    int32_t var_98;
    int64_t var_68;
    
    if (arg3)
    {
        int64_t rdi_1 = 0;
        
        do
        {
            int64_t var_60;
            
            if (rdi_1 >= var_60)
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_1, var_60);
                /* no return */
            }
            
            int32_t rax_1 = *(var_68 + (rdi_1 << 2));
            int32_t var_90;
            
            if (rax_1 == 0x25)
            {
                uu_stat::Stater::handle_percent_case::hcbef71a70831617c(&var_98, var_68, var_60, 
                    &var_c0, arg3, arg2, arg3);
                int64_t rdx_5 = var_98;
                int64_t rax_2 = var_90;
                int64_t var_88;
                
                if (rdx_5 == 5)
                {
                    *(arg1 + 8) = rax_2;
                    arg1[1] = var_88;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h0dbcc999510fd514(
                        var_70, var_68);
                    /* tailcall */
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_stat..Token$GT$$GT$::h3cf71f1ca7f8d943(var_b8, var_b0);
                }
                
                int128_t var_80;
                int128_t var_40_1 = var_80;
                int64_t var_58 = rdx_5;
                int64_t var_50_1 = rax_2;
                int64_t var_48_1 = var_88;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_58);
            }
            else if (rax_1 != 0x5c)
            {
                var_90 = rax_1;
                var_98 = 3;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_98);
            }
            else if (!arg4)
            {
                var_90 = 0x5c;
                var_98 = 3;
                alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_98);
            }
            else
            {
                uu_stat::Stater::handle_escape_sequences::h968fffb30d055b36(&var_98, var_68, 
                    var_60, &var_c0, arg3, arg2, arg3);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_98);
            }
            rdi_1 = var_c0 + 1;
            var_c0 = rdi_1;
        } while (rdi_1 < arg3);
    }
    
    if (!arg4)
    {
        var_98 = 0;
        char* rax_3;
        uint64_t rdx_8;
        rax_3 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0xa, &var_98);
        
        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h1fce938563fb45ed(arg2, arg3, 
            rax_3, rdx_8))
        {
            int32_t var_90_1 = 0xa;
            var_98 = 3;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h67ea3e1d2f0918cb(&var_b8, &var_98);
        }
    }
    
    arg1[1] = var_a8;
    *arg1 = var_b8;
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h0dbcc999510fd514(var_70, 
        var_68);
}
