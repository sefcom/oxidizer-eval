
  fn bat::vscreen::Attributes::update::h8c610215620759fb(arg1: *mut i128, arg2: *mut i64) -> *mut c_void

{
    let rbx: u64 = arg2;
    let result: *mut c_void = jump_table_49c3f4[*arg2] + &jump_table_49c3f4;
    
    match result
    {
        0x844ab1 =>
        {
            result
        }
        0x844abd =>
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(*(rbx + 0x38), *(rbx + 0x40), &data_5a2e2b, 1) != 0
            {
                /* tailcall */
                return bat::vscreen::Attributes::update_with_sgr::h0729c538a11aeff6(arg1, 
                    *(rbx + 0x18), *(rbx + 0x20));
            }
            
            /* tailcall */
            bat::vscreen::Attributes::update_with_unsupported::h31cf4aa7c48629b0(arg1, *(rbx + 8), 
                *(rbx + 0x10))
        }
        0x844aff =>
        {
            let rax_5: i64 = *(rbx + 0x18);
            let rcx_3: i64 = *(rbx + 0x20) + rax_5;
            let mut var_30: i64 = rax_5;
            let mut rax_6: i8;
            let mut rdx_3: i32;
            rax_6 = core::str::validations::next_code_point::hb422a2ff18694dd5(&var_30, rbx);
            
            if (rax_6 & 1) != 0 && (rdx_3 & 0x1ffffe) == 0x28
            {
                return bat::vscreen::Attributes::update_with_charset::h05c800051a699d8f(arg1, 
                    rdx_3, var_30, rcx_3);
            }
            
            /* tailcall */
            bat::vscreen::Attributes::update_with_unsupported::h31cf4aa7c48629b0(arg1, *(rbx + 8), 
                *(rbx + 0x10))
        }
        0x844b4d =>
        {
            let r14_3: i64 = *(rbx + 8);
            let r15_1: u64 = *(rbx + 0x10);
            
            if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcaa0289a539b3ffe(
                *(rbx + 0x18), *(rbx + 0x20), "8;08;;\x1b\x1b[;5;;2;;\x1b]8;;\x1b…", 2) != 0
            {
                /* tailcall */
                return bat::vscreen::Attributes::update_with_hyperlink::h54b93a72f9c23ceb(arg1, 
                    r14_3, r15_1);
            }
            
            /* tailcall */
            bat::vscreen::Attributes::update_with_unsupported::h31cf4aa7c48629b0(arg1, *(rbx + 8), 
                *(rbx + 0x10))
        }
        0x844b94 =>
        {
            /* tailcall */
            bat::vscreen::Attributes::update_with_unsupported::h31cf4aa7c48629b0(arg1, *(rbx + 8), 
                *(rbx + 0x10))
        }
    }
}
