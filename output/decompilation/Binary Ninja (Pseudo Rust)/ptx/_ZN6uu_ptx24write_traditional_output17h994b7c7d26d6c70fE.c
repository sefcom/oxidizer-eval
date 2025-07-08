
  fn uu_ptx::write_traditional_output::h994b7c7d26d6c70f(arg1: *mut *mut [i8; 0x97], arg2: *mut i64, arg3: *mut i64, arg4: *mut *mut c_void, arg5: u64) -> *mut i128

{
    let mut result: *mut i128;
    let mut result_1: *mut c_void;
    let mut var_118: i32;
    let mut var_e0: i64;
    let mut rax_1: *mut i64;
    let mut rcx: *mut c_void;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he450917857c3e673(arg4, arg5, "-:assertion failed: beg <= endas…", 1) == 0
    {
        std::fs::File::create::h7afd7399792ad865(&var_e0, arg4);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hcf4fec145e7d01a1(&result_1, &var_e0);
        result = result_1;
        
        if result == 0
        {
            rax_1 = alloc::boxed::Box$LT$T$GT$::new::h9f305fe194b67db1(var_118);
            rcx = &data_6ee270;
            goto 'label_5b8b2d;
        }
    }
    else
    {
        std::io::stdio::stdout::h077da66234850927();
        rax_1 = alloc::boxed::Box$LT$T$GT$::new::hb5cf39cdf7805947(
            &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
        rcx = &data_6ee2c0;
        'label_5b8b2d:
        let mut var_60: ();
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hc28e5ceb504200ea(&var_60, 
            0x2000, rax_1, rcx);
        arg1[8];
        regex::regex::string::Regex::new::h2b022f3b326b0361(&var_e0, arg1[7]);
        let mut var_80: i128;
        core::result::Result$LT$T$C$E$GT$::unwrap::hc501836100c48eb1(&var_80, &var_e0);
        let rax_3: i64 = *arg3;
        let rcx_1: i64 = arg3[1];
        let mut rsi_5: i64 = rax_3;
        let mut rdi_6: *mut i128;
        rdi_6 = rax_3 != 0;
        
        if rax_3 != 0
        {
            rsi_5 = arg3[2];
        }
        
        let mut rdx_4: i64;
        rdx_4 = rdi_6;
        var_e0 = rdx_4;
        let var_d8_1: i64 = 0;
        let var_d0_1: i64 = rax_3;
        let var_c8_1: i64 = rcx_1;
        let var_c0_1: i64 = rdx_4;
        let var_b8_1: i64 = 0;
        let var_b0_1: i64 = rax_3;
        let var_a8_1: i64 = rcx_1;
        let var_a0_1: i64 = rsi_5;
        let rbp_1: u32 = *arg1.byte_offset(0x5d);
        let rcx_2: u32 = *arg1.byte_offset(0x59);
        let rax_5: u32 = *arg1.byte_offset(0x5a);
        let mut var_148_1: *mut *mut [i8; 0x21] = &data_6ee370;
        let mut var_138: ();
        
        loop
        {
            let rax_6: *mut c_void = _$LT$alloc..collections..btree..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h42515bd069bd12f0(&var_e0);
            
            if rax_6 == 0
            {
                core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(
                    &var_80);
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&var_60);
                return nullptr;
            }
            
            let rax_7: *mut c_void =
                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h5a6cffc6474407cf(arg2, 
                rax_6.byte_offset(0x18));
            
            if rax_7 == 0
            {
                core::option::expect_failed::h9e03a1f6ff88dbcf("Missing file in file map\nProduc…");
                /* no return */
            }
            
            let r14: *mut *mut c_void = *rax_6.byte_offset(0x38);
            let rsi_7: i64 = *rax_7.byte_offset(0x28);
            
            if r14 >= rsi_7
            {
                core::panicking::panic_bounds_check::h25a5330941572dd1(r14, rsi_7);
                /* no return */
            }
            
            let r12_1: i64 = *rax_7.byte_offset(0x20);
            let r13_1: *mut c_void = r14 * 3;
            let mut var_168: i128;
            uu_ptx::get_reference::hde200eae24bcb508(&var_138, rcx_2, rax_5, rax_6, 
                *(r12_1 + (r13_1 << 3) + 8), *(r12_1 + (r13_1 << 3) + 0x10), var_80, var_168, arg1, 
                rax_5, &data_6ee370, arg2);
            let rax_8: *mut c_void = r12_1 + (r13_1 << 3);
            let mut var_98: ();
            let var_130: i128;
            let mut rsi_9: i64;
            
            if rbp_1 == 1
            {
                rsi_9 = *rax_7.byte_offset(0x40);
                
                if r14 >= rsi_9
                {
                    var_148_1 = &data_6ee358;
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r14, rsi_9);
                    /* no return */
                }
                
                var_168 = var_130;
                uu_ptx::format_roff_line::h4297720d7d6a4583(&var_98, arg1, 
                    *rax_6.byte_offset(0x40), *rax_6.byte_offset(0x48), *rax_8.byte_offset(8), 
                    *rax_8.byte_offset(0x10), *(*rax_7.byte_offset(0x38) + (r13_1 << 3) + 8), 
                    var_168);
            }
            else
            {
                if rbp_1 != 2
                {
                    result_1 = 0;
                    result = alloc::boxed::Box$LT$T$GT$::new::hfc4024115c711549(&result_1);
                    break;
                }
                
                rsi_9 = *rax_7.byte_offset(0x40);
                
                if r14 >= rsi_9
                {
                    core::panicking::panic_bounds_check::h25a5330941572dd1(r14, rsi_9);
                    /* no return */
                }
                
                var_168 = var_130;
                uu_ptx::format_tex_line::h116c5459a35e6a61(&var_98, arg1, *rax_6.byte_offset(0x40), 
                    *rax_6.byte_offset(0x48), *rax_8.byte_offset(8), *rax_8.byte_offset(0x10), 
                    *(*rax_7.byte_offset(0x38) + (r13_1 << 3) + 8), var_168);
            }
            let mut var_f0: *mut c_void = &var_98;
            let var_e8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            result_1 = &data_6ee250;
            var_118 = 2;
            let var_100_1: i64 = 0;
            let var_110_1: *mut *mut c_void = &var_f0;
            let var_108_1: i64 = 1;
            let result_2: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h12e604f0a0762086(std::io::Write::write_fmt::hc188f250100c2fb6(&var_60, 
                &result_1));
            result = result_2;
            
            if result_2 != 0
            {
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_98);
                break;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_98);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_138);
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_138);
        core::ptr::drop_in_place$LT$regex..regex..string..Regex$GT$::hf34b8b1af3b36f38(&var_80);
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::h4237c84ac900e5ad(&var_60);
    }
    result
}
