long long uu_dd::bufferedoutput::BufferedOutput::flush::hf0f2f33e15e5593b(struct_0 *a0, unsigned int a1[5])
{
    unsigned long long v0[6];  // [bp-0x78]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    char v4;  // [bp-0x58]
    int v5;  // [sp-0x48]
    unsigned long long v7;  // r13
    unsigned long long v8;  // r15
    unsigned long long v9;  // rbp

    uu_dd::Output::write_blocks::h78b56ae9a3f355f3(v0, &a1[1 + 1], *((long long *)&a1[2]), *((long long *)&a1[4]));
    if (v0[0])
    {
        a0->field_8 = *((long long *)&v1);
        v7 = 1;
    }
    else
    {
        v8 = *((long long *)&v2);
        v9 = *((long long *)&v3);
        *((int128_t *)&v5) = *((int128_t *)&v4);
        if (v9)
        {
            core::result::Result$LT$T$C$E$GT$::unwrap::h92e74c7f2e34bccf(1);
            [D] Unsupported jumpkind Ijk_SigTRAP at address 5172238()
        }
        v7 = 0;
        core::result::Result$LT$T$C$E$GT$::unwrap::h92e74c7f2e34bccf(0);
        alloc::vec::Vec$LT$T$C$A$GT$::drain::hb073313df60fa3f3(v0, a1, 0, v8);
        ::0x4eda40::core::ptr::drop_in_place$LT$alloc..vec..drain..Drain$LT$u8$GT$$GT$::h9f8a61b78eca9047(v0);
        a0->field_18 = v9;
        a0->field_10 = v8;
        *((void*)&a0->field_20) = v5;
    }
    a0->field_0 = v7;
    return a0;
}
