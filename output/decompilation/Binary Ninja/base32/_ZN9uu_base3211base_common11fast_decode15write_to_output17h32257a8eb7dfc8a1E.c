
  int512_t uu_base32::base_common::fast_decode::write_to_output::h32257a8eb7dfc8a1(void* arg1, int64_t arg2, int64_t arg3)

{
    int64_t rax_1;
    int512_t result;
    rax_1 = (*(arg3 + 0x38))(arg2, *(arg1 + 8), *(arg1 + 0x10), arg2);
    
    if (rax_1)
        return result;
    
    *(arg1 + 0x10) = 0;
    return result;
}
