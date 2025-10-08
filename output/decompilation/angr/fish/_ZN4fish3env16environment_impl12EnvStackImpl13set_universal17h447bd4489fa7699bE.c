long long fish::env::environment_impl::EnvStackImpl::set_universal(unsigned long long a0, unsigned long long a1, struct_0 *a2, char a3[10])
{
    unsigned long long v0;  // [bp-0x90]
    char v1;  // [bp-0x78]
    char v2;  // [bp-0x68]
    char v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x50]
    char v5;  // [bp-0x48]
    unsigned long v7;  // r13
    unsigned int v8;  // r12d
    char v9;  // r15b
    char v10;  // r15b
    char v11;  // dl

    v0 = fish::env::environment_impl::uvars();
    v7 = v0 + 8;
    v1.get(v7, a0, a1);
    if (*((long long *)&v1))
    {
        if (a3[5])
        {
            v8 = a3[6];
            if (!a3[8])
            {
                v9 = v2;
                goto LABEL_1399bb5;
            }
        }
        else
        {
            v8 = v2;
            v9 = v8;
            if (!a3[8])
            {
LABEL_1399bb5:
                v10 = v9 >> 2;
                if ((v9 >> 2 & 1))
                    goto LABEL_1399bf3;
            }
        }
    }
    else
    {
        if (a3[5])
        {
            v8 = a3[6];
            if (!a3[8])
                goto LABEL_1399bd8;
LABEL_1399bcb:
            if ((a3[9] & 1))
                goto LABEL_1399bf3;
        }
        else
        {
            v8 = 0;
            if (a3[8] == 1)
                goto LABEL_1399bcb;
LABEL_1399bd8:
            if ((fish::env::environment_impl::variable_should_auto_pathvar(a0, a1) & 1))
            {
LABEL_1399bf3:
                fish::env::environment_impl::colon_split(&v3, a2->field_0[1], a2->field_8);
                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(a2);
                *((unsigned int *)&a2->field_8) = v4;
                *((int128_t *)&a2->field_0[0]) = *((int128_t *)&v3);
            }
        }
    }
    v3 = 0;
    v3.set(1, v8 & 1);
    v3.set(4, v10 & 1);
    v5.new_vec(a2, v3);
    v7.set(a0, a1, &v5);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v1);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v0, v11 & 1);
}
