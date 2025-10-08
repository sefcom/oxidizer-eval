
  fn just::parser::Parser::parse_ast::pop_doc_comment::h6e6b0063e8da67d5(arg1: *mut c_void, arg2: i32) -> i64

{
    let r14: i64;
    let var_10: i64 = r14;
    
    if arg2 == 0
    {
        let r12_1: i64 = *arg1.byte_offset(0x10);
        
        if r12_1 != 0
        {
            let rbx_1: i64 = *arg1.byte_offset(8);
            let rax_2: i64 = r12_1 << 8;
            
            if *(rbx_1 + rax_2 - 0x100) == -0x7ffffffffffffffe
            {
                let rax_3: *mut c_void = rax_2 + rbx_1;
                let r15_1: *mut i8 = *rax_3.byte_offset(-0xf8);
                let r14_1: i64 = *rax_3.byte_offset(-0xf0);
                let mut rax_4: *mut c_void;
                let mut rdx_2: i64;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r15_1, r14_1);
                
                if rax_4 == 0
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r15_1, r14_1, 1, r14_1);
                    /* no return */
                }
                
                let mut result: i64;
                let mut rdx_3: i64;
                result = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::h646b688298f76263(
                    rax_4, rdx_2);
                *arg1.byte_offset(0x10) = r12_1 - 1;
                let mut var_128: ();
                memcpy(&var_128, rbx_1 + ((r12_1 - 1) << 8), 0x100);
                core::ptr::drop_in_place$LT$core..option..Option$LT$just..item..Item$GT$$GT$::h8b74df35f7f6bdd5(&var_128);
                return result;
            }
        }
    }
    
    0
}
