
  fn uu_sort::chunks::Chunk::try_new::he46abfb7fea210cb(arg1: *mut i128, arg2: *mut i128, arg3: *mut i128) -> *mut c_void

{
    __rust_no_alloc_shim_is_unstable;
    let rax_1: *mut i128 = __rust_alloc(0x78, 8);
    
    if rax_1 == 0
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    rax_1[1] = arg2[1];
    *rax_1 = *arg2;
    let var_28: i64 = arg3[7];
    let var_38: i128 = arg3[6];
    let var_48: i128 = arg3[5];
    let var_58: i128 = arg3[4];
    let var_68: i128 = arg3[3];
    let var_78: i128 = arg3[2];
    let var_88: i128 = arg3[1];
    let mut var_98: i128 = *arg3;
    let mut var_f8: i64;
    uu_sort::chunks::read::_$u7b$$u7b$closure$u7d$$u7d$::h6b4a34b044bf865a(&var_f8, &var_98, 
        *rax_1.byte_offset(8), rax_1[1]);
    
    if var_f8 == -0x8000000000000000
    {
        let var_f0: i128;
        *arg1 = var_f0;
        /* tailcall */
        return core::ptr::drop_in_place$LT$self_cell..unsafe_self_cell..OwnerAndCellDropGuard$LT$alloc..vec..Vec$LT$u8$GT$$C$uu_sort..chunks..ChunkContents$GT$$GT$::h663a83b6b7b7cc61(rax_1);
    }
    
    let var_a8: i128;
    *rax_1.byte_offset(0x68) = var_a8;
    let var_b8: i128;
    *rax_1.byte_offset(0x58) = var_b8;
    let zmm0_1: i128 = var_f8;
    let var_c8: i128;
    *rax_1.byte_offset(0x48) = var_c8;
    let var_d8: i128;
    *rax_1.byte_offset(0x38) = var_d8;
    let var_e8: i128;
    *rax_1.byte_offset(0x28) = var_e8;
    *rax_1.byte_offset(0x18) = zmm0_1;
    *arg1.byte_offset(8) = rax_1;
    *arg1 = 0;
    rax_1.byte_offset(0x18)
}
