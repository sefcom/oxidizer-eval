
  int64_t alacritty::renderer::Renderer::was_context_reset::h1958bb6f6d16285b(char arg1)

{
    if (!(arg1 & 1))
        return 0;
    
    int32_t rax = *alacritty::gl::storage::GetGraphicsResetStatus::he603977498c441ae.0();
    
    if (!rax)
        return 0;
    
    void* rax_3;
    int64_t rcx_1;
    
    if (rax - 0x8253 > 2)
    {
        rcx_1 = 7;
        rax_3 = "invalidGPU reset notifications a…";
    }
    else
    {
        uint64_t rcx = rax - 0x8253;
        rax_3 = *(&data_50f798 + (rcx << 2)) + &data_50f798;
        rcx_1 = *(&data_50f7a8 + (rcx << 3));
    }
    
    void* var_78 = rax_3;
    int64_t var_70 = rcx_1;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
    {
        void** var_68 = &var_78;
        int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        void** const var_30 = &data_c840e8;
        int64_t var_28_1 = 2;
        int64_t var_10_1 = 0;
        void*** var_20_1 = &var_68;
        int64_t var_18_1 = 1;
        int64_t rax_6 = log::__private_api::loc::h250021ea1f26630a(&data_c84108);
        char const* const var_58 = "alacritty::renderer3.3GL_KHR_deb…";
        int64_t var_50_1 = 0x13;
        char const* const var_48_1 = "alacritty::renderer3.3GL_KHR_deb…";
        int64_t var_40_1 = 0x13;
        int64_t var_38_1 = rax_6;
        log::__private_api::log::h0b6680b994d742b1(&var_30, 3, &var_58);
    }
    
    int64_t result;
    result = 1;
    return result;
}
