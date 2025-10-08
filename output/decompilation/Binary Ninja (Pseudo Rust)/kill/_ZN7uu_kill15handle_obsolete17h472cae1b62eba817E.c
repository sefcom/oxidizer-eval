
  fn uu_kill::handle_obsolete::h472cae1b62eba817(arg1: u64) -> i64

{
    let mut r14: *mut i128;
    let var_10: *mut i128 = r14;
    
    if *(arg1 + 0x10) >= 3
    {
        let rax_1: *mut c_void = *(arg1 + 8);
        r14 = *rax_1.byte_offset(0x20);
        let r15_1: i64 = *rax_1.byte_offset(0x28);
        let mut var_30: i32 = 0;
        let mut rax_3: *mut i128;
        let mut rdx_2: u64;
        rax_3 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_prefix_of::hd66f2c78bdb8496c(core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(&var_30), r14, r15_1);
        
        if rax_3 != 0
        {
            var_30 = rax_3;
            let mut rax_5: i8;
            let mut rdx_3: i32;
            rax_5 = core::str::validations::next_code_point::hcc86121977b40379(&var_30, arg1);
            
            if (rax_5 & 1) == 0
            {
                'label_45d04b:
                let mut rax_8: i64;
                let mut rdx_4: *mut i128;
                rax_8 = uucore::features::signals::signal_by_name_or_value::h89b982f23c5744ec(
                    rax_3, rdx_2);
                
                if rax_8 == 1
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::remove::h16a410887af4f72c(&var_30, arg1);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h31b345ac50aa997d(
                        var_30, rax_3.byte_offset(rdx_2));
                    return 1;
                }
            }
            else if rdx_3 - 0x61 >= 0x1a
            {
                if rdx_3 < 0x80
                {
                    goto 'label_45d04b;
                }
                
                if core::unicode::unicode_data::lowercase::lookup::hc935d1c20005fe8f(rdx_3) == 0
                {
                    goto 'label_45d04b;
                }
            }
        }
    }
    
    0
}
