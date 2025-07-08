
  fn uu_unexpand::unexpand::h7da24873393494e4(arg1: *mut c_void) -> *mut i128

{
    std::io::stdio::stdout::h077da66234850927();
    let mut var_88: ();
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::hb9eeab36379c6f5d(&var_88, 
        0x2000, &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
    let rbx: *mut i64 = *arg1.byte_offset(0x20);
    let rbp: i64 = *arg1.byte_offset(0x28);
    let mut var_150: i64 = 0;
    let var_148: i64 = 1;
    let var_140: i64 = 0;
    let mut r14: *mut *mut c_void;
    
    if rbp <= 1
    {
        r14 = nullptr;
    }
    else
    {
        r14 = rbx[rbp - 1];
    }
    
    let rax: i64 = *arg1.byte_offset(8);
    let rcx: i64 = *arg1.byte_offset(0x10);
    let mut var_138: i64 = rax;
    let var_130: i64 = rax + rcx * 0x18;
    let mut i: *mut c_void = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&var_138);
    
    if i != 0
    {
        let r12_1: i8 = *arg1.byte_offset(0x30);
        let r13_1: i8 = *arg1.byte_offset(0x31);
        
        do
        {
            let mut var_c0: i64;
            uu_unexpand::open::h29e09d4acbe1a140(&var_c0, *i.byte_offset(8), *i.byte_offset(0x10));
            let var_b0: *mut i64;
            
            if var_c0 == 0
            {
                let var_b8: i64;
                let mut var_160: i64 = var_b8;
                uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(var_b0[0xc]());
                let mut rax_6: i64;
                let mut rdx_5: i64;
                rax_6 = uucore::util_name::h60d842bf27b05e82();
                let mut var_128: i64 = rax_6;
                let var_120_1: i64 = rdx_5;
                let mut var_118: *mut i64 = &var_128;
                let var_110_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf6a1d2ab1cd5850e;
                let var_108_1: *mut i64 = &var_160;
                let var_100_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb9e3d6c183a72ce2;
                let mut var_60: *mut c_void = &data_51d1d0;
                let var_58_1: i64 = 3;
                let var_40_1: i64 = 0;
                let var_50_1: *mut *mut i64 = &var_118;
                let var_48_1: i64 = 2;
                std::io::stdio::_eprint::hcdfeec148c7134f7(&var_60);
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::h0082e63b91b22250(var_160, var_b0);
            }
            else
            {
                let var_90: i64;
                let var_c8_1: i64 = var_90;
                let var_a0: i128;
                let var_d8_1: i128 = var_a0;
                let var_e8_1: i128 = var_b0;
                let mut var_f8: i128 = var_c0;
                
                loop
                {
                    let mut rax_2: i64;
                    let mut rdx_3: i64;
                    rax_2 = std::io::read_until::h30a9c258ae3f26fb(&var_f8, 0xa, &var_150);
                    let mut rcx_3: i64 = rdx_3;
                    
                    if rax_2 != 0
                    {
                        rcx_3 = var_140;
                    }
                    
                    if rcx_3 == 0
                    {
                        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd39866fef2216732(rax_2, rdx_3);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::haf1e40619ceb4b94(&var_f8);
                        break;
                    }
                    
                    core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::hd39866fef2216732(rax_2, rdx_3);
                    
                    if uu_unexpand::unexpand_line::hfe287a3731b6a7af(&var_150, &var_88, r12_1, 
                        r13_1, r14, rbx, rbp) != 0
                    {
                        let result: *mut i128 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        core::ptr::drop_in_place$LT$std..io..buffered..bufreader..BufReader$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$$GT$::haf1e40619ceb4b94(&var_f8);
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1bd5a48277eb07cc(&var_150);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h91f26dab932e0aaf(&var_88);
                        return result;
                    }
                }
            }
            i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcb914319815ce2a7(&var_138);
        } while i != 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1bd5a48277eb07cc(&var_150);
    core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..Stdout$GT$$GT$::h91f26dab932e0aaf(&var_88);
    nullptr
}
