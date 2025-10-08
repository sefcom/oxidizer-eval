long long just::ran::Ran::mutex(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x68]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x50]
    unsigned long long v5;  // rbx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long *v9;  // rax
    char v10;  // dl

    v2.lock(a0);
    v5 = v2.unwrap();
    v2.to_vec(a1.namepath(), a2);
    v7 = v5;
    v1 = *((long long *)&v3);
    memcpy(&v0, &v2, 16);
    v2.entry(v7 + 8, &v0);
    v8 = v2.or_default();
    v0.to_vec(a2, a3);
    v2.entry(v8, &v0);
    v9 = v2.or_default();
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(v9)) + 1, 0, (v7 + 8 <= v7 ? 1 : 0))))
    {
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v5, v10 & 1);
        return *(v9);
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 6828832()
}
