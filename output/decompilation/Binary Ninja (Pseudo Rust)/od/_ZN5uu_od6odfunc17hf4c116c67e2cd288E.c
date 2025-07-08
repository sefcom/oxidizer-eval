
  fn uu_od::odfunc::hf4c116c67e2cd288(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> *mut i32

{
    let mut var_80: i64 = 0;
    let var_78: i64 = 1;
    let var_70: i64 = 0;
    let r14: *mut c_void = *arg3.byte_offset(0x18);
    let rax: *mut c_void = *arg3.byte_offset(0x28);
    let rax_1: i8 = *arg3.byte_offset(0x30);
    let mut rbp: i8 = 0;
    
    loop
    {
        let mut var_50: i64;
        uu_od::inputdecoder::InputDecoder$LT$I$GT$::peek_read::h15c7373ba30f8765(&var_50, arg2);
        let mut var_d8: *mut *mut [i8; 0xd8];
        let mut var_a8: *mut i64;
        let var_38: i8;
        let mut result: *mut i32;
        
        if var_38 == 3
        {
            let mut var_e0: i64 = var_50;
            let mut rax_6: *mut i64;
            let mut rdx_4: i64;
            rax_6 = uucore::util_name::h60d842bf27b05e82();
            var_a8 = rax_6;
            let var_a0_1: i64 = rdx_4;
            let mut var_60: *mut i64 = &var_a8;
            let var_58_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc9a28556c00b70f9;
            var_d8 = &data_53e9b8;
            let var_d0_1: i64 = 2;
            let var_b8_1: i64 = 0;
            let var_c8_1: *mut *mut i64 = &var_60;
            let var_c0_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d8);
            var_a8 = &var_e0;
            let var_a0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
            var_d8 = &data_53e9d8;
            let var_d0_2: i64 = 2;
            let var_b8_2: i64 = 0;
            let var_c8_2: *mut *mut i64 = &var_a8;
            let var_c0_2: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_d8);
            uu_od::inputoffset::InputOffset::print_final_offset::hf1e2d1b178ccd553(arg1);
            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf83c5d0e0950196b(var_e0);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4081a2c3531f8222(&var_80);
            return result;
        }
        
        var_a8 = var_50;
        let var_40: i128;
        let var_98_1: i128 = var_40;
        let var_a0: i64;
        
        if var_a0 == 0
        {
            uu_od::inputoffset::InputOffset::print_final_offset::hf1e2d1b178ccd553(arg1);
            
            if _$LT$uu_od..peekreader..PeekReader$LT$R$GT$$u20$as$u20$uu_od..multifilereader..HasError$GT$::has_error::hf0d7270850866a7b(*arg2.byte_offset(0x18)) == 0
            {
                result = nullptr;
            }
            else
            {
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$i32$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h0b17f6d5d891df77(1);
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h4081a2c3531f8222(&var_80);
            return result;
        }
        
        if var_a0 != r14
        {
            let mut rdx_2: *mut c_void = rax.byte_offset(var_a0);
            
            if rdx_2 >= r14
            {
                rdx_2 = r14;
            }
            
            uu_od::inputdecoder::MemoryDecoder::zero_out_buffer::h21e27e94246f42e6(&var_a8, var_a0, 
                rdx_2);
            goto 'label_476e98;
        }
        
        let mut rax_3: i8;
        
        if rax_1 == 0
        {
            let mut rax_2: i64;
            let mut rdx: u64;
            rax_2 = uu_od::inputdecoder::MemoryDecoder::get_buffer::he5dd43e20733f426(&var_a8, 0);
            rax_3 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc28cfc02f538ddca(rax_2, rdx, var_78, var_70);
        }
        
        let mut var_d0: i64;
        let mut var_c8: i64;
        
        if rax_1 != 0 || rax_3 == 0
        {
            uu_od::inputdecoder::MemoryDecoder::clone_buffer::hf45ff84df60b2968(&var_a8, &var_80);
            'label_476e98:
            uu_od::inputoffset::InputOffset::format_byte_offset::hff6b546ad3ee8d97(&var_d8, arg1);
            uu_od::print_bytes::h4e490ef4abfc23ed(var_d0, var_c8, &var_a8, arg3);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h3ef5beaad2805a62(&var_d8);
            rbp = 0;
        }
        else if (rbp & 1) == 0
        {
            var_d8 = &data_53e9a8;
            var_d0 = 1;
            var_c8 = 8;
            let mut var_c0: i64;
            var_c0 = {0};
            std::io::stdio::_print::he918bceb0c89db46(&var_d8);
            rbp = 1;
        }
        arg1[2] += var_a0;
        
        if *arg1 != 0
        {
            *arg1 = 1;
            arg1[1] += var_a0;
        }
    }
}
