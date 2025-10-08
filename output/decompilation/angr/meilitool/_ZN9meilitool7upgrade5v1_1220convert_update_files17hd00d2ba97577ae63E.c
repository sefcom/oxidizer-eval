long long meilitool::upgrade::v1_12::convert_update_files(unsigned long long a0, unsigned long long a1)
{
    unsigned int v0;  // [bp-0x568]
    unsigned short v1;  // [bp-0x562]
    unsigned int v2;  // [bp-0x560]
    unsigned int v3;  // [bp-0x55d]
    unsigned short v4;  // [bp-0x55c]
    char v5;  // [bp-0x55a]
    unsigned long long v6;  // [bp-0x559]
    char v7;  // [bp-0x551]
    int v8;  // [bp-0x550]
    unsigned long long v9;  // [bp-0x538]
    char v10;  // [bp-0x530]
    unsigned int v11;  // [bp-0x528]
    unsigned short v12;  // [bp-0x524]
    char v13;  // [bp-0x522]
    unsigned long long v14;  // [bp-0x521]
    char v15;  // [bp-0x519]
    unsigned long long v16;  // [bp-0x510]
    unsigned long long v17;  // [bp-0x508]
    unsigned long long v18;  // [bp-0x500]
    int v19;  // [bp-0x4f8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x4f0]
    char v21;  // [bp-0x4e8]
    char v22;  // [bp-0x4e8]
    char *v23;  // [bp-0x4d8], Other Possible Types: char, unsigned long long
    unsigned int v24;  // [bp-0x4d4]
    unsigned long long v25;  // [sp-0x4d0]
    unsigned long long v26;  // [bp-0x4d0]
    int v27;  // [bp-0x4c8], Other Possible Types: char
    unsigned long long v28;  // [bp-0x4c0]
    int v29;  // [bp-0x4b8]
    int v30;  // [bp-0x4a8]
    unsigned long long v31;  // [bp-0x498]
    unsigned long v32;  // [bp-0x490]
    unsigned long long v33;  // [bp-0x488]
    void* v34;  // [bp-0x480]
    int v35;  // [bp-0x47f]
    unsigned long long v36;  // [bp-0x478]
    char v37;  // [bp-0x470]
    unsigned long long v38;  // [bp-0x458]
    unsigned long long v39;  // [bp-0x450]
    int v40;  // [bp-0x448], Other Possible Types: char, unsigned int, unsigned long
    int v41;  // [bp-0x447]
    unsigned int v42;  // [bp-0x444]
    unsigned long long v43;  // [sp-0x440]
    char *v44;  // [bp-0x438], Other Possible Types: int
    unsigned long long v45;  // [bp-0x438]
    unsigned long long v46;  // [sp-0x430]
    int v47;  // [bp-0x428], Other Possible Types: void*
    int v48;  // [bp-0x428]
    unsigned long long v50;  // [bp-0x420]
    int v51;  // [bp-0x418], Other Possible Types: unsigned short
    int v52;  // [bp-0x418]
    unsigned long long v53;  // [bp-0x408]
    int v54;  // [bp-0x3b0]
    int v55;  // [bp-0x3a0]
    int v56;  // [bp-0x390]
    int v57;  // [bp-0x380]
    int v58;  // [bp-0x370]
    int v59;  // [bp-0x360]
    unsigned long long v60;  // [bp-0x348]
    unsigned long long v61;  // [bp-0x340]
    int v62;  // [bp-0x338]
    int v63;  // [bp-0x328]
    int v64;  // [bp-0x318]
    unsigned long long v65;  // [bp-0x308]
    unsigned long long v66;  // [bp-0x300]
    char v67;  // [bp-0x2f8]
    unsigned long long v68;  // [bp-0x2f7]
    unsigned long long v69;  // [bp-0x2f0]
    int v70;  // [bp-0x2e8]
    unsigned long long v71;  // [bp-0x2e0]
    int v72;  // [bp-0x2d8]
    int v73;  // [bp-0x2c8]
    int v74;  // [bp-0x2b8]
    int v75;  // [bp-0x2a8]
    char v76;  // [bp-0x298]
    int v77;  // [bp-0x288]
    int v78;  // [bp-0x278]
    int v79;  // [bp-0x268], Other Possible Types: char, unsigned long long
    unsigned int v80;  // [bp-0x264]
    unsigned int v81;  // [bp-0x264]
    unsigned long long v82;  // [bp-0x260]
    char v83;  // [bp-0x258]
    char v84;  // [bp-0x248]
    int v85;  // [bp-0x238]
    unsigned long long v86;  // [bp-0x170]
    char v87;  // [bp-0x168]
    char v88;  // [bp-0x158]
    unsigned long long v89;  // [bp-0x148]
    int v90;  // [bp-0x140]
    unsigned long long v91;  // [bp-0x128]
    unsigned long long v92;  // [bp-0x120]
    char v93;  // [bp-0x118]
    unsigned long long v95;  // r14
    char *v96;  // rsi
    uint256_t v97;  // ymm0
    uint256_t v98;  // ymm1
    unsigned int v99;  // eax
    int v100;  // xmm0
    int v101;  // xmm1
    int v102;  // xmm0
    uint256_t v103;  // ymm0
    int v104;  // xmm1
    unsigned long long v106;  // rdx
    unsigned long long v107;  // r12
    unsigned long long v109;  // r13
    unsigned long long v110;  // rax
    int v111;  // xmm0
    uint256_t v112;  // ymm0
    uint256_t v113;  // ymm1
    int v114;  // ymm1, Other Possible Types: uint256_t
    int v115;  // xmm0
    int v116;  // xmm1
    char v117;  // al
    unsigned long long v118;  // rax
    int v119;  // ymm0, Other Possible Types: uint256_t

    v37.join(a0, a1, "update_files", 12);
    v40.new(&v37);
    (char)v79.with_context(&v40, &v37);
    v95 = v82;
    if (!((char)(((0 ^ *((long long *)&v79)) & (0 ^ -(*((long long *)&v79)))) >> 63)))
    {
        v16 = *((long long *)&v79);
        v17 = v95;
        v18 = *((long long *)&v83);
        v40.all_uuids(&v16);
        (char)v79.context(&v40);
        v95 = *((long long *)&v79);
        if ((char)v82 != 2)
        {
            v9 = v95;
            v10 = v82;
            v96 = &v9;
            while (true)
            {
                v80 = v81;
                v40.try_fold(v96);
                if (*((long long *)&v40) == 5)
                {
                    v40.drop_in_place<core::ops::control_flow::ControlFlow<core::result::Result<uuid::Uuid,file_store::Error>>>();
                    core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,file_store::FileStore::all_uuids::{{closure}}>>(&v9);
                    v95 = 0;
                    break;
                }
                v89 = v50;
                v97 = v119 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v43);
                v98 = v114 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v46);
                memcpy(&v88, &v46, 16);
                memcpy(&v87, &v43, 16);
                v86 = *((long long *)&v40);
                v40.context(&v86);
                if (v40 == 1)
                {
                    v95 = v43;
LABEL_758a32:
                    core::ptr::drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,file_store::FileStore::all_uuids::{{closure}}>>(&v9);
                    break;
                }
                v99 = (int)v41;
                v3 = v42;
                v2 = v99;
                v6 = v43;
                v7 = (char)v44;
                v11 = v2;
                v12 = v4;
                v13 = v5;
                v14 = v6;
                v15 = v7;
                v8.get_update_path(&v16, &(char)v2);
                v40.get_update(&v16, &(char)v2);
                (char)v79.with_context(&v40, &v11);
                if ((v79 & 1))
                {
                    v95 = v82;
                    goto LABEL_758a28;
                }
                v50 = 6;
                v43 = ".tmptip:";
                v45 = 4;
                v46 = 1;
                v47 = 0;
                v51 = 0;
                v40 = 0;
                v77.tempfile_in(&v40, &v37);
                if ((char)v78 == 2)
                {
                    v82 = (long long)v77;
                    v79 = 0x8000000000000000;
                }
                else
                {
                    v40.with_capacity(&v77);
                    v97 = v97 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v40);
                    v98 = v98 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v45);
                    v85 = v52;
                    memcpy(&v84, &v47, 16);
                    memcpy(&v83, &v45, 16);
                    *((int128_t *)&v79) = *((int128_t *)&v40);
                }
                v80 = v81;
                (char)v70.with_context(&(char)v79, &v8);
                v95 = v71;
                if ((long long)v70 == 0x8000000000000000)
                {
                    core::ptr::drop_in_place<std::fs::File>(v80);
LABEL_758a28:
                    core::ptr::drop_in_place<std::path::PathBuf>(&v8);
                    goto LABEL_758a32;
                }
                v100 = v72;
                v101 = v73;
                v64 = v74;
                v63 = v101;
                v62 = v100;
                v60 = (long long)v70;
                v61 = v95;
                v40.from_reader(v80);
                (char)v79.with_context(&v40, &v8);
                v95 = v82;
                if ((long long)v79 != 3)
                {
                    ::libc.so.0::memcpy(&v93, &v83, 232);
                    v91 = (long long)v79;
                    v92 = v95;
                    v40.into_cursor_and_fields_index(&v91);
                    ::libc.so.0::memcpy(&(char)v79, &v40, 152);
                    memcpy(&v76, &v59, 16);
                    v102 = v58;
                    v75 = v102;
                    v103 = (((v97 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v100) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (int128_t)v59) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v102) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v54;
                    v104 = v55;
                    v74 = v57;
                    v73 = v56;
                    v72 = v104;
                    v70 = v54;
LABEL_75863d:
                    v40.next_document(&(char)v79);
                    v95 = v25;
                    v0 = (int)v23.with_context(&v40, &v8) & 0xffffff00 | 1;
                    if ((v23 & 1))
                    {
LABEL_7589fb:
                        core::ptr::drop_in_place<milli::documents::DocumentsBatchIndex>(&(char)v70);
                        core::ptr::drop_in_place<milli::documents::reader::DocumentsBatchCursor<std::fs::File>>(&(char)v79);
                        if (!(char)v0)
                            goto LABEL_758a28;
                        goto LABEL_758a1b;
                    }
                    else if (v95)
                    {
                        v40.with_capacity_and_hasher(std::thread::local::LocalKey<T>::with(), v106);
                        v32 = v95;
                        v33 = *((long long *)&v27);
                        v34 = 0;
                        while (true)
                        {
                            core::iter::adapters::fuse::and_then_or_clear(&v19, &v32);
                            if (!v20)
                                break;
                            v1 = v19;
                            v107 = *((long long *)&v22);
                            v23.with_context((char)v70.name(v19), v106, &v1, &v8);
                            v109 = v23;
                            v95 = v25;
                            if (!v109)
                                goto LABEL_7589ee;
                            v23 = v20;
                            v26 = v107;
                            v103 &= 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                            *((uint128_t *)&v27) = 0;
                            serde_json::de::from_trait(&v38, &v23);
                            if (v38)
                            {
                                v23.insert_full(&v40, v109, v25, v38, v39);
                                v25 = v26;
                            }
                            else
                            {
                                v118 = v39.from();
                                goto LABEL_7589eb;
                            }
                        }
                        v110 = serde_json::ser::to_writer(&v60, ".tmptip:", 4);
                        if (!v110)
                        {
                            core::ptr::drop_in_place<indexmap::map::IndexMap<&str,&serde_json::raw::RawValue>>(&v40);
                            goto LABEL_75863d;
                        }
                        else
                        {
                            v118 = v110.from();
LABEL_7589eb:
                            v95 = v118;
LABEL_7589ee:
                            core::ptr::drop_in_place<indexmap::map::IndexMap<&str,&serde_json::raw::RawValue>>(&v40);
                            goto LABEL_7589fb;
                        }
                    }
                    else
                    {
                        v111 = *((int128_t *)&v60);
                        v112 = v103 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v111;
                        v113 = ((v98 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v101) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v104) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v62;
                        v51 = v64;
                        v48 = v63;
                        v44 = v62;
                        v40 = v111;
                        v23.into_inner(&v40);
                        if (v23 == 0x8000000000000000)
                        {
                            v119 = v112 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v25);
                            v114 = v113 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v28);
                            memcpy(&v22, &v28, 16);
                            *((int128_t *)&v19) = *((int128_t *)&v25);
                        }
                        else
                        {
                            v115 = *((int128_t *)&v23);
                            v119 = v112 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v115;
                            v116 = (int128_t)v27;
                            v114 = v113 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v116;
                            v51 = v30;
                            v47 = v29;
                            v44 = v116;
                            v40 = v115;
                            v53 = v31;
                            core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<tempfile::file::NamedTempFile>>(&v40);
                            v19 = v53;
                            v21 = 2;
                        }
                        v23 = &v8;
                        v25 = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
                        v40 = &g_926368;
                        v43 = 1;
                        v47 = 0;
                        v44 = &v23;
                        v46 = 1;
                        v90.map_or_else(0, v106, &v40);
                        v32.context(&v19, &v90);
                        v117 = (char)v34;
                        v95 = v32;
                        if (v117 == 2)
                        {
                            v0 = 0;
                            goto LABEL_7589fb;
                        }
                        v69 = v36;
                        v68 = (long long)v35;
                        v65 = v95;
                        v66 = v33;
                        v67 = v117;
                        v40.persist(&v65, &v8);
                        v23.with_context(&v40, &v8);
                        if (!(v23 & 1))
                        {
                            core::ptr::drop_in_place<std::fs::File>(v24);
                            core::ptr::drop_in_place<milli::documents::DocumentsBatchIndex>(&(char)v70);
                            core::ptr::drop_in_place<milli::documents::reader::DocumentsBatchCursor<std::fs::File>>(&(char)v79);
                            core::ptr::drop_in_place<std::path::PathBuf>(&v8);
                            v96 = &v9;
                        }
                        else
                        {
                            v95 = v25;
                            v0 = 0;
                            goto LABEL_7589fb;
                        }
                    }
                }
                else
                {
LABEL_758a1b:
                    core::ptr::drop_in_place<std::io::buffered::bufwriter::BufWriter<tempfile::file::NamedTempFile>>(&v60);
                    goto LABEL_758a28;
                }
            }
        }
        core::ptr::drop_in_place<file_store::FileStore>(&v16);
    }
    core::ptr::drop_in_place<std::path::PathBuf>(&v37);
    return v95;
}
