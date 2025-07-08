
  int64_t uu_tail::chunks::LinesChunk::count_lines::hff5a62bbb9e14842(void* arg1)

{
    char rbx = *(arg1 + 0x2010);
    int64_t rax;
    int64_t rdx;
    rax = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(arg1);
    int64_t rsi = rdx + rax;
    char var_10 = rbx;
    int64_t var_28 = rax;
    int64_t var_20 = rax;
    int64_t var_18 = rsi;
    return memchr::arch::generic::memchr::Iter::count::h043089570cb60419(rax, rsi, &var_10);
}
