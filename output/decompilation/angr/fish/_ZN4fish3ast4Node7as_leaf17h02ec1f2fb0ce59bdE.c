long long fish::ast::Node::as_leaf(unsigned long long a0)
{
    char v0;  // [bp-0x18], Other Possible Types: unsigned long
    void* v1;  // [bp-0x10], Other Possible Types: unsigned long long
    char v2;  // [bp-0x8]
    void* v4;  // rax
    void* v5;  // rax

    v0.kind(a0);
    v4 = 0;
    switch (v0)
    {
    case 1: case 2:
        return *((long long *)(*((long long *)&v2) + 208))(v1);
    case 3:
        break;
    case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: case 24: case 25: case 26: case 27: case 28: case 29: case 30: case 31: case 32: case 34:
LABEL_12f1131:
        return v5;
    case 33:
        break;
    case 35:
        break;
    default:
        return 0;
    }
    v5 = v1;
    goto LABEL_12f1131;
}
