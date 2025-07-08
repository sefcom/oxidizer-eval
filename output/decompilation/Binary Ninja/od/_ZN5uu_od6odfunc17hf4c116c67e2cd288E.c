
  int32_t* uu_od::odfunc::hf4c116c67e2cd288(int64_t* arg1, void* arg2, void* arg3)

{
    int64_t var_80 = 0;
    int64_t var_78 = 1;
    int64_t var_70 = 0;
    void* const r14 = *(arg3 + 0x18);
    void* rax = *(arg3 + 0x28);
    char rax_1 = *(arg3 + 0x30);
    char rbp = 0;
    
    while (true)
    {
        int64_t var_50;
        uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h15c7373ba30f8765(&var_50, arg2);
        char const (** const var_d8)[0xd8];
        int64_t* var_a8;
        char var_38;
        int32_t* result;
        
        if (var_38 == 3)
        {
            int64_t var_e0 = var_50;
            int64_t* rax_6;
            int64_t rdx_4;
            rax_6 = uucore::util_name::h60d842bf27b05e82();
            var_a8 = rax_6;
            int64_t var_a0_1 = rdx_4;
            int64_t* var_60 = &var_a8;
            int64_t (* var_58_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc9a28556c00b70f9;
            var_d8 = &data_53e9b8;
            int64_t var_d0_1 = 2;
            int64_t var_b8_1 = 0;
            int64_t** var_c8_1 = &var_60;
            int64_t var_c0_1 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d8);
            var_a8 = &var_e0;
            int64_t (* var_a0_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_d8 = &data_53e9d8;
            int64_t var_d0_2 = 2;
            int64_t var_b8_2 = 0;
            int64_t** var_c8_2 = &var_a8;
            int64_t var_c0_2 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d8);
            uu_od::inputoffset::InputOffset::print_final_offset::hf1e2d1b178ccd553(arg1);
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf83c5d0e0950196b(var_e0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4081a2c3531f8222(&var_80);
            return result;
        }
        
        var_a8 = var_50;
        int128_t var_40;
        int128_t var_98_1 = var_40;
        int64_t var_a0;
        
        if (!var_a0)
        {
            uu_od::inputoffset::InputOffset::print_final_offset::hf1e2d1b178ccd553(arg1);
            
            if (!_$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..multifilereader..HasError$GT$::has_error::hf0d7270850866a7b(*(arg2 + 0x18)))
                result = nullptr;
            else
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4081a2c3531f8222(&var_80);
            return result;
        }
        
        if (var_a0 != r14)
        {
            void* const rdx_2 = rax + var_a0;
            
            if (rdx_2 >= r14)
                rdx_2 = r14;
            
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::h21e27e94246f42e6(&var_a8, var_a0, 
                rdx_2);
            goto label_476e98;
        }
        
        char rax_3;
        
        if (!rax_1)
        {
            int64_t rax_2;
            uint64_t rdx;
            rax_2 = uu_od::inputdecoder::MemoryDecoder::get_buffer::he5dd43e20733f426(&var_a8, 0);
            rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc28cfc02f538ddca(rax_2, rdx, var_78, var_70);
        }
        
        int64_t var_d0;
        int64_t var_c8;
        
        if (rax_1 || !rax_3)
        {
            uu_od::inputdecoder::MemoryDecoder::clone_buffer::hf45ff84df60b2968(&var_a8, &var_80);
            label_476e98:
            uu_od::inputoffset::InputOffset::format_byte_offset::hff6b546ad3ee8d97(&var_d8, arg1);
            uu_od::print_bytes::h4e490ef4abfc23ed(var_d0, var_c8, &var_a8, arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ef5beaad2805a62(&var_d8);
            rbp = 0;
        }
        else if (!(rbp & 1))
        {
            var_d8 = &data_53e9a8;
            var_d0 = 1;
            var_c8 = 8;
            int64_t var_c0;
            var_c0 = {0};
            std::io::stdio::_print::he918bceb0c89db46(&var_d8);
            rbp = 1;
        }
        arg1[2] += var_a0;
        
        if (*arg1)
        {
            *arg1 = 1;
            arg1[1] += var_a0;
        }
    }
}
