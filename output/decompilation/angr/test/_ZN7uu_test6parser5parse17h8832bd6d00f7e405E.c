long long uu_test::parser::parse::h8832bd6d00f7e405(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x80]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x50]
    char v4;  // [bp-0x48]
    int v6;  // xmm0

    uu_test::parser::Parser::new::h6d612ffc55b5931e(&v2, a1);
    uu_test::parser::Parser::parse::h4b01a6d19b3f40db(&v0, &v2);
    if (*((int *)&v0) != 7)
    {
        v6 = *((int128_t *)&v0);
        a0->field_8 = *((int128_t *)&v1);
        *((void*)&a0->field_0) = v6;
        core::ptr::drop_in_place$LT$uu_test..parser..Parser$GT$::h69be05316ed7c9ae(&v2);
        return a0;
    }
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v3);
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
    a0->field_0 = 7;
    ::0x4adde0::core::ptr::drop_in_place$LT$core..iter..adapters..peekable..Peekable$LT$alloc..vec..into_iter..IntoIter$LT$std..ffi..os_str..OsString$GT$$GT$$GT$::h1d252f4392002ad9(&v4);
    return a0;
}
