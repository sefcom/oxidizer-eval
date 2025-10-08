
  fn uu_sort::chunks::Chunk::try_new::h11865afbebe6af3d(arg1: *mut i128, arg2: *mut i128, arg3: *mut i64) -> *mut c_void

{
    __rust_no_alloc_shim_is_unstable;
    let rax_1: *mut i128 = __rustc::__rust_alloc(0x90, 8);
    
    if rax_1 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    rax_1[1] = arg2[1];
    *rax_1 = *arg2;
    let mut var_98: i64;
    uu_sort::chunks::read::_$u7b$$u7b$closure$u7d$$u7d$::h464d8e4f4861e1eb(&var_98, arg3, 
        *rax_1.byte_offset(8), rax_1[1]);
    
    if 0 + -(var_98)
    {
        let var_90: i128;
        *arg1 = var_90;
        /* tailcall */
        return core::ptr::drop_in_place$LT$self_cell..unsafe_self_cell..OwnerAndCellDropGuard$LT$alloc..vec..Vec$LT$u8$GT$$C$uu_sort..chunks..ChunkContents$GT$$GT$::h8c8fa88ba292c87c(rax_1);
    }
    
    let var_28: i64;
    *rax_1.byte_offset(0x88) = var_28;
    let var_38: i128;
    *rax_1.byte_offset(0x78) = var_38;
    let var_48: i128;
    *rax_1.byte_offset(0x68) = var_48;
    let var_58: i128;
    *rax_1.byte_offset(0x58) = var_58;
    let zmm0_1: i128 = var_98;
    let var_68: i128;
    *rax_1.byte_offset(0x48) = var_68;
    let var_78: i128;
    *rax_1.byte_offset(0x38) = var_78;
    let var_88: i128;
    *rax_1.byte_offset(0x28) = var_88;
    *rax_1.byte_offset(0x18) = zmm0_1;
    *arg1.byte_offset(8) = rax_1;
    *arg1 = 0;
    rax_1.byte_offset(0x18)
}
