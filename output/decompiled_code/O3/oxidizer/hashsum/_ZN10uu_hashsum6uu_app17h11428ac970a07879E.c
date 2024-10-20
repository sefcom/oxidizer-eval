fn uu_hashsum::uu_app(a0: void*, a1: void*, a2: u32) -> u64 {
    switch (a2) {
    case 5:
        if !(a1->field_3 ^ 109) && !(1970483810 ^ a1->field_0) {
            uu_hashsum::uu_app_length(a0);
            break;
        } else {
            if !(!(a1->field_3 ^ 109)) || !(!(1970484066 ^ a1->field_0)) {
                goto LABEL_561067;
            }
            uu_hashsum::uu_app_b3sum(a0);
            break;
        }
        a0->field_2c8 = 0;
        return a0;
    case 6:
        if !(a1->field_3 ^ 28021) && !(1932878957 ^ a1->field_0) {
            goto LABEL_5611cc;
        }
        goto LABEL_561067;
    case 7:
        if !(1836413745 ^ *((&a1->field_0 as &char + 3) as &i32)) && !(828467315 ^ a1->field_0) {
            goto LABEL_5611cc;
        }
        if !(1836413747 ^ *((&a1->field_0 as &char + 3) as &i32)) && !(862021747 ^ a1->field_0) {
LABEL_561041:
            uu_hashsum::uu_app_bits(a0);
            break;
        }
    case 9:
        if !((a1[1].field_0 ^ 109)) && !((8463165514957547635 ^ *(&a1->field_0 as &i64))) || !((a1[1].field_0 ^ 109)) && !((8463167726865705075 ^ *(&a1->field_0 as &i64))) || !((a1[1].field_0 ^ 109)) && !((8463165540744128627 ^ *(&a1->field_0 as &i64))) || !((a1[1].field_0 ^ 109)) && !((8463163311689656435 ^ *(&a1->field_0 as &i64))) {
LABEL_5611cc:
            uu_hashsum::uu_app_common(a0);
            break;
        }
    case 11:
        if !(!(!(*((&a1->field_0 as &char + 3) as &i64) ^ 7887336990426934579))) && !(!(!(3761123808524724339 ^ *(&a1->field_0 as &i64)))) || !((*((&a1->field_0 as &char + 3) as &i64) ^ 7887336999067200819)) && !((3906083421530712179 ^ *(&a1->field_0 as &i64))) || !((7887336990527663411 ^ *((&a1->field_0 as &char + 3) as &i64))) && !((3762813757896616051 ^ *(&a1->field_0 as &i64))) || !((7887336981820419379 ^ *((&a1->field_0 as &char + 3) as &i64))) && !((3616730444007041139 ^ *(&a1->field_0 as &i64))) {
            goto LABEL_5611cc;
        }
        if !(!(!(7887337007606752619 ^ *((&a1->field_0 as &char + 3) as &i64)))) && !(!(!(4049353326622500979 ^ *(&a1->field_0 as &i64)))) || !(!(!(7887336999067215211 ^ *((&a1->field_0 as &char + 3) as &i64)))) && !(!(!(3906083662988404851 ^ *(&a1->field_0 as &i64)))) {
            goto LABEL_561041;
        }
        goto LABEL_561067;
    default:
LABEL_561067:
        uu_hashsum::uu_app_custom(a0);
        a0->field_2c8 = 1;
        return a0;
    }
}
