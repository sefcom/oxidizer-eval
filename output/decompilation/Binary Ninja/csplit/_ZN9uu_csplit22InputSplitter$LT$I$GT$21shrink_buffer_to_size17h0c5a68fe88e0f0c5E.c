
  int64_t uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h0c5a68fe88e0f0c5(int64_t* arg1, void* arg2)

{
    int64_t rax_2 = *(arg2 + 0x10);
    int64_t rdx = 0;
    
    if (rax_2 >= *(arg2 + 0x30))
        rdx = rax_2 - *(arg2 + 0x30);
    
    /* tailcall */
    return alloc::vec::Vec$LT$T$C$A$GT$::drain::h58787e57b634cf4d(arg1, arg2, rdx);
}
