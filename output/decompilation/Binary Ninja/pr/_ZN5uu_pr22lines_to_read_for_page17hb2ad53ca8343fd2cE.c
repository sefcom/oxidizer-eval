
  int64_t uu_pr::lines_to_read_for_page::hb2ad53ca8343fd2c(void* arg1)

{
    int64_t rdx = 1;
    
    if (*(arg1 + 0x100) != -0x8000000000000000)
        rdx = *(arg1 + 0x120);
    
    return (*(arg1 + 0x138) >> *(arg1 + 0x140)) * rdx;
}
