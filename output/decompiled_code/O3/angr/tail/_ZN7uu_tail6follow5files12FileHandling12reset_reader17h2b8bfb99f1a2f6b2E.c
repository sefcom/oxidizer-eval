long long uu_tail::follow::files::FileHandling::reset_reader::h2b8bfb99f1a2f6b2(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v1[27];  // rax

    v1 = uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(a0, a1, a2, a3, a4, a5);
    v1[25] = 0;
    return ::0x50d700::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(v1[25], v1[26]);
}
