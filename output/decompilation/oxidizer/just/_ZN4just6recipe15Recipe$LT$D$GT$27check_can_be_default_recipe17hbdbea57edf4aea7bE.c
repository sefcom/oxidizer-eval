fn just::recipe::Recipe<D>::check_can_be_default_recipe(a1: i64) -> : struct25 {
    let a0: i64;  // rdi
    let v1: u64;  // rax
    let v3: struct24;  // al
    let v4: u64;  // rdx
    let v5: u8;  // al

    v1 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::fold(*((a1 + 80) as &i64), *((a1 + 88) as &i64) * 208 + *((a1 + 80) as &i64));
    v3 = 15;
    return struct32 {
        field_0: v5
        padding_1: <UNKNOWN>
        field_8: v1
        field_16: just::token::Token::lexeme(a1 + 144)
        field_24: v4
    };
}
