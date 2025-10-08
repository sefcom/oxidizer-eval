
  int64_t* alacritty::migrate::move_value::ha75dcc59eab66952(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4)

{
    int64_t* r14 = arg2;
    int64_t rax_1 = *arg2 - 8;
    int64_t rcx = 1;
    
    if (rax_1 < 4)
        rcx = rax_1;
    
    void** const var_240;
    void** const rax_2;
    int64_t* rdi;
    
    if (rcx == 2)
    {
        rdi = &r14[1];
        rax_2 = &data_c83620;
    }
    else
    {
        if (rcx != 1 || rax_1 >= -6)
        {
            var_240 = &data_c83540;
            int64_t var_238_1 = 1;
            int64_t var_230_1 = 8;
            int128_t var_228_1 = {0};
            core::panicking::panic_fmt::h96f341d36638c225(&var_240);
            /* no return */
        }
        
        rax_2 = &data_c83560;
        rdi = r14;
    }
    
    int64_t* result;
    int32_t* rdx_1;
    result = rax_2[0xd](rdi, *arg3, arg3[1]);
    
    if (!result)
        *arg1 = -0x8000000000000000;
    else
    {
        int64_t* r12_1 = rdx_1;
        
        if (*rdx_1 == 0xa)
            r12_1[0x15] = 1;
        
        int64_t var_2a0;
        alacritty::migrate::move_value::_$u7b$$u7b$closure$u7d$$u7d$::hec025e6fa515b142(&var_2a0, 
            result, rdx_1);
        void var_190;
        memcpy(&var_190, r12_1, 0xb0);
        *r12_1 = 8;
        memcpy(&r12_1[1], &var_240, 0xa8);
        int64_t var_320 = arg4;
        int64_t var_318_1 = arg4 + 0x20;
        int64_t var_310_1 = 0;
        int64_t rax_3;
        int64_t* rdx_2;
        rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h013b43a415d12e5f(&var_320);
        int128_t var_270;
        
        if (!rdx_2)
        {
            label_8605ac:
            *arg1 = -0x8000000000000000;
            result =
                core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hf5a3277b0f9450bc(&var_190);
            label_860723:
            
            if (var_2a0 != -0x7ffffffffffffffc)
            {
                core::ptr::drop_in_place$LT$toml_edit..repr..Decor$GT$::hb42f26b80888f4bb(&var_2a0);
                return core::ptr::drop_in_place$LT$toml_edit..repr..Decor$GT$::hb42f26b80888f4bb(
                    &var_270);
            }
        }
        else
        {
            void** const rbp_1;
            void* r13_1;
            
            while (true)
            {
                int64_t rcx_2 = *r14 - 8;
                int64_t rsi_4 = 1;
                
                if (rcx_2 < 4)
                    rsi_4 = rcx_2;
                
                if (rsi_4 == 1)
                {
                    r13_1 = r14;
                    rbp_1 = &data_c83560;
                    
                    if (rcx_2 >= -6)
                    {
                        label_86076f:
                        var_240 = &data_c83550;
                        int64_t var_238 = 1;
                        int64_t var_230 = 8;
                        int128_t var_228 = {0};
                        core::panicking::panic_fmt::h96f341d36638c225(&var_240);
                        /* no return */
                    }
                }
                else
                {
                    if (rsi_4 != 2)
                        goto label_86076f;
                    
                    r13_1 = &r14[1];
                    rbp_1 = &data_c83620;
                }
                
                if (rax_3 == 1)
                    break;
                
                int32_t* rax_4 = toml_edit::index::_$LT$impl$u20$core..ops..index..IndexMut$LT$I$GT$$u20$for$u20$toml_edit..item..Item$GT$::index_mut::h8dd559c352e0eb4a(r14, rdx_2);
                toml_edit::item::table::hd1abaff1c38d3b6a(&var_240);
                r14 = toml_edit::item::Item::or_insert::hed790d3213bb5c8e(rax_4, &var_240);
                rax_3 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h013b43a415d12e5f(&var_320);
                
                if (!rdx_2)
                    goto label_8605ac;
            }
            
            int64_t r14_2 = *rdx_2;
            int64_t r15_2 = rdx_2[1];
            memcpy(&var_240, &var_190, 0xb0);
            void var_e0;
            rbp_1[0xf](&var_e0, r13_1, r14_2, r15_2, &var_240);
            core::ptr::drop_in_place$LT$core..option..Option$LT$toml_edit..item..Item$GT$$GT$::h96144d7d1d680041(&var_e0);
            int64_t temp0_1 = var_2a0;
            
            if (temp0_1 != -0x7ffffffffffffffc)
            {
                int128_t zmm3_1 = var_270;
                int128_t var_308_1 = var_2a0;
                void* rax_8 = rbp_1[0x17](r13_1, *rdx_2, rdx_2[1]);
                
                if (!rax_8)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                core::ptr::drop_in_place$LT$toml_edit..repr..Decor$GT$::hb42f26b80888f4bb(rax_8
                    + 0x30);
                int128_t var_280;
                *(rax_8 + 0x50) = var_280;
                int128_t var_290;
                *(rax_8 + 0x40) = var_290;
                *(rax_8 + 0x30) = var_308_1;
                core::ptr::drop_in_place$LT$toml_edit..repr..Decor$GT$::hb42f26b80888f4bb(rax_8
                    + 0x60);
                int128_t var_250;
                *(rax_8 + 0x80) = var_250;
                int128_t var_260;
                *(rax_8 + 0x70) = var_260;
                *(rax_8 + 0x60) = zmm3_1;
            }
            
            result = arg1;
            *result = -0x8000000000000000;
            
            if (!(temp0_1 != -0x7ffffffffffffffc))
                goto label_860723;
        }
    }
    
    return result;
}
