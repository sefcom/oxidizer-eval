long long uu_base32::base_common::fast_decode::alphabet_to_table(void* a0, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    void* v0;  // [bp-0x130], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x128]
    unsigned short v2;  // [bp-0x120]
    uint128_t v3;  // [bp-0x118]
    uint128_t v4;  // [bp-0x108]
    uint128_t v5;  // [bp-0xf8]
    uint128_t v6;  // [bp-0xe8]
    uint128_t v7;  // [bp-0xd8]
    uint128_t v8;  // [bp-0xc8]
    uint128_t v9;  // [bp-0xb8]
    uint128_t v10;  // [bp-0xa8]
    uint128_t v11;  // [bp-0x98]
    uint128_t v12;  // [bp-0x88]
    uint128_t v13;  // [bp-0x78]
    uint128_t v14;  // [bp-0x68]
    uint128_t v15;  // [bp-0x58]
    uint128_t v16;  // [bp-0x48]
    uint128_t v17;  // [bp-0x38]
    uint128_t v18;  // [bp-0x28]
    char *v20;  // rax
    unsigned long v21;  // rax
    unsigned int v22;  // edx
    unsigned long v23;  // rax

    if (a3)
    {
        v18 = 0;
        v17 = 0;
        v16 = 0;
        v15 = 0;
        v14 = 0;
        v13 = 0;
        v12 = 0;
        v11 = 0;
        v10 = 0;
        v9 = 0;
        v8 = 0;
        v7 = 0;
        v6 = 0;
        v5 = 0;
        v4 = 0;
        v3 = 0;
        v0 = a1;
        v1 = a2 + a1;
        if (v0.next())
        {
            do
            {
                v21 = *(v20);
                if (*((char *)&v3 + v21) == 1)
                    core::panicking::panic("assertion failed: !table[us]assertion failed: decode_in_chunks_of_size > 0assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < decode_in_chunks_of_size/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs", 28, &g_5a3090); /* do not return */
                *((char *)&v3 + v21) = 1;
                v20 = v0.next();
            } while (v20);
        }
    }
    else
    {
        v18 = 1334440654591915542993625911497130241;
        v17 = 1334440654591915542993625911497130241;
        v16 = 1334440654591915542993625911497130241;
        v15 = 1334440654591915542993625911497130241;
        v14 = 1334440654591915542993625911497130241;
        v13 = 1334440654591915542993625911497130241;
        v12 = 1334440654591915542993625911497130241;
        v11 = 1334440654591915542993625911497130241;
        v10 = 1334440654591915542993625911497130241;
        v9 = 1334440654591915542993625911497130241;
        v8 = 1334440654591915542993625911497130241;
        v7 = 1334440654591915542993625911497130241;
        v6 = 1334440654591915542993625911497130241;
        v5 = 1334440654591915542993625911497130241;
        v4 = 1334440654591915542993625911497130241;
        v3 = 1334440654591915542993625911497130241;
        v0 = 0;
        v1 = 2;
        for (v2 = 3338; (v0.next() & 1); *((char *)&v3 + v23) = 0)
        {
            v23 = v22;
            if (!*((char *)&v3 + v23))
                core::panicking::panic("assertion failed: table[us]assertion failed: !table[us]assertion failed: decode_in_chunks_of_size > 0assertion failed: !input_buffer.is_empty()assertion failed: leftover_buffer.len() < decode_in_chunks_of_size/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/alloc/src/raw_vec.rs", 27, &g_5a3078); /* do not return */
        }
        core::ptr::drop_in_place<core::array::iter::IntoIter<u8,2_usize>>();
    }
    return memcpy(a0, &v3, 0x100);
}
