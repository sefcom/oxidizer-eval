_BYTE *__fastcall uu_cp::Attributes::union(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  char v5; // dl
  char v6; // dl
  char v7; // r13
  char v8; // dl
  char v9; // r12
  char v10; // dl
  char v11; // bp
  char v12; // dl
  char v13; // al
  char v14; // dl
  char v16; // [rsp+1h] [rbp-37h]
  char v17; // [rsp+2h] [rbp-36h]
  char v18; // [rsp+3h] [rbp-35h]
  char v19; // [rsp+4h] [rbp-34h]
  char v20; // [rsp+5h] [rbp-33h]
  char v21; // [rsp+6h] [rbp-32h]
  char v22; // [rsp+7h] [rbp-31h]

  v20 = core::cmp::Ord::max(*a2, a2[1], *a3, a3[1]);
  v22 = v5;
  v19 = core::cmp::Ord::max(a2[6], a2[7], a3[6], a3[7]);
  v21 = v6;
  v7 = core::cmp::Ord::max(a2[4], a2[5], a3[4], a3[5]);
  v18 = v8;
  v9 = core::cmp::Ord::max(a2[2], a2[3], a3[2], a3[3]);
  v17 = v10;
  v11 = core::cmp::Ord::max(a2[8], a2[9], a3[8], a3[9]);
  v16 = v12;
  v13 = core::cmp::Ord::max(a2[10], a2[11], a3[10], a3[11]);
  *a1 = v20 & 1;
  a1[1] = v22;
  a1[2] = v9 & 1;
  a1[3] = v17;
  a1[4] = v7 & 1;
  a1[5] = v18;
  a1[6] = v19 & 1;
  a1[7] = v21;
  a1[8] = v11 & 1;
  a1[9] = v16;
  a1[10] = v13 & 1;
  a1[11] = v14;
  return a1;
}