long long uu_head::read_but_last_n_lines::hececef87ab0e6027(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long v0;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long v1;  // [sp-0xe0], Other Possible Types: unsigned long long
    unsigned long v2;  // [sp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xd0]
    unsigned long long v4;  // [sp-0xc8]
    char v5;  // [bp-0xc0]
    char v6;  // [bp-0xb8]
    char v7;  // [bp-0xb0]
    int v8;  // [sp-0xa8]
    int v9;  // [sp-0x98]
    int v10;  // [sp-0x88]
    unsigned long long v11;  // [sp-0x78]
    char v12;  // [bp-0x68]
    char v13;  // [bp-0x58]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbx

    v1 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v1, v17, v18);
    uu_head::take::TakeAllBut$LT$I$GT$::new::hbd670082bf644fa6(&v12, a0, a2, a1);
    v11 = *((long long *)&v15);
    *((int128_t *)&v10) = *((int128_t *)&v14);
    *((int128_t *)&v9) = *((int128_t *)&v13);
    *((int128_t *)&v8) = *((int128_t *)&v12);
    while (true)
    {
        _$LT$uu_head..take..TakeAllBut$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h4494a5e98ff141b1(&v5, &v8);
        v19 = *((long long *)&v5);
        if (v19 == 9223372036854775809)
        {
            core::ptr::drop_in_place$LT$uu_head..take..TakeAllBut$LT$uucore..features..lines..Lines$LT$$RF$mut$u20$std..io..stdio..StdinLock$GT$$GT$$GT$::hf31f2919b545432d(&v8);
            ::0x4b7800::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h0ca90cd3116acc27(v0);
            return 0;
        }
        v20 = *((long long *)&v6);
        if (v19 == 0x8000000000000000)
            break;
        v2 = v19;
        v3 = v20;
        v4 = *((long long *)&v7);
        v20 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, v20, v4);
        if (!v20)
        {
            ::0x4b77a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf4b8546456eaed67(&v2);
        }
        else
        {
            ::0x4b77a0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hf4b8546456eaed67(&v2);
            break;
        }
    }
    core::ptr::drop_in_place$LT$uu_head..take..TakeAllBut$LT$uucore..features..lines..Lines$LT$$RF$mut$u20$std..io..stdio..StdinLock$GT$$GT$$GT$::hf31f2919b545432d(&v8);
    ::0x4b7800::core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h0ca90cd3116acc27(v0);
    return v20;
}
