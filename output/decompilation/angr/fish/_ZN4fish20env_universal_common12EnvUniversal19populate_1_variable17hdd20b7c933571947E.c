long long fish::env_universal_common::EnvUniversal::populate_1_variable(unsigned long long a0, unsigned long long a1, char a2, unsigned long long a3, struct_0 *a4)
{
    unsigned long long v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    int v3;  // [bp-0x88]
    void* v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x78]
    int v6;  // [bp-0x68], Other Possible Types: char
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x48]
    unsigned long long v10;  // rdx
    char v11;  // al
    unsigned long v12;  // rcx
    unsigned long v13;  // cc_ndep

    v0 = fish::env_universal_common::skip_spaces(a0, a1);
    v1 = v0 + v10 * 4;
    v4 = 0;
    v11 = v0.try_fold(&v4);
    if (!(v11 & 1))
        return 0;
    a4->field_8 = 0;
    v12 = v10 + 1;
    if ((char)_ccall(4, 24, v10 + 1, 0, _ccall(17, (unsigned long long)(v11 & 1), 0, v13)))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14d7480); /* do not return */
    }
    else if (v10 >= v12)
    {
        fish::common::unescape_string(&v0, v0 + v12 * 4, v10 - v12, 0, 0);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v0);
        }
        else
        {
            v7 = v2;
            memcpy(&v6, &v0, 16);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a4);
            a4->field_8 = v7;
            *((void*)&a4->field_0[0]) = v6;
            fish::env_universal_common::decode_serialized(&v0, a4->field_0[1], a4->field_8);
            v8.new_vec(&v0, a2);
            if (v10 > v10)
                core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d7498); /* do not return */
            v0.to_vec(v0, v10);
            v5 = v2;
            memcpy(&v4, &v0, 16);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a4);
            a4->field_8 = v5;
            *((void*)&a4->field_0[0]) = v3;
            fish::builtins::fish_indent::fish_indent::{{closure}}(&v0, a4->field_0[1], a4->field_8);
            v5 = v2;
            memcpy(&v4, &v0, 16);
            v0.insert(a3, &v4, &v8);
            return core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0) & 0xffffffffffffff00 | 1;
        }
    }
    else
    {
        core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14d74b0); /* do not return */
    }
    return 0;
}
