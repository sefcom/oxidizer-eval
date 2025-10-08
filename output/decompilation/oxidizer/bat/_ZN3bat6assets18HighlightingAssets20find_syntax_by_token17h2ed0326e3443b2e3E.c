fn bat::assets::HighlightingAssets::find_syntax_by_token(a1: i64, a2: i64, a3: i64) -> : struct17 {
    let a0: void*;  // rdi
    let v0: Result<struct80, struct9>;  // [bp-0x80]
    let v1: u32;  // [bp-0x7c]
    let v2: struct24;  // [bp-0x78], Other Possible Types: unsigned long
    let v3: struct32;  // [bp-0x70]
    let v4: u128;  // [bp-0x60]
    let v5: u128;  // [bp-0x50]
    let v7: u64;  // r13
    let v8: struct136;  // rax
    let v9: struct104;  // eax
    let v10: struct24;  // rax
    let v11: u64;  // rax

    v0 = bat::assets::HighlightingAssets::get_syntax_set(a1);
    v7 = a0 + 16;
    if &v0 != "\r" {
        v9 = *((&v0 as &char + 1) as &i32);
        v10 = v2;
        *((v7 + 16) as &u128) = v4;
        *((v7 + 32) as &u128) = v5;
        *((v7 + 48) as &i128) = *((&v0 as &char + 64) as &i128);
        *(v7 as &struct32) = v3;
        return struct24 {
            field_0: v0 as i8
            field_1: v1
            field_4: v11
            field_8: <UNKNOWN>
        };
    }
    v8 = syntect::parsing::syntax_set::SyntaxSet::find_syntax_by_token(v2, a2, a3);
    *(v7 as &unsigned long) = v2;
}
