
  void* uu_tail::chunks::LinesChunk::from_chunk::h9998bcc032f5fdde(void* arg1, void* arg2, int64_t arg3)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t r15 = *(arg2 + 0x2008);
    int64_t r15_1 = r15 - arg3;
    char rbp;
    
    if (r15 >= arg3)
    {
        uu_tail::chunks::BytesChunk::from_chunk::hf1adf92578b17e1c(arg1, arg2, 
            uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::h2268f5cb3457a111(arg2, 
                arg3));
        rbp = *(arg2 + 0x2010);
    }
    else
    {
        rbp = *(arg2 + 0x2010);
        r15_1 = 0;
        memset(arg1, 0, 0x2000);
        *(arg1 + 0x2000) = 0;
    }
    
    *(arg1 + 0x2008) = r15_1;
    *(arg1 + 0x2010) = rbp;
    return arg1;
}
