long long fish::reader::Reader::is_repaint_needed(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x4c], Other Possible Types: unsigned int
    unsigned int v1;  // [bp-0x48]
    unsigned int v2;  // [bp-0x44]
    unsigned long long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    char v6;  // r15b
    unsigned int v7;  // r12d
    unsigned int v8;  // ebx
    unsigned int v9;  // ebx
    char v10;  // r12b
    char v11;  // al
    char v12;  // al
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rdx
    char v15;  // al
    unsigned long v16;  // rbp
    unsigned long v17;  // rbp
    unsigned long v18;  // rbp
    char v19;  // al
    char v20;  // bpl
    char v21;  // bpl
    char v22;  // bpl
    char v23;  // dil

    v4 = &a0->field_160;
    if (((a0->field_160 & 1) || a0->field_478) && a0->field_271 == 1)
    {
        v3 = a0->field_160.cursor_position();
        v6 = 1;
    }
    v7 = a0->field_84d;
    fish::reader::Reader::is_repaint_needed::{{closure}}(v7, "forcedhighlightselectionpager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 6);
    if (v7)
        return v8 & 0xffffff00 | 1;
    v10 = (char)a0->field_28.equal(a0->field_30, a0->field_c0, a0->field_c8) ^ 1;
    fish::reader::Reader::is_repaint_needed::{{closure}}(v10, "texte", 4);
    if (v10)
        return v8 & 0xffffff00 | 1;
    if (a1)
    {
        v11 = a1.equal(a2, a0->field_d8, a0->field_e0);
        fish::reader::Reader::is_repaint_needed::{{closure}}(v11 ^ 1, "highlightselectionpager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 9);
        if (!v11)
            return v8 & 0xffffff00 | 1;
        if (a0->field_490 != 1)
            goto LABEL_13fa9ed;
LABEL_13fa962:
        if ((v12 & 1) && a0->field_498 == a0->field_a0 && a0->field_4a0 == a0->field_a8)
        {
            fish::reader::Reader::is_repaint_needed::{{closure}}(a0->field_4a8 != a0->field_b0, "selectionpager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 9);
            if (a0->field_4a8 != a0->field_b0)
                return v8 & 0xffffff00 | 1;
LABEL_13faa10:
            fish::reader::Reader::is_repaint_needed::{{closure}}(a0->field_78 != a0->field_148, "position'", 8);
            if (a0->field_78 != a0->field_148)
                return v8 & 0xffffff00 | 1;
            if (!v6)
            {
                v17 = a0->field_88;
                fish::reader::Reader::is_repaint_needed::{{closure}}((unsigned int)v17 & 1, "pager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 27);
                if (((char)v17 & 1))
                    return v8 & 0xffffff00 | 1;
LABEL_13faac2:
                v0.search_range_if_active(&a0->padding_518[208]);
                if (v0 == 1)
                {
                    if ((a0->field_150 & 1) && v1 == a0->field_154)
                    {
                        fish::reader::Reader::is_repaint_needed::{{closure}}(v2 != a0->field_158, "history searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 14);
                        if (v2 != a0->field_158)
                            return v8 & 0xffffff00 | 1;
                        goto LABEL_13fab60;
                    }
                    else
                    {
                        v13 = "history searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()";
                        v14 = 14;
                    }
                }
                else
                {
                    v18 = a0->field_150;
                    fish::reader::Reader::is_repaint_needed::{{closure}}((unsigned int)v18 & 1, "history searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 14);
                    if (((char)v18 & 1))
                        return v8 & 0xffffff00 | 1;
LABEL_13fab60:
                    v19 = a0->field_508.eq(a0->field_510, a0->field_f0, a0->field_f8);
                    fish::reader::Reader::is_repaint_needed::{{closure}}(v19 ^ 1, "autosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 14);
                    if (!v19)
                        return v8 & 0xffffff00 | 1;
                    v20 = (char)a0->field_718.eq(a0->field_720, a0->field_108, a0->field_110) ^ 1;
                    fish::reader::Reader::is_repaint_needed::{{closure}}(v20, "left_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 11);
                    if (v20)
                        return v8 & 0xffffff00 | 1;
                    v21 = (char)a0->field_730.eq(a0->field_738, a0->field_120, a0->field_128) ^ 1;
                    fish::reader::Reader::is_repaint_needed::{{closure}}(v21, "mode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 11);
                    if (v21)
                        return v8 & 0xffffff00 | 1;
                    v22 = (char)a0->field_748.eq(a0->field_750, a0->field_138, a0->field_140) ^ 1;
                    fish::reader::Reader::is_repaint_needed::{{closure}}(v22, "right_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 12);
                    if (!v22)
                    {
                        v9 = v4.rendering_needs_update(&a0->padding_272[6]);
                        fish::reader::Reader::is_repaint_needed::{{closure}}(v23, "pagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 5);
                        return v9;
                    }
                    return v8 & 0xffffff00 | 1;
                }
            }
            else if ((a0->field_88 & 1))
            {
                fish::reader::Reader::is_repaint_needed::{{closure}}(v3 != a0->field_90, "pager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 27);
                if (v3 != a0->field_90)
                    return v8 & 0xffffff00 | 1;
                goto LABEL_13faac2;
            }
            else
            {
                v13 = "pager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()";
                v14 = 27;
            }
        }
        else
        {
            v13 = "selectionpager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()";
            v14 = 9;
        }
        fish::reader::Reader::is_repaint_needed::{{closure}}(v23, v13, v14);
        return v8 & 0xffffff00 | 1;
    }
    fish::reader::Reader::is_repaint_needed::{{closure}}(0, "highlightselectionpager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 9);
    if (a0->field_490 == 1)
        goto LABEL_13fa962;
LABEL_13fa9ed:
    v16 = v15;
    fish::reader::Reader::is_repaint_needed::{{closure}}((unsigned int)v16 & 255 & 1, "selectionpager_search_field_positionhistory searchautosuggestionleft_promptmode_promptright_promptpagerrepaint needed becausechangeassertion failed: result.text.len() == result.colors.len()", 9);
    if (((char)v16 & 1))
        return v8 & 0xffffff00 | 1;
    goto LABEL_13faa10;
}
