long long fish::reader::Reader::handle_execute(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    char v3;  // [bp-0x38]
    unsigned long long v5;  // r12
    char v7;  // al
    unsigned long v8;  // r15
    unsigned long v9;  // rax
    unsigned long v10;  // rdi
    unsigned int v11;  // eax
    char v12;  // dl
    unsigned int v13;  // ecx
    unsigned long v14;  // rax

    if ((a0->field_160 & 1))
    {
        if (!a0->field_160.selected_completion(&a0->padding_1f0[136]))
        {
            v0.to_vec(a0->field_198, a0->field_1a0);
            a0.insert_string(0, v1, v2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        }
    }
    else
    {
        if ((a0->field_478 & 1))
        {
            v5 = a0->field_1a0 - a0->field_1e8;
            if (a0->field_1a0 < a0->field_1e8)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e08a8); /* do not return */
            v0 = a0->field_78;
            fish::reader::replace_line_at_cursor(&v3, a0->field_28, a0->field_30, &v0, a0->field_198, a0->field_1a0);
            a0.replace_substring(0, 0, a0->field_30, &v3);
            if (v0 < v5)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e08c0); /* do not return */
            a0.set_position(v0 - v5);
        }
        else
        {
            a0->field_510 = 0;
            a0.clear_pager();
            v7 = fish::reader::is_backslashed(a0->field_28, a0->field_30, a0->field_78);
            if (a0->field_78 < a0->field_30)
            {
                if (v7)
                {
                    v8 = a0->field_30;
                    v9 = a0->field_78;
                    if (v9 >= v8)
                        core::panicking::panic_bounds_check(v9, v8, &g_14e0878); /* do not return */
                    v10 = a0->field_28;
                    v11 = *((int *)(v10 + v9 * 4));
                    if (v11 - 9 >= 5 && v11 != 32 && (v11 < 128 || !(char)::0x12b00d0::core::unicode::unicode_data::white_space::lookup(v11)))
                        goto LABEL_140164e;
                }
                else
                {
                    v10 = a0->field_28;
                    v8 = a0->field_30;
LABEL_140164e:
                    if (!(char)fish::reader::is_backslashed(v10, v8, v8) || fish::reader::text_ends_in_comment(a0->field_28, a0->field_30))
                    {
LABEL_140166e:
                        if (!((char)a0.expand_for_execute(a1) & 1))
                        {
                            a0.add_to_history(a1);
                            *((char *)(a0.rls_mut() + 41)) = 1;
                            v13 = a0->field_30;
                            v14 = a0->field_78;
                            a0->field_0 = 1;
                            a0->field_8 = v14;
                            return a0.update_buff_pos(0, 1, v13) & 0xffffffffffffff00 | 1;
                        }
                        else if ((v12 & 1))
                        {
                            return 0;
                        }
                        else if (!(v12 & 2))
                        {
                            core::panicking::panic("internal error: entered unreachable codeINFinfNANnan", 40, &g_14e0890); /* do not return */
                        }
                    }
                    else
                    {
                        a0.set_position(a0->field_30);
                    }
                }
            }
            else
            {
                if (!v7 || fish::reader::text_ends_in_comment(a0->field_28, a0->field_30))
                    goto LABEL_140166e;
            }
            return (unsigned long long)a0.insert_char(0, 10) & 0xffffffffffffff00 | 1;
        }
    }
    return a0.clear_pager() & 0xffffffffffffff00 | 1;
}
