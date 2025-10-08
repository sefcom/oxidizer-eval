
  int64_t uu_base32::base_common::fast_encode::write_with_line_breaks::ha97bbfa18a6fd8e1(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t rbx = arg1[3];
    void* rax;
    int64_t rdx;
    rax = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(
        arg2);
    int64_t* var_58;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::h851c5b7066f706dd(&var_58, rax, rdx, 
        rbx);
    int64_t i;
    int64_t rdx_1;
    i = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c59ef229e894e03(&var_58);
    int64_t r13 = 0;
    
    while (i)
    {
        r13 += rdx_1;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1493bff208258dcb(arg1, i, rdx_1 + i);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbb7f4b0d6baf1c53(arg1, 0xa);
        i = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c59ef229e894e03(&var_58);
    }
    
    int64_t result = arg4(arg3, arg1[1], arg1[2]);
    
    if (!result)
    {
        int64_t rbx_1 = arg2[3];
        int64_t rax_1 = core::slice::index::range::h5490af02fc4e52e4(r13, rbx_1);
        arg2[3] = 0;
        var_58 = arg2;
        int64_t var_50_1 = rax_1;
        int64_t var_48_1 = 0;
        int64_t var_40_1 = rbx_1 - rax_1;
        int64_t var_38_1 = rax_1;
        core::ptr::drop_in_place$LT$alloc..collections..vec_deque..drain..Drain$LT$u8$GT$$GT$::h42dbf5a25c59dfe4(&var_58);
        
        if (!arg5)
        {
            arg1[2] = 0;
            return 0;
        }
        
        if (!arg2[3])
            return 0;
        
        result = arg4(arg3, 
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(arg2));
        
        if (!result)
            return arg4(arg3, "\nassertion failed: encode_in_ch…", 1);
    }
    
    return result;
}
