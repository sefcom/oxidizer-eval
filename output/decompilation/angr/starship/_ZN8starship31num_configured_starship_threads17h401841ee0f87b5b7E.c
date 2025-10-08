long long starship::num_configured_starship_threads()
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    int v2;  // [bp-0x28]
    int v3;  // [bp-0x18]

    std::env::var(&v0, "STARSHIP_NUM_THREADS/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/starship/target/release/build/starship-54501bb14816bd62/out/shadow.rs", 20);
    if ((v0 & 1))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
        return 0;
    }
    v3 = v2;
    if (!((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63)))
    {
        memcpy(&v1, &v3, 16);
        v0 = v1;
        return starship::num_configured_starship_threads::{{closure}}(&v0);
    }
    return 0;
}
