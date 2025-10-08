
  fn zoxide::util::to_lowercase::h601373cb57afac0c(arg1: *mut i64, arg2: i64, arg3: [u32; 0x4] @ zmm0, arg4: [i8; 0x10] @ zmm1, arg5: u128 @ zmm2) -> i64

{
    let mut rax: *mut i128;
    let mut rdx_1: u64;
    rax = _$LT$$RF$T$u20$as$u20$core..convert..AsRef$LT$U$GT$$GT$::as_ref::h4cd980ea14f59bb6(arg2);
    let r15: *mut i8 = rax;
    
    if core::slice::ascii::is_ascii::hcb3cbfd8f29d869f(rax, rdx_1, arg3, arg4, arg5) == 0
    {
        /* tailcall */
        return alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::hb778be1bb3f3f772(arg1, r15, rdx_1);
    }
    
    /* tailcall */
    alloc::str::_$LT$impl$u20$str$GT$::to_ascii_lowercase::hf95169cb6b5516b7(arg1, r15, rdx_1)
}
