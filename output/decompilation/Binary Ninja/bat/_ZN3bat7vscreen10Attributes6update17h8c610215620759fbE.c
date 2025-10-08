
  void* bat::vscreen::Attributes::update::h8c610215620759fb(int128_t* arg1, int64_t* arg2)

{
    uint64_t rbx = arg2;
    void* result = jump_table_49c3f4[*arg2] + &jump_table_49c3f4;
    
    switch (result)
    {
        case 0x844ab1:
        {
            return result;
            break;
        }
        case 0x844abd:
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::he1ce7ac76dd9ec5e(*(rbx + 0x38), *(rbx + 0x40), &data_5a2e2b, 1))
                /* tailcall */
                return bat::vscreen::Attributes::update_with_sgr::h0729c538a11aeff6(arg1, 
                    *(rbx + 0x18), *(rbx + 0x20));
            
            /* tailcall */
            return bat::vscreen::Attributes::update_with_unsupported::h31cf4aa7c48629b0(arg1, 
                *(rbx + 8), *(rbx + 0x10));
        }
        case 0x844aff:
        {
            int64_t rax_5 = *(rbx + 0x18);
            int64_t rcx_3 = *(rbx + 0x20) + rax_5;
            int64_t var_30 = rax_5;
            char rax_6;
            int32_t rdx_3;
            rax_6 = core::str::validations::next_code_point::hb422a2ff18694dd5(&var_30, rbx);
            
            if (rax_6 & 1 && (rdx_3 & 0x1ffffe) == 0x28)
                return bat::vscreen::Attributes::update_with_charset::h05c800051a699d8f(arg1, 
                    rdx_3, var_30, rcx_3);
            
            /* tailcall */
            return bat::vscreen::Attributes::update_with_unsupported::h31cf4aa7c48629b0(arg1, 
                *(rbx + 8), *(rbx + 0x10));
        }
        case 0x844b4d:
        {
            int64_t r14_3 = *(rbx + 8);
            uint64_t r15_1 = *(rbx + 0x10);
            
            if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hcaa0289a539b3ffe(
                    *(rbx + 0x18), *(rbx + 0x20), "8;08;;\x1b\x1b[;5;;2;;\x1b]8;;\x1b…", 2))
                /* tailcall */
                return bat::vscreen::Attributes::update_with_hyperlink::h54b93a72f9c23ceb(arg1, 
                    r14_3, r15_1);
            
            /* tailcall */
            return bat::vscreen::Attributes::update_with_unsupported::h31cf4aa7c48629b0(arg1, 
                *(rbx + 8), *(rbx + 0x10));
        }
        case 0x844b94:
        {
            /* tailcall */
            return bat::vscreen::Attributes::update_with_unsupported::h31cf4aa7c48629b0(arg1, 
                *(rbx + 8), *(rbx + 0x10));
        }
    }
}
