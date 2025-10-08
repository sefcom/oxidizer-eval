
  uint64_t uu_kill::print_signal::hbbda5da3d768aa27(char* arg1, uint64_t arg2)

{
    uint64_t rbp = arg2;
    char var_e0;
    core::num::_$LT$impl$u20$usize$GT$::from_ascii_radix::he77532141bbadde7(&var_e0, arg1, rbp);
    char rax = var_e0;
    void** const var_70 = &uucore::features::signals::ALL_SIGNALS::hb6c41a286543a4a8;
    void** const var_68 = &data_4e8200;
    int64_t var_60 = 0;
    uint64_t rax_2;
    int64_t* i;
    rax_2 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3441d36b832b537(&var_70);
    void*** var_b0;
    void** const* var_80;
    
    if (i)
    {
        uint64_t r14_1 = rax_2;
        uint64_t var_88_1 = rbp;
        
        do
        {
            uint64_t var_48 = r14_1;
            void** rdi_3 = *i;
            int64_t rsi_1 = i[1];
            void** var_40 = rdi_3;
            int64_t var_38_1 = rsi_1;
            char rax_5 = core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(rdi_3, rsi_1, arg1, rbp);
            int64_t var_d8_1;
            void** const** var_d0_1;
            char rax_6;
            
            if (!rax_5)
            {
                var_80 = &var_40;
                int64_t (* var_78_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
                var_e0 = &data_4e7640;
                var_d8_1 = 1;
                int64_t var_c0_1 = 0;
                var_d0_1 = &var_80;
                int64_t var_c8_1 = 1;
                core::option::Option$LT$T$GT$::map_or_else::h9ebb7b35ad4a5108(&var_b0, &var_e0);
                void*** r15_1 = var_b0;
                char* var_a8;
                int64_t var_a0;
                rax_6 = core::slice::ascii::_$LT$impl$u20$$u5b$u8$u5d$$GT$::eq_ignore_ascii_case::he629bb1728d24824(var_a8, var_a0, arg1, rbp);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h31b345ac50aa997d(r15_1, 
                    var_a8);
            }
            
            if (rax_5 || rax_6)
            {
                var_b0 = &var_48;
                uint64_t (* var_a8_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                var_e0 = &data_4e7650;
                int64_t var_d8_4 = 2;
                int64_t var_c0_4 = 0;
                void**** var_d0_4 = &var_b0;
                label_45d48f:
                int64_t var_c8_3 = 1;
                std::io::stdio::_print::h5e446ff973c02de6(&var_e0);
                return 0;
            }
            
            int64_t rax_7;
            uint64_t rdx_3;
            rax_7 = core::fmt::num::imp::_$LT$impl$u20$u64$GT$::_fmt::h284f18664830c6dd(r14_1, 
                &var_b0, 0x14);
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hf4ce7647a8e36fb0(&var_e0, rax_7, rdx_3);
            int64_t r15_2 = var_e0;
            char rax_8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha97fbaefa0d2ac9d(arg1, var_88_1, var_d8_1, var_d0_1);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h31b345ac50aa997d(r15_2, 
                var_d8_1);
            
            if (rax_8)
            {
                label_45d389:
                var_b0 = &var_40;
                int64_t (* var_a8_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h3a9a4fe6be7cab02;
                var_e0 = &data_4e7650;
                int64_t var_d8_2 = 2;
                int64_t var_c0_2 = 0;
                void**** var_d0_2 = &var_b0;
                goto label_45d48f;
            }
            
            int64_t var_d8;
            
            if (!rax && (var_d8 == r14_1 || var_d8 == r14_1 + 0x80))
                goto label_45d389;
            
            uint64_t rax_4;
            rax_4 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb3441d36b832b537(&var_70);
            r14_1 = rax_4;
            rbp = var_88_1;
        } while (i);
    }
    
    var_70 = nullptr;
    char* var_68_1 = arg1;
    uint64_t var_60_1 = rbp;
    char var_58_1 = 1;
    var_80 = &var_70;
    int64_t (* var_78_2)(int32_t* arg1, int64_t* arg2) =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    var_e0 = &data_4e7670;
    int64_t var_d8_3 = 2;
    int64_t var_c0_3 = 0;
    void** const** var_d0_3 = &var_80;
    int64_t var_c8_2 = 1;
    core::option::Option$LT$T$GT$::map_or_else::h9ebb7b35ad4a5108(&var_b0, &var_e0);
    int32_t var_98_1 = 1;
    return alloc::boxed::Box$LT$T$GT$::new::h4d33bae44fdeaf98(&var_b0);
}
