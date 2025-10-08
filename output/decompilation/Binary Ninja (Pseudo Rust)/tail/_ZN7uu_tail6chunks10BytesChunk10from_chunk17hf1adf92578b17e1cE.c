
  fn uu_tail::chunks::BytesChunk::from_chunk::hf1adf92578b17e1c(arg1: *mut c_void, arg2: *mut c_void, arg3: i64) -> *mut c_void

{
    let var_1028: i64 = 0;
    let r13: i64 = *arg2.byte_offset(0x2000);
    let mut r13_1: i64 = r13 - arg3;
    
    if r13 <= arg3
    {
        r13_1 = 0;
        memset(arg1, 0, 0x2000);
    }
    else
    {
        let mut var_2028: ();
        memset(&var_2028, 0, 0x2000);
        let mut rax_1: i64;
        let mut rdx: i64;
        rax_1 = uu_tail::chunks::BytesChunk::get_buffer_with::he0dbe54d462564f8(arg2, arg3);
        let mut rax_2: i64;
        let mut rdx_1: u64;
        rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h31215103ba1d9a12(rdx, &var_2028, 0x2000);
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h4eaea30b35a0d5a1(rax_2, 
            rdx_1, rax_1, rdx);
        memcpy(arg1, &var_2028, 0x2000);
    }
    
    *arg1.byte_offset(0x2000) = r13_1;
    arg1
}
