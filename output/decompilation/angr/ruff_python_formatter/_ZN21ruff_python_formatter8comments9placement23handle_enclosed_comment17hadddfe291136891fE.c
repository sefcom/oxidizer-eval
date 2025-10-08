long long ruff_python_formatter::comments::placement::handle_enclosed_comment(void* a0, void* a1, struct_2 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long long v0;  // [bp-0xe8]
    struct_2 *v1;  // [bp-0xe0]
    struct_0 *v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    char v5;  // [bp-0x80]
    struct_0 *v7;  // rdx
    struct_2 *v8;  // 4096
    unsigned long v9;  // rbx
    unsigned int *v10;  // rdx
    unsigned long v11;  // rax
    char v12;  // cl
    struct_0 *v13;  // r12
    unsigned int v14;  // ebx
    unsigned int v15;  // edx
    unsigned long long v16;  // rax
    unsigned long v17;  // rax
    int v18;  // xmm0
    int v19;  // xmm1
    int v20;  // xmm2
    struct_2 *v21;  // rcx
    unsigned long v22;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v26;  // rax
    int v27;  // xmm0
    int v28;  // xmm1
    int v29;  // xmm2
    int v30;  // xmm0
    int v31;  // xmm1
    int v32;  // xmm2

    switch (*((long long *)a1))
    {
    case 0:
        ruff_python_formatter::comments::placement::handle_trailing_module_comment(&v5, v7, a1);
        return a0.or_else(&v5, a4, a5);
    case 2:
        return ruff_python_formatter::comments::placement::handle_leading_function_with_decorators_comment(a0, a1);
    case 3:
        return ruff_python_formatter::comments::placement::handle_leading_class_with_decorators_comment(a0, a1, v7);
    case 4:
        break;
    case 6: case 8:
        v9 = (long long)a1[16];
        v8 = a2;
        if ((long long)a1[16] != 94)
        {
            v1 = (long long)a1[24];
            v10 = v7->field_8;
            goto LABEL_7017c0;
        }
        break;
    case 7:
        v9 = (long long)a1[16];
        v8 = a2;
        if ((long long)a1[16] != 94)
        {
            v1 = (long long)a1[24];
            v10 = v7->field_18;
LABEL_7017c0:
            v8 = v9.ptr_eq(v1, v10.from(), v23);
            if ((char)v8)
                break;
        }
        break;
    case 9:
        v8 = a2;
        if ((long long)a1[16] != 94)
        {
            v8 = ruff_python_formatter::comments::placement::handle_enclosed_comment::{{closure}}(v7->field_18, (long long)a1[16], (long long)a1[24]);
            if ((char)v8)
            {
                return ruff_python_formatter::comments::placement::handle_trailing_implicit_concatenated_string_comment(a0, a1, a2, a3, a4, a5);
            }
        }
        break;
    case 13:
        return ruff_python_formatter::comments::placement::handle_with_comment(a0, a1, v7);
    case 19:
        return ruff_python_formatter::comments::placement::handle_import_from_comment(a0, a1, v7);
    case 27: case 42:
        return ruff_python_formatter::comments::placement::handle_trailing_binary_like_comment(a0, a1, a4);
    case 28:
        return ruff_python_formatter::comments::placement::handle_named_expr_comment(a0, a1, a4, a5);
    case 29:
        return ruff_python_formatter::comments::placement::handle_trailing_binary_expression_left_or_operator_comment(a0, a1, v7, a4, a5);
    case 30:
        return ruff_python_formatter::comments::placement::handle_unary_op_comment(a0, a1, v7, a4, a5);
    case 31:
        return ruff_python_formatter::comments::placement::handle_lambda_comment(a0, a1, v7, a4, a5);
    case 32:
        return ruff_python_formatter::comments::placement::handle_expr_if_comment(a0, a1, v7, a4, a5);
    case 33:
        ruff_python_formatter::comments::placement::handle_dict_unpacking_comment(&v5, a1, a4, a5);
        (char)v2.or_else(&v5, a4, a5);
        return a0.or_else(&(char)v2, a4, a5);
    case 34: case 35: case 36: case 56: case 75: case 78: case 88:
LABEL_701406:
        a4 = a4;
        a5 = a5;
        a0 = a0;
        a1 = a1;
        return ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(a0, a1, a4, a5);
    case 37:
        ruff_python_formatter::comments::placement::handle_key_value_comment(&v5, a1, a4, a5);
        return a0.or_else(&v5, a4, a5);
    case 38:
        v8 = a2;
        if (!v7->field_2c)
            goto LABEL_701afc;
        else
            goto LABEL_701406;
    case 43:
        return ruff_python_formatter::comments::placement::handle_call_comment(a0, a1);
    case 46:
        v8 = (long long)a1[56];
        if ((long long)a1[48] == 89)
        {
            v12 = (char)a1[72];
            *((unsigned long long *)&a0[8]) = 89;
            *((struct_2 **)&a0[16]) = v8;
            v11 = (long long)a1[64];
            *((unsigned long *)&a0[24]) = v11;
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v12;
            *((unsigned long long *)a0) = 96;
            return v11;
        }
        else if ((int)(long long)a1[48] == 90)
        {
            v12 = (char)a1[72];
            *((unsigned long long *)&a0[8]) = 90;
            *((struct_2 **)&a0[16]) = v8;
            *((long long *)&a0[24]) = (long long)a1[64];
            *((char *)&a0[32]) = 0;
            *((char *)&a0[33]) = v12;
            *((unsigned long long *)a0) = 96;
            return v11;
        }
    case 52:
        return ruff_python_formatter::comments::placement::handle_attribute_comment(a0, a1, v7, a4, a5);
    case 53:
        if (v7->field_8->field_0 == 31)
        {
            v0 = a5;
            v7 = v7->field_8 + 2;
            return ruff_python_formatter::comments::placement::handle_slice_comments(a0, a1, v7, a2, a3, a4, v0);
        }
        v8 = a2;
        if (!(char)a1[72])
        {
            v13 = v7;
            v8 = v7->field_0.range();
            v14 = (int)a1[64];
            if (v15 < v14)
            {
                v13->field_0.range();
                if (v15 > v14)
                    core::panicking::panic("assertion failed: start.raw <= end.raw/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/ruff/crates/ruff_python_ast/src/parenthesize.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/sync/poison/once.rs/rustc/bf64d66bd58719fac2585eae5e546e5e1d9947f5/library/std/src/thread/local.rs", 38, &g_97d0f0); /* do not return */
                v5.new(a4, a5, v15, v14);
                v16 = v5.try_fold().eq(1);
                if (!(char)v16)
                {
                    *((int128_t *)&a0[64]) = (int128_t)a1[64];
                    v18 = *((int128_t *)a1);
                    v19 = (int128_t)a1[16];
                    v20 = (int128_t)a1[32];
                    *((int128_t *)&a0[48]) = (int128_t)a1[48];
                    a0[32] = v20;
                    a0[16] = v19;
                    *(a0) = v18;
                    return v16;
                }
                v8 = (char)v2.try_fold(&v5);
                if ((char)v3 == 90)
                {
                    v17 = (int)a1[68];
                    *((unsigned long long *)&a0[8]) = 53;
                    *((struct_0 **)&a0[16]) = v13;
                    *((unsigned int *)&a0[24]) = v14;
                    *((unsigned int *)&a0[28]) = v17;
                    *((unsigned short *)&a0[32]) = 0;
                    *((unsigned long long *)a0) = 96;
                    return v17;
                }
                goto LABEL_701afc;
            }
        }
    case 54:
        return ruff_python_formatter::comments::placement::handle_trailing_expression_starred_star_end_of_line_comment(a0, a1, v7, a4, a5);
    case 57:
        v8 = a2;
        if (!v7->field_24)
            goto LABEL_701afc;
        else
            goto LABEL_701406;
    case 58:
        v0 = a5;
        v7 = v7;
        return ruff_python_formatter::comments::placement::handle_slice_comments(a0, a1, v7, a2, a3, a4, v0);
    case 61:
        if ((long long)a1[16] != 94 && (char)a1[72] && v7->field_40 && (long long)a1[32] != 94)
        {
            v21 = (long long)a1[24];
            *((long long *)&a0[8]) = (long long)a1[16];
            *((struct_2 **)&a0[16]) = v21;
            v22 = (long long)a1[64];
            *((unsigned long *)&a0[24]) = v22;
            *((unsigned short *)&a0[32]) = 0x100;
            *((unsigned long long *)a0) = 95;
            return v22;
        }
        break;
    case 65:
        v26 = v7.from_pattern(a4, a5);
        if ((v26 & 255) >= 2)
        {
            *((int128_t *)&a0[64]) = (int128_t)a1[64];
            v27 = *((int128_t *)a1);
            v28 = (int128_t)a1[16];
            v29 = (int128_t)a1[32];
            *((int128_t *)&a0[48]) = (int128_t)a1[48];
            a0[32] = v29;
            a0[16] = v28;
            *(a0) = v27;
            return v26;
        }
        return ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(a0, a1, a4, a5);
    case 66:
        ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(&v5, a1, a4, a5);
        v2 = v7;
        v3 = a4;
        v4 = a5;
        return a0.or_else(&v5, &v2);
    case 67:
        return ruff_python_formatter::comments::placement::handle_pattern_match_class_comment(a0, a1, v7);
    case 68:
        v11 = (char)a1[72];
        *((unsigned long long *)&a0[8]) = 68;
        *((struct_0 **)&a0[16]) = v7;
        *((long long *)&a0[24]) = (long long)a1[64];
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v11;
        *((unsigned long long *)a0) = 96;
        return v11;
    case 69:
        return ruff_python_formatter::comments::placement::handle_pattern_match_as_comment(a0, a1, a4, a5);
    case 76:
        return ruff_python_formatter::comments::placement::handle_pattern_keyword_comment(a0, a1, v7->field_6c, a4, a5);
    case 77:
        return ruff_python_formatter::comments::placement::handle_comprehension_comment(a0, a1, v7, a4, a5);
    case 79:
        ruff_python_formatter::comments::placement::handle_parameters_separator_comment(&v5, a1, v7, a4, a5, a5);
        v2 = v7;
        v3 = a4;
        v4 = a5;
        return a0.or_else(&v5, &v2);
    case 80:
        return ruff_python_formatter::comments::placement::handle_parameter_comment(a0, a1, v7, a4, a5);
    case 82:
        return ruff_python_formatter::comments::placement::handle_keyword_comment(a0, a1, v7, a4, a5);
    case 84:
        return ruff_python_formatter::comments::placement::handle_with_item_comment(a0, a1, a4, a5);
    case 89:
        v11 = (char)a1[72];
        *((unsigned long long *)&a0[8]) = 89;
        *((struct_0 **)&a0[16]) = v7;
        *((long long *)&a0[24]) = (long long)a1[64];
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v11;
        *((unsigned long long *)a0) = 96;
        return v11;
    case 90:
        v11 = (char)a1[72];
        *((unsigned long long *)&a0[8]) = 90;
        *((struct_0 **)&a0[16]) = v7;
        *((long long *)&a0[24]) = (long long)a1[64];
        *((char *)&a0[32]) = 0;
        *((char *)&a0[33]) = v11;
        *((unsigned long long *)a0) = 96;
        return v11;
    default:
LABEL_701afc:
        *((int128_t *)&a0[64]) = (int128_t)a1[64];
        v30 = *((int128_t *)a1);
        v31 = (int128_t)a1[16];
        v32 = (int128_t)a1[32];
        *((int128_t *)&a0[48]) = (int128_t)a1[48];
        a0[32] = v32;
        a0[16] = v31;
        *(a0) = v30;
        return v8;
    }
}
