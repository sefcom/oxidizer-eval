
  int64_t just::parser::Parser::parse_ast::pop_doc_comment::h6e6b0063e8da67d5(void* arg1, int32_t arg2)

{
    int64_t r14;
    int64_t var_10 = r14;
    
    if (!arg2)
    {
        int64_t r12_1 = *(arg1 + 0x10);
        
        if (r12_1)
        {
            int64_t rbx_1 = *(arg1 + 8);
            int64_t rax_2 = r12_1 << 8;
            
            if (*(rbx_1 + rax_2 - 0x100) == -0x7ffffffffffffffe)
            {
                void* rax_3 = rax_2 + rbx_1;
                char* r15_1 = *(rax_3 - 0xf8);
                int64_t r14_1 = *(rax_3 - 0xf0);
                void* rax_4;
                int64_t rdx_2;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r15_1, r14_1);
                
                if (!rax_4)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r15_1, r14_1, 1, r14_1);
                    /* no return */
                }
                
                int64_t result;
                int64_t rdx_3;
                result = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h646b688298f76263(
                    rax_4, rdx_2);
                *(arg1 + 0x10) = r12_1 - 1;
                void var_128;
                memcpy(&var_128, rbx_1 + ((r12_1 - 1) << 8), 0x100);
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..item..Item$GT$$GT$::h8b74df35f7f6bdd5(&var_128);
                return result;
            }
        }
    }
    
    return 0;
}
