long long fd::cli::Opts::normalize_path(unsigned long long a0, char a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa8]
    char v2;  // [bp-0xa0]
    char v3;  // [bp-0x70]

    if ((a1 & 1))
    {
        normpath::imp::normalize(&v3, a2, a3);
        v0.unwrap(&v3);
        fd::filesystem::absolute_path(&v3, v1, *((long long *)&v2));
        a0.unwrap(&v3);
        return core::ptr::drop_in_place<fd::hyperlink::PathUrl>(v0, v1);
    }
    (char)v0.components(a2, a3);
    v3.components(".//rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs", 1);
    if (!(char)v0.eq(&v3))
        return std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a2, a3);
    return a0.to_vec("./cannot parse integer from empty stringinvalid digit found in stringnumber too large to fit in target typenumber too small to fit in target typenumber would be zero for non-zero typeTryFromIntErrorfatal runtime error: thread result panicked on drop, abort", 2);
}
