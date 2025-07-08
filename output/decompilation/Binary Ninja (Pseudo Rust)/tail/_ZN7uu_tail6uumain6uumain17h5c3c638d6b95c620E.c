
  fn uu_tail::uumain::uumain::h5c3c638d6b95c620(arg1: i64) -> *mut i128

{
    let mut var_f8: *mut *mut c_void;
    uu_tail::args::parse_args::h21b79a77363e2b6a(&var_f8, arg1);
    let rcx: *mut *mut c_void = var_f8;
    let var_f0: *mut i128;
    
    if rcx == 5
    {
        return var_f0;
    }
    
    let var_b0: i64;
    let var_50_1: i64 = var_b0;
    let var_c0: i128;
    let var_60_1: i128 = var_c0;
    let var_d0: i128;
    let var_70_1: i128 = var_d0;
    let mut var_e0: i128;
    let var_80_1: i128 = var_e0;
    let mut var_98: *mut *mut c_void = rcx;
    let var_90_1: *mut i128 = var_f0;
    let var_e8: i64;
    let var_88_1: i64 = var_e8;
    uu_tail::args::Settings::check_warnings::hc95159a783f4a1c8(&var_98);
    let rax_1: i8 = uu_tail::args::Settings::verify::h67589dab63f9aa61(&var_98);
    let mut rbx_1: *mut i128;
    
    if rax_1 == 2
    {
        rbx_1 = nullptr;
    }
    else
    {
        if rax_1 != 1
        {
            let mut rax_5: *mut i128;
            let mut rdx_3: i64;
            rax_5 = uu_tail::uu_tail::h84841135fb1b0c3f(&var_98);
            core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h333061858f2bc617(&var_98);
            return rax_5;
        }
        
        let mut var_48: i64 = 0;
        let var_40_1: *const i8 = "-cannot follow ";
        let var_38_1: i64 = 1;
        let var_30_1: i8 = 1;
        let mut var_a8: *mut i64 = &var_48;
        let var_a0_1: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
        var_f8 = &data_5b85d0;
        let var_f0_1: i64 = 2;
        *var_e0[8] = 0;
        let var_e8_1: *mut *mut i64 = &var_a8;
        var_e0 = 1;
        let mut var_28: i128;
        core::option::Option$LT$T$GT$::map_or_else::h0da0019156620c79(&var_28, &var_f8);
        var_e0 = 1;
        var_f8 = var_28;
        let var_18: i64;
        let var_e8_2: i64 = var_18;
        rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h6de0ca5f93407dd6(&var_f8);
    }
    
    core::ptr::drop_in_place$LT$uu_tail..args..Settings$GT$::h333061858f2bc617(&var_98);
    rbx_1
}
