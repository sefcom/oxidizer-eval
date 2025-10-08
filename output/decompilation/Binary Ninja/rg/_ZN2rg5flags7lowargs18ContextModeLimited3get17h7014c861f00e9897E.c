
  int64_t rg::flags::lowargs::ContextModeLimited::get::h7014c861f00e9897(void* arg1)

{
    int64_t result;
    
    if (!*(arg1 + 0x20))
    {
        result = 0;
        
        if (*arg1)
            result = *(arg1 + 8);
    }
    else
    {
        result = *(arg1 + 0x28);
        
        if (*arg1)
            result = *(arg1 + 8);
    }
    
    if (!*(arg1 + 0x10))
        return result;
    
    *(arg1 + 0x18);
    return result;
}
