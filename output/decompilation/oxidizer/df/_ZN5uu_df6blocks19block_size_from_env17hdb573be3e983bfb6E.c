fn uu_df::blocks::block_size_from_env() -> u64 {
    let v0: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0xa0]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v4: struct32;  // [bp-0x40]
    let v6: u64;  // rax
    let v7: u64;  // rdx

    v0 as u512 = struct64 {
        field_0: 0
        field_8: 3
        field_16: "DF_BLOCK_SIZE"
        field_32: "BLOCK_SIZE"
        field_48: "BLOCKSIZE"
    };
    v6 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v0 as u512);
    if !v6 {
        return 0;
    }
    loop {
        v0 = std::env::var(v6, v7);
        match v0 {
            Ok(_) => {
                v4 = uucore::features::parser::parse_size::parse_size_u64(v1, v2);
                return (v4.field_0 as i64 == 4) as u8 as u64;
            },
            Err(_) => {
                v6 = core::array::iter::iter_inner::PolymorphicIter<[core::mem::maybe_uninit::MaybeUninit<T>]>::next(&v0 as u512);
                if !v6 {
                    return 0;
                }
            },
        }
    }
}
