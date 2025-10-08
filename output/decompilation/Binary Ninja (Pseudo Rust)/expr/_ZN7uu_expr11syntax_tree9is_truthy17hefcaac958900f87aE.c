
  fn uu_expr::syntax_tree::is_truthy::hefcaac958900f87a(arg1: *mut i64) -> u64

{
    let mut rbx: u64;
    let mut var_38: *mut c_void;
    
    if !(0 + -(*arg1))
    {
        num_bigint::bigint::convert::_$LT$impl$u20$core..convert..From$LT$i64$GT$$u20$for$u20$num_bigint..bigint..BigInt$GT$::from::h0b235168218471e1(&var_38);
        let rax_6: i8 = arg1[3];
        rbx = 1;
        let var_30: i64;
        let var_20: i8;
        
        if rax_6 == var_20
        {
            let var_28: i64;
            
            if rax_6 != 1
            {
                rbx = alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h0032e1dc3f085ef7(arg1[1], arg1[2], var_30, var_28) ^ 1;
            }
            else
            {
                rbx = 0;
            }
        }
        
        core::ptr::drop_in_place$LT$num_bigint..bigint..BigInt$GT$::hd240cd584614de3e(var_38, 
            var_30);
    }
    else
    {
        let r14_1: *mut i8 = arg1[2];
        let r15_1: u64 = arg1[3];
        rbx = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h697c4080279ccd7a(r14_1, r15_1, "-(uutils coreutils) 0.0.30Print …", 1) == 0
        {
            let var_30_1: *mut c_void = &r14_1[r15_1];
            
            if r15_1 == 0
            {
                rbx = 0;
            }
            else
            {
                var_38 = &r14_1[1];
                let rax_3: u32 = *r14_1;
                
                if rax_3 != 0x2d
                {
                    rbx = 1;
                }
                
                if rax_3 == 0x2d || rax_3 == 0x30
                {
                    rbx = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h95c0cd63d3cde5a9(core::iter::traits::iterator::Iterator::try_fold::hc5952bfbf9073345(
                        &var_38)) ^ 1;
                }
            }
        }
    }
    rbx
}
