long long flealib::camera::save_camera_frames(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    struct struct_1 v0[12];  // [bp-0x1f4]
    char v1;  // [bp-0x1e8]
    int v2;  // [bp-0x1d8], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x1d0]
    char *v4;  // [bp-0x1c8], Other Possible Types: unsigned int
    unsigned long long v5;  // [bp-0x1c0]
    void* v6;  // [bp-0x1b8]
    unsigned int v7;  // [bp-0x1a8]
    unsigned int v8;  // [bp-0x1a4]
    unsigned long long v9;  // [bp-0x1a0]
    int v10;  // [bp-0x198]
    unsigned long long v11;  // [bp-0x188]
    unsigned long long v12;  // [bp-0x180]
    unsigned long long v13;  // [bp-0x178]
    void* v14;  // [bp-0x170], Other Possible Types: char *, char, unsigned int, unsigned long long
    unsigned int v15;  // [bp-0x170]
    unsigned int v16;  // [bp-0x170], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x168]
    char v18;  // [bp-0x160], Other Possible Types: unsigned long long
    unsigned long long v19;  // [bp-0x158]
    char *v20;  // [bp-0x150]
    char v21;  // [bp-0x148], Other Possible Types: unsigned long long
    int v22;  // [bp-0xc0]
    unsigned long long v23;  // [bp-0xb0]
    char v24;  // [bp-0xa8]
    char v25;  // [bp-0x3c]
    unsigned int v27;  // ebx
    unsigned int v28;  // r15d
    struct_0 *v30;  // rbx

    v12 = a2;
    v13 = a3;
    std::fs::metadata(&v14, "/dev/video0failed to spawn thread/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust/library/std/src/thread/mod.rsflealib/src/camera.rsframe-", 11);
    ::0x768fc0::core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v14);
    if (v14 == 2)
    {
        a0.to_vec("Camera not found", 16);
        return a0;
    }
    std::sync::mpmc::channel(&v14);
    memcpy(&v1, &v18, 16);
    v4 = a1;
    *((int128_t *)&v2) = *((int128_t *)&v14);
    v18 = 0x8000000000000000;
    v14 = 0;
    v21 = 0;
    v24.spawn_unchecked(&v14, &(char)v2);
    v14.expect(&v24);
    ::0x768dd0::core::ptr::drop_in_place<std::thread::JoinHandle<()>>(&v14);
    if (a1)
    {
        v27 = 0;
        do
        {
            v28 = v27.forward_unchecked();
            *((unsigned int *)&v0[0]) = v27;
            v14.recv(&v1, a2);
            v24.unwrap(&v14);
            v14 = &v12;
            v17 = <&T as core::fmt::Display>::fmt;
            v18 = &g_b08488;
            v19 = <&T as core::fmt::Display>::fmt;
            v20 = &v0[0].field_0;
            v21 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
            v2 = &g_b08418;
            v3 = 4;
            v6 = 0;
            v4 = &v14;
            v5 = 3;
            v22.map_or_else(&v2);
            v10 = v22;
            v11 = v23;
            v7.create(&v10);
            if (((char)v7 & 1))
            {
                v2 = v9;
                v14.spec_to_string(&v2);
                a0->field_10 = &g_b08488;
                *((int128_t *)&a0->field_0) = *((int128_t *)&v14);
                ::0x768a10::core::ptr::drop_in_place<std::io::error::Error>(&v2);
                ::0x768980::core::ptr::drop_in_place<rscam::Frame>(&v24);
                ::0x768a00::core::ptr::drop_in_place<alloc::string::String>(&v10);
                v1.drop_in_place<std::sync::mpsc::Receiver<rscam::Frame>>();
                return a0;
            }
            v15 = v8;
            v15.write_all(*((long long *)(*((long long *)&v24) + 16)), *((int *)&v25)).unwrap();
            ::0x7689c0::core::ptr::drop_in_place<std::fs::File>(v16);
            ::0x768980::core::ptr::drop_in_place<rscam::Frame>(&v24);
            ::0x768a00::core::ptr::drop_in_place<alloc::string::String>(&v10);
            v27 = v28;
            v14 = v16;
        } while (v28 < a1);
    }
    v30 = a0;
    *((unsigned long long *)&a0->field_0) = 0x8000000000000000;
    v1.drop_in_place<std::sync::mpsc::Receiver<rscam::Frame>>();
    return v30;
}
