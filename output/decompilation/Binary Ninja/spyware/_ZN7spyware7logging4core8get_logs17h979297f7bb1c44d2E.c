
  int64_t* spyware::logging::core::get_logs::h979297f7bb1c44d2(int64_t* arg1)

{
    void* rax = spyware::logging::core::MemoryLogger::global::h99d7eb6ce0974984();
    
    if (rax)
    {
        spyware::logging::core::MemoryLogger::get_logs::h68454e3110e201f1(arg1, rax);
        return arg1;
    }
    
    arg1[1] = 0;
    *arg1 = -0x8000000000000000;
    return arg1;
}
