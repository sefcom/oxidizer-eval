
  uint64_t uu_pathchk::check_basic::h0fc1234dee308fd2(void* arg1, int64_t arg2)

{
    void* r14 = arg1;
    int64_t var_a0;
    alloc::str::join_generic_copy::h3bd5640a2d2f1574(&var_a0, r14, arg2);
    int64_t var_90;
    int64_t var_58 = var_90;
    int64_t var_98;
    char const* const var_d0;
    char const (** const var_88)[0xa3];
    void* var_40;
    
    if (var_90 > 0x100)
    {
        var_40 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        var_d0 = &data_4176f0[0x28];
        uint64_t (* var_c8_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_c0_1 = &var_58;
        uint64_t (* var_b8_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        int64_t* var_b0_1 = &var_a0;
        int64_t (* var_a8_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_88 = &data_4dea28;
        int64_t var_80_1 = 4;
        int64_t var_68_1 = 0;
        char const* const* var_78_1 = &var_d0;
        int64_t var_70_1 = 3;
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
            &var_40, &var_88));
    }
    else if (!var_90)
    {
        var_88 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
        var_d0 = &data_4dea68;
        int64_t var_c8_2 = 1;
        int64_t var_c0_2 = 8;
        int64_t var_b8;
        var_b8 = {0};
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(
            &var_88, &var_d0));
    }
    else
    {
        void* r15_1 = r14 + arg2 * 0x18;
        char i;
        
        do
        {
            void* r12_1 = r14 + 0x18;
            
            if (r14 == r15_1)
                r12_1 = r14;
            
            if (r14 == r15_1)
            {
                int32_t rbx_1 = uu_pathchk::check_searchable::h0902f70b6adfdabe(var_98);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_a0, 
                    var_98);
                return rbx_1;
            }
            
            int64_t rsi_2 = *(r14 + 0x10);
            int64_t var_50 = rsi_2;
            
            if (rsi_2 > 0xe)
            {
                void* var_48 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
                int64_t rax_4 = *(r14 + 8);
                var_40 = nullptr;
                int64_t var_38_1 = rax_4;
                int64_t var_30_1 = rsi_2;
                char var_28_1 = 1;
                var_d0 = &data_4177d0;
                uint64_t (* var_c8_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                int64_t* var_c0_3 = &var_50;
                uint64_t (* var_b8_2)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                void** var_b0_2 = &var_40;
                int64_t (* var_a8_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_88 = &data_4dea78;
                int64_t var_80_2 = 4;
                int64_t var_68_2 = 0;
                char const* const* var_78_2 = &var_d0;
                int64_t var_70_2 = 3;
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..io..error..Error$GT$$GT$::h7a4400e9f2ab9568(_$LT$std..io..stdio..Stderr$u20$as$u20$std..io..Write$GT$::write_fmt::hebff3e936d8559e8(&var_48, &var_88));
                break;
            }
            
            i = uu_pathchk::check_portable_chars::h39a248ee7ea009b7(*(r14 + 8), rsi_2);
            r14 = r12_1;
        } while (i);
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h6647f07fb02b5c78(var_a0, var_98);
    return 0;
}
