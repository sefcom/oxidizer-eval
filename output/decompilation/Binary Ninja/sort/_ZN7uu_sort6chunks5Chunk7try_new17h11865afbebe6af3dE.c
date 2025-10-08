
  void* uu_sort::chunks::Chunk::try_new::h11865afbebe6af3d(int128_t* arg1, int128_t* arg2, int64_t* arg3)

{
    __rust_no_alloc_shim_is_unstable;
    int128_t* rax_1 = __rustc::__rust_alloc(0x90, 8);
    
    if (!rax_1)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    rax_1[1] = arg2[1];
    *rax_1 = *arg2;
    int64_t var_98;
    uu_sort::chunks::read::_$u7b$$u7b$closure$u7d$$u7d$::h464d8e4f4861e1eb(&var_98, arg3, 
        *(rax_1 + 8), rax_1[1]);
    
    if (0 + -(var_98))
    {
        int128_t var_90;
        *arg1 = var_90;
        /* tailcall */
        return core::ptr::drop_in_place$LT$self_cell..unsafe_self_cell..OwnerAndCellDropGuard$LT$alloc..vec..Vec$LT$u8$GT$$C$uu_sort..chunks..ChunkContents$GT$$GT$::h8c8fa88ba292c87c(rax_1);
    }
    
    int64_t var_28;
    *(rax_1 + 0x88) = var_28;
    int128_t var_38;
    *(rax_1 + 0x78) = var_38;
    int128_t var_48;
    *(rax_1 + 0x68) = var_48;
    int128_t var_58;
    *(rax_1 + 0x58) = var_58;
    int128_t zmm0_1 = var_98;
    int128_t var_68;
    *(rax_1 + 0x48) = var_68;
    int128_t var_78;
    *(rax_1 + 0x38) = var_78;
    int128_t var_88;
    *(rax_1 + 0x28) = var_88;
    *(rax_1 + 0x18) = zmm0_1;
    *(arg1 + 8) = rax_1;
    *arg1 = 0;
    return rax_1 + 0x18;
}
