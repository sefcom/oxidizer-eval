
  fn uu_expand::expand::h37655ff09ea44da5(arg1: *mut c_void) -> *mut i128

{
    let r13: *mut *mut c_void;
    let var_20: *mut *mut c_void = r13;
    std::io::stdio::stdout::h077da66234850927();
    let mut var_58: ();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h8dc6b6dd87838119(&var_58, 
        0x2000, &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
    let r14: *mut i64 = *arg1.byte_offset(0x20);
    let r15: i64 = *arg1.byte_offset(0x28);
    let mut var_c8: i64 = 0;
    let var_c0: i64 = 1;
    let var_b8: i64 = 0;
    let rax: i64 = *arg1.byte_offset(8);
    let rcx: i64 = *arg1.byte_offset(0x10);
    let mut var_b0: i64 = rax;
    let var_a8: i64 = rax + rcx * 0x18;
    
    for let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h790f73d862f3e3c5(&var_b0); i != 0; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h790f73d862f3e3c5(&var_b0)
    {
        let mut i_1: *mut c_void = i;
        let mut var_138: *mut c_void;
        let mut var_128: *mut *mut i64;
        let mut var_118: i64;
        let mut var_f8: *mut i64;
        let mut var_a0: *mut i64;
        let mut var_98: fn(arg1: *mut i64, arg2: i64) -> i64;
        
        if std::path::Path::is_dir::h9ac0db933706da51(*i.byte_offset(8), *i.byte_offset(0x10)) == 0
        {
            let i_2: *mut c_void = i_1;
            uu_expand::open::h447e326a625c2cbf(&var_a0, *i_2.byte_offset(8), 
                *i_2.byte_offset(0x10));
            
            if var_a0 == 0
            {
                let mut var_e8: i128 = var_98;
                let mut rax_6: *mut i64;
                let mut rdx_6: i64;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                var_f8 = rax_6;
                let var_f0_2: i64 = rdx_6;
                let mut var_68: *mut *mut i64 = &var_f8;
                let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8e3d2bc035467f54;
                var_138 = &data_51cfa8;
                let var_130_3: i64 = 2;
                let var_118_2: i64 = 0;
                let var_128_2: *mut *mut *mut i64 = &var_68;
                let var_120_3: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
                var_f8 = &var_e8;
                let var_f0_3: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::he448dbddafa64936;
                var_138 = &data_51cfe8;
                let var_130_4: i64 = 2;
                var_118 = 0;
                var_128 = &var_f8;
                let var_120_4: i64 = 1;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h235298a4064923ef(var_e8, *var_e8[8]);
            }
            else
            {
                let var_70: i64;
                let var_108_1: i64 = var_70;
                let var_80: i128;
                var_118 = var_80;
                let var_90: i128;
                var_128 = var_90;
                var_138 = var_a0;
                
                loop
                {
                    let mut rax_4: i64;
                    let mut rdx_4: i64;
                    rax_4 = std::io::read_until::h4bbf6f5e97af4fae(&var_138, 0xa, &var_c8);
                    let mut rsi_3: bool = rdx_4 != 0;
                    
                    if rax_4 != 0
                    {
                        rsi_3 = var_b8 == 0;
                    }
                    
                    if rsi_3 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hce1404ba8c518a6f(rax_4, rdx_4);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hd7062a474f5e767b(&var_138);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hce1404ba8c518a6f(rax_4, rdx_4);
                    let result: *mut i128 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h402a94e6eef7bc71(uu_expand::expand_line::h40856abb6fde71c0(&var_c8, 
                        &var_58, r14, r15, arg1));
                    
                    if result != 0
                    {
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::hd7062a474f5e767b(&var_138);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ec78bf7a3f927d3(&var_c8);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h4862c1d11376e6d0(&var_58);
                        return result;
                    }
                }
            }
        }
        else
        {
            let mut rax_2: *mut i64;
            let mut rdx_1: i64;
            rax_2 = uucore::util_name::h60d842bf27b05e82();
            var_a0 = rax_2;
            let var_98_1: i64 = rdx_1;
            var_f8 = &var_a0;
            let var_f0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h8e3d2bc035467f54;
            var_138 = &data_51cfa8;
            let var_130_1: i64 = 2;
            let var_118_1: i64 = 0;
            let var_128_1: *mut *mut i64 = &var_f8;
            let var_120_1: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
            var_a0 = &i_1;
            var_98 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::had14ffb2923220a0;
            var_138 = &data_51cfc8;
            let var_130_2: i64 = 2;
            var_118 = 0;
            var_128 = &var_a0;
            let var_120_2: i64 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_138);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h6ec78bf7a3f927d3(&var_c8);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h4862c1d11376e6d0(&var_58);
    nullptr
}
