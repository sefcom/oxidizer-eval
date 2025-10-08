
  int64_t uu_csplit::InputSplitter$LT$I$GT$::shrink_buffer_to_size::h2234f941e51dbd39(int64_t* arg1, void* arg2)

{
    int64_t rax_2 = *(arg2 + 0x10);
    int64_t rdx = 0;
    
    if (rax_2 >= *(arg2 + 0x30))
        rdx = rax_2 - *(arg2 + 0x30);
    
    /* tailcall */
    return alloc::vec::Vec$LT$T$C$A$GT$::drain::hf05c69479bb889be(arg1, arg2, rdx);
}
