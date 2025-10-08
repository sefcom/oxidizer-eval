long long uu_runcon::get_custom_context(void* a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned long long a9, unsigned long long a10, unsigned long long a11)
{
    unsigned long long v0;  // [bp-0x80]
    char v1;  // [bp-0x78], Other Possible Types: unsigned int
    char v2;  // [bp-0x74], Other Possible Types: unsigned int
    unsigned long long v3;  // [bp-0x70]
    char v4;  // [bp-0x68], Other Possible Types: unsigned int
    unsigned int v5;  // [bp-0x64]
    char v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    char v8;  // [bp-0x54]
    char v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    unsigned int v11;  // [bp-0x44]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x38]
    unsigned long long v14;  // r14
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rdx
    int v17;  // xmm0
    int v18;  // xmm1
    int v19;  // xmm0

    if (!uucore::features::selinux::is_selinux_enabled())
    {
        *((unsigned int *)a0) = 11;
        return a0;
    }
    uu_runcon::get_initial_custom_opaque_context(&v1, a1, a10, a11);
    if (v1 != 17)
    {
        *((long long *)&a0[64]) = *((long long *)&v13);
        *((int128_t *)&a0[48]) = *((int128_t *)&v10);
        *((int128_t *)&a0[32]) = *((int128_t *)&v7);
        *((int128_t *)&a0[16]) = *((int128_t *)&v4);
        *((unsigned int *)a0) = v1;
        *((unsigned int *)&a0[4]) = v2;
        *((unsigned long long *)&a0[8]) = v3;
        return a0;
    }
    v0 = v3;
    if (a2)
    {
        uu_runcon::os_str_to_c_string(&v1, a2, a3);
        if (v1 != 17)
        {
            v19 = *((int128_t *)&v3);
            *((int128_t *)&a0[24]) = *((int128_t *)&v6);
            *((int128_t *)&a0[40]) = *((int128_t *)&v9);
            *((int128_t *)&a0[56]) = *((int128_t *)&v12);
            *((unsigned int *)a0) = v1;
            *((unsigned int *)&a0[4]) = v2;
            a0[8] = v19;
            core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v0);
            return a0;
        }
        v14 = *((long long *)&v4);
        v1.set_user(&v0, v3);
        if (v1 == 10)
        {
            core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, *((long long *)&v4));
            goto LABEL_461c8c;
        }
        else
        {
            v15 = 29;
            v16 = "Setting security context userSetting security context roleSetting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs";
        }
    }
    else
    {
LABEL_461c8c:
        if (a4)
        {
            uu_runcon::os_str_to_c_string(&v1, a4, a5);
            if (v1 != 17)
            {
                v19 = *((int128_t *)&v3);
                *((int128_t *)&a0[24]) = *((int128_t *)&v6);
                *((int128_t *)&a0[40]) = *((int128_t *)&v9);
                *((int128_t *)&a0[56]) = *((int128_t *)&v12);
                *((unsigned int *)a0) = v1;
                *((unsigned int *)&a0[4]) = v2;
                a0[8] = v19;
                core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v0);
                return a0;
            }
            v14 = *((long long *)&v4);
            v1.set_role(&v0, v3);
            if (v1 == 10)
            {
                core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, *((long long *)&v4));
                goto LABEL_461ce6;
            }
            else
            {
                v15 = 29;
                v16 = "Setting security context roleSetting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs";
            }
        }
        else
        {
LABEL_461ce6:
            if (a6)
            {
                uu_runcon::os_str_to_c_string(&v1, a6, a7);
                if (v1 != 17)
                {
                    v19 = *((int128_t *)&v3);
                    *((int128_t *)&a0[24]) = *((int128_t *)&v6);
                    *((int128_t *)&a0[40]) = *((int128_t *)&v9);
                    *((int128_t *)&a0[56]) = *((int128_t *)&v12);
                    *((unsigned int *)a0) = v1;
                    *((unsigned int *)&a0[4]) = v2;
                    a0[8] = v19;
                    core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v0);
                    return a0;
                }
                v14 = *((long long *)&v4);
                v1.set_type(&v0, v3);
                if (v1 == 10)
                {
                    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, *((long long *)&v4));
                    goto LABEL_461d4a;
                }
                else
                {
                    v15 = 29;
                    v16 = "Setting security context typeSetting security context rangesrc/uu/runcon/src/runcon.rs";
                }
            }
            else
            {
LABEL_461d4a:
                if (!a8)
                {
                    *((unsigned long long *)&a0[8]) = v0;
                    *((unsigned int *)a0) = 17;
                    return a0;
                }
                uu_runcon::os_str_to_c_string(&v1, a8, a9);
                if (v1 != 17)
                {
                    v19 = *((int128_t *)&v3);
                    *((int128_t *)&a0[24]) = *((int128_t *)&v6);
                    *((int128_t *)&a0[40]) = *((int128_t *)&v9);
                    *((int128_t *)&a0[56]) = *((int128_t *)&v12);
                    *((unsigned int *)a0) = v1;
                    *((unsigned int *)&a0[4]) = v2;
                    a0[8] = v19;
                    core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v0);
                    return a0;
                }
                v14 = *((long long *)&v4);
                v1.set_range(&v0, v3);
                if (v1 == 10)
                {
                    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, *((long long *)&v4));
                    *((unsigned long long *)&a0[8]) = v0;
                    *((unsigned int *)a0) = 17;
                    return a0;
                }
                v15 = 30;
                v16 = "Setting security context rangesrc/uu/runcon/src/runcon.rs";
            }
        }
    }
    *((unsigned int *)&a0[52]) = v11;
    v17 = *((int128_t *)&v2);
    v18 = *((int128_t *)&v5);
    *((int128_t *)&a0[36]) = *((int128_t *)&v8);
    a0[20] = v18;
    a0[4] = v17;
    *((unsigned int *)a0) = v1;
    *((unsigned long long *)&a0[56]) = v16;
    *((unsigned long long *)&a0[64]) = v15;
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v3, v14);
    core::ptr::drop_in_place<selinux::OpaqueSecurityContext>(&v0);
    return a0;
}
