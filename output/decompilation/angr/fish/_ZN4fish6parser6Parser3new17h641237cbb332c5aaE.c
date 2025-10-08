long long fish::parser::Parser::new(void* a0, void* a1, char a2)
{
    char v0;  // [bp-0x328], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x320]
    char v2;  // [bp-0x318], Other Possible Types: unsigned int
    int v3;  // [bp-0x308]
    char v4;  // [bp-0x2f8]
    uint128_t v5;  // [bp-0x2e8]
    unsigned long long v6;  // [bp-0x2d8]
    void* v7;  // [bp-0x2d0]
    void* v8;  // [bp-0x2c0]
    int v9;  // [bp-0x2b8]
    int v10;  // [bp-0x2a8]
    unsigned long long v11;  // [bp-0x2a0]
    int v12;  // [bp-0x298], Other Possible Types: char, uint128_t
    int v13;  // [bp-0x288]
    uint128_t v14;  // [bp-0x278]
    unsigned long long v15;  // [bp-0x268]
    void* v16;  // [bp-0x260]
    unsigned long long v17;  // [bp-0x258]
    int v18;  // [bp-0x250]
    void* v19;  // [bp-0x242]
    uint128_t v20;  // [bp-0x238]
    unsigned long long v21;  // [bp-0x228]
    void* v22;  // [bp-0x220]
    uint128_t v23;  // [bp-0x218]
    unsigned long long v24;  // [bp-0x208]
    uint128_t v25;  // [bp-0x200]
    unsigned long long v26;  // [bp-0x1f0]
    void* v27;  // [bp-0x1e8]
    unsigned long long v28;  // [bp-0x1e0]
    uint128_t v29;  // [bp-0x1c8]
    uint128_t v30;  // [bp-0x1b8]
    void* v31;  // [bp-0x1a8]
    unsigned long long v32;  // [bp-0x1a0]
    void* v33;  // [bp-0x198]
    unsigned short v34;  // [bp-0x190]
    char v35;  // [bp-0x188]
    char v36;  // [bp-0x178]
    unsigned long long v37;  // [bp-0x168]
    void* v38;  // [bp-0x160]
    char v39;  // [bp-0x158]
    char v40;  // [bp-0x148]
    int v41;  // [bp-0x138]
    char v42;  // [bp-0x128]
    uint128_t v43;  // [bp-0x118]
    unsigned long long v44;  // [bp-0x108]
    void* v45;  // [bp-0xd8]
    unsigned int v46;  // [bp-0xc8]
    char v47;  // [bp-0xc0]
    char v48;  // [bp-0x38]
    char v49;  // [bp-0x37]
    char v50;  // [bp-0x36]
    unsigned int v52;  // edx
    unsigned long long v53;  // rax
    struct_0 *v54;  // rax
    unsigned long long v55;  // rdx

    v12.empty();
    v10 = v13;
    v9 = v12;
    v8 = 0;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v0.new();
    memcpy(&v42, &v4, 16);
    v41 = v3;
    memcpy(&v40, &v2, 16);
    memcpy(&v39, &v0, 16);
    memcpy(&v47, a1, 136);
    v48 = 0;
    memcpy(&v35, &v8, 16);
    memcpy(&v36, &v9, 16);
    v37 = v11;
    v12 = 0;
    memcpy(&v13, &v6, 16);
    v38 = 0;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v17 = 18446744073709551615;
    *((uint128_t *)&v18) = 0;
    v19 = 0;
    v23 = 0;
    v24 = 4;
    v25 = 0;
    v26 = 4;
    v27 = 0;
    v28 = 0x8000000000000000;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v32 = 18446744073709551615;
    v34 = 0;
    v33 = 0;
    v49 = 0;
    v50 = a2;
    v20 = 0;
    v21 = 8;
    v22 = 0;
    v43 = 0;
    v44 = 3;
    v45 = 0;
    v46 = 0x3b9aca00;
    v0.from_bytes_with_nul(".", 2);
    if (((char)fish::fds::open_dir(v0.unwrap(&g_14de4f8), (unsigned int)a1, 0x200000) & 1))
    {
        fish::wutil::perror("Unable to open the current working directoryassertion failed: !job.processes().is_empty()assertion failed: matches!(block_type, BlockType::top | BlockType::subst)Invalid block type", 44);
    }
    else
    {
        v0 = 1;
        v1 = 1;
        v2 = v52;
        v53 = v0.new();
        v0 = v53;
        v54 = v12.libdata_mut();
        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<std::os::fd::owned::OwnedFd>>>(&v54->field_50);
        v54->field_50 = v53;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v55);
    }
    memcpy(a0, &v12, 616);
    return a0;
}
