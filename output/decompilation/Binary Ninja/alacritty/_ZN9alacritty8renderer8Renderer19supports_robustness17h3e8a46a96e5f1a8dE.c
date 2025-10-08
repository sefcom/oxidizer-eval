
  uint64_t alacritty::renderer::Renderer::supports_robustness::h3e8a46a96e5f1a8d()

{
    int32_t var_64 = 0;
    int64_t rbx;
    char const* const var_60;
    void** const var_38;
    
    if (!alacritty::renderer::GlExtensions::contains::h085256d27559bf27(
        "GL_KHR_robustness[gl_render] ala…", 0x11))
    {
        var_64 = 0x8261;
        label_86d520:
        rbx = 0;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) > 2)
        {
            var_38 = &data_c84130;
            int64_t var_30_2 = 1;
            int64_t var_28_2 = 8;
            int128_t var_20_2 = {0};
            int64_t rax_5 = log::__private_api::loc::h250021ea1f26630a(&data_c84158);
            var_60 = "alacritty::renderer3.3GL_KHR_deb…";
            int64_t var_58_2 = 0x13;
            char const* const var_50_2 = "alacritty::renderer3.3GL_KHR_deb…";
            int64_t var_48_2 = 0x13;
            int64_t var_40_2 = rax_5;
            log::__private_api::log::h0b6680b994d742b1(&var_38, 3, &var_60);
            return 0;
        }
    }
    else
    {
        *alacritty::gl::storage::GetIntegerv::h28c461c932844c37.0(0x8256, &var_64);
        
        if (var_64 != 0x8252)
            goto label_86d520;
        
        rbx = 1;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) > 2)
        {
            var_38 = &data_c84120;
            int64_t var_30_1 = 1;
            int64_t var_28_1 = 8;
            int128_t var_20_1 = {0};
            int64_t rax_2 = log::__private_api::loc::h250021ea1f26630a(&data_c84140);
            var_60 = "alacritty::renderer3.3GL_KHR_deb…";
            int64_t var_58_1 = 0x13;
            char const* const var_50_1 = "alacritty::renderer3.3GL_KHR_deb…";
            int64_t var_48_1 = 0x13;
            int64_t var_40_1 = rax_2;
            log::__private_api::log::h0b6680b994d742b1(&var_38, 3, &var_60);
        }
    }
    return rbx;
}
