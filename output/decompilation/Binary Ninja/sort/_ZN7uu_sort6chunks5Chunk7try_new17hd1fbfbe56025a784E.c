
  void* uu_sort::chunks::Chunk::try_new::hd1fbfbe56025a784(int128_t* arg1, int128_t* arg2, int128_t* arg3)

{
    __rust_no_alloc_shim_is_unstable;
    int128_t* rax_1 = __rust_alloc(0x78, 8);
    
    if (!rax_1)
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    rax_1[1] = arg2[1];
    *rax_1 = *arg2;
    int64_t var_28 = arg3[7];
    int128_t var_38 = arg3[6];
    int128_t var_48 = arg3[5];
    int128_t var_58 = arg3[4];
    int128_t var_68 = arg3[3];
    int128_t var_78 = arg3[2];
    int128_t var_88 = arg3[1];
    int128_t var_98 = *arg3;
    int64_t var_f8;
    uu_sort::chunks::read::_$u7b$$u7b$closure$u7d$$u7d$::h7ead982378199d48(&var_f8, &var_98, 
        *(rax_1 + 8), rax_1[1]);
    
    if (var_f8 == -0x8000000000000000)
    {
        int128_t var_f0;
        *arg1 = var_f0;
        /* tailcall */
        return core::ptr::drop_in_place$LT$self_cell..unsafe_self_cell..OwnerAndCellDropGuard$LT$alloc..vec..Vec$LT$u8$GT$$C$uu_sort..chunks..ChunkContents$GT$$GT$::h663a83b6b7b7cc61(rax_1);
    }
    
    int128_t var_a8;
    *(rax_1 + 0x68) = var_a8;
    int128_t var_b8;
    *(rax_1 + 0x58) = var_b8;
    int128_t zmm0_1 = var_f8;
    int128_t var_c8;
    *(rax_1 + 0x48) = var_c8;
    int128_t var_d8;
    *(rax_1 + 0x38) = var_d8;
    int128_t var_e8;
    *(rax_1 + 0x28) = var_e8;
    *(rax_1 + 0x18) = zmm0_1;
    *(arg1 + 8) = rax_1;
    *arg1 = 0;
    return rax_1 + 0x18;
}
