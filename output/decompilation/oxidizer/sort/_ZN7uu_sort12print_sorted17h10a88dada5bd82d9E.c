fn uu_sort::print_sorted(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: struct24;  // [bp-0xa8]
    let v1: Result<struct112, struct24>;  // [bp-0x98]
    let v2: struct24;  // [bp-0x88], Other Possible Types: struct48
    let v3: struct41;  // [bp-0x58]
    let v5: u64;  // cc_ndep
    let v6: i64;  // rax
    let v7: struct32;  // rax

    v2 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec((_ccall(1, 8, 0, *(a2 as &i64), v5) as char ? *((a2 + 8) as &i64) : &g_42b7a5), (_ccall(1, 8, 0, *(a2 as &i64), v5) as char ? *((a2 + 16) as &i64) : 15));
    v1 = v2.field_16;
    v0 = *(&v2.field_0 as &i128);
    v3 = uu_sort::Output::into_write(a2);
    v2 = struct48 {
        field_0: *(a0 as &i128)
        field_16: *((a0 + 16) as &i128)
        field_32: *((a0 + 32) as &i128)
    };
    do {
        v6 = <itertools::adaptors::coalesce::CoalesceBy<I,F,C> as core::iter::traits::iterator::Iterator>::next(&v2);
        if !v6 {
            v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(<std::io::buffered::bufwriter::BufWriter<W> as std::io::Write>::flush(&v3), &v0);
        }
        v7 = <core::result::Result<T,std::io::error::Error> as uucore::mods::error::FromIo<core::result::Result<T,alloc::boxed::Box<dyn uucore::mods::error::UError>>>>::map_err_context(uu_sort::Line::print(*(v6 as &i64), *((v6 + 8) as &i64), &v3, a1), &v0);
    } while (!v7);
    return v7;
}
