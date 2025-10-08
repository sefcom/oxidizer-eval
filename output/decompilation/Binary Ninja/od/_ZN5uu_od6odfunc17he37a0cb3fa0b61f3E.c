
  uint64_t uu_od::odfunc::he37a0cb3fa0b61f3(char* arg1, void* arg2, void* arg3)

{
    int64_t var_e8 = 0;
    int64_t var_e0 = 1;
    int64_t var_d8 = 0;
    void* const r14 = *(arg3 + 0x18);
    void* rax = *(arg3 + 0x28);
    char rax_1 = *(arg3 + 0x30);
    char r13 = 0;
    
    while (true)
    {
        int64_t var_50;
        uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h90a4a3ce88a5dead(&var_50, arg2);
        char const (** const var_c8)[0xf6];
        int64_t* var_98;
        char var_38;
        uint64_t result;
        
        if (var_38 == 3)
        {
            int64_t var_d0 = var_50;
            int64_t* rax_6;
            int64_t rdx_4;
            rax_6 = uucore::util_name::h074417a1e6395129();
            var_98 = rax_6;
            int64_t var_90_1 = rdx_4;
            int64_t* var_60 = &var_98;
            int64_t (* var_58_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h96c1f882c1b72de8;
            var_c8 = &data_5014f0;
            int64_t var_c0_1 = 2;
            int64_t var_a8_1 = 0;
            int64_t** var_b8_1 = &var_60;
            int64_t var_b0_1 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_c8);
            var_98 = &var_d0;
            int64_t (* var_90_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_c8 = &data_501510;
            int64_t var_c0_2 = 2;
            int64_t var_a8_2 = 0;
            int64_t** var_b8_2 = &var_98;
            int64_t var_b0_2 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_c8);
            uu_od::inputoffset::InputOffset::print_final_offset::h93616ef1acb63221(arg1);
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h888b94391c256b0a(var_d0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h144f15fdda6201b2(var_e8, 
                var_e0);
            return result;
        }
        
        var_98 = var_50;
        int128_t var_40;
        int128_t var_88_1 = var_40;
        int64_t var_90;
        
        if (!var_90)
        {
            uu_od::inputoffset::InputOffset::print_final_offset::h93616ef1acb63221(arg1);
            
            if (!_$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..multifilereader..HasError$GT$::has_error::hdbfde11eb446266d(*(*(arg2 + 0x18) + 0x60)))
                result = 0;
            else
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h144f15fdda6201b2(var_e8, 
                var_e0);
            return result;
        }
        
        if (var_90 != r14)
        {
            void* const rdx = rax + var_90;
            
            if (rdx >= r14)
                rdx = r14;
            
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::hff85fdbe658f0d31(&var_98, var_90, 
                rdx);
        }
        
        char* var_c0;
        void* const var_b8;
        
        if (var_90 != r14 || rax_1 & 1)
        {
            label_460813:
            
            if (var_90 == r14)
                uu_od::inputdecoder::MemoryDecoder::clone_buffer::h6bc6c0be48e80e27(&var_98, 
                    &var_e8);
            
            uu_od::inputoffset::InputOffset::format_byte_offset::h2a35c86a9cc6c7a3(&var_c8, arg1);
            uu_od::print_bytes::h002eeb452f9cd45b(var_c0, var_b8, &var_98, arg3);
            core::ptr::drop_in_place$LT$uu_od..inputdecoder..InputDecoder$LT$uu_od..peekreader..PeekReader$LT$std..io..buffered..bufreader..BufReader$LT$uu_od..partialreader..PartialReader$LT$uu_od..multifilereader..MultifileReader$GT$$GT$$GT$$GT$$GT$::h547ec07d1cc16381(var_c8, var_c0);
            r13 = 0;
            *(arg1 + 0x10) += var_90;
            
            if (!(*arg1 & 1))
                continue;
        }
        else
        {
            int64_t rax_3;
            uint64_t rdx_1;
            rax_3 = uu_od::inputdecoder::MemoryDecoder::get_buffer::h6ffffd86399f7d36(&var_98, 0);
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he90fb1d056bd37a3(rax_3, rdx_1, var_e0, var_d8))
                goto label_460813;
            
            if (!(r13 & 1))
            {
                var_c8 = &data_5014e0;
                var_c0 = 1;
                var_b8 = 8;
                int64_t var_b0;
                var_b0 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
            }
            
            r13 = 1;
            *(arg1 + 0x10) += var_90;
            
            if (!(*arg1 & 1))
                continue;
        }
        *arg1 = 1;
        *(arg1 + 8) += var_90;
    }
}
