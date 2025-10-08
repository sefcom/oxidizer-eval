
  fn uu_df::is_best::h2e728b01e5cd47e3(arg1: *mut c_void, arg2: i64, arg3: *mut c_void) -> u64

{
    let rax: i64;
    let var_38: i64 = rax;
    let mut rbx: i64;
    rbx = 1;
    
    if arg2 != 0
    {
        let mut r15_1: *mut c_void = arg1;
        let r12_1: i64 = *arg3.byte_offset(8);
        let r13_1: i64 = *arg3.byte_offset(0x10);
        let mut i_1: i64 = arg2 * 0x98;
        let mut i: i64;
        
        do
        {
            if alloc::vec::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$alloc..vec..Vec$LT$U$C$A2$GT$$GT$$u20$for$u20$alloc..vec..Vec$LT$T$C$A1$GT$$GT$::eq::h6c46bd122a266b24(*r15_1.byte_offset(8), *r15_1.byte_offset(0x10), r12_1, r13_1) != 0
                && uu_df::mount_info_lt::h4da597b980b7148d(arg3, r15_1) != 0
            {
                rbx = 0;
                break;
            }
            
            r15_1 += 0x98;
            i = i_1;
            i_1 -= 0x98;
        } while i != 0x98;
    }
    
    rbx
}
