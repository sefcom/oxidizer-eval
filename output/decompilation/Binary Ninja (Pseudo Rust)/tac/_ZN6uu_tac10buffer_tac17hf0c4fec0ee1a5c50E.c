
  fn uu_tac::buffer_tac::hf0c4fec0ee1a5c50(arg1: i64, arg2: i64, arg3: i8, arg4: i64, arg5: i64) -> ssize_t

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    let mut var_e0: *mut i64 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    let mut var_108: i64;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb5da74aabfacf130(&var_108, 
        std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_e0));
    let mut var_70: i128;
    memchr::memmem::FinderBuilder::build_reverse::hc825846e9c200c29(&var_70, arg4);
    let var_40: i128;
    let var_a8: i128 = var_40;
    let var_50: i128;
    let var_b8: i128 = var_50;
    let var_60: i128;
    let var_c8: i128 = var_60;
    let mut var_d8: i128 = var_70;
    let var_98: i64 = 1;
    let var_90: i64 = arg2;
    let var_88: i64 = arg1;
    let var_80: i64 = arg2;
    let mut result: ssize_t;
    let var_100: i64;
    let mut var_f8: i64;
    let mut r13_1: i64;
    
    if arg3 == 0
    {
        r13_1 = arg2;
        
        loop
        {
            let mut rax_5: i8;
            let mut rdx_6: i64;
            rax_5 = _$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h76b1505eadd4958f(&var_d8);
            
            if (rax_5 & 1) == 0
            {
                goto 'label_5128de;
            }
            
            let rbp_3: i64 = rdx_6 + arg5;
            let mut rax_6: i64;
            let mut rdx_8: u64;
            rax_6 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(rbp_3, r13_1, arg1, arg2);
            
            if rdx_8 >= var_108 - var_f8
            {
                let result_2: ssize_t = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_108, rax_6, rdx_8);
                result = result_2;
                r13_1 = rbp_3;
                
                if result_2 != 0
                {
                    break;
                }
            }
            else
            {
                memcpy(var_100 + var_f8, rax_6, rdx_8);
                var_f8 += rdx_8;
                r13_1 = rbp_3;
            }
        }
    }
    else
    {
        r13_1 = arg2;
        
        loop
        {
            let mut rax_1: i8;
            let mut rdx_1: i64;
            rax_1 = _$LT$memchr..memmem..FindRevIter$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h76b1505eadd4958f(&var_d8);
            
            if (rax_1 & 1) == 0
            {
                'label_5128de:
                core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h3d1f7cc021b2545a(
                    &var_d8);
                let mut rax_8: i64;
                let mut rdx_12: u64;
                rax_8 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(0, r13_1, arg1, arg2);
                
                if rdx_12 >= var_108 - var_f8
                {
                    let result_3: ssize_t = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_108, rax_8, rdx_12);
                    result = result_3;
                    
                    if result_3 == 0
                    {
                        result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::he7ea2e76e39453c0(&var_108);
                    }
                }
                else
                {
                    memcpy(var_100 + var_f8, rax_8, rdx_12);
                    let var_f8_1: i64 = rdx_12 + var_f8;
                    result = _$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::he7ea2e76e39453c0(&var_108);
                }
                
                goto 'label_512939;
            }
            
            let mut rax_2: i64;
            let mut rdx_3: u64;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h71ada529aa718b3e(rdx_1, r13_1, arg1, arg2);
            
            if rdx_3 >= var_108 - var_f8
            {
                let result_1: ssize_t = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::h8000122166762ae1(&var_108, rax_2, rdx_3);
                r13_1 = rdx_1;
                
                if result_1 != 0
                {
                    result = result_1;
                    break;
                }
            }
            else
            {
                memcpy(var_100 + var_f8, rax_2, rdx_3);
                var_f8 += rdx_3;
                r13_1 = rdx_1;
            }
        }
    }
    core::ptr::drop_in_place$LT$memchr..memmem..FindRevIter$GT$::h3d1f7cc021b2545a(&var_d8);
    'label_512939:
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h906e82980bfe4b9c(&var_108);
    result
}
