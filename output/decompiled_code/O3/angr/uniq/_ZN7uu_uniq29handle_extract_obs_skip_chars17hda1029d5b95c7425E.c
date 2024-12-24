long long uu_uniq::handle_extract_obs_skip_chars::hda1029d5b95c7425(unsigned long long a0[3], unsigned long a1, unsigned long long a2, unsigned long long a3[3])
{
    void* v0;  // [sp-0x98]
    unsigned long long v1;  // [sp-0x90]
    void* v2;  // [sp-0x88]
    char v3;  // [bp-0x80]
    char v4;  // [bp-0x70]
    int v5;  // [sp-0x68]
    unsigned long long v6;  // [sp-0x58]
    unsigned long v7;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x40]
    unsigned long long v10;  // r12
    unsigned int v11;  // edx
    unsigned long long v12;  // rax

    v10 = a1;
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v7 = a1;
    v8 = a1 + a2;
    ::0x4bc010::core::str::validations::next_code_point::h8f0957b6990844ba(&v7);
    *((int128_t *)&v5) = *((int128_t *)&v7);
    while (true)
    {
        if (!(int)::0x4bc010::core::str::validations::next_code_point::h8f0957b6990844ba(&v5))
        {
            v12 = v2;
            if (!v12)
            {
                std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, v10, a2);
            }
            else
            {
                _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::h432582854ea1f5fb(&v3, v1, v1 + v12 * 4);
                v6 = *((long long *)&v4);
                *((int128_t *)&v5) = *((int128_t *)&v3);
                ::0x4bbb90::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb6a7a163fc99e7b1(a3);
                a3[2] = v6;
                *((void*)&a3[0]) = v5;
                a0[0] = 0x8000000000000000;
                break;
            }
            goto LABEL_4bdc13;
        }
        else if (v11 - 48 < 10)
        {
            alloc::vec::Vec$LT$T$C$A$GT$::push::h6287db0348681167(&v0, v11);
        }
        else
        {
            ::0x4bbb90::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb6a7a163fc99e7b1(a3);
            a3[0] = 0x8000000000000000;
            std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v3, v10, a2);
LABEL_4bdc13:
            a0[2] = *((long long *)&v4);
            *((int128_t *)&a0[0]) = *((int128_t *)&v3);
            break;
        }
    }
    return ::0x4bb480::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::h877a7afa2a516d50(&v0);
}
