fn uu_dd::parseargs::Parser::parse_status_level(a0: void*, a1: &u32, a2: u32) -> u64 {
    let v1: u64;  // rax
    let v3: u64;  // r15

    switch (a2) {
    case 0:
        memcpy(v3, a1, a2);
        a0->field_0 = 10;
        a0->field_8 = a2;
        a0->field_10 = 1;
        a0->field_18 = a2;
        return v1;
    case 4:
        if !(*(a1) == 1701736302) {
            goto LABEL_49712a;
        }
        a0->field_8 = 2;
        break;
    case 6:
        v1 = 1719168878 ^ *(a1);
        if !(!(a1[1] ^ 29285) && !v1) {
LABEL_49712a:
            v1 = memcpy(v3, a1, a2);
            a0->field_0 = 10;
            a0->field_8 = a2;
            a0->field_10 = v3;
            a0->field_18 = a2;
            return v1;
        }
        a0->field_8 = 1;
        break;
    case 8:
        v1 = 8319104478719472240;
        if !(*(&a1 as &i64) == 8319104478719472240) {
            goto LABEL_49712a;
        }
        a0->field_8 = 0;
        break;
    default:
        goto LABEL_49712a;
    }
    a0->field_0 = 14;
    return v1;
}
