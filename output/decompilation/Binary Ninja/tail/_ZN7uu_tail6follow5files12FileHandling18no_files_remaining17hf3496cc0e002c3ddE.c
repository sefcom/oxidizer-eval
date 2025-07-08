
  int64_t uu_tail::follow::files::FileHandling::no_files_remaining::hf3496cc0e002c3dd(void* arg1, int64_t arg2)

{
    if (!*(arg1 + 0x30))
    {
        int64_t result;
        result = 1;
        return result;
    }
    
    if (!uu_tail::follow::files::FileHandling::files_remaining::h86d5a5f2d15f0cfd(arg1))
        return !*(arg2 + 0x48);
    
    return 0;
}
