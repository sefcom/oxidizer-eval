
  fn uu_od::odfunc::he37a0cb3fa0b61f3(arg1: *mut i8, arg2: *mut c_void, arg3: *mut c_void) -> u64

{
    let mut var_e8: i64 = 0;
    let var_e0: i64 = 1;
    let var_d8: i64 = 0;
    let r14: *mut c_void = *arg3.byte_offset(0x18);
    let rax: *mut c_void = *arg3.byte_offset(0x28);
    let rax_1: i8 = *arg3.byte_offset(0x30);
    let mut r13: i8 = 0;
    
    loop
    {
        let mut var_50: i64;
        uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h90a4a3ce88a5dead(&var_50, arg2);
        let mut var_c8: *mut *mut [i8; 0xf6];
        let mut var_98: *mut i64;
        let var_38: i8;
        let mut result: u64;
        
        if var_38 == 3
        {
            let mut var_d0: i64 = var_50;
            let mut rax_6: *mut i64;
            let mut rdx_4: i64;
            rax_6 = uucore::util_name::h074417a1e6395129();
            var_98 = rax_6;
            let var_90_1: i64 = rdx_4;
            let mut var_60: *mut i64 = &var_98;
            let var_58_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h96c1f882c1b72de8;
            var_c8 = &data_5014f0;
            let var_c0_1: i64 = 2;
            let var_a8_1: i64 = 0;
            let var_b8_1: *mut *mut i64 = &var_60;
            let var_b0_1: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_c8);
            var_98 = &var_d0;
            let var_90_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
            var_c8 = &data_501510;
            let var_c0_2: i64 = 2;
            let var_a8_2: i64 = 0;
            let var_b8_2: *mut *mut i64 = &var_98;
            let var_b0_2: i64 = 1;
            std::io::stdio::_eprint::h57899770eacec2ad(&var_c8);
            uu_od::inputoffset::InputOffset::print_final_offset::h93616ef1acb63221(arg1);
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h888b94391c256b0a(var_d0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h144f15fdda6201b2(var_e8, 
                var_e0);
            return result;
        }
        
        var_98 = var_50;
        let var_40: i128;
        let var_88_1: i128 = var_40;
        let var_90: i64;
        
        if var_90 == 0
        {
            uu_od::inputoffset::InputOffset::print_final_offset::h93616ef1acb63221(arg1);
            
            if _$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..multifilereader..HasError$GT$::has_error::hdbfde11eb446266d(*(*arg2.byte_offset(0x18)).byte_offset(0x60)) == 0
            {
                result = 0;
            }
            else
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h9e5cddc9f9643acf(1);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h144f15fdda6201b2(var_e8, 
                var_e0);
            return result;
        }
        
        if var_90 != r14
        {
            let mut rdx: *mut c_void = rax.byte_offset(var_90);
            
            if rdx >= r14
            {
                rdx = r14;
            }
            
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::hff85fdbe658f0d31(&var_98, var_90, 
                rdx);
        }
        
        let mut var_c0: *mut i8;
        let mut var_b8: *mut c_void;
        
        if var_90 != r14 || (rax_1 & 1) != 0
        {
            'label_460813:
            
            if var_90 == r14
            {
                uu_od::inputdecoder::MemoryDecoder::clone_buffer::h6bc6c0be48e80e27(&var_98, 
                    &var_e8);
            }
            
            uu_od::inputoffset::InputOffset::format_byte_offset::h2a35c86a9cc6c7a3(&var_c8, arg1);
            uu_od::print_bytes::h002eeb452f9cd45b(var_c0, var_b8, &var_98, arg3);
            core::ptr::drop_in_place$LT$uu_od..inputdecoder..InputDecoder$LT$uu_od..peekreader..PeekReader$LT$std..io..buffered..bufreader..BufReader$LT$uu_od..partialreader..PartialReader$LT$uu_od..multifilereader..MultifileReader$GT$$GT$$GT$$GT$$GT$::h547ec07d1cc16381(var_c8, var_c0);
            r13 = 0;
            *arg1.byte_offset(0x10) += var_90;
            
            if (*arg1 & 1) == 0
            {
                continue;
            }
        }
        else
        {
            let mut rax_3: i64;
            let mut rdx_1: u64;
            rax_3 = uu_od::inputdecoder::MemoryDecoder::get_buffer::h6ffffd86399f7d36(&var_98, 0);
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he90fb1d056bd37a3(rax_3, rdx_1, var_e0, var_d8) == 0
            {
                goto 'label_460813;
            }
            
            if (r13 & 1) == 0
            {
                var_c8 = &data_5014e0;
                var_c0 = 1;
                var_b8 = 8;
                let mut var_b0: i64;
                var_b0 = {0};
                std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
            }
            
            r13 = 1;
            *arg1.byte_offset(0x10) += var_90;
            
            if (*arg1 & 1) == 0
            {
                continue;
            }
        }
        *arg1 = 1;
        *arg1.byte_offset(8) += var_90;
    }
}
