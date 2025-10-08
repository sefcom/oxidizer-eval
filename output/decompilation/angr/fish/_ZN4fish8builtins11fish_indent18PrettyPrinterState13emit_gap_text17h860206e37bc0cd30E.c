long long fish::builtins::fish_indent::PrettyPrinterState::emit_gap_text(struct_0 *a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
    struct_0 *v0;  // [bp-0x98], Other Possible Types: unsigned int
    unsigned long v1;  // [bp-0x90]
    char v2;  // [bp-0x84]
    char v3;  // [bp-0x73]
    char v4;  // [bp-0x72]
    void* v5;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    void* v9;  // [bp-0x50]
    char v10;  // [bp-0x48]
    void* v11;  // [bp-0x40]
    unsigned int v12;  // [bp-0x38]
    unsigned short v13;  // [bp-0x34]
    unsigned long long v15;  // r15
    unsigned long long v16;  // r14
    unsigned long long v17;  // r14
    unsigned long long v18;  // r15
    char v19;  // al
    unsigned long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    char *v23;  // r13
    char *v24;  // rbp
    char v25;  // r14b
    unsigned int v26;  // r15d
    char *v27;  // r12
    char *v28;  // rbx
    unsigned long long v29;  // r13

    v0 = a3;
    v15 = a1.start();
    v16 = a1.end(a2);
    v17 = v16 - v15;
    if (v16 >= v15 && v16 <= a0->field_98)
    {
        v18 = v15 * 4 + a0->field_90;
        v5 = v18;
        v6 = a0->field_90 + v16 * 4;
        if (!v5.try_fold().eq(1))
            return 0;
        if (((char)v18.find(v17, "\\", 2) & 1))
        {
            v19 = v18.find(v17, "#", 1);
            if ((char)v0 || (v19 & v20 < v20))
            {
                if (!(char)a0->field_38.at_line_start(*((long long *)&a0->field_40)) && !(char)a0.has_preceding_space())
                    a0->padding_30.extend(" +-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", "+-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '");
                a0->padding_30.extend("\\\nsource out of bounds \\\nShould have handled all leaf nodes", "source out of bounds \\\nShould have handled all leaf nodes");
                v21 = a1.start();
                v22 = v21 + v20;
                if ((char)__CFADD__(v21, v20) || (char)_ccall(4, 24, v22 + 1, 0, (v21 + v20 <= v21 ? 1 : 0)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14c94c8); /* do not return */
                a0->field_a0 = a0->field_20.indent(a0->field_28, v22 + 1);
                a0.emit_space_or_indent(0);
            }
        }
        v11 = 0;
        v7 = v18;
        v8 = v17;
        v9 = 0;
        v10 = 1;
        *((unsigned int **)&v12) = &g_1010001;
        v13 = 0;
        v5 = 0;
        v2.next(&v5);
        if (v4 != 2)
        {
            v0 = a0;
            v1 = &a0->padding_30;
            v23 = &v5;
            v24 = &v2;
            do
            {
                v26 = v3;
                v27 = v23;
                v28 = v24;
                v29 = v23.text_of(v24);
                if ((v25 & 1))
                {
                    v0.emit_newline();
                    v0->field_b0 = 0;
                    if (v29.eq_by(v20 * 4 + v29, "\n%s: %s\nInvalid working directory, it must start and end with /", "%s: %s\nInvalid working directory, it must start and end with /"))
                        continue;
                }
                else if (v0->field_b0)
                {
                    if (v26 == 5)
                        continue;
                    v0->field_b0 = 0;
                }
                switch (v26)
                {
                case 5:
                    if (v29.eq_by(v20 * 4 + v29, "\n%s: %s\nInvalid working directory, it must start and end with /", "%s: %s\nInvalid working directory, it must start and end with /"))
                    {
                        v0.emit_newline();
                        v0->field_b0 = 1;
                        break;
                    }
                    break;
                case 10:
                    v0.emit_space_or_indent(0);
                    v1.spec_extend(v29, v20 * 4 + v29);
                    v25 = 1;
                    break;
                default:
                    v0.emit_space_or_indent(0);
                    v1.spec_extend(v29, v20 * 4 + v29);
                    break;
                }
                v24 = v28;
                v23 = v27;
                v28.next(v27);
            } while (v4 != 2);
            if ((v25 & 1))
                return v0.emit_newline() & 0xffffffffffffff00 | 1;
        }
        return 0;
    }
    core::option::expect_failed("index out of boundsEXPORTPATHVARLOCALGLOBALUNIVERSALUNPATHVAR/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/hashbrown-0.15.2/src/raw/mod.rsHash table capacity overflowLazy instance has previously been poisoned/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/once_cell-1.20.2/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/lib.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rand_core-0.6.4/src/le.rs", 19, &g_14c94b0); /* do not return */
}
