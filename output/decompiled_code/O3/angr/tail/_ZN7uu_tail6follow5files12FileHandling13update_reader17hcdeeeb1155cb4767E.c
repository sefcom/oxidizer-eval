long long uu_tail::follow::files::FileHandling::update_reader::hcdeeeb1155cb4767(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x54]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v5[27];  // rbx
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rsi

    v5 = uu_tail::follow::files::FileHandling::get_mut::h2baaf91bd1989d8e(a0, a1, a2, a3, a4, a5);
    std::fs::File::open::hf2bb51bf556498d2(&v0, a1, a2);
    if (*((int *)&v0))
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(*((long long *)&v2));
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::he4bc06bf02b31045(&v3, 0x2000, *((int *)&v1));
    v7 = v5[25];
    v8 = v5[26];
    *((double *)&v5[25]) = ::0x501d20::alloc::boxed::Box$LT$T$GT$::new::h6b18eadb82176d54(&v3);
    v5[26] = &g_5bd988;
    ::0x5018a0::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::h83ed6287a414a33b(v7, v8);
    return 0;
}
