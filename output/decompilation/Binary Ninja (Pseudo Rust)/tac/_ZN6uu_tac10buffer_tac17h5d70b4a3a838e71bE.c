
  fn uu_tac::buffer_tac::h5d70b4a3a838e71b(arg1: i64, arg2: i64, arg3: i8, arg4: i64, arg5: i64) -> *mut *mut c_void

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_e0: *mut i64 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    let mut var_108: i64;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hffa1ef8784ad0549(&var_108, 
        0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_e0));
    let mut var_d8: i8 = 1;
    let mut var_70: i128;
    memchr::memmem::FinderBuilder::build_reverse::hb7a1b6dd41e3db97(&var_70, &var_d8, arg4);
    let var_40: i128;
    let var_a8: i128 = var_40;
    let var_50: i128;
    let var_b8: i128 = var_50;
    let var_60: i128;
    let var_c8: i128 = var_60;
    var_d8 = var_70;
    let var_98: i64 = 1;
    let var_90: i64 = arg2;
    let var_88: i64 = arg1;
    let var_80: i64 = arg2;
    let mut result: *mut *mut c_void;
    let var_100: i64;
    let mut var_f8: i64;
    let mut r13: i64;
    
    if arg3 == 0
    {
        r13 = arg2;
        
        loop
        {
            let mut rax_5: i64;
            let mut rdx_5: i64;
            rax_5 = _$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13d123f2f14d62f(&var_d8);
            
            if rax_5 == 0
            {
                goto 'label_59fe16;
            }
            
            let rbx_3: i64 = rdx_5 + arg5;
            let mut rax_6: i64;
            let mut rdx_7: u64;
            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(rbx_3, r13, arg1, arg2);
            
            if rdx_7 < var_108 - var_f8
            {
                memcpy(var_100 + var_f8, rax_6, rdx_7);
                var_f8 += rdx_7;
                r13 = rbx_3;
            }
            else
            {
                let result_2: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_108, rax_6, rdx_7);
                result = result_2;
                r13 = rbx_3;
                
                if result_2 != 0
                {
                    break;
                }
            }
        }
    }
    else
    {
        r13 = arg2;
        
        loop
        {
            let mut rax_2: i64;
            let mut rdx_2: i64;
            rax_2 = _$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he13d123f2f14d62f(&var_d8);
            
            if rax_2 == 0
            {
                'label_59fe16:
                core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h8403f4f6f5c7a3f4(
                    &var_d8);
                let mut rax_7: i64;
                let mut rdx_9: u64;
                rax_7 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(0, r13, arg1, arg2);
                
                if rdx_9 < var_108 - var_f8
                {
                    memcpy(var_100 + var_f8, rax_7, rdx_9);
                    let var_f8_1: i64 = rdx_9 + var_f8;
                    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_108);
                    return nullptr;
                }
                
                let result_3: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_108, rax_7, rdx_9);
                result = result_3;
                
                if result_3 != 0
                {
                    goto 'label_59fe78;
                }
                
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_108);
                return nullptr;
            }
            
            let mut rax_3: i64;
            let mut rdx_4: u64;
            rax_3 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h0c2d10d49f9be9f9(rdx_2, r13, arg1, arg2);
            
            if rdx_4 < var_108 - var_f8
            {
                memcpy(var_100 + var_f8, rax_3, rdx_4);
                var_f8 += rdx_4;
                r13 = rdx_2;
            }
            else
            {
                let result_1: *mut *mut c_void = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h5c532fad6e334161(&var_108, rax_3, rdx_4);
                result = result_1;
                r13 = rdx_2;
                
                if result_1 != 0
                {
                    break;
                }
            }
        }
    }
    core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h8403f4f6f5c7a3f4(&var_d8);
    'label_59fe78:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::hbf38bc9ad699fef9(&var_108);
    result
}
