
  fn alacritty::renderer::Renderer::supports_robustness::h3e8a46a96e5f1a8d() -> u64

{
    let mut var_64: i32 = 0;
    let mut rbx: i64;
    let mut var_60: *const i8;
    let mut var_38: *mut *mut c_void;
    
    if alacritty::renderer::GlExtensions::contains::h085256d27559bf27(
        "GL_KHR_robustness[gl_render] ala…", 0x11) == 0
    {
        var_64 = 0x8261;
        'label_86d520:
        rbx = 0;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) > 2
        {
            var_38 = &data_c84130;
            let var_30_2: i64 = 1;
            let var_28_2: i64 = 8;
            let var_20_2: i128 = {0};
            let rax_5: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84158);
            var_60 = "alacritty::renderer3.3GL_KHR_deb…";
            let var_58_2: i64 = 0x13;
            let var_50_2: *const i8 = "alacritty::renderer3.3GL_KHR_deb…";
            let var_48_2: i64 = 0x13;
            let var_40_2: i64 = rax_5;
            log::__private_api::log::h0b6680b994d742b1(&var_38, 3, &var_60);
            return 0;
        }
    }
    else
    {
        *alacritty::gl::storage::GetIntegerv::h28c461c932844c37.0(0x8256, &var_64);
        
        if var_64 != 0x8252
        {
            goto 'label_86d520;
        }
        
        rbx = 1;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) > 2
        {
            var_38 = &data_c84120;
            let var_30_1: i64 = 1;
            let var_28_1: i64 = 8;
            let var_20_1: i128 = {0};
            let rax_2: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84140);
            var_60 = "alacritty::renderer3.3GL_KHR_deb…";
            let var_58_1: i64 = 0x13;
            let var_50_1: *const i8 = "alacritty::renderer3.3GL_KHR_deb…";
            let var_48_1: i64 = 0x13;
            let var_40_1: i64 = rax_2;
            log::__private_api::log::h0b6680b994d742b1(&var_38, 3, &var_60);
        }
    }
    rbx
}
