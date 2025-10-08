long long starship::modules::git_commit::git_tag(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x698], Other Possible Types: unsigned long long
    int v1;  // [bp-0x690]
    int v2;  // [bp-0x688], Other Possible Types: char
    int v3;  // [bp-0x678], Other Possible Types: char
    int v4;  // [bp-0x668], Other Possible Types: char
    int v5;  // [bp-0x658], Other Possible Types: char
    unsigned long long v6;  // [bp-0x648]
    int v7;  // [bp-0x640]
    int v8;  // [bp-0x630]
    int v9;  // [bp-0x620]
    unsigned long long v10;  // [bp-0x610]
    unsigned long long v11;  // [bp-0x608]
    char v12;  // [bp-0x600]
    unsigned int v13;  // [bp-0x5f0]
    unsigned int v14;  // [bp-0x5ec]
    int v15;  // [bp-0x5e8]
    int v16;  // [bp-0x5d8]
    int v17;  // [bp-0x5c8]
    int v18;  // [bp-0x5b8]
    int v19;  // [bp-0x5a8]
    int v20;  // [bp-0x590], Other Possible Types: char
    unsigned long v21;  // [bp-0x580]
    char v22;  // [bp-0x578], Other Possible Types: unsigned long long
    int v23;  // [bp-0x570], Other Possible Types: char
    char v24;  // [bp-0x568]
    int v25;  // [bp-0x560]
    char v26;  // [bp-0x558]
    int v27;  // [bp-0x550]
    char v28;  // [bp-0x548]
    int v29;  // [bp-0x540]
    char v30;  // [bp-0x538]
    int v31;  // [bp-0x530]
    char v32;  // [bp-0x528]
    char v33;  // [bp-0x458]
    unsigned long long v35;  // rax
    int v36;  // xmm0
    unsigned long long v37;  // rax
    int v38;  // xmm0
    int v39;  // xmm1
    unsigned long long v40;  // rax

    v33.open(a1);
    v33.object_cache_size_if_unset(&_ZN12tracing_core10dispatcher13CURRENT_STATE29_$u7b$$u7b$constant$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$3VAL17h7c57377789603b22E);
    v22.head_commit(&v33);
    if (*((int *)&v22) == 2)
    {
        v35 = *((long long *)&v23);
        memcpy(&v0, &v24, 16);
        memcpy(&v2, &v26, 16);
        memcpy(&v3, &v28, 16);
        if (v35 == 0x8000000000000000)
            goto LABEL_b97d23;
        v36 = *((int128_t *)&v0);
        v9 = v3;
        v8 = v2;
        v7 = v36;
        v6 = v35;
        v13 = (int)(&v9)[8];
        memcpy(&v12, &v8, 16);
        v10 = a2;
        v11 = (long long)v8;
        v14 = 257;
        v22.try_format(&v10);
        if (*((int *)&v22) == 10)
        {
            v37 = *((long long *)&v23);
            memcpy(&v0, &v24, 16);
            memcpy(&v2, &v26, 16);
            memcpy(&v3, &v28, 16);
            memcpy(&v4, &v30, 16);
            memcpy(&v5, &v32, 16);
            if (v37 != 9223372036854775810)
            {
                v19 = v5;
                v38 = *((int128_t *)&v0);
                v18 = v4;
                v17 = v3;
                v16 = v2;
                v15 = v38;
                if (v37 != 9223372036854775809)
                {
                    v31 = v19;
                    v39 = (int128_t)v16;
                    v29 = v18;
                    v27 = v17;
                    v25 = v39;
                    v23 = v15;
                    v22 = v37;
                    v40 = (long long)v25;
                    if (v40 == 9223372036854775809)
                    {
                        *((long long *)a0) = 0x8000000000000000;
                    }
                    else
                    {
                        *((int128_t *)&v1) = (int128_t)(&v16)[8];
                        v0 = v40;
                        v20.spec_to_string(&v0);
                        *((unsigned long *)&a0[16]) = v21;
                        *(a0) = v20;
                        core::ptr::drop_in_place<gix_index::extension::fs_monitor::Token>(&v0);
                    }
                    core::ptr::drop_in_place<regex::error::Error>(&v22);
                    goto LABEL_b97d38;
                }
            }
        }
        else
        {
            core::ptr::drop_in_place<core::result::Result<core::option::Option<gix_revision::describe::Format>,gix::commit::describe::Error>>(&v22);
        }
        *((long long *)a0) = 0x8000000000000000;
LABEL_b97d38:
        core::ptr::drop_in_place<gix::types::Commit>(&v6);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<gix::types::Commit,gix::reference::errors::head_commit::Error>>(&v22);
LABEL_b97d23:
        *((long long *)a0) = 0x8000000000000000;
    }
    return core::ptr::drop_in_place<gix::types::Repository>(&v33);
}
