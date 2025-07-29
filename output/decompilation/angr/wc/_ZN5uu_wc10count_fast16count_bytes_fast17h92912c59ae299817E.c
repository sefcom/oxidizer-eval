int uu_wc::count_fast::count_bytes_fast()
{
    int v0;  // [bp-0x40030]
    char v1;  // [bp-0x40010]
    unsigned long long v2;  // [bp-0x3fff8]
    char v3;  // [bp-0x3fff0]
    void* v4;  // [bp-0x2030]
    unsigned long long v6;  // rdi
    unsigned int v7;  // eax
    unsigned long v8;  // r12
    unsigned long long v9;  // r14
    unsigned long long v10;  // rax
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    unsigned long v13;  // r15
    unsigned long v14;  // cc_ndep
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax

    do
    {
        v4 = 0;
    } while (&v4 != &v0);
    v7 = v6.as_fd();
    nix::sys::stat::fstat(&v0, v7);
    if (((char)v0 & 1))
    {
        goto LABEL_4aebfc;
    }
    else
    {
        v8 = *((int *)&v1);
        if (v7 > 0)
        {
            v9 = v2;
            if (!(v9 > 0 & (unsigned short)v8 < 0))
                goto LABEL_4aebfc;
            v10 = sysconf(30);
            if (!v10)
                core::panicking::panic_const::panic_const_rem_by_zero(&g_59ef68); /* do not return */
            v11 = v10;
            if ((v10 | v9) >> 32)
            {
                v12 = ((unsigned long long)((0 CONCAT v9) % v11) CONCAT (unsigned long long)((0 CONCAT v9) / v11)) >> 64;
                if (!v12)
                    goto LABEL_4aeca5;
            }
            else
            {
                v12 = ((unsigned int)((0 CONCAT (unsigned int)v9) % (v11 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v9) / (v11 & 4294967295))) >> 32;
                if (!v12)
                {
LABEL_4aeca5:
                    v13 = *((long long *)&v3) + 1;
                    if ((char)amd64g_calculate_condition(4, 24, *((long long *)&v3) + 1, 0, amd64g_calculate_rflags_c(20, v12, 0, v14)))
                        core::panicking::panic_const::panic_const_rem_by_zero(&g_59ef80); /* do not return */
                    core::ptr::drop_in_place<core::result::Result<u64,std::io::error::Error>>(v6.seek(0, v9 - (!(v9 | v13) >> 32 ? ((unsigned int)((0 CONCAT (unsigned int)v9) % (v13 & 4294967295)) CONCAT (unsigned int)((0 CONCAT (unsigned int)v9) / (v13 & 4294967295))) >> 32 : ((long long)((v9 >> 63 CONCAT v9) % v13) CONCAT (long long)((v9 >> 63 CONCAT v9) / v13)) >> 64)), v16);
                    if (!(((unsigned short)v8 & 0x1000)) || uu_wc::count_fast::count_bytes_using_splice(v6))
                        goto LABEL_4aebfc;
                }
            }
        }
        else
        {
LABEL_4aebfc:
            memset(&v0, 0, 0x40000);
            while (true)
            {
                while (true)
                {
                    v17 = v6.read(&v0, 0x40000);
                    if (!v17)
                        break;
                    if ((char)v16.kind() != 35)
                    {
                        return;
                    }
                    else if (((char)v17 & 1))
                    {
                        ::0x4acbb0::core::ptr::drop_in_place<std::io::error::Error>(v16);
                    }
                }
                if (!v16)
                    break;
            }
        }
        return;
    }
}
