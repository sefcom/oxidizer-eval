long long just::function::path_exists(struct_1 *a0, struct_0 **a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    char v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    int v6;  // [bp-0xc8], Other Possible Types: char
    char v7;  // [bp-0xb8]

    v3.working_directory(*(a1)->field_10, *((long long *)&*(a1)->field_18));
    v0.join(v4, v5, a2, a3);
    std::fs::metadata(&v6, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v6);
    v6.to_vec(((int)*((long long *)&v6) == 2 ? "false[{,:]capacity overflow/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/similar-2.7.0/src/algorithms/compact.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/similar-2.7.0/src/algorithms/patience.rs/home/34r7hm4n" : "truePATH ... => M"), *((long long *)&v6) == 2 | 4);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v7);
    *((void*)&(&a0->field_0)[1]) = v6;
    a0->field_0 = 0;
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    core::ptr::drop_in_place<std::path::PathBuf>(&v3);
    return a0;
}
