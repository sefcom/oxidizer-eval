long long uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(unsigned long a0, unsigned long a1, struct_0 *a2)
{
    unsigned long long v0;  // [sp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    if (!a0)
    {
        return v3;
    }
    else if (!a1)
    {
        return v3;
    }
    else
    {
        v2 = a2->field_10;
        v3 = v2 - a1;
        if (v2 >= a1)
        {
            return alloc::vec::Vec$LT$T$C$A$GT$::truncate::h179dc526cb7331a2(a2, v3);
        }
        else if (v2)
        {
            v0 = v3;
            core::panicking::panic::h8c3a660c3523e4a4("assertion failed: output_len == 0capacity overflow/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/spec_from_iter_nested.rsreentrant init/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/cell/once.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/iter/traits/exact_size.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/vec/mod.rsTried to shrink to a larger capacity/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/alloc/src/raw_vec.rs", 33, &g_513610); /* do not return */
        }
        else
        {
            return v3;
        }
    }
}
