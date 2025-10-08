long long just::signal_handler::SignalHandler::spawn(void* a0, void* a1)
{
    char v0;  // [bp-0x26d]
    unsigned int v1;  // [bp-0x26c]
    int v2;  // [bp-0x268]
    unsigned int v3;  // [bp-0x260]
    char v4;  // [bp-0x25c]
    int v5;  // [bp-0x240], Other Possible Types: char
    int v6;  // [bp-0x230]
    int v7;  // [bp-0x220]
    unsigned long v8;  // [bp-0x210]
    char v9;  // [bp-0x208]
    char v10;  // [bp-0x1f0], Other Possible Types: unsigned long
    char v11;  // [bp-0x1ec]
    unsigned long long v12;  // [bp-0x1e8]
    char *v13;  // [bp-0x1e0], Other Possible Types: char
    unsigned long long v14;  // [bp-0x1d8]
    void* v15;  // [bp-0x1d0]
    char *v16;  // [bp-0x110], Other Possible Types: char
    unsigned long long v17;  // [bp-0x108]
    unsigned long long v19;  // r15
    char v20;  // dl
    char v21;  // bpl
    struct_0 *v22;  // rbx
    unsigned int v23;  // eax
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax

    v19 = just::signal_handler::SignalHandler::instance();
    v21 = v20 & 1;
    v10.spawn(a1);
    if (*((int *)&v10) == 1)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        *((unsigned long long *)&a0[8]) = v12;
        *((unsigned int *)&a0[56]) = 0;
    }
    else
    {
        memcpy(&v4, &v13, 16);
        *((int128_t *)&v2) = *((int128_t *)&v11);
        v1 = v3 >> 31;
        if (v3 >= 0)
        {
            memcpy(&v10, a1, 224);
            v16.insert(v19 + 8, v3, &v10);
            core::ptr::drop_in_place<core::option::Option<std::process::Command>>(&v16);
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v19, v21);
            v5.call(&(char)v2);
            v22 = just::signal_handler::SignalHandler::instance();
            v10.remove(&v22->padding_0[8], v3);
            core::ptr::drop_in_place<core::option::Option<std::process::Command>>(&v10);
            v23 = v22->field_20;
            *((unsigned long *)&a0[48]) = v8;
            a0[32] = v7;
            a0[16] = v6;
            *(a0) = v5;
            *((unsigned int *)&a0[56]) = v23;
            return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v22, v20 & 1);
        }
        v16 = &v0;
        v17 = <core::num::error::TryFromIntError as core::fmt::Display>::fmt;
        v10 = &g_830f40;
        v12 = 1;
        v15 = 0;
        v13 = &v16;
        v14 = 1;
        v9.map_or_else(0, v24, &v10);
        v25 = 40._new(v9.new(), &g_830e98);
        *((unsigned long long *)a0) = 0x8000000000000000;
        *((unsigned long long *)&a0[8]) = v25;
        *((unsigned int *)&a0[56]) = 0;
        core::ptr::drop_in_place<std::process::Child>(&(char)v2);
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<just::signal_handler::SignalHandler>>(v19, v21);
    return core::ptr::drop_in_place<std::process::Command>(a1);
}
