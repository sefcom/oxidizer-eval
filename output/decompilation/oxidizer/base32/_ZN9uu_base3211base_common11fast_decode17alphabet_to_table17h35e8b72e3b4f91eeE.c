fn uu_base32::base_common::fast_decode::alphabet_to_table(a0: u64, a1: i64, a2: u64, a3: u32) -> long long {
    let v0: struct18;  // [bp-0x130]
    let v1: struct256;  // [bp-0x118], Other Possible Types: u128
    let v2: u128;  // [bp-0x108]
    let v3: u128;  // [bp-0xf8]
    let v4: u128;  // [bp-0xe8]
    let v5: u128;  // [bp-0xd8]
    let v6: u128;  // [bp-0xc8]
    let v7: u128;  // [bp-0xb8]
    let v8: u128;  // [bp-0xa8]
    let v9: u128;  // [bp-0x98]
    let v10: u128;  // [bp-0x88]
    let v11: u128;  // [bp-0x78]
    let v12: u128;  // [bp-0x68]
    let v13: u128;  // [bp-0x58]
    let v14: u128;  // [bp-0x48]
    let v15: u128;  // [bp-0x38]
    let v16: u128;  // [bp-0x28]
    let v18: i64;  // rax
    let v19: u64;  // rcx
    let v20: i64;  // rsi
    let v21: u8;  // dl
    let v22: u64;  // rax
    let v23: u8;  // dl

    if a3 {
        v1 = struct256 {
            field_0: 0
            field_16: 0
            field_32: 0
            field_48: 0
            field_64: 0
            field_80: 0
            field_96: 0
            field_112: 0
            field_128: 0
            field_144: 0
            field_160: 0
            field_176: 0
            field_192: 0
            field_208: 0
            field_224: 0
            field_240: 0
        };
        if a2 {
            do {
                v19 = *((a1 + v18) as &i8);
                if *((&v1.field_0 + v19) as &i8) {
                    core::panicking::panic("assertion failed: !table[us]"); /* do not return */
                }
                *((&v1.field_0 + v19) as &i8) = 1;
                v18 += 1;
            } while (a2 != v18);
        }
    } else {
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
        v2 = 1334440654591915542993625911497130241;
        v1 = 1334440654591915542993625911497130241;
        v0 = struct18 {
            field_0: 0
            field_8: 2
            field_16: 3338
        };
        if (core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v0) & 1) {
            do {
                v22 = v21;
                if !*((&v1 + v22) as &i8) {
                    core::panicking::panic("assertion failed: table[us]"); /* do not return */
                }
                *((&v1 + v22) as &i8) = 0;
            } while ((core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v0) & 1));
        }
    }
    return memcpy(a0, v20, v23);
}
