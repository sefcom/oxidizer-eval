
  fn ruff_python_formatter::comments::map::MultiMap$LT$K$C$V$GT$::leading_dangling_trailing::h08a799c77fbcf780(arg1: *mut i64, arg2: *mut c_void, arg3: *mut c_void) -> i64

{
    let rax: *mut c_void =
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hfe322db32d3ddec8(
        arg2.byte_offset(0x30), arg3);
    let mut result: i64;
    let mut rdx_6: i64;
    let mut rsi_6: i64;
    let mut rdi_7: i64;
    let mut r12_1: i64;
    let mut r13: i64;
    
    if rax == 0
    {
        rsi_6 = 0;
        rdi_7 = 4;
        r12_1 = 4;
        r13 = 0;
        result = 4;
        rdx_6 = 0;
    }
    else
    {
        let rdi_1: i32 = *rax.byte_offset(0x10);
        
        if rdi_1 == 0
        {
            let rdi_8: i64 = *rax.byte_offset(0x18);
            let rsi_7: i64 = *arg2.byte_offset(0x28);
            
            if rdi_8 >= rsi_7
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8, rsi_7);
                /* no return */
            }
            
            if rdi_8 + 1 >= rsi_7
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8 + 1, rsi_7);
                /* no return */
            }
            
            if rdi_8 + 2 >= rsi_7
            {
                core::panicking::panic_bounds_check::h025cadc56a971af7(rdi_8 + 2, rsi_7);
                /* no return */
            }
            
            let rdx_7: i64 = *arg2.byte_offset(0x20);
            let rsi_8: i64 = rdi_8 * 3;
            rdi_7 = *(rdx_7 + (rsi_8 << 3) + 8);
            rsi_6 = *(rdx_7 + (rsi_8 << 3) + 0x10);
            let rax_5: i64 = (rdi_8 + 1) * 3;
            r12_1 = *(rdx_7 + (rax_5 << 3) + 8);
            r13 = *(rdx_7 + (rax_5 << 3) + 0x10);
            let rcx_5: i64 = (rdi_8 + 2) * 3;
            result = *(rdx_7 + (rcx_5 << 3) + 8);
            rdx_6 = *(rdx_7 + (rcx_5 << 3) + 0x10);
        }
        else
        {
            let r14_1: i64 = *arg2.byte_offset(8);
            let r15_1: i64 = *arg2.byte_offset(0x10);
            let mut rax_1: i64;
            let mut rdx_1: i64;
            rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_1 - 1, *rax.byte_offset(0x14) - 1, r14_1, r15_1);
            let rsi_3: i32 = *rax.byte_offset(0x18);
            let rdi_4: u64 = *rax.byte_offset(0x14) - 1;
            let mut rsi_4: u64 = rsi_3 - 1;
            
            if rsi_3 < 1
            {
                rsi_4 = rdi_4;
            }
            
            let mut rax_2: i64;
            let mut rdx_3: i64;
            rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rdi_4, rsi_4, r14_1, r15_1);
            r12_1 = rax_2;
            r13 = rdx_3;
            let mut rax_3: u64;
            let mut rdx_4: i64;
            rax_3 = ruff_python_formatter::comments::map::InOrderEntry::trailing_range::h32d34cc5d8d5c983(rax.byte_offset(0x10));
            result = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h2681de418ccc56ae(rax_3, rdx_4, r14_1, r15_1);
            rsi_6 = rdx_1;
            rdi_7 = rax_1;
        }
    }
    
    *arg1 = rdi_7;
    arg1[1] = rsi_6;
    arg1[2] = r12_1;
    arg1[3] = r13;
    arg1[4] = result;
    arg1[5] = rdx_6;
    result
}
