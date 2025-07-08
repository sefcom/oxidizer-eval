
  int64_t uu_ls::colors::StyleManager::apply_style::h18367dbd5f6ecd0f(int128_t* arg1, int64_t* arg2, int128_t* arg3, int64_t arg4, int64_t arg5, char arg6)

{
    int64_t var_58 = arg4;
    int64_t var_50 = arg5;
    int64_t var_c0 = 0;
    int64_t var_b8 = 1;
    int64_t var_b0 = 0;
    int128_t var_108;
    int64_t var_f8;
    int128_t var_a8;
    char var_88;
    int128_t var_87;
    
    if (arg2[1] == 2)
    {
        char* rax_1 = uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(arg2);
        
        if (rax_1)
        {
            char rcx = *rax_1;
            int32_t rdx = *(rax_1 + 0x11);
            var_a8 = *(rax_1 + 1);
            
            if (rcx != 2)
            {
                var_88 = rcx;
                var_87 = var_a8;
                int32_t var_77_1 = rdx;
                uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(&var_108, arg2, 
                    &var_88);
                int64_t rdi_2 = *var_108[8];
                int64_t rax_3;
                uint64_t rdx_2;
                rax_3 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(rdi_2, 
                    var_f8 + rdi_2);
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_c0, rax_3, 
                    rdx_2);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_108);
            }
        }
    }
    
    char rax_11;
    
    if (!arg3)
    {
        int128_t* rax_7 = uu_ls::colors::StyleManager::get_normal_style::hc92a465b83f2ab18(arg2);
        
        if (!rax_7)
            rax_11 = 0;
        else
        {
            var_108 = *rax_7;
            *var_108[0xd] = *(rax_7 + 0xd);
            
            if (var_108 == 2)
                rax_11 = 0;
            else if (!uu_ls::colors::StyleManager::is_current_style::h6647609893105167(arg2, 
                    &var_108))
                rax_11 = 0;
            else
            {
                uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&var_108, arg2, 0);
                int64_t rdi_17 = *var_108[8];
                int64_t rax_10;
                uint64_t rdx_7;
                rax_10 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(rdi_17, 
                    var_f8 + rdi_17);
                alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_c0, rax_10, 
                    rdx_7);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_108);
                rax_11 = 1;
            }
        }
    }
    else
    {
        if (!uu_ls::colors::StyleManager::is_current_style::h6647609893105167(arg2, arg3))
        {
            uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&var_108, arg2, !*(arg2 + 0x1d));
            int64_t rdi_7 = *var_108[8];
            int64_t rax_5;
            uint64_t rdx_4;
            rax_5 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(rdi_7, 
                var_f8 + rdi_7);
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_c0, rax_5, rdx_4);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_108);
            uu_ls::colors::StyleManager::get_style_code::h3f5da10be94133b8(&var_108, arg2, arg3);
            int64_t rdi_11 = *var_108[8];
            int64_t rax_6;
            uint64_t rdx_6;
            rax_6 = core::slice::iter::Iter$LT$T$GT$::make_slice::h6c1fcdef0407b044(rdi_11, 
                var_f8 + rdi_11);
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::ha1fae1b53678c561(&var_c0, rax_6, rdx_6);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_108);
        }
        
        rax_11 = 0;
    }
    
    void* const rdx_8 = 1;
    
    if (arg6)
        rdx_8 = "\x1b[KLazy instance has previous…";
    
    void* const var_48 = rdx_8;
    uint64_t var_40 = arg6 * 3;
    uu_ls::colors::StyleManager::reset::h8e7360f134edbed2(&var_a8, arg2, rax_11);
    var_108 = &var_c0;
    *var_108[8] =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    int64_t* var_f8_1 = &var_58;
    int64_t (* var_f0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    int128_t* var_e8 = &var_a8;
    int64_t (* var_e0)(void* arg1, int64_t arg2) =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
    int64_t* var_d8 = &var_48;
    int64_t (* var_d0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h2a9d35fa3fd2b5f3;
    var_88 = &data_436d28;
    *var_87[7] = 4;
    int64_t var_68 = 0;
    *var_87[0xf] = &var_108;
    int64_t var_70 = 4;
    int128_t var_38;
    core::option::Option$LT$T$GT$::map_or_else::h7fca96e7ce97ddb7(&var_38, &var_88);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_a8);
    int64_t var_28;
    arg1[1] = var_28;
    *arg1 = var_38;
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_c0);
}
