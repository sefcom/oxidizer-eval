
  fn uu_base32::base_common::format_read_error::hcbecd7cf3e00f2c7(arg1: *mut i128, arg2: i8) -> *mut i128

{
    let mut var_c1: i8 = arg2;
    let mut var_88: ();
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb7887b3b8ddd86ea(&var_88, 
        &var_c1);
    let var_78: *mut c_void;
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h56ba07e370b94402(var_78, 1, 1);
    let mut var_a8: i64 = rax;
    let var_a0: i64 = rdx;
    let var_98: i64 = 0;
    let var_80: *mut i64;
    let mut var_c0: *mut i64 = var_80;
    let var_b8: *mut c_void = var_78.byte_offset(var_80);
    let var_b0: i64 = 0;
    let mut rax_2: i64;
    let mut i: i32;
    rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_c0);
    let mut var_70: *mut *mut [i8; 0xd];
    
    if i != 0x110000
    {
        do
        {
            if rax_2 != 0
            {
                alloc::string::String::push::h0ede46164189e411(&var_a8, i);
            }
            else
            {
                let mut var_3c: ();
                core::unicode::unicode_data::conversions::to_upper::hd4e5a9ef8e8428c0(&var_3c, i);
                core::char::CaseMappingIter::new::hcde4616bfd23ae0d(&var_70, &var_3c);
                
                loop
                {
                    let rax_4: i32 = _$LT$core..char..ToLowercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h38e379bedf5f54dc(&var_70);
                    
                    if rax_4 == 0x110000
                    {
                        break;
                    }
                    
                    alloc::string::String::push::h0ede46164189e411(&var_a8, rax_4);
                }
            }
            
            rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_c0);
        } while i != 0x110000;
    }
    
    var_c0 = &var_a8;
    let var_b8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
        _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
    var_70 = &data_50e428;
    let var_68: i64 = 1;
    let var_50: i64 = 0;
    let var_60: *mut *mut i64 = &var_c0;
    let var_58: i64 = 1;
    core::option::Option$LT$T$GT$::map_or_else::hff3b22300eec286c(arg1, &var_70);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h84a2aefedc93f8cf(&var_a8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h84a2aefedc93f8cf(&var_88);
    arg1
}
