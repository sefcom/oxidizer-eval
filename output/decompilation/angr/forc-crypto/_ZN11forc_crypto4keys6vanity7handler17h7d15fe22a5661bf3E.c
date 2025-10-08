long long forc_crypto::keys::vanity::handler(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0x2d8], Other Possible Types: char
    char *v1;  // [sp-0x2c8], Other Possible Types: unsigned long long
    char *v2;  // [bp-0x2c0], Other Possible Types: char, unsigned long long
    int v3;  // [bp-0x2b8], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x2b0], Other Possible Types: char, unsigned long long
    unsigned long long v5;  // [bp-0x2a8]
    int v6;  // [bp-0x2a8]
    int v7;  // [bp-0x2a0], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [bp-0x298]
    unsigned long long v9;  // [bp-0x298]
    int v10;  // [bp-0x290]
    unsigned long long v11;  // [bp-0x288]
    unsigned long long v12;  // [bp-0x280]
    int v13;  // [bp-0x278]
    void* v14;  // [bp-0x268]
    void* v15;  // [sp-0x258]
    unsigned long v16;  // [bp-0x250], Other Possible Types: char
    int v17;  // [sp-0x248], Other Possible Types: char
    unsigned long long v18;  // [bp-0x240]
    void* v19;  // [sp-0x238]
    unsigned long long v20;  // [bp-0x230]
    int v21;  // [bp-0x228]
    unsigned long v22;  // [bp-0x218]
    char v23;  // [bp-0x208]
    char *v24;  // [sp-0x1f8]
    int v25;  // [bp-0x1e8], Other Possible Types: char *
    unsigned long long v26;  // [bp-0x1e0]
    int v27;  // [bp-0x1d8]
    unsigned long long v28;  // [bp-0x1d0]
    int v29;  // [bp-0x1c8]
    int v30;  // [bp-0x1b8]
    int v31;  // [bp-0x1a8]
    void* v32;  // [bp-0x198]
    int v33;  // [bp-0x188]
    unsigned long long v34;  // [bp-0x180]
    unsigned long long v35;  // [bp-0x178]
    char v36;  // [bp-0x168]
    unsigned long long v37;  // [bp-0x158]
    unsigned long long v38;  // [bp-0x150]
    int v39;  // [bp-0x148]
    unsigned long long v40;  // [bp-0x140]
    int v41;  // [bp-0x138]
    unsigned long v42;  // [bp-0x128]
    unsigned long long v43;  // [bp-0x118]
    unsigned long long v44;  // [bp-0x110]
    char v45;  // [bp-0x108], Other Possible Types: unsigned long long
    int v46;  // [bp-0x108]
    char v47;  // [bp-0x100]
    int v48;  // [bp-0xf8], Other Possible Types: char
    char v49;  // [bp-0xe8]
    unsigned long long v50;  // [bp-0xd8]
    unsigned long long v51;  // [bp-0xd0]
    unsigned int v52;  // [bp-0xc8]
    unsigned long long v53;  // [bp-0xc0]
    unsigned long long v54;  // [bp-0xb8]
    char *v55;  // [bp-0xb0]
    char v56;  // [bp-0xa8]
    unsigned long long v57;  // [bp-0x98]
    unsigned long long v58;  // [bp-0x90]
    int v59;  // [bp-0x88]
    int v60;  // [bp-0x78]
    int v61;  // [bp-0x68]
    unsigned long long v62;  // [bp-0x60]
    unsigned long long v63;  // [bp-0x58]
    unsigned long long v64;  // [bp-0x50]
    int v65;  // [bp-0x48]
    unsigned long long v66;  // [bp-0x38]
    unsigned long long v68;  // rax
    unsigned long v69;  // r13
    unsigned int v70;  // ebp
    unsigned long long v71;  // r14
    unsigned long long v72;  // r15
    void* v73;  // r8
    unsigned long long v74;  // rcx
    unsigned long long v75;  // rsi
    char v76;  // r13b
    unsigned int v77;  // edx
    int v78;  // xmm0
    char v79;  // r13b
    int v80;  // xmm0
    int v81;  // xmm1
    char *v83;  // rax
    char v84;  // r15b
    char v85;  // r12b
    unsigned long long v86;  // rax
    char v87;  // r12b
    int v88;  // xmm0

    v68 = a1.validate();
    v69 = &a1->field_38;
    if (v68)
    {
        *((unsigned long long *)&a0[8]) = v68;
        *((char *)a0) = 6;
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&a1->field_10);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(&a1->field_20)[1]);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(v69);
        core::ptr::drop_in_place<core::option::Option<std::path::PathBuf>>(&a1->field_48);
        return a0;
    }
    v32 = a1->field_20;
    *((uint128_t *)&v31) = a1->field_10;
    v35 = *((long long *)((char *)&a1->field_28 + 8));
    *((int128_t *)&v33) = *((int128_t *)&(&a1->field_20)[1]);
    v42 = *((long long *)(v69 + 16));
    *((int128_t *)&v41) = *((int128_t *)v69);
    v70 = (char)a1->field_58;
    v71 = a1->field_0;
    v72 = a1->field_8;
    v22 = (&a1->field_50)[1];
    *((int128_t *)&v21) = *((int128_t *)&a1->field_48);
    v20 = (long long)v41;
    if ((char)(((0 ^ (long long)v41) & (0 ^ -((long long)v41))) >> 63))
    {
        v73 = 0;
        if ((long long)v31 == 0x8000000000000000)
            v32 = 0;
        v74 = 1;
        if ((long long)v31 == 0x8000000000000000)
            v75 = 1;
        if ((long long)v33 != 0x8000000000000000)
        {
            v73 = v35;
            v74 = v34;
        }
        v2.new(v75, v32, v74, v73);
        if (v2 == 0x8000000000000000)
        {
            *((unsigned long long *)&a0[8]) = v3;
            *((char *)a0) = 6;
            goto LABEL_7faacc;
        }
        else
        {
            memcpy(&v48, &v7, 16);
            memcpy(&v45, &v4, 16);
            v43 = v2;
            v44 = v3;
            v76 = 1;
        }
    }
    else
    {
        (char)v2.new(a1->field_40[0], a1->field_40[1]);
        if (v2)
        {
            memcpy(&v47, &v4, 16);
            v44 = v2;
            v45 = v3;
            v43 = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::string::String>(v69);
        }
        else
        {
            *((unsigned long long *)&a0[8]) = v3;
            *((char *)a0) = 6;
            core::ptr::drop_in_place<alloc::string::String>(v69);
            v79 = 1;
LABEL_7faacc:
LABEL_7faacf:
            goto LABEL_7faad9;
        }
    }
    v2 = &g_a2f038;
    v3 = 1;
    v4 = 8;
    *((uint128_t *)&v6) = 0;
    std::io::stdio::_print(&v2);
    v51 = std::time::Instant::now();
    v52 = v77;
    v78 = *((int128_t *)&v43);
    v29 = v48;
    v27 = v46;
    v25 = v78;
    forc_crypto::keys::vanity::find_vanity_address_with_timeout(&v2, &(char)v25, v70, v71, v72);
    if (v12 == 9223372036854775809)
    {
        *((unsigned long long *)&a0[8]) = v2;
        *((char *)a0) = 6;
        v79 = v76 ^ 1;
        goto LABEL_7faacf;
    }
    v63 = v11;
    v80 = *((int128_t *)&v3);
    v81 = (int128_t)v6;
    *((int128_t *)&v61) = *((int128_t *)&v8);
    v60 = v81;
    v59 = v80;
    v39 = v13;
    v64 = v2;
    v65 = v59;
    v66 = (long long)v60;
    v57 = v62;
    v58 = v63;
    memcpy(&v56, &v60, 16);
    v38 = v12;
    v16 = AddV(DivV(v77, 0x41cdcd6500000000), AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, v51.elapsed()) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, v51.elapsed()) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, v51.elapsed()) - 0x45300000000000004330000000000000));
    v25 = &v16;
    v26 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v2 = &g_a2f048;
    v3 = 2;
    v7 = &g_4809e8;
    v9 = 1;
    v4 = &v25;
    v5 = 1;
    std::io::stdio::_print(&v2);
    v16.spec_to_string(&v64);
    fuels_core::types::checksum_address::checksum_encode(&v25, *((long long *)&v17), v18);
    v83 = v25;
    memcpy(&v0, &v26, 16);
    v1 = v28;
    v84 = v83 == 12;
    if (v83 == 12)
    {
        memcpy(&v36, &v0, 16);
        v37 = v1;
        core::ptr::drop_in_place<alloc::string::String>(&v16);
        if (v12 == 0x8000000000000000)
        {
            v14 = 0;
            v15 = 0;
            v2.to_vec("Addressforc-plugins/forc-crypto/src/keys/get_public_key.rs", 7);
            v1 = v4;
            memcpy(&v0, &v2, 16);
            serde_json::value::to_value(&v2, &v36);
            v25.unwrap(&v2, &g_a2f080);
            v2.insert(&v14, &v0, &v25);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v2);
            v2.to_vec("PrivateKeySuccessfully found vanity address in  seconds.\n\n", 10);
            v24 = v4;
            memcpy(&v23, &v2, 16);
            hex::encode(&v0, &v56, 32);
            serde_json::value::to_value(&v2, &v0);
            v25.unwrap(&v2, &g_a2f080);
            v2.insert(&v14, &v23, &v25);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v2);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            *((int128_t *)&v17) = *((int128_t *)&v14);
            v19 = 0;
            v16 = 5;
            v85 = 1;
            if ((long long)v21 != 0x8000000000000000)
                goto LABEL_7fadb7;
        }
        else
        {
            v50 = v40;
            memcpy(&v49, &v38, 16);
            v14 = 0;
            v15 = 0;
            v2.to_vec("Addressforc-plugins/forc-crypto/src/keys/get_public_key.rs", 7);
            v1 = v4;
            memcpy(&v0, &v2, 16);
            serde_json::value::to_value(&v2, &v36);
            v25.unwrap(&v2, &g_a2f068);
            v2.insert(&v14, &v0, &v25);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v2);
            v2.to_vec("PrivateKeySuccessfully found vanity address in  seconds.\n\n", 10);
            v24 = v4;
            memcpy(&v23, &v2, 16);
            hex::encode(&v0, &v56, 32);
            serde_json::value::to_value(&v2, &v0);
            v25.unwrap(&v2, &g_a2f068);
            v2.insert(&v14, &v23, &v25);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v2);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            v2.to_vec("Mnemonic", 8);
            v1 = v4;
            memcpy(&v0, &v2, 16);
            serde_json::value::to_value(&v2, &v49);
            v25.unwrap(&v2, &g_a2f068);
            v2.insert(&v14, &v0, &v25);
            core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v2);
            *((int128_t *)&v17) = *((int128_t *)&v14);
            v19 = 0;
            v16 = 5;
            core::ptr::drop_in_place<alloc::string::String>(&v49);
            if ((long long)v21 != 0x8000000000000000)
            {
LABEL_7fadb7:
                serde_json::ser::to_vec_pretty(&v2, &v16);
                v53 = &g_a2f048;
                v54 = 2;
                v55 = v4;
                v86 = std::fs::write(&v21, &v53);
                if (v86)
                {
                    *((long long *)&a0[8]) = v86.from();
                    *((char *)a0) = 6;
                    core::ptr::drop_in_place<serde_json::value::Value>(&v16);
                    core::ptr::drop_in_place<alloc::string::String>(&v36);
                    v87 = v85 ^ 1;
LABEL_7fae61:
                    if (((v12 == 0x8000000000000000 | v87) & 1))
                    {
                        v79 = v76 ^ 1;
                    }
                    else
                    {
                        core::ptr::drop_in_place<alloc::string::String>(&v38);
                        v79 = v76 ^ 1;
                    }
LABEL_7faad9:
                    if (!v84 && (long long)v21 != 0x8000000000000000)
                        core::ptr::drop_in_place<std::path::PathBuf>(&v21);
                    if (((v20 == 0x8000000000000000 | v79) & 1))
                    {
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v33);
                        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v31);
                        return a0;
                    }
                    goto LABEL_7fab07;
                }
            }
        }
        v88 = *((int128_t *)&v16);
        *((int128_t *)&a0[16]) = *((int128_t *)&v18);
        *(a0) = v88;
        core::ptr::drop_in_place<alloc::string::String>(&v36);
        if (v12 != 0x8000000000000000 && v85)
            core::ptr::drop_in_place<alloc::string::String>(&v38);
        if (v20 == 0x8000000000000000)
        {
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v33);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v31);
            return a0;
        }
        else if (!v76)
        {
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v33);
            core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v31);
            return a0;
        }
LABEL_7fab07:
        core::ptr::drop_in_place<alloc::string::String>(&v41);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v33);
        core::ptr::drop_in_place<alloc::borrow::Cow<str>>(&(char)v31);
        return a0;
    }
    v10 = v30;
    v7 = v29;
    v3 = v0;
    v5 = v1;
    v2 = v83;
    *((long long *)&a0[8]) = v2.from();
    *((char *)a0) = 6;
    core::ptr::drop_in_place<alloc::string::String>(&v16);
    goto LABEL_7fae61;
}
