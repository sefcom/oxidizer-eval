long long uu_dd::parseargs::Parser::parse_output_flags(unsigned long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    struct_1 *v0;  // [bp-0x138]
    unsigned long v1;  // [bp-0x130]
    unsigned long v2;  // [bp-0x128]
    unsigned long v3;  // [bp-0x120]
    unsigned long v4;  // [bp-0x118]
    unsigned long v5;  // [bp-0x110]
    unsigned long v6;  // [bp-0x108]
    unsigned long v7;  // [bp-0x100]
    unsigned long long v8;  // [bp-0xf0]
    unsigned long v9;  // [bp-0xe8]
    unsigned long v10;  // [bp-0xe0]
    int v11;  // [bp-0xd8], Other Possible Types: char
    unsigned long v12;  // [bp-0xc8]
    int v13;  // [bp-0xc0], Other Possible Types: char
    unsigned long v14;  // [bp-0xb0]
    int v15;  // [bp-0xa8], Other Possible Types: char
    unsigned long v16;  // [bp-0x98]
    int v17;  // [bp-0x90], Other Possible Types: char
    unsigned long v18;  // [bp-0x80]
    void* v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x70]
    char v21;  // [bp-0x68]
    unsigned short v22;  // [bp-0x38]
    unsigned long long v24;  // rax
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rdx
    unsigned long long v27;  // r13
    unsigned long long v28;  // r13
    unsigned long v30;  // rcx
    unsigned long long v35;  // rax

    v21.into_searcher(44, a2, a3);
    v19 = 0;
    v8 = a3;
    v20 = a3;
    v22 = 1;
    v24 = v19.next();
    if (v24)
    {
        v25 = v24;
        v1 = &a1[1].padding_0[11];
        v2 = &a1->padding_0[193];
        v3 = &a1[1].padding_0[7];
        v4 = &a1[1].padding_0[6];
        v5 = &a1[1].padding_0[5];
        v6 = &a1[1].padding_0[4];
        v7 = &a1[1].padding_0[3];
        v9 = &a1[1].padding_0[2];
        v10 = &a1[1].padding_0[1];
        do
        {
            v28 = v27;
            if ((char)v25.equal(v28, "ciodirectdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs", 3))
            {
                v35 = (&v0->field_0)[1].to_vec(a2, v8);
                v0->field_0 = 11;
                return v35;
            }
            v30 = &a1->field_c3;
            if (!(char)v25.equal(v28, "directdirectorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs", 6))
            {
                v30 = a1 + 1;
                if (!(char)v25.equal(v28, "directorydsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/", 9))
                {
                    v30 = v10;
                    if (!(char)v25.equal(v28, "dsyncnocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/t", 5))
                    {
                        v30 = v9;
                        if (!(char)v25.equal(v28, "syncCyan    \"`$\\EADV", 4))
                        {
                            v30 = v7;
                            if (!(char)v25.equal(v28, "nocachenoatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolch", 7))
                            {
                                v30 = v6;
                                if (!(char)v25.equal(v28, "nonblockNO_COLORNulError", 8))
                                {
                                    v30 = v5;
                                    if (!(char)v25.equal(v28, "noatimenocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/ni", 7))
                                    {
                                        v30 = v4;
                                        if (!(char)v25.equal(v28, "nocttynolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2", 6))
                                        {
                                            v30 = v3;
                                            if (!(char)v25.equal(v28, "nofollowdd-usage", 8))
                                            {
                                                if ((char)v25.equal(v28, "nolinksbinaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01", 7))
                                                {
                                                    v13.to_vec(v25, v28);
                                                    v0->field_0 = 11;
                                                    *((void*)&(&v0->field_0)[1]) = v13;
                                                    *((unsigned long *)((char *)&v0->field_8 + 8)) = v14;
                                                    return v14;
                                                }
                                                if ((char)v25.equal(v28, "binaryfullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86", 6))
                                                {
                                                    v15.to_vec(v25, v28);
                                                    v0->field_0 = 11;
                                                    *((void*)&(&v0->field_0)[1]) = v15;
                                                    *((unsigned long *)((char *)&v0->field_8 + 8)) = v16;
                                                    return v16;
                                                }
                                                if ((char)v25.equal(v28, "textswabdumb", 4))
                                                {
                                                    v17.to_vec(v25, v28);
                                                    v0->field_0 = 11;
                                                    *((void*)&(&v0->field_0)[1]) = v17;
                                                    *((unsigned long *)((char *)&v0->field_8 + 8)) = v18;
                                                    return v18;
                                                }
                                                v30 = v2;
                                                if (!(char)v25.equal(v28, "appendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/sr", 6))
                                                {
                                                    v30 = v1;
                                                    if (!(char)v25.equal(v28, "seek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/rustlib/src/rust", 10) && !(char)v25.equal(v28, "fullblockcount_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-un", 9) && !(char)v25.equal(v28, "count_bytesskip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-lin", 11) && !(char)v25.equal(v28, "skip_bytesappendseek_bytesasciiebcdicibmlcaseucaseblockunblocknoerrorsparsenocreatnotruncfdatasyncfsync: warning: 0xalternative00x\ndd-warning-zero-multipliersrc/uu/dd/src/parseargs.rs/root/.rustup/toolchains/nightly-2025-01-01-x86_64-unknown-linux-gnu/lib/", 10))
                                                    {
                                                        v11.to_vec(v25, v28);
                                                        v0->field_0 = 5;
                                                        *((void*)&(&v0->field_0)[1]) = v11;
                                                        *((unsigned long *)((char *)&v0->field_8 + 8)) = v12;
                                                        return v12;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            *((char *)v30) = 1;
            v25 = v19.next();
            v26 = v26;
        } while (v25);
    }
    v0->field_0 = 14;
    return a0;
}
