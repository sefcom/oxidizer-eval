
  int64_t uu_tail::follow::files::FileHandling::reset_reader::hff52527130e84020(void* arg1, char* arg2, uint64_t arg3)

{
    int64_t rax;
    int64_t var_18 = rax;
    void* rax_1 =
        uu_tail::follow::files::FileHandling::get_mut::h1b58406c510d0063(arg1, arg2, arg3);
    int64_t result = core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::h1ddfbf499f92a46c(*(rax_1 + 0xc8), *(rax_1 + 0xd0));
    *(rax_1 + 0xc8) = 0;
    return result;
}
