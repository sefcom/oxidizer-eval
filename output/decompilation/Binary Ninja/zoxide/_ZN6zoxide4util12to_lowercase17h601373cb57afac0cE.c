
  int64_t zoxide::util::to_lowercase::h601373cb57afac0c(int64_t* arg1, int64_t arg2, uint32_t arg3[0x4] @ zmm0, char arg4[0x10] @ zmm1, uint128_t arg5 @ zmm2)

{
    int128_t* rax;
    uint64_t rdx_1;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h4cd980ea14f59bb6(arg2);
    char* r15 = rax;
    
    if (!core::slice::ascii::is_ascii::hcb3cbfd8f29d869f(rax, rdx_1, arg3, arg4, arg5))
        /* tailcall */
        return alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(arg1, r15, rdx_1);
    
    /* tailcall */
    return alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::hf95169cb6b5516b7(arg1, r15, 
        rdx_1);
}
