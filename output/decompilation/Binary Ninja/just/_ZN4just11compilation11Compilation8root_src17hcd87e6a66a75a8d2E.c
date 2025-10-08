
  int64_t just::compilation::Compilation::root_src::hcd87e6a66a75a8d2(void* arg1)

{
    int64_t rax;
    int64_t var_8 = rax;
    void* rax_1 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hf568833ba02effea(
        arg1 + 0x330, arg1 + 0x2e8);
    
    if (rax_1)
    {
        *(rax_1 + 0x20);
        return *(rax_1 + 0x18);
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
