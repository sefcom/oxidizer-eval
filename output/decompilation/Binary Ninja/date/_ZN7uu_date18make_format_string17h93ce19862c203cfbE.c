
  void* uu_date::make_format_string::h93ce19862c203cfb(void* arg1)

{
    int64_t rax = -0x8000000000000000 ^ *(arg1 + 0x20);
    int64_t rcx = 3;
    
    if (rax < 5)
        rcx = rax;
    
    switch (rcx)
    {
        case 0:
        {
            uint64_t rax_1 = *(arg1 + 0x28);
            *(&data_453800 + (rax_1 << 3));
            return *(&data_453828 + (rax_1 << 2)) + &data_453828;
            break;
        }
        case 1:
        {
            return "%a, %d %h %Y %T %z%F %T.%f%:z%c";
            break;
        }
        case 2:
        {
            uint64_t rax_5 = *(arg1 + 0x28);
            *(&data_453840 + (rax_5 << 3));
            return *(&data_453858 + (rax_5 << 2)) + &data_453858;
            break;
        }
        case 3:
        {
            *(arg1 + 0x30);
            return *(arg1 + 0x28);
            break;
        }
        case 4:
        {
            return "%c";
            break;
        }
    }
}
