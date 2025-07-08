
  int64_t uu_base32::base_common::fast_encode::write_with_line_breaks::h03d07599502588da(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t r13 = arg1[3];
    void* rax;
    int64_t rdx;
    rax = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h690597712d12dddd(
        arg2);
    int64_t* var_58;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::hc443a03f678429ff(&var_58, rax, rdx, 
        r13);
    int64_t i;
    int64_t rdx_1;
    i = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcf811b65d811e47(&var_58);
    int64_t r13_1 = 0;
    
    while (i)
    {
        r13_1 += rdx_1;
        int64_t rax_1;
        uint64_t rdx_3;
        rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::hf7fbefd3dcf7d1e3(i, rdx_1 + i);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h9b9539e3bf19f411(arg1, rax_1, rdx_3);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h84614a45e4b043b7(arg1, 0xa);
        i = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcf811b65d811e47(&var_58);
    }
    
    int64_t result = arg4(arg3, arg1[1], arg1[2]);
    
    if (!result)
    {
        int64_t rdx_7 = core::slice::index::range::h13b88f50439834ab(r13_1, arg2[3]);
        int64_t rcx_1 = arg2[3];
        arg2[3] = 0;
        var_58 = arg2;
        int64_t var_50_1 = rdx_7;
        int64_t var_48_1 = 0;
        int64_t var_40_1 = rcx_1 - rdx_7;
        int64_t var_38_1 = rdx_7;
        core::ptr::drop_in_place$LT$alloc..collections..vec_deque..drain..Drain$LT$u8$GT$$GT$::hc815a55db9c5807a(&var_58);
        
        if (!arg5)
        {
            arg1[2] = 0;
            return 0;
        }
        
        if (!arg2[3])
            return 0;
        
        result = arg4(arg3, 
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h690597712d12dddd(arg2));
        
        if (!result)
            return arg4(arg3, "\n/rustc/8bfcae730a5db2438bbda72…", 1);
    }
    
    return result;
}
