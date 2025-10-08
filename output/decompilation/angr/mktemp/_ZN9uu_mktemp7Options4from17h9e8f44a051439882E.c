long long uu_mktemp::Options::from(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xe0]
    int v2;  // [bp-0xd8], Other Possible Types: char
    int v3;  // [bp-0xd0]
    int v4;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v5;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xa8]
    int v7;  // [bp-0x98], Other Possible Types: char
    unsigned long long v8;  // [bp-0x88]
    int v9;  // [bp-0x78], Other Possible Types: char
    unsigned long long v10;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    int v13;  // [bp-0x58], Other Possible Types: char
    char v14;  // [bp-0x48]
    unsigned long long v16[3];  // rax
    unsigned long long v17;  // rax
    char v18;  // r13b
    char v19;  // al
    char v20;  // al
    char v21;  // al
    unsigned long long v22;  // rax
    char v23;  // al

    v0.try_get_one(a1, "tmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
    v16 = "tmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs".unwrap(6, &v0).or_else(a1);
    if (v16)
        (char)v12.clone(v16[1], v16[2]);
    else
        v12 = 0x8000000000000000;
    v0.try_get_one(a1, "template", 8);
    v17 = "template".unwrap(8, &v0);
    if (v17)
    {
        std::env::var(&v0);
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::env::VarError>>(&v0);
        if (!(v0 & 1) && (char)a1.get_flag("tTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 1))
        {
            std::env::var_os(&v0);
            v12 = v0;
            if (v12 == 0x8000000000000000)
                goto LABEL_464892;
            goto LABEL_464885;
        }
        else if (v12 != 0x8000000000000000)
        {
            memcpy(&v14, &v13, 16);
        }
        else if (!(char)a1.get_flag("tTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 1))
        {
            v12 = 0x8000000000000000;
            v18 = 1;
            if ((char)a1.contains_id("tmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6))
                goto LABEL_464875;
        }
        else
        {
LABEL_464875:
            std::env::temp_dir(&v0);
LABEL_464885:
            memcpy(&v14, &v2, 16);
LABEL_464892:
            v18 = 1;
        }
        v4 = v12;
        memcpy(&v5, &v14, 16);
        v0.clone(v17);
        v8 = v6;
        memcpy(&v7, &v4, 16);
        memcpy(&v9, &v0, 16);
        v10 = (long long)v3;
    }
    else
    {
        if (v12 == 0x8000000000000000)
        {
            std::env::temp_dir(&v0);
        }
        else
        {
            v2 = v13;
            v1 = v12;
        }
        v6 = (long long)v3;
        v4 = v1;
        v5 = (long long)v2;
        v0.to_vec("tmp.XXXXXXXXXXdirectorydry-runquietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 14);
        v10 = (long long)v3;
        memcpy(&v9, &v0, 16);
        memcpy(&v7, &v4, 16);
        v8 = v6;
    }
    v19 = a1.get_flag("directorydry-runquietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 9);
    v20 = a1.get_flag("dry-runquietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 7);
    v21 = a1.get_flag("quietsuffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 5);
    v0.try_get_one(a1, "suffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 6);
    v22 = "suffixtmpdirptTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs".unwrap(6, &v0);
    if (v22)
    {
        v0.clone(v22);
        v6 = (long long)v3;
        *((int128_t *)&v4) = *((int128_t *)&v1);
    }
    else
    {
        v4 = 0x8000000000000000;
    }
    v23 = a1.get_flag("tTMPDIRXXXsrc/uu/mktemp/src/mktemp.rs", 1);
    a0->field_10 = v10;
    *((void*)&a0->field_0) = v9;
    *((char *)&a0->field_30 + 8) = v19;
    *((char *)&a0->field_30 + 9) = v20;
    *((char *)&a0->field_30 + 10) = v21;
    *((void*)&(&a0->field_10)[1]) = v7;
    *((unsigned long long *)((char *)&a0->field_18 + 8)) = v8;
    *((int128_t *)&a0->field_28) = *((int128_t *)&v4);
    *((unsigned long long *)&a0->field_30) = v6;
    *((char *)&a0->field_30 + 11) = v23;
    if (!v18)
        return a0;
    core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&(char)v12);
    return a0;
}
