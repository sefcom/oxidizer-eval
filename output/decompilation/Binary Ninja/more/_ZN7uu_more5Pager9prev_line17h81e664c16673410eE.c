
  int64_t uu_more::Pager::prev_line::h81e664c16673410e(void* arg1)

{
    int64_t result = *(arg1 + 0x50);
    
    if (result)
    {
        result -= 1;
        *(arg1 + 0x50) = result;
    }
    
    return result;
}
