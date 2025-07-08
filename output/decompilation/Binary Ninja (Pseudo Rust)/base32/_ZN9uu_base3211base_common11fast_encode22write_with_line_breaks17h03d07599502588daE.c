
  fn uu_base32::base_common::fast_encode::write_with_line_breaks::h03d07599502588da(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i8) -> i64

{
    let r13: i64 = arg1[3];
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h690597712d12dddd(
        arg2);
    let mut var_58: *mut i64;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::hc443a03f678429ff(&var_58, rax, rdx, 
        r13);
    let mut i: i64;
    let mut rdx_1: i64;
    i = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcf811b65d811e47(&var_58);
    let mut r13_1: i64 = 0;
    
    while i != 0
    {
        r13_1 += rdx_1;
        let mut rax_1: i64;
        let mut rdx_3: u64;
        rax_1 = core::slice::iter::Iter$LT$T$GT$::make_slice::hf7fbefd3dcf7d1e3(i, rdx_1 + i);
        alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h9b9539e3bf19f411(arg1, rax_1, rdx_3);
        alloc::vec::Vec$LT$T$C$A$GT$::push::h84614a45e4b043b7(arg1, 0xa);
        i = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdcf811b65d811e47(&var_58);
    }
    
    let mut result: i64 = arg4(arg3, arg1[1], arg1[2]);
    
    if result == 0
    {
        let rdx_7: i64 = core::slice::index::range::h13b88f50439834ab(r13_1, arg2[3]);
        let rcx_1: i64 = arg2[3];
        arg2[3] = 0;
        var_58 = arg2;
        let var_50_1: i64 = rdx_7;
        let var_48_1: i64 = 0;
        let var_40_1: i64 = rcx_1 - rdx_7;
        let var_38_1: i64 = rdx_7;
        core::ptr::drop_in_place$LT$alloc..collections..vec_deque..drain..Drain$LT$u8$GT$$GT$::hc815a55db9c5807a(&var_58);
        
        if arg5 == 0
        {
            arg1[2] = 0;
            return 0;
        }
        
        if arg2[3] == 0
        {
            return 0;
        }
        
        result = arg4(arg3, 
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::h690597712d12dddd(arg2));
        
        if result == 0
        {
            return arg4(arg3, "\n/rustc/8bfcae730a5db2438bbda72…", 1);
        }
    }
    
    result
}
