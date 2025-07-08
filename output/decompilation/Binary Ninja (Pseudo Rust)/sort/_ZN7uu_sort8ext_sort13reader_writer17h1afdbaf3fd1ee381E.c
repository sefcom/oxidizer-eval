
  fn uu_sort::ext_sort::reader_writer::h1afdbaf3fd1ee381(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i64, arg4: i64, arg5: i64, arg6: *mut i64, arg7: *mut c_void) -> *mut c_void

{
    let mut rax: i64;
    let mut rdx: i64;
    rdx = HIGHQ(-0x3333333333333333 * *arg2.byte_offset(0x68));
    rax = LOWQ(-0x3333333333333333 * *arg2.byte_offset(0x68));
    let var_1b8: i64 = arg5;
    let mut var_178: i64;
    uu_sort::ext_sort::read_write_loop::h289e20b2b60c2e20(&var_178, arg1, arg7, 
        *arg2.byte_offset(0x99), rdx >> 3, arg2, arg3, arg4);
    let rcx_1: i64 = var_178;
    let var_170: *mut c_void;
    
    if rcx_1 == -0x7ffffffffffffffd
    {
        core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg6);
        return var_170;
    }
    
    let mut var_100: i64 = rcx_1;
    let var_f8_1: *mut c_void = var_170;
    let rax_1: i64 = -0x8000000000000000 ^ rcx_1;
    let mut rcx_2: i64 = 3;
    
    if rax_1 < 3
    {
        rcx_2 = rax_1;
    }
    
    let mut var_168: *mut c_void;
    let var_f0_1: *mut c_void = var_168;
    let mut var_1a8: *mut c_void;
    let mut var_198: i64;
    let mut var_160: i128;
    let mut var_158: i128;
    let mut var_148: i128;
    let mut var_138: i128;
    let mut rbp: i64;
    let mut rdi_12: *mut *mut c_void;
    
    match rcx_2
    {
        0 =>
        {
            core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg6);
            return nullptr;
        }
        1 =>
        {
            var_1a8 = var_170;
            
            if *arg2.byte_offset(0x84) == 0
            {
                let rdi_9: i64 = *var_170.byte_offset(0x20);
                var_168 = *arg6.byte_offset(0x10);
                var_178 = *arg6;
                uu_sort::print_sorted::h399956c01eacbd36(rdi_9, 
                    rdi_9 + *var_170.byte_offset(0x28) * 0x18, arg2, &var_178);
            }
            else
            {
                let rax_7: i64 = *var_170.byte_offset(0x20);
                let var_168_2: i64 = rax_7;
                var_160 = rax_7 + *var_170.byte_offset(0x28) * 0x18;
                var_178 = 0;
                var_158 = arg2;
                *var_158[8] = &var_1a8;
                let mut var_188: i64;
                var_188 = *arg6.byte_offset(0x10);
                var_198 = *arg6;
                uu_sort::print_sorted::h503969779853c16b(&var_178, arg2, &var_198);
            }
            
            rdi_12 = &var_1a8;
        }
        2 =>
        {
            let mut var_1a0: *mut c_void = var_170;
            var_1a8 = var_168;
            let rax_2: i64 = *var_170.byte_offset(0x20);
            let rcx_5: i64 = *var_170.byte_offset(0x28);
            var_198 = rax_2;
            let var_190_1: i64 = rax_2 + rcx_5 * 0x18;
            let mut var_188_1: *mut *mut c_void = &var_1a0;
            let rax_3: i64 = *var_168.byte_offset(0x20);
            let rcx_8: i64 = *var_168.byte_offset(0x28);
            var_178 = rax_3;
            let var_170_1: i64 = rax_3 + rcx_8 * 0x18;
            let mut var_168_1: *mut *mut c_void = &var_1a8;
            rbp = 1;
            let mut var_e8: i128;
            itertools::merge_join::merge_by_new::haf8b6537aa60a4a2(&var_e8, &var_198, &var_178, 
                arg2);
            let var_d8: i128;
            let var_c8: i128;
            let var_b8: i128;
            let var_a8: i128;
            let var_98: i64;
            
            if *arg2.byte_offset(0x84) == 0
            {
                let var_128_1: i64 = var_98;
                let var_138_1: i128 = var_a8;
                let var_148_1: i128 = var_b8;
                let var_158_1: i128 = var_c8;
                var_168_1 = var_d8;
                var_178 = var_e8;
                var_188_1 = *arg6.byte_offset(0x10);
                var_198 = *arg6;
                uu_sort::print_sorted::hcbbf0cde6d758b1e(&var_178, arg2, &var_198);
            }
            else
            {
                let var_110_1: i64 = var_98;
                let var_120_1: i128 = var_a8;
                var_138 = var_b8;
                var_148 = var_c8;
                var_158 = var_d8;
                let var_160_1: i128 = var_e8;
                var_178 = 0;
                let var_108_1: *mut c_void = arg2;
                var_188_1 = *arg6.byte_offset(0x10);
                var_198 = *arg6;
                uu_sort::print_sorted::hbc0202f908111a45(&var_178, arg2, &var_198);
            }
            core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_1a8);
            rdi_12 = &var_1a0;
        }
        3 =>
        {
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hd7227d41e8805a51(&var_198, &var_100);
            rbp = 1;
            uu_sort::merge::merge_with_file_limit::h9238ca36de3d8682(&var_178, &var_198, arg2, 
                arg7);
            let rax_5: i64 = var_178;
            
            if rax_5 == 3
            {
                core::ptr::drop_in_place$LT$uu_sort..Output$GT$::hc73b799533ae265a(arg6);
                return var_170;
            }
            
            let var_120: i64;
            let var_38_1: i64 = var_120;
            let var_48_1: i128 = var_138;
            let var_58_1: i128 = var_148;
            let var_68_1: i128 = var_158;
            let var_78_1: i128 = var_160;
            let mut var_90: i64 = rax_5;
            let var_88_1: *mut c_void = var_170;
            let var_80_1: *mut c_void = var_168;
            var_168 = *arg6.byte_offset(0x10);
            var_178 = *arg6;
            let mut rax_6: *mut c_void;
            let mut rdx_6: *mut c_void;
            rax_6 =
                uu_sort::merge::FileMerger::write_all::h8ffbbdd0c487cde8(&var_90, arg2, &var_178);
            return rax_6;
        }
    }
    
    core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(rdi_12);
    nullptr
}
