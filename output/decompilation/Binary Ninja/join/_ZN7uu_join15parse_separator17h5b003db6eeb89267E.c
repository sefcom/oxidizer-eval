
  void uu_join::parse_separator::h5b003db6eeb89267(int64_t* arg1, char* arg2, int64_t arg3)

{
    size_t* rax;
    
    if (arg3 == 1)
    {
        rax = *arg2;
        *arg1 = -0x8000000000000000;
        arg1[1] = rax;
    }
    else if (arg3)
    {
        char const (** const var_90)[0xa0];
        std::ffi::os_str::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$std..ffi..os_str..OsStr$GT$$u20$for$u20$$RF$str$GT$::try_from::h660bab9c45707695(&var_90, arg2, arg3);
        
        if (!var_90)
        {
            int64_t var_88;
            int64_t var_60 = var_88;
            size_t var_80;
            size_t var_58_1 = var_80;
            int64_t var_a0 = var_88;
            int64_t var_98_1 = var_88 + var_80;
            int32_t rax_2;
            int32_t rdx;
            rax_2 = core::str::validations::next_code_point::hd261ae405076a208(&var_a0, arg1);
            
            if (!rax_2 || rdx == 0x110000)
            {
                core::option::expect_failed::h9e03a1f6ff88dbcf("valid string with at least one b…");
                /* no return */
            }
            
            int32_t rdx_1;
            rax = core::str::validations::next_code_point::hd261ae405076a208(&var_a0, arg1);
            
            if (!rax)
                _$LT$alloc..vec..Vec$LT$u8$GT$$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h4f184cf760c10fc8(arg1, var_88, var_80);
            else if (rdx != 0x5c || rdx_1 != 0x30)
            {
                int64_t* var_50 = &var_60;
                int64_t (* var_48_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h096fdbe421567f22;
                var_90 = &data_535468;
                int64_t var_88_1 = 1;
                int64_t var_70_1 = 0;
                int64_t** var_80_1 = &var_50;
                int32_t var_78;
                var_78 = 1;
                void var_40;
                core::option::Option$LT$T$GT$::map_or_else::h84da32fb4d9c85b4(&var_40, &var_90);
                int32_t var_28_1 = 1;
                arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_40);
                arg1[2] = &data_5352b8;
                *arg1 = -0x7ffffffffffffffc;
            }
            else
            {
                *arg1 = -0x8000000000000000;
                arg1[1] = 0;
            }
        }
        else
        {
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2c5bde50ee02e8d6(
                &var_90, "non-UTF-8 multi-byte tabvalid st…", 0x18);
            int32_t var_78_1 = 1;
            arg1[1] = alloc::boxed::Box$LT$T$GT$::new::h7aaaeb17d3fe937d(&var_90);
            arg1[2] = &data_5352b8;
            *arg1 = -0x7ffffffffffffffc;
        }
    }
    else
        *arg1 = -0x7ffffffffffffffe;
}
