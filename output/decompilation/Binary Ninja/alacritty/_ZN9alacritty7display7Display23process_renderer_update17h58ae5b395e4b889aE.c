
  uint64_t alacritty::display::Display::process_renderer_update::h58ae5b395e4b889a(void* arg1)

{
    uint64_t result = *(arg1 + 0x834);
    char rbp = *(arg1 + 0x835);
    *(arg1 + 0x834) = 2;
    
    if (result != 2)
    {
        if (result & 1)
        {
            float zmm1 = *(arg1 + 0x7a8);
            int32_t rdx_1 = zmm1;
            
            if (zmm1 < 0f)
                rdx_1 = 0;
            
            if (zmm1 > 4.29496704e+09f)
                rdx_1 = -1;
            
            if (!rdx_1)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            zmm1 = *(arg1 + 0x7ac);
            int32_t rcx_1 = zmm1;
            
            if (zmm1 < 0f)
                rcx_1 = 0;
            
            if (zmm1 > 4.29496704e+09f)
                rcx_1 = -1;
            
            if (!rcx_1)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$glutin..surface..Surface$LT$T$GT$$u20$as$u20$glutin..surface..GlSurface$LT$T$GT$$GT$::resize::h22ed3e05cf1fbc09(arg1 + 0x560, *(arg1 + 0x2a8), rdx_1, rcx_1);
        }
        
        alacritty::display::Display::make_current::h1def9f222502e6f9(arg1);
        
        if (rbp & 1)
            alacritty::display::Display::reset_glyph_cache::h8f02d6c622bdd6ab(arg1);
        
        alacritty::renderer::Renderer::resize::h83e3b437aa0cd7e9(arg1 + 0xe0, arg1 + 0x798);
        int32_t var_90;
        int32_t var_8c;
        int32_t* var_88;
        char const* const var_68;
        void** const var_40;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) > 2)
        {
            var_90 = *(arg1 + 0x7b8);
            var_8c = *(arg1 + 0x7bc);
            var_88 = &var_90;
            int64_t (* var_80_1)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            int32_t* var_78_1 = &var_8c;
            int64_t (* var_70_1)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            var_40 = &data_c82428;
            int64_t var_38_1 = 2;
            int64_t var_20_1 = 0;
            int32_t** var_30_1 = &var_88;
            int64_t var_28_1 = 2;
            int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c82668);
            var_68 = "alacritty::displayfailed to swap…";
            int64_t var_60_1 = 0x12;
            char const* const var_58_1 = "alacritty::displayfailed to swap…";
            int64_t var_50_1 = 0x12;
            int64_t var_48_1 = rax_1;
            log::__private_api::log::h0b6680b994d742b1(&var_40, 3, &var_68);
        }
        
        result = core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
        
        if (result >= 3)
        {
            var_90 = *(arg1 + 0x7a8);
            var_8c = *(arg1 + 0x7ac);
            var_88 = &var_90;
            int64_t (* var_80_2)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            int32_t* var_78_2 = &var_8c;
            int64_t (* var_70_2)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            var_40 = &data_c82448;
            int64_t var_38_2 = 2;
            int64_t var_20_2 = 0;
            int32_t** var_30_2 = &var_88;
            int64_t var_28_2 = 2;
            int64_t rax_2 = log::__private_api::loc::h250021ea1f26630a(&data_c82680);
            var_68 = "alacritty::displayfailed to swap…";
            int64_t var_60_2 = 0x12;
            char const* const var_58_2 = "alacritty::displayfailed to swap…";
            int64_t var_50_2 = 0x12;
            int64_t var_48_2 = rax_2;
            return log::__private_api::log::h0b6680b994d742b1(&var_40, 3, &var_68);
        }
    }
    
    return result;
}
