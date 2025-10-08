
  fn uu_tail::backwards_thru_file::h4e45f1efa57e466a(arg1: *mut i32, arg2: i64, arg3: i8) -> i8

{
    let mut var_a0: i64 = arg2;
    let mut var_d0: i64 = 0;
    let mut var_80: ();
    uu_tail::chunks::ReverseChunks::new::h6119ac2ef47f2bfc(&var_80, arg1);
    let mut i_1: i64;
    _$LT$uu_tail..chunks..ReverseChunks$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1198ad157f2d09d4(&i_1, &var_80);
    let mut i: i64 = i_1;
    let mut result: i8 = -(i);
    
    if -(i) != -0x8000000000000000
    {
        let mut rbp_1: i64 = 0;
        result = 0;
        
        do
        {
            let var_90: *mut c_void;
            let var_88: i64;
            let rcx_1: *mut c_void = var_90.byte_offset(var_88);
            let mut var_f0: *mut c_void = var_90;
            let mut var_d8: i8 = arg3;
            let mut rdx: i64;
            rdx = var_88 == 0;
            rdx |= result;
            
            if (rdx & 1) == 0 && *rcx_1.byte_offset(-1) == arg3
            {
                memchr::arch::generic::memchr::Iter::next_back::h8b6e16488b52dba2(&var_f0, &var_d8);
            }
            
            let rax_2: *mut c_void = var_f0;
            let var_b8_1: *mut c_void = rcx_1;
            let mut var_b0: i8 = var_d8;
            let var_d7: i32;
            let var_af_1: i32 = var_d7;
            let var_d3: i16;
            let var_ab_1: i16 = var_d3;
            let var_d1: i8;
            let var_a9_1: i8 = var_d1;
            let mut var_c8: *mut c_void = rax_2;
            let var_c0_1: *mut c_void = var_90;
            
            loop
            {
                let mut rax_3: i8;
                let mut rdx_6: i64;
                rax_3 = memchr::arch::generic::memchr::Iter::next_back::h8b6e16488b52dba2(&var_c8, 
                    &var_b0);
                
                if (rax_3 & 1) == 0
                {
                    break;
                }
                
                rbp_1 += 1;
                var_d0 = rbp_1;
                
                if rbp_1 >= arg2
                {
                    if rbp_1 == arg2
                    {
                        let mut rax_4: i8;
                        let mut rdx_8: i64;
                        rax_4 = _$LT$std..fs..File$u20$as$u20$std..io..Seek$GT$::seek::h04cf64217ea00d1d(arg1, 2, rdx_6 + 1);
                        core::result::Result$LT$T$C$E$GT$::unwrap::hada310c9832e5020(rax_4, rdx_8);
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd2297b40d9b55d99(i, var_90);
                    }
                    
                    let mut var_60: i64 = 0;
                    core::panicking::assert_failed::h44a849fd8057adff(0, &var_d0, &var_a0, &var_60);
                    /* no return */
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd2297b40d9b55d99(i, var_90);
            _$LT$uu_tail..chunks..ReverseChunks$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1198ad157f2d09d4(&i_1, &var_80);
            i = i_1;
            result = 1;
        } while i != -0x8000000000000000;
    }
    
    result
}
