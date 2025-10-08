
  int64_t uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::h2268f5cb3457a111(void* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rbx = arg2;
    int64_t rax_1;
    int64_t rdx;
    rax_1 = uu_tail::chunks::LinesChunk::get_buffer::h12c5d003f1f481a3(arg1);
    
    if (!rbx | !rdx)
        return 0;
    
    int64_t result = 0;
    int64_t rdi;
    int64_t temp0_1;
    
    do
    {
        int64_t result_1 = result;
        bool r8_1 = *(rax_1 + result) == *(arg1 + 0x2010);
        result += 1;
        
        if (rdx - 1 == result_1)
            break;
        
        rdi = r8_1;
        temp0_1 = rbx;
        rbx -= rdi;
    } while (temp0_1 != rdi);
    return result;
}
