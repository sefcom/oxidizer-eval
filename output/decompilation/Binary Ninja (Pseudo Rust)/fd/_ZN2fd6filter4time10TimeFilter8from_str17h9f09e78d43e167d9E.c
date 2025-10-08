
  fn fd::filter::time::TimeFilter::from_str::h9f09e78d43e167d9(arg1: *mut i8, arg2: i64) -> *mut i8

{
    let mut result: *mut i8 = arg1;
    let mut var_d0: i32;
    jiff::span::parse_iso_or_friendly::h99933101ecab36fd(&var_d0, result, arg2);
    let mut var_168: i128;
    let mut var_158: i8;
    let mut var_150: i128;
    let mut var_140: i64;
    let var_138: i128;
    let mut var_128: i32;
    let mut var_108: i32;
    
    if var_d0 != 1
    {
        let var_98: i128;
        let var_28_1: i128 = var_98;
        let var_a8: i128;
        let var_38_1: i128 = var_a8;
        let var_b8: i128;
        let var_48_1: i128 = var_b8;
        let var_c8: i128;
        let mut var_58: i128 = var_c8;
        fd::filter::time::now::h0ca5931d26a950cd(&var_108);
        jiff::zoned::Zoned::checked_sub::hce73b7c5ffb8a287(&var_158, &var_108, &var_58);
        let var_f8: i64;
        
        if (var_158 & 1) == 0
        {
            var_128 = var_150;
            var_168 = var_138;
            core::ptr::drop_in_place$LT$jiff..zoned..Zoned$GT$::ha49f1cb5cb1ba64e(var_f8);
            var_158 = var_128;
            *var_150[8] = var_140;
            var_140 = var_168;
            let mut result_3: *mut i8;
            let mut rdx_10: i32;
            result_3 = jiff::zoned::_$LT$impl$u20$core..convert..From$LT$jiff..zoned..Zoned$GT$$u20$for$u20$std..time..SystemTime$GT$::from::hc69c799fe10e2c4d(&var_158);
            result = result_3;
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..zoned..Zoned$C$jiff..error..Error$GT$$GT$::h5ddd4b0ea3818866(&var_158);
            core::ptr::drop_in_place$LT$jiff..zoned..Zoned$GT$::ha49f1cb5cb1ba64e(var_f8);
        }
    }
    else
    {
        jiff::fmt::temporal::DateTimeParser::parse_timestamp::hb673946f97d1ae7b(&var_128, result);
        
        if var_128 != 1
        {
            let var_120: i64;
            let var_118: i32;
            let mut result_2: *mut i8;
            let mut rdx_9: i32;
            result_2 = jiff::timestamp::_$LT$impl$u20$core..convert..From$LT$jiff..timestamp..Timestamp$GT$$u20$for$u20$std..time..SystemTime$GT$::from::h59457f7fa96a8d67(var_120, var_118);
            result = result_2;
            core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..timestamp..Timestamp$C$jiff..error..Error$GT$$GT$::hc1cd9bf23dae465e(&var_128);
        }
        else
        {
            jiff::fmt::temporal::DateTimeParser::parse_datetime::h034feac86721355d(&var_168, 
                result);
            
            if var_168 != 1
            {
                let var_d8_1: i32 = *var_168[0xc];
                let mut var_e0: i64 = *var_168[4];
                let mut rax_6: i8;
                let mut rdx_11: *mut c_void;
                rax_6 =
                    jiff::tz::system::get::h37f0c9f1df5a8b0c(jiff::tz::db::db::h22da7cbed70ee9bf());
                let mut r15_1: *mut c_void = rdx_11;
                
                if (rax_6 & 1) != 0
                {
                    var_108 = r15_1;
                    core::ptr::drop_in_place$LT$jiff..error..Error$GT$::h9b4fa40f38c4908b(&var_108);
                    r15_1 = 2;
                }
                
                _$LT$jiff..tz..timezone..repr..Repr$u20$as$u20$core..clone..Clone$GT$::clone::hf2720f82f294c7c1(r15_1);
                jiff::tz::timezone::TimeZone::into_ambiguous_zoned::h175df57340b8d9e4(&var_108, 
                    r15_1, &var_e0);
                jiff::tz::ambiguous::AmbiguousZoned::later::h2ad0daac9b186369(&var_158, &var_108);
                
                if (var_158 & 1) == 0
                {
                    let var_68_1: i64 = *var_138[8];
                    let var_78_1: i128 = var_140;
                    let mut var_88: i128 = var_150;
                    let mut result_4: *mut i8;
                    let mut rdx_13: i32;
                    result_4 = jiff::zoned::_$LT$impl$u20$core..convert..From$LT$jiff..zoned..Zoned$GT$$u20$for$u20$std..time..SystemTime$GT$::from::hc69c799fe10e2c4d(&var_88);
                    result = result_4;
                    core::ptr::drop_in_place$LT$jiff..tz..timezone..TimeZone$GT$::h3efd6126f6662ad5(
                        r15_1);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..civil..datetime..DateTime$C$jiff..error..Error$GT$$GT$::hb4d1ebeca952bba4(&var_168);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..timestamp..Timestamp$C$jiff..error..Error$GT$$GT$::hc1cd9bf23dae465e(&var_128);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..zoned..Zoned$C$jiff..error..Error$GT$$GT$::h5ddd4b0ea3818866(&var_158);
                    core::ptr::drop_in_place$LT$jiff..tz..timezone..TimeZone$GT$::h3efd6126f6662ad5(
                        r15_1);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..civil..datetime..DateTime$C$jiff..error..Error$GT$$GT$::hb4d1ebeca952bba4(&var_168);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..timestamp..Timestamp$C$jiff..error..Error$GT$$GT$::hc1cd9bf23dae465e(&var_128);
                }
            }
            else
            {
                var_108 = 0;
                let mut rax_1: *mut i8;
                let mut rdx_3: u64;
                rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x40, &var_108);
                let mut rax_2: *mut i8;
                let mut rdx_5: i64;
                rax_2 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(rax_1, rdx_3, result, arg2);
                
                if rax_2 == 0
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..civil..datetime..DateTime$C$jiff..error..Error$GT$$GT$::hb4d1ebeca952bba4(&var_168);
                    core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..timestamp..Timestamp$C$jiff..error..Error$GT$$GT$::hc1cd9bf23dae465e(&var_128);
                }
                else
                {
                    core::num::_$LT$impl$u20$u64$GT$::from_ascii_radix::h3a465e09cf2726d1(&var_158, 
                        rax_2, rdx_5);
                    
                    if var_158 != 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..civil..datetime..DateTime$C$jiff..error..Error$GT$$GT$::hb4d1ebeca952bba4(&var_168);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..timestamp..Timestamp$C$jiff..error..Error$GT$$GT$::hc1cd9bf23dae465e(&var_128);
                    }
                    else
                    {
                        let mut result_1: *mut i8;
                        let mut rdx_7: i32;
                        result_1 = _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::ha7d73b33c4ccffeb(0, 0, var_150, 0);
                        result = result_1;
                        core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..civil..datetime..DateTime$C$jiff..error..Error$GT$$GT$::hb4d1ebeca952bba4(&var_168);
                        core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..timestamp..Timestamp$C$jiff..error..Error$GT$$GT$::hc1cd9bf23dae465e(&var_128);
                    }
                }
            }
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$jiff..span..Span$C$jiff..error..Error$GT$$GT$::he301c0d36d27bba3(&var_d0);
    result
}
