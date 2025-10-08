fn uu_pr::pr(a1: i64, a2: i64, a3: i64) -> Result<struct32, struct12> {
    let a0: i64;  // rdi
    let v0: struct32;  // [bp-0xc8]
    let v1: struct32;  // [bp-0xc8]
    let v2: u32;  // [bp-0xc0]
    let v3: u32;  // [bp-0xb8]
    let v4: u64;  // [bp-0xb0]
    let v5: u128;  // [bp-0xa8]
    let v6: u64;  // [bp-0xa0]
    let v7: u64;  // [bp-0x98]
    let v9: core::iter::adapters::take_while::TakeWhile<core::slice::iter::Iter<(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)>, addr2line::unit::{impl#1}::parse::{closure_env#2}<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>>;  // [bp-0x88]
    let v10: u128;  // [bp-0x80]
    let v11: u64;  // [bp-0x70]
    let v12: struct56;  // [bp-0x68]
    let v14: u64;  // r14
    let v15: u64;  // rdx
    let v16: iNone;  // xmm0

    v0 = uu_pr::open(a1, a2);
    if v0.field_0 as i64 != 9223372036854775813 {
        return Ok(struct32 {
            field_0: v0.field_0 as i64
            field_8: v2
            field_16: v3
            field_24: v4
        });
    }
    v12 = std::io::buffered::bufreader::BufReader<R>::with_capacity(v2, v3);
    v14 = uu_pr::read_stream_and_create_pages(a3, &v12, 0);
    loop {
        vvar_192{stack -136} = core::iter::adapters::take_while::TakeWhile<core::slice::iter::Iter<(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)>, addr2line::unit::{impl#1}::parse::{closure_env#2}<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>>> OrderedDict([(0, core::slice::iter::Iter<(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)> OrderedDict([(0, core::ptr::non_null::NonNull<(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)> OrderedDict([(0, 𝜙@64b [((5464919, None), vvar_163{stack -136}), ((5464822, None), None)])])), (8, 𝜙@128b [((5464919, None), vvar_164{stack -128}), ((5464822, None), None)]), (16, core::marker::PhantomData<&(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)> OrderedDict())])), (16, addr2line::unit::{impl#1}::parse::{closure_env#2}<gimli::read::endian_slice::EndianSlice<gimli::endianity::LittleEndian>> OrderedDict()), (24, 𝜙@64b [((5464919, None), vvar_166{stack -112}), ((5464822, None), None)])])
        <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::next(&v9);
        if v9.iter.end_or_len == 0x8000000000000000 {
            return struct16 {
                field_0: 9223372036854775813
                field_8: 0
            };
        }
        v5 = v10;
        v7 = v11;
        if (uu_pr::print_page(v6, v11, a3, (&v9.iter.ptr.pointer->__0.__0 as &char + 1) as &(gimli::common::DebugInfoOffset<usize>, gimli::common::DebugArangesOffset<usize>)) & 1) {
            v1 = <uu_pr::PrError as core::convert::From<std::io::error::Error>>::from(v15);
            v16 = v1.field_0;
            return Ok(struct32 {
                field_0: v16
                field_16: v1.field_16
            });
        }
    }
}
