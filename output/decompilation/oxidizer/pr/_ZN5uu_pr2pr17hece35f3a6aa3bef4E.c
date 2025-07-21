fn uu_pr::pr(a1: i64, a2: i64, a3: i64) -> Result<struct32, struct12> {
    let a0: u64;  // rsi
    let v0: u128;  // [bp-0xc8]
    let v1: u64;  // [bp-0xc0]
    let v2: u64;  // [bp-0xb8]
    let v3: struct32;  // [bp-0xa8], Other Possible Types: u64
    let v4: u32;  // [bp-0xa0]
    let v5: u32;  // [bp-0x98]
    let v6: u64;  // [bp-0x90]
    let v7: core::iter::adapters::take_while::TakeWhile<core::slice::iter::Iter<(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)>, addr2line::{impl#2}::parse_units::{closure_env#2}<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>>;  // [bp-0x88]
    let v9: u128;  // [bp-0x80]
    let v10: u64;  // [bp-0x70]
    let v11: struct56;  // [bp-0x68]
    let v13: i64;  // rdi
    let v14: u64;  // r14
    let v15: i64;  // rdi
    let v16: u64;  // rdx
    let v17: u128;  // xmm0
    let v18: i64;  // rdi

    uu_pr::open(a0, a1, a2);
    if v3 != 9223372036854775813 {
        *(v13 as &u64) = v3;
        *((v13 + 8) as &u32) = v4;
        *((v13 + 16) as &u32) = v5;
        *((v13 + 24) as &u64) = v6;
        return;
    }
    v11 = std::io::buffered::bufreader::BufReader<R>::with_capacity(0x10000, v4, v5);
    v14 = uu_pr::read_stream_and_create_pages(a2, &v11, 0);
    loop {
        vvar_195{stack -136} = core::iter::adapters::take_while::TakeWhile<core::slice::iter::Iter<(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)>, addr2line::{impl#2}::parse_units::{closure_env#2}<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>> OrderedDict({0: core::slice::iter::Iter<(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)> OrderedDict({0: core::ptr::non_null::NonNull<(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)> OrderedDict({0: 𝜙@64b [((6057254, None), vvar_166{stack -136}), ((6057159, None), None)]}), 8: 𝜙@128b [((6057254, None), vvar_167{stack -128}), ((6057159, None), None)], 16: core::marker::PhantomData<&(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)> OrderedDict()}), 16: addr2line::{impl#2}::parse_units::{closure_env#2}<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>> OrderedDict(), 24: 𝜙@64b [((6057254, None), vvar_169{stack -112}), ((6057159, None), None)]})
        <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(&v7);
        if v7.iter.end_or_len == 0x8000000000000000 {
            *((v15 + 8) as &i32) = 0;
            *(v15 as &i64) = 9223372036854775813;
            return;
        }
        v0 = v9;
        v2 = v10;
        if uu_pr::print_page(v1, v10, a2, (&v7.iter.ptr.pointer->__0.__0 as &char + 1) as &(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)) {
            v3 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v16);
            v17 = *(&v3.field_0 as &i128);
            *((v18 + 16) as &i128) = *((&v3.field_8 as &char + 8) as &i128);
            *(v18 as &u128) = v17;
            return;
        }
    }
}
