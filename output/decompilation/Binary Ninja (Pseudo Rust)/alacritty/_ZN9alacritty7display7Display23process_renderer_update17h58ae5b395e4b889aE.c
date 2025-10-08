
  fn alacritty::display::Display::process_renderer_update::h58ae5b395e4b889a(arg1: *mut c_void) -> u64

{
    let mut result: u64 = *arg1.byte_offset(0x834);
    let rbp: i8 = *arg1.byte_offset(0x835);
    *arg1.byte_offset(0x834) = 2;
    
    if result != 2
    {
        if (result & 1) != 0
        {
            let mut zmm1: f32 = *arg1.byte_offset(0x7a8);
            let mut rdx_1: i32 = zmm1;
            
            if zmm1 < 0f
            {
                rdx_1 = 0;
            }
            
            if zmm1 > 4.29496704e+09f
            {
                rdx_1 = -1;
            }
            
            if rdx_1 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            zmm1 = *arg1.byte_offset(0x7ac);
            let mut rcx_1: i32 = zmm1;
            
            if zmm1 < 0f
            {
                rcx_1 = 0;
            }
            
            if zmm1 > 4.29496704e+09f
            {
                rcx_1 = -1;
            }
            
            if rcx_1 == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            _$LT$glutin..surface..Surface$LT$T$GT$$u20$as$u20$glutin..surface..GlSurface$LT$T$GT$$GT$::resize::h22ed3e05cf1fbc09(arg1.byte_offset(0x560), *arg1.byte_offset(0x2a8), rdx_1, rcx_1);
        }
        
        alacritty::display::Display::make_current::h1def9f222502e6f9(arg1);
        
        if (rbp & 1) != 0
        {
            alacritty::display::Display::reset_glyph_cache::h8f02d6c622bdd6ab(arg1);
        }
        
        alacritty::renderer::Renderer::resize::h83e3b437aa0cd7e9(arg1.byte_offset(0xe0), 
            arg1.byte_offset(0x798));
        let mut var_90: i32;
        let mut var_8c: i32;
        let mut var_88: *mut i32;
        let mut var_68: *const i8;
        let mut var_40: *mut *mut c_void;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) > 2
        {
            var_90 = *arg1.byte_offset(0x7b8);
            var_8c = *arg1.byte_offset(0x7bc);
            var_88 = &var_90;
            let var_80_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            let var_78_1: *mut i32 = &var_8c;
            let var_70_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            var_40 = &data_c82428;
            let var_38_1: i64 = 2;
            let var_20_1: i64 = 0;
            let var_30_1: *mut *mut i32 = &var_88;
            let var_28_1: i64 = 2;
            let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c82668);
            var_68 = "alacritty::displayfailed to swap…";
            let var_60_1: i64 = 0x12;
            let var_58_1: *const i8 = "alacritty::displayfailed to swap…";
            let var_50_1: i64 = 0x12;
            let var_48_1: i64 = rax_1;
            log::__private_api::log::h0b6680b994d742b1(&var_40, 3, &var_68);
        }
        
        result = core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
        
        if result >= 3
        {
            var_90 = *arg1.byte_offset(0x7a8);
            var_8c = *arg1.byte_offset(0x7ac);
            var_88 = &var_90;
            let var_80_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            let var_78_2: *mut i32 = &var_8c;
            let var_70_2: fn(arg1: *mut i32, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            var_40 = &data_c82448;
            let var_38_2: i64 = 2;
            let var_20_2: i64 = 0;
            let var_30_2: *mut *mut i32 = &var_88;
            let var_28_2: i64 = 2;
            let rax_2: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c82680);
            var_68 = "alacritty::displayfailed to swap…";
            let var_60_2: i64 = 0x12;
            let var_58_2: *const i8 = "alacritty::displayfailed to swap…";
            let var_50_2: i64 = 0x12;
            let var_48_2: i64 = rax_2;
            return log::__private_api::log::h0b6680b994d742b1(&var_40, 3, &var_68);
        }
    }
    
    result
}
