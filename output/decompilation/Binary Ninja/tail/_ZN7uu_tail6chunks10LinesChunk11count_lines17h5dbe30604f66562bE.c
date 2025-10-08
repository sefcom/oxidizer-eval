
  int64_t uu_tail::chunks::LinesChunk::count_lines::h5dbe30604f66562b(void* arg1)

{
    char rbx = *(arg1 + 0x2010);
    int64_t rax;
    int64_t rdx;
    rax = uu_tail::chunks::LinesChunk::get_buffer::h12c5d003f1f481a3(arg1);
    int64_t rsi = rdx + rax;
    char var_10 = rbx;
    int64_t var_28 = rax;
    int64_t var_20 = rax;
    int64_t var_18 = rsi;
    return memchr::arch::generic::memchr::Iter::count::h56a79f2a4b7982aa(rax, rsi, &var_10);
}
