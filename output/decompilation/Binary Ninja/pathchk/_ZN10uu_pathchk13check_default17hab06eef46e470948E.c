
  uint64_t uu_pathchk::check_default::hab06eef46e470948(int64_t arg1, int64_t arg2)

{
    int64_t var_140;
    alloc::str::join_generic_copy::h3bd5640a2d2f1574(&var_140, arg1, arg2);
    int64_t var_130;
    int64_t rax = var_130;
    int64_t var_c8 = rax;
    int32_t rbx_1;
    int64_t var_138;
    void* var_128;
    int64_t var_118;
    char const (** const var_f8)[0xa3];
    void* const var_c0;
    
    if (rax <= 0x1000)
    {
        if (rax)
            goto label_45645a;
        
        std::fs::symlink_metadata::h514eccbfabb43f9e(&var_c0, &var_140);
        void* const rdi_4 = var_c0;
        int64_t var_b8;
        
        if (rdi_4 != 2)
        {
            rax = core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h59adaa044fe599ec(rdi_4, var_b8);
            label_45645a:
            int64_t var_120;
            
            if (!arg2)
            {
                label_456488:
                var_120 = rax;
                rbx_1 = uu_pathchk::check_searchable::h0902f70b6adfdabe(var_138);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_140, 
                    var_138);
            }
            else
            {
                int64_t rcx_2 = 0;
                
                while (true)
                {
                    rax = *(arg1 + rcx_2 + 0x10);
                    
                    if (rax > 0x1000)
                    {
                        var_120 = rax;
                        var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                        int64_t rcx_3 = *(arg1 + rcx_2 + 8);
                        var_118 = 0;
                        int64_t var_110_2 = rcx_3;
                        int64_t var_108_2 = rax;
                        char var_100_2 = 1;
                        var_c0 = &data_41703c;
                        uint64_t (* var_b8_3)(int32_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h4ee7c3ea607dee75;
                        int64_t* var_b0_3 = &var_120;
                        uint64_t (* var_a8_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                        int64_t* var_a0_2 = &var_118;
                        int64_t (* var_98_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                        var_f8 = &data_4dea78;
                        int64_t var_f0_2 = 4;
                        int64_t var_d8_2 = 0;
                        void* const* var_e8_2 = &var_c0;
                        int64_t var_e0_2 = 3;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(&var_128, &var_f8));
                        break;
                    }
                    
                    rcx_2 += 0x18;
                    
                    if (arg2 * 0x18 == rcx_2)
                        goto label_456488;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_140, 
                    var_138);
                rbx_1 = 0;
            }
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h59adaa044fe599ec(2, var_b8);
            var_f8 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
            var_c0 = &data_4dead8;
            int64_t var_b8_2 = 1;
            int64_t var_b0_2 = 8;
            int64_t var_a8;
            var_a8 = {0};
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
                &var_f8, &var_c0));
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_140, 
                var_138);
            rbx_1 = 0;
        }
    }
    else
    {
        var_128 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        var_118 = 0;
        int64_t var_110_1 = var_138;
        int64_t var_108_1 = rax;
        char var_100_1 = 1;
        var_c0 = &data_41703c;
        uint64_t (* var_b8_1)(int32_t* arg1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h6f30f0a695ff7937;
        int64_t* var_b0_1 = &var_c8;
        uint64_t (* var_a8_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_a0_1 = &var_118;
        int64_t (* var_98_1)(int32_t* arg1, int64_t* arg2) =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        var_f8 = &data_4dea28;
        int64_t var_f0_1 = 4;
        int64_t var_d8_1 = 0;
        void* const* var_e8_1 = &var_c0;
        int64_t var_e0_1 = 3;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
            &var_128, &var_f8));
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_140, var_138);
        rbx_1 = 0;
    }
    return rbx_1;
}
