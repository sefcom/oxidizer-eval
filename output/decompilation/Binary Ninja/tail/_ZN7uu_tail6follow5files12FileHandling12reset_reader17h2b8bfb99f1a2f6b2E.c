
  int64_t uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(void* arg1, char* arg2, size_t arg3)

{
    void* rax = uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(arg1, arg2, arg3);
    int64_t result = core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(*(rax + 0xc8), *(rax + 0xd0));
    *(rax + 0xc8) = 0;
    return result;
}
