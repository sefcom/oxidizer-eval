
  uint64_t alacritty::display::content::RenderableCell::new::h108745e7730d7056(uint64_t* arg1, int64_t* arg2, int64_t* arg3)

{
    int64_t* r15 = arg3;
    int64_t* rbp = *arg3;
    int32_t rax = alacritty::display::content::RenderableCell::compute_fg_rgb::h3800f23b34f30751(
        arg2, rbp[1], *(rbp + 0x14));
    int16_t var_9c = rax;
    uint8_t var_9a = rax >> 0x10;
    int32_t rax_2 = alacritty::display::content::RenderableCell::compute_bg_rgb::h1db88f8de20295e8(
        arg2[0xf], arg2[0x1e], *(rbp + 0xc));
    int16_t var_98 = rax_2;
    uint8_t var_96 = rax_2 >> 0x10;
    uint32_t r12 = *(rbp + 0x14);
    int64_t* var_88 = r15;
    uint32_t var_94;
    int32_t var_8c;
    int32_t var_78;
    char r13;
    char rax_6;
    
    if (r12 & 1)
    {
        core::intrinsics::typed_swap_nonoverlapping::hf7f74993e905442a(&var_9c, &var_98);
        var_8c = 0x3f800000;
        rax_6 = arg2[0x17];
        
        if (rax_6 == 2)
        {
            var_94 = r12;
            r13 = 0;
        }
        else
        {
            label_8468e0:
            int128_t var_68_1 = *(arg2 + 0xa8);
            var_78 = *(arg2 + 0x98);
            int32_t var_57_1 = *(arg2 + 0xb9);
            var_57_1 = *(arg2 + 0xbc);
            char var_58_1 = rax_6;
            r13 = alacritty_terminal::selection::SelectionRange::contains_cell::h17cee683c4e8c58c(
                &var_78, r15, arg2[0x10], arg2[0x11], arg2[0x23]);
            var_94 = *(rbp + 0x14);
        }
    }
    else
    {
        void* r15_1 = arg2[0x1d];
        var_78 = *(rbp + 0xc);
        int128_t zmm0_1 = {0};
        
        if (!_$LT$vte..ansi..Color$u20$as$u20$core..cmp..PartialEq$GT$::eq::heb01e5a1191ca78e(
            &var_78, &data_4eb2b4[0x18]))
        {
            if (*(r15_1 + 0x28f) != 1)
                zmm0_1 = 0x3f800000;
            else
                zmm0_1 = *(r15_1 + 0x1a4);
        }
        
        var_8c = zmm0_1;
        r15 = var_88;
        rax_6 = arg2[0x17];
        
        if (rax_6 != 2)
            goto label_8468e0;
        
        var_94 = r12;
        r13 = 0;
    }
    int32_t rax_9 = arg2[9];
    int32_t* rsi_4 = arg2[0x1d];
    int32_t rax_10 = rbp[2];
    int32_t rax_13;
    char rdx_5;
    
    if (arg2[4] != -0x7fffffffffffffff)
        rax_13 = alacritty::display::content::Hint::advance::h8bcb95d1876cc7ab(&arg2[4], -(rax_9), 
            *(arg2[0x1f] + 8), var_88[1], var_88[2]);
    
    int32_t r12_2;
    uint32_t r13_1;
    int64_t* r15_2;
    
    if (arg2[4] != -0x7fffffffffffffff && rax_13 != 0x110001)
    {
        if (!(rdx_5 & 1))
        {
            r13_1 = var_94;
            r15_2 = var_88;
            
            if (rax_13 != 0x110000)
                alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(
                    &var_9c, &var_98, &var_8c, rsi_4[0x8c], rsi_4[0x8d]);
            else
                r13_1 |= 8;
        }
        else
        {
            alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(
                &var_9c, &var_98, &var_8c, rsi_4[0x8a], rsi_4[0x8b]);
            r13_1 = var_94;
            r15_2 = var_88;
        }
        
        int32_t rax_26 = rax_10;
        
        if (rax_13 != 0x110000)
            rax_26 = rax_13;
        
        r12_2 = rax_26;
        goto label_846bbc;
    }
    
    int128_t zmm1_1;
    
    if (!r13)
    {
        if (*arg2 != -0x7fffffffffffffff)
        {
            r15_2 = var_88;
            int64_t r12_5 = r15_2[1];
            int32_t r13_3 = r15_2[2];
            
            if (!alacritty::display::content::HintMatches::advance::hba48573630649a2f(arg2, r12_5, 
                r13_3))
            {
                r13_1 = var_94;
                r12_2 = rax_10;
            }
            else
            {
                void* rdi_11 = arg2[0x22];
                int64_t rax_25;
                int64_t rcx_6;
                
                if (!rdi_11)
                {
                    rax_25 = 0x224;
                    rcx_6 = 0x220;
                }
                else
                {
                    uint64_t rax_24 = (core::ops::range::RangeBounds::contains::h3765a02d6a3b303a(
                        rdi_11, r12_5, r13_3) ^ 1) << 3;
                    rcx_6 = rax_24 + 0x218;
                    rax_25 = rax_24 + 0x21c;
                }
                
                r13_1 = var_94;
                r12_2 = rax_10;
                alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(
                    &var_9c, &var_98, &var_8c, *(rsi_4 + rcx_6), *(rsi_4 + rax_25));
            }
            
            goto label_846bbc;
        }
        
        r13_1 = var_94;
        label_846a91:
        r15_2 = var_88;
        r12_2 = rax_10;
        label_846bbc:
        zmm1_1 = var_8c;
        
        if (!(zmm1_1 <= 0f))
            goto label_846bca;
    }
    else
    {
        alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(&var_9c, 
            &var_98, &var_8c, rsi_4[0x84], rsi_4[0x85]);
        r13_1 = var_94;
        
        if (var_9c != var_98)
            goto label_846a91;
        
        r15_2 = var_88;
        r12_2 = rax_10;
        
        if (*var_9c[1] != *var_98[1] || var_9a != var_96 || *(rbp + 0x15) & 1)
            goto label_846bbc;
        
        int64_t r12_3 = arg2[0xf];
        void* r13_2 = arg2[0x1e];
        int32_t rax_17 = alacritty::display::content::RenderableContent::color::h883a873f7862c055(
            r12_3, r13_2, 0x101);
        var_9c = rax_17;
        var_9a = rax_17 >> 0x10;
        r12_2 = rax_10;
        r13_1 = var_94;
        int32_t rax_19 = alacritty::display::content::RenderableContent::color::h883a873f7862c055(
            r12_3, r13_2, 0x100);
        var_98 = rax_19;
        var_96 = rax_19 >> 0x10;
        zmm1_1 = 0x3f800000;
        label_846bca:
        void* rax_27 = arg2[0x1d];
        
        if (*(rax_27 + 0x28f))
            zmm1_1 = *(rax_27 + 0x1a4);
    }
    
    int32_t rax_29 = rax_9 + r15_2[2];
    
    if (rax_9 + r15_2[2] < 0)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    void* rax_30 = *rbp;
    var_88 = zmm1_1;
    int32_t rdi_14;
    
    if (!rax_30)
        rdi_14 = 3;
    else
        rdi_14 = *(rax_30 + 0x30);
    
    int64_t r15_3 = r15_2[1];
    int32_t rax_33 = core::option::Option$LT$T$GT$::map_or::hcbce6c8b470ad398(rdi_14, 
        var_9c | var_9a << 0x10, arg2, r13_1);
    void* rdi_15 = *rbp;
    uint64_t result;
    int64_t var_40;
    
    if (!rdi_15)
    {
        var_40 = 0;
        int64_t rax_34 = alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(rdi_15);
        var_78 = &var_40;
        int64_t var_70_1 = rax_34;
        
        if (!rax_34)
        {
            core::ptr::drop_in_place$LT$alacritty..display..content..RenderableCell..new..$u7b$$u7b$closure$u7d$$u7d$$GT$::ha65facaad3e948a7(&var_78);
            result = 0;
        }
        else
            result = alacritty::display::content::RenderableCell::new::_$u7b$$u7b$closure$u7d$$u7d$::hc01974c0677aac72(&var_40);
    }
    else
    {
        var_40 = *(rdi_15 + 0x18);
        alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(rdi_15);
        result = alacritty::display::content::RenderableCell::new::_$u7b$$u7b$closure$u7d$$u7d$::hc01974c0677aac72(&var_40);
    }
    *(arg1 + 0x24) = var_9a;
    *(arg1 + 0x22) = var_9c;
    *(arg1 + 0x27) = var_96;
    *(arg1 + 0x25) = var_98;
    *(arg1 + 0x1c) = r12_2;
    *arg1 = rax_29;
    arg1[1] = r15_3;
    arg1[3] = var_88;
    *(arg1 + 0x2a) = rax_33 >> 0x10;
    arg1[5] = rax_33;
    arg1[4] = r13_1;
    arg1[2] = result;
    return result;
}
