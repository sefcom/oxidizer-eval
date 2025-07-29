long long backdoorautomater::sanitizer::sanitize_param_hub(struct_0 *a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0x6c]
    int v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x58]
    int v3;  // [bp-0x50], Other Possible Types: char
    unsigned long v4;  // [bp-0x40]
    unsigned int v5;  // [bp-0x38]
    unsigned long v7;  // rax
    unsigned long v8;  // rax
    unsigned long v9;  // rax
    unsigned long v10;  // rax
    unsigned long v11;  // rax

    v2 = a0->field_10;
    *((uint128_t *)&v1) = a0->field_0;
    backdoorautomater::sanitizer::sanitize_ip(&v3, &v1, a2, a3);
    v5 = a1;
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    v2 = *((long long *)((char *)&a0->field_18 + 8));
    *((int128_t *)&v1) = *((int128_t *)&(&a0->field_10)[1]);
    v0 = 0;
    backdoorautomater::sanitizer::sanitize_service(&v3, &v1);
    v7 = &(&a0->field_10)[1];
    *((unsigned long *)(v7 + 16)) = v4;
    *((void*)v7) = v3;
    v2 = a0->field_30;
    *((int128_t *)&v1) = *((int128_t *)&a0->field_28);
    v0 = (int)a0->field_30 & 0xffffff00 | 1;
    backdoorautomater::sanitizer::sanitize_port(&v3, &v1);
    v8 = &a0->field_28;
    *((unsigned long *)(v8 + 16)) = v4;
    *((void*)v8) = v3;
    v2 = (&a0->field_40)[1];
    *((int128_t *)&v1) = *((int128_t *)((char *)&a0->field_30 + 8));
    v0 = (unsigned int)(&a0->field_40)[1] & 0xffffff00 | 1;
    backdoorautomater::sanitizer::sanitize_time(&v3, &v1);
    v9 = (char *)&a0->field_30 + 8;
    *((unsigned long *)(v9 + 16)) = v4;
    *((void*)v9) = v3;
    v2 = a0->field_58;
    *((uint128_t *)&v1) = a0->field_48;
    v0 = (unsigned int)a0->field_58 & 0xffffff00 | 1;
    backdoorautomater::sanitizer::sanitize_path(&v3, &v1);
    v10 = &a0->field_48;
    *((unsigned long *)(v10 + 16)) = v4;
    *((void*)v10) = v3;
    v0 = (unsigned int)v10 & 0xffffff00 | 1;
    backdoorautomater::sanitizer::sanitize_choice(a0->field_70, v5);
    *((char *)&a0->field_70) = a0->field_70;
    v2 = *((long long *)((char *)&a0->field_60 + 8));
    *((int128_t *)&v1) = *((int128_t *)&(&a0->field_58)[1]);
    backdoorautomater::sanitizer::sanitize_script(&v3, &v1);
    v11 = &(&a0->field_58)[1];
    *((unsigned long *)(v11 + 16)) = v4;
    *((void*)v11) = v3;
    return core::ptr::drop_in_place<backdoorautomater::Param>(a0);
}
