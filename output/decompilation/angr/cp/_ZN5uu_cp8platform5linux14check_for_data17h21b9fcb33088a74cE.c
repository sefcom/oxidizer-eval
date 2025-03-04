long long uu_cp::platform::linux::check_for_data::h21b9fcb33088a74c(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned int v0;  // [sp-0xe4]
    unsigned long v1;  // [sp-0xe0]
    unsigned long long v2;  // [sp-0xd8]
    char v3;  // [bp-0xd0]
    char v4;  // [bp-0xcc]
    char v5;  // [bp-0xc8]
    char v6;  // [bp-0xc0]
    char v7;  // [bp-0x80]
    char v8;  // [bp-0x78]
    char v9;  // [bp-0x70]
    unsigned long long v11;  // rax
    unsigned int v12;  // ebp
    unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // r14
    unsigned long long v17;  // r15
    unsigned long long v19;  // rdi

    std::fs::File::open::h2ade805364297b3f(&v3, a1, a2);
    if (*((int *)&v3))
    {
        v11 = *((long long *)&v5);
        a0->field_0 = v11;
        a0->field_8 = 2;
        return v11;
    }
    v12 = *((int *)&v4);
    v0 = v12;
    std::fs::File::metadata::he899a18112e6f19e(&v3, &v0);
    if (*((int *)&v3) == 2)
    {
        a0->field_0 = *((long long *)&v5);
        a0->field_8 = 2;
        goto LABEL_512ea4;
    }
    else
    {
        v13 = *((long long *)&v7);
        if (v13)
        {
            v14 = *((long long *)&v9);
            v15 = lseek(v12, 0, 3);
            if (v15 == -1)
            {
                a0->field_0 = v13;
                a0->field_8 = 0;
                goto LABEL_512e4e;
            }
            else if (v15 < 0)
            {
                a0->field_0 = std::sys::pal::unix::os::errno::hddfd8da9c36b1a59() * 0x100000000 | 2;
                a0->field_8 = 2;
            }
            else
            {
                a0->field_0 = v13;
                a0->field_8 = 1;
LABEL_512e4e:
                a0->field_10 = v14;
            }
            v19 = v0;
        }
        else
        {
            _$LT$u8$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h3824b372c4eb90c7(&v3, *((long long *)&v8));
            v16 = *((long long *)&v5);
            v17 = *((long long *)&v6);
            if (!_$LT$std..fs..File$u20$as$u20$std..io..Read$GT$::read::h24fce4ed669fe556(&v0, v16, v17))
            {
                v1 = v16;
                v2 = v17 + v16;
                _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h682aa6afec1bbf51(&v1);
                a0->field_10 = 0;
            }
            a0->field_0 = 0;
            a0->field_8 = 2;
            ::0x5128f0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::ha0066fb3d75053fd(&v3);
            v12 = v0;
LABEL_512ea4:
            v19 = v12;
        }
    }
    v11 = ::0x5128c0::core::ptr::drop_in_place$LT$std..fs..File$GT$::h4b422317f52b3bf0(v19);
    return v11;
}
