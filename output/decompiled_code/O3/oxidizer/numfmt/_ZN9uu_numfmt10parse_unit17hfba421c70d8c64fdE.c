fn uu_numfmt::parse_unit(a0: u64, a1: u64, a2: u64) -> int {
    let v1: &u128;  // rax
    let v2: u256;  // ymm0
    let v3: u256;  // ymm0

    switch (a2) {
    case 2:
        if a1->field_0 != 26995 {
            vvar_91{reg 16} = __rust_alloc(29, 1);
            *((v1 as &char + 13) as &i128) = 133449359328100653481948179163157653870;
            *(v1) = 154737879025972706013838974321557728853;
            a0->field_0 = 29;
            *(&a0->field_8 as &&u128) = v1;
            a0->field_10 = 29;
            return v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 133449359328100653481948179163157653870 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154737879025972706013838974321557728853;
        }
        a0->field_8 = 3;
        a0->field_0 = 0x8000000000000000;
        return v2;
    case 3:
        if !(!(a1->padding_2[0] ^ 99)) || !(!(a1->field_0 ^ 25961)) {
            vvar_95{reg 16} = __rust_alloc(29, 1);
            *((v1 as &char + 13) as &i128) = 133449359328100653481948179163157653870;
            *(v1) = 154737879025972706013838974321557728853;
            a0->field_0 = 29;
            *(&a0->field_8 as &&u128) = v1;
            a0->field_10 = 29;
            return v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 133449359328100653481948179163157653870 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154737879025972706013838974321557728853;
        }
        a0->field_8 = 0;
        a0->field_0 = 0x8000000000000000;
        return v2;
    case 4:
        switch (*(&a1->field_0 as &i32)) {
        case 1869903201:
            a0->field_8 = 2;
            break;
        case 1701736302:
            a0->field_8 = 5;
            break;
        default:
            v1 = __rust_alloc(29, 1);
            *((v1 as &char + 13) as &i128) = 133449359328100653481948179163157653870;
            *(v1) = 154737879025972706013838974321557728853;
            a0->field_0 = 29;
            *(&a0->field_8 as &&u128) = v1;
            a0->field_10 = 29;
            return v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 133449359328100653481948179163157653870 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154737879025972706013838974321557728853;
        }
        a0->field_0 = 0x8000000000000000;
        return v2;
    case 5:
        if !(!(a1->field_4 ^ 105)) || !(!(761488745 ^ *(&a1->field_0 as &i32))) {
            vvar_99{reg 16} = __rust_alloc(29, 1);
            *((v1 as &char + 13) as &i128) = 133449359328100653481948179163157653870;
            *(v1) = 154737879025972706013838974321557728853;
            a0->field_0 = 29;
            *(&a0->field_8 as &&u128) = v1;
            a0->field_10 = 29;
            return v3 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 133449359328100653481948179163157653870 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 154737879025972706013838974321557728853;
        }
        a0->field_8 = 1;
        a0->field_0 = 0x8000000000000000;
        return v2;
    }
}
