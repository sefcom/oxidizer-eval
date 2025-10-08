
  fn uu_tail::chunks::LinesChunk::from_chunk::h9998bcc032f5fdde(arg1: *mut c_void, arg2: *mut c_void, arg3: i64) -> *mut c_void

{
    let rax: i64;
    let var_28: i64 = rax;
    let r15: i64 = *arg2.byte_offset(0x2008);
    let mut r15_1: i64 = r15 - arg3;
    let mut rbp: i8;
    
    if r15 >= arg3
    {
        uu_tail::chunks::BytesChunk::from_chunk::hf1adf92578b17e1c(arg1, arg2, 
            uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::h2268f5cb3457a111(arg2, 
                arg3));
        rbp = *arg2.byte_offset(0x2010);
    }
    else
    {
        rbp = *arg2.byte_offset(0x2010);
        r15_1 = 0;
        memset(arg1, 0, 0x2000);
        *arg1.byte_offset(0x2000) = 0;
    }
    
    *arg1.byte_offset(0x2008) = r15_1;
    *arg1.byte_offset(0x2010) = rbp;
    arg1
}
