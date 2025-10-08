long long forc_crypto::args::checked_read_stdin(void* a0, unsigned long long a1[3], unsigned long long a2, char a3)
{
    unsigned long long v0;  // [bp-0x50]
    char v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    void* v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    char v8;  // bpl
    unsigned long long v9;  // r14
    unsigned long long v10;  // rdx

    v8 = a3;
    v0 = a2;
    v1 = v8;
    if (!((char)(((0 ^ a1[0]) & (0 ^ -(a1[0]))) >> 63)))
    {
        v9 = a2;
        if ((char)a1[1].equal(a1[2], "-0xPublicKeyAddressforc-plugins/forc-crypto/src/keys/get_public_key.rs", 1))
            goto LABEL_7f8ed2;
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
LABEL_7f8ed2:
        v2 = 0;
        v3 = 1;
        v4 = 0;
        v5 = v0.read_to_end(&v2);
        v6 = v10;
        if (v5)
        {
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v5);
            *((unsigned long long *)a0) = 0;
            *((unsigned long long *)&a0[8]) = 1;
            *((unsigned long long *)&a0[16]) = 0;
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(&v2);
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<usize,std::io::error::Error>>(&v5);
            *((unsigned long long *)&a0[16]) = 0;
            *((int128_t *)a0) = *((int128_t *)&v2);
        }
        v9 = v0;
        v8 = v1;
    }
    return core::ptr::drop_in_place<std::sync::poison::PoisonError<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<alloc::boxed::Box<regex_automata::meta::regex::Cache>>>>>(v9, v8);
}
