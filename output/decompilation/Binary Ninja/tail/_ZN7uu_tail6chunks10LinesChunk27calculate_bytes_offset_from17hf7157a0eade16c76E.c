
  int64_t uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::hf7157a0eade16c76(void* arg1, int64_t arg2)

{
    int64_t r13;
    int64_t var_20 = r13;
    int64_t rbx = arg2;
    int64_t rax;
    int64_t rdx;
    rax = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(arg1);
    int64_t var_40 = rax;
    int64_t var_38 = rdx + rax;
    char* rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfe7d83be48d23115(&var_40);
    int64_t result = 0;
    
    if (rbx && rax_1)
    {
        char rbp_1 = *(arg1 + 0x2010);
        result = 0;
        int64_t r12_1;
        int64_t temp0_1;
        
        do
        {
            r13 = *rax_1 == rbp_1;
            result += 1;
            rax_1 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hfe7d83be48d23115(&var_40);
            
            if (!rax_1)
                break;
            
            r12_1 = r13;
            temp0_1 = rbx;
            rbx -= r12_1;
        } while (temp0_1 != r12_1);
    }
    
    return result;
}
