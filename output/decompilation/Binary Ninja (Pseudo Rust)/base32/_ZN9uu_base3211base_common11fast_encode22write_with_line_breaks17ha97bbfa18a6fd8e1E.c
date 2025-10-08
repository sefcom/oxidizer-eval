
  fn uu_base32::base_common::fast_encode::write_with_line_breaks::ha97bbfa18a6fd8e1(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: i8) -> i64

{
    let rbx: i64 = arg1[3];
    let mut rax: *mut c_void;
    let mut rdx: i64;
    rax = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(
        arg2);
    let mut var_58: *mut i64;
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::chunks_exact::h851c5b7066f706dd(&var_58, rax, rdx, 
        rbx);
    let mut i: i64;
    let mut rdx_1: i64;
    i = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c59ef229e894e03(&var_58);
    let mut r13: i64 = 0;
    
    while i != 0
    {
        r13 += rdx_1;
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h1493bff208258dcb(arg1, i, rdx_1 + i);
        alloc::vec::Vec$LT$T$C$A$GT$::push::hbb7f4b0d6baf1c53(arg1, 0xa);
        i = _$LT$core..slice..iter..ChunksExact$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8c59ef229e894e03(&var_58);
    }
    
    let mut result: i64 = arg4(arg3, arg1[1], arg1[2]);
    
    if result == 0
    {
        let rbx_1: i64 = arg2[3];
        let rax_1: i64 = core::slice::index::range::h5490af02fc4e52e4(r13, rbx_1);
        arg2[3] = 0;
        var_58 = arg2;
        let var_50_1: i64 = rax_1;
        let var_48_1: i64 = 0;
        let var_40_1: i64 = rbx_1 - rax_1;
        let var_38_1: i64 = rax_1;
        core::ptr::drop_in_place$LT$alloc..collections..vec_deque..drain..Drain$LT$u8$GT$$GT$::h42dbf5a25c59dfe4(&var_58);
        
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
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::make_contiguous::hf17d47ca8c7d0746(arg2));
        
        if result == 0
        {
            return arg4(arg3, "\nassertion failed: encode_in_ch…", 1);
        }
    }
    
    result
}
