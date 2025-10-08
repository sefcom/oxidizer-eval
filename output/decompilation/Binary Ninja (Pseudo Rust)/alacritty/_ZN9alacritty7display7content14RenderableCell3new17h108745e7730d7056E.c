
  fn alacritty::display::content::RenderableCell::new::h108745e7730d7056(arg1: *mut u64, arg2: *mut i64, arg3: *mut i64) -> u64

{
    let mut r15: *mut i64 = arg3;
    let rbp: *mut i64 = *arg3;
    let rax: i32 = alacritty::display::content::RenderableCell::compute_fg_rgb::h3800f23b34f30751(
        arg2, rbp[1], *rbp.byte_offset(0x14));
    let mut var_9c: i16 = rax;
    let mut var_9a: u8 = rax >> 0x10;
    let rax_2: i32 = alacritty::display::content::RenderableCell::compute_bg_rgb::h1db88f8de20295e8(
        arg2[0xf], arg2[0x1e], *rbp.byte_offset(0xc));
    let mut var_98: i16 = rax_2;
    let mut var_96: u8 = rax_2 >> 0x10;
    let r12: u32 = *rbp.byte_offset(0x14);
    let mut var_88: *mut i64 = r15;
    let mut var_94: u32;
    let mut var_8c: i32;
    let mut var_78: i32;
    let mut r13: i8;
    let mut rax_6: i8;
    
    if (r12 & 1) != 0
    {
        core::intrinsics::typed_swap_nonoverlapping::hf7f74993e905442a(&var_9c, &var_98);
        var_8c = 0x3f800000;
        rax_6 = arg2[0x17];
        
        if rax_6 == 2
        {
            var_94 = r12;
            r13 = 0;
        }
        else
        {
            'label_8468e0:
            let var_68_1: i128 = *arg2.byte_offset(0xa8);
            var_78 = *arg2.byte_offset(0x98);
            let mut var_57_1: i32 = *arg2.byte_offset(0xb9);
            var_57_1 = *arg2.byte_offset(0xbc);
            let var_58_1: i8 = rax_6;
            r13 = alacritty_terminal::selection::SelectionRange::contains_cell::h17cee683c4e8c58c(
                &var_78, r15, arg2[0x10], arg2[0x11], arg2[0x23]);
            var_94 = *rbp.byte_offset(0x14);
        }
    }
    else
    {
        let r15_1: *mut c_void = arg2[0x1d];
        var_78 = *rbp.byte_offset(0xc);
        let mut zmm0_1: i128 = {0};
        
        if _$LT$vte..ansi..Color$u20$as$u20$core..cmp..PartialEq$GT$::eq::heb01e5a1191ca78e(
            &var_78, &data_4eb2b4[0x18]) == 0
        {
            if *r15_1.byte_offset(0x28f) != 1
            {
                zmm0_1 = 0x3f800000;
            }
            else
            {
                zmm0_1 = *r15_1.byte_offset(0x1a4);
            }
        }
        
        var_8c = zmm0_1;
        r15 = var_88;
        rax_6 = arg2[0x17];
        
        if rax_6 != 2
        {
            goto 'label_8468e0;
        }
        
        var_94 = r12;
        r13 = 0;
    }
    let rax_9: i32 = arg2[9];
    let rsi_4: *mut i32 = arg2[0x1d];
    let rax_10: i32 = rbp[2];
    let mut rax_13: i32;
    let mut rdx_5: i8;
    
    if arg2[4] != -0x7fffffffffffffff
    {
        rax_13 = alacritty::display::content::Hint::advance::h8bcb95d1876cc7ab(&arg2[4], -(rax_9), 
            *(arg2[0x1f] + 8), var_88[1], var_88[2]);
    }
    
    let mut r12_2: i32;
    let mut r13_1: u32;
    let mut r15_2: *mut i64;
    
    if arg2[4] != -0x7fffffffffffffff && rax_13 != 0x110001
    {
        if (rdx_5 & 1) == 0
        {
            r13_1 = var_94;
            r15_2 = var_88;
            
            if rax_13 != 0x110000
            {
                alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(
                    &var_9c, &var_98, &var_8c, rsi_4[0x8c], rsi_4[0x8d]);
            }
            else
            {
                r13_1 |= 8;
            }
        }
        else
        {
            alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(
                &var_9c, &var_98, &var_8c, rsi_4[0x8a], rsi_4[0x8b]);
            r13_1 = var_94;
            r15_2 = var_88;
        }
        
        let mut rax_26: i32 = rax_10;
        
        if rax_13 != 0x110000
        {
            rax_26 = rax_13;
        }
        
        r12_2 = rax_26;
        goto 'label_846bbc;
    }
    
    let mut zmm1_1: i128;
    
    if r13 == 0
    {
        if *arg2 != -0x7fffffffffffffff
        {
            r15_2 = var_88;
            let r12_5: i64 = r15_2[1];
            let r13_3: i32 = r15_2[2];
            
            if alacritty::display::content::HintMatches::advance::hba48573630649a2f(arg2, r12_5, 
                r13_3) == 0
            {
                r13_1 = var_94;
                r12_2 = rax_10;
            }
            else
            {
                let rdi_11: *mut c_void = arg2[0x22];
                let mut rax_25: i64;
                let mut rcx_6: i64;
                
                if rdi_11 == 0
                {
                    rax_25 = 0x224;
                    rcx_6 = 0x220;
                }
                else
                {
                    let rax_24: u64 = (core::ops::range::RangeBounds::contains::h3765a02d6a3b303a(
                        rdi_11, r12_5, r13_3) ^ 1) << 3;
                    rcx_6 = rax_24 + 0x218;
                    rax_25 = rax_24 + 0x21c;
                }
                
                r13_1 = var_94;
                r12_2 = rax_10;
                alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(
                    &var_9c, &var_98, &var_8c, *rsi_4.byte_offset(rcx_6), 
                    *rsi_4.byte_offset(rax_25));
            }
            
            goto 'label_846bbc;
        }
        
        r13_1 = var_94;
        'label_846a91:
        r15_2 = var_88;
        r12_2 = rax_10;
        'label_846bbc:
        zmm1_1 = var_8c;
        
        if !(zmm1_1 <= 0f)
        {
            goto 'label_846bca;
        }
    }
    else
    {
        alacritty::display::content::RenderableCell::compute_cell_rgb::h05954dccd224f102(&var_9c, 
            &var_98, &var_8c, rsi_4[0x84], rsi_4[0x85]);
        r13_1 = var_94;
        
        if var_9c != var_98
        {
            goto 'label_846a91;
        }
        
        r15_2 = var_88;
        r12_2 = rax_10;
        
        if *var_9c[1] != *var_98[1] || var_9a != var_96 || (*rbp.byte_offset(0x15) & 1) != 0
        {
            goto 'label_846bbc;
        }
        
        let r12_3: i64 = arg2[0xf];
        let r13_2: *mut c_void = arg2[0x1e];
        let rax_17: i32 = alacritty::display::content::RenderableContent::color::h883a873f7862c055(
            r12_3, r13_2, 0x101);
        var_9c = rax_17;
        var_9a = rax_17 >> 0x10;
        r12_2 = rax_10;
        r13_1 = var_94;
        let rax_19: i32 = alacritty::display::content::RenderableContent::color::h883a873f7862c055(
            r12_3, r13_2, 0x100);
        var_98 = rax_19;
        var_96 = rax_19 >> 0x10;
        zmm1_1 = 0x3f800000;
        'label_846bca:
        let rax_27: *mut c_void = arg2[0x1d];
        
        if *rax_27.byte_offset(0x28f) != 0
        {
            zmm1_1 = *rax_27.byte_offset(0x1a4);
        }
    }
    
    let rax_29: i32 = rax_9 + r15_2[2];
    
    if rax_9 + r15_2[2] < 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let rax_30: *mut c_void = *rbp;
    var_88 = zmm1_1;
    let mut rdi_14: i32;
    
    if rax_30 == 0
    {
        rdi_14 = 3;
    }
    else
    {
        rdi_14 = *rax_30.byte_offset(0x30);
    }
    
    let r15_3: i64 = r15_2[1];
    let rax_33: i32 = core::option::Option$LT$T$GT$::map_or::hcbce6c8b470ad398(rdi_14, 
        var_9c | var_9a << 0x10, arg2, r13_1);
    let rdi_15: *mut c_void = *rbp;
    let mut result: u64;
    let mut var_40: i64;
    
    if rdi_15 == 0
    {
        var_40 = 0;
        let rax_34: i64 =
            alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(rdi_15);
        var_78 = &var_40;
        let var_70_1: i64 = rax_34;
        
        if rax_34 == 0
        {
            core::ptr::drop_in_place$LT$alacritty..display..content..RenderableCell..new..$u7b$$u7b$closure$u7d$$u7d$$GT$::ha65facaad3e948a7(&var_78);
            result = 0;
        }
        else
        {
            result = alacritty::display::content::RenderableCell::new::_$u7b$$u7b$closure$u7d$$u7d$::hc01974c0677aac72(&var_40);
        }
    }
    else
    {
        var_40 = *rdi_15.byte_offset(0x18);
        alacritty_terminal::term::cell::Cell::hyperlink::h5de1efd02cb51dbc(rdi_15);
        result = alacritty::display::content::RenderableCell::new::_$u7b$$u7b$closure$u7d$$u7d$::hc01974c0677aac72(&var_40);
    }
    *arg1.byte_offset(0x24) = var_9a;
    *arg1.byte_offset(0x22) = var_9c;
    *arg1.byte_offset(0x27) = var_96;
    *arg1.byte_offset(0x25) = var_98;
    *arg1.byte_offset(0x1c) = r12_2;
    *arg1 = rax_29;
    arg1[1] = r15_3;
    arg1[3] = var_88;
    *arg1.byte_offset(0x2a) = rax_33 >> 0x10;
    arg1[5] = rax_33;
    arg1[4] = r13_1;
    arg1[2] = result;
    result
}
