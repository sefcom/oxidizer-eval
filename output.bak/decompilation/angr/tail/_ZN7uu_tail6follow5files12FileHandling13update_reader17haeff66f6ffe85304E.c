long long uu_tail::follow::files::FileHandling::update_reader::haeff66f6ffe85304(unsigned int a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x54]
    char v2;  // [bp-0x50]
    char v3;  // [bp-0x48]
    unsigned long long v5[27];  // rbx
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rsi

    v5 = uu_tail::follow::files::FileHandling::get_mut::h1a80ce1ee4fcf7dc(a0, a1, a2);
    std::fs::File::open::hcbb28a04a46ba590(&v0, a1, a2);
    if (*((int *)&v0))
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(*((long long *)&v2));
    std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::ha3ac34d0a7f10d70(&v3, 0x2000, *((int *)&v1));
    v7 = v5[25];
    v8 = v5[26];
    *((double *)&v5[25]) = ::0x50db60::alloc::boxed::Box$LT$T$GT$::new::hf480b26787a6f5a3(&v3);
    v5[26] = &g_5bc4c8;
    ::0x50d700::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$std..io..BufRead$GT$$GT$$GT$::hb79f29454372363d(v7, v8);
    return 0;
}
