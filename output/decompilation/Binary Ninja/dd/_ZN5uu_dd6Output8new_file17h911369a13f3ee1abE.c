
  char* uu_dd::Output::new_file::h911369a13f3ee1ab(char* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t var_40;
    uu_dd::Output::new_file::open_dst::h968e64089c53b51a(&var_40, arg2, arg3, *(arg4 + 0x91), 
        *(arg4 + 0x92), arg4 + 0x96);
    int64_t var_50;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h68ea94665ebd88f8(&var_50, &var_40);
    int64_t rax = var_50;
    int32_t var_48;
    
    if (!rax)
    {
        int32_t rbp_1 = var_48;
        int32_t var_54 = rbp_1;
        
        if (!*(arg4 + 0x93))
        {
            int64_t rax_1 = std::fs::File::set_len::hd21acd2eeb028efb(&var_54, *(arg4 + 0x88));
            var_40 = rax_1;
            
            if (rax_1)
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::hdf0c997779a17efc(&var_40);
                rbp_1 = var_54;
            }
        }
        
        uu_dd::Output::prepare_file::h9725a129054f1a6a(arg1, rbp_1, arg4);
    }
    else
    {
        *(arg1 + 8) = rax;
        *(arg1 + 0x10) = var_48;
        *arg1 = 4;
    }
    return arg1;
}
