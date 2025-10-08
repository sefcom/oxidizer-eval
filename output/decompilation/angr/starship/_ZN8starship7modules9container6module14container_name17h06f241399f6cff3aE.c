long long starship::modules::container::module::container_name(void* a0)
{
    int v0;  // [bp-0x158], Other Possible Types: char
    unsigned long long v1;  // [bp-0x150]
    unsigned long long v2;  // [bp-0x148]
    char v3;  // [bp-0x138]
    unsigned long long v4;  // [bp-0x130]
    unsigned long long v5;  // [bp-0x128]
    char v6;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x118]
    unsigned long long v8;  // [bp-0x110]
    char v9;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0x100]
    unsigned long long v11;  // [bp-0xf8]
    char v12;  // [bp-0x50], Other Possible Types: unsigned long long
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x38]
    unsigned long long v15;  // [bp-0x28]
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rsi

    v0.to_vec("/proc/vz(", 8);
    std::fs::metadata(&v9, v1, v2);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
    core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    if ((unsigned int)v9 != 2)
    {
        v0.to_vec("/proc/bcicrosoft%H:%M:%SdivergedNoMemoryBufError@", 8);
        std::fs::metadata(&v9, v1, v2);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        if ((unsigned int)v9 != 2)
            goto LABEL_b89412;
        v17 = "OpenVZ/run/host/container-managerOCI/dev/incus/sockIncus/run/.containerenv/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs";
        v18 = 6;
    }
    else
    {
LABEL_b89412:
        v0.to_vec("/run/host/container-managerOCI/dev/incus/sockIncus/run/.containerenv/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 27);
        std::fs::metadata(&v9, v1, v2);
        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
        if ((unsigned int)v9 == 2)
        {
            v0.to_vec("/dev/incus/sockIncus/run/.containerenv/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 15);
            std::fs::metadata(&v9, v1, v2);
            core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
            core::ptr::drop_in_place<std::path::PathBuf>(&v0);
            if ((unsigned int)v9 == 2)
            {
                v3.to_vec("/run/.containerenv/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 18);
                std::fs::metadata(&v9, v4, v5);
                core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
                if ((unsigned int)v9 == 2)
                {
                    v9.to_vec("/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 22);
                    v15 = v11;
                    memcpy(&v14, &v9, 16);
                    starship::utils::read_file(&v0, &v14);
                    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
                    {
                        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v0);
                        goto LABEL_b89691;
                    }
                    v19 = core::str::<impl str>::trim_matches(v1, v2);
                    if ((char)v19.equal(v20, "dockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 6))
                    {
                        v9.to_vec("Dockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 6);
                        goto LABEL_b89734;
                    }
                    else if ((char)v19.equal(v20, "wsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 3))
                    {
                        core::ptr::drop_in_place<alloc::string::String>(&v0);
LABEL_b89691:
                        v9.to_vec("/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 11);
                        v2 = v11;
                        *((int128_t *)&v0) = *((int128_t *)&v9);
                        std::fs::metadata(&v9, v1, v11);
                        core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v9);
                        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
                        if ((unsigned int)v9 == 2)
                        {
                            *((unsigned long long *)a0) = 0x8000000000000000;
                        }
                        else
                        {
                            v9.to_vec("Dockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 6);
                            *((unsigned long long *)&a0[16]) = v11;
                            *((int128_t *)a0) = *((int128_t *)&v9);
                        }
                    }
                    else
                    {
                        v9.to_vec("SystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs", 7);
LABEL_b89734:
                        *((unsigned long long *)&a0[16]) = v11;
                        *((int128_t *)a0) = *((int128_t *)&v9);
                        core::ptr::drop_in_place<alloc::string::String>(&v0);
                    }
                    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&v3);
                }
                else
                {
                    v11 = v5;
                    memcpy(&v9, &v3, 16);
                    starship::utils::read_file(&v12, &v9);
                    if ((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63))
                    {
                        v21 = *((long long *)&v13);
LABEL_b895e0:
                        starship::modules::container::module::container_name::{{closure}}(&v6, v21);
                    }
                    else
                    {
                        starship::modules::container::module::container_name::{{closure}}(&v9, &v12);
                        v21 = v10;
                        if (v9 == 0x8000000000000000)
                            goto LABEL_b895e0;
                        v6 = v9;
                        v7 = v21;
                        v8 = v11;
                    }
                    *((unsigned long long *)&a0[16]) = v8;
                    *((unsigned long long *)a0) = v6;
                    *((unsigned long long *)&a0[8]) = v7;
                    return v7;
                }
            }
            v17 = "Incus/run/.containerenv/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs";
            v18 = 5;
        }
        else
        {
            v17 = "OCI/dev/incus/sockIncus/run/.containerenv/run/systemd/containerdockerSystemdDockerwsl/.dockerenvpodmanname=\"image=\"Error in module `crystal`:\nsrc/modules/crystal.rs";
            v18 = 3;
        }
    }
    return a0.to_vec(v17, v18);
}
