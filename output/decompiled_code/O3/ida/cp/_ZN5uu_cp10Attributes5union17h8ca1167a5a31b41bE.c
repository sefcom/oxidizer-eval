bool *__fastcall uu_cp::Attributes::union(bool *a1, char *a2, char *a3)
{
  bool *result; // rax
  bool v4; // cl
  char v5; // r10
  bool v6; // r11
  char v7; // r9
  char v8; // r11
  bool v9; // cl
  char v10; // cl
  char v11; // r12
  char v12; // r15
  bool v13; // r13
  char v14; // bl
  char v15; // bp
  char v16; // r8
  bool v17; // r14
  char v18; // di
  char v19; // r13
  char v20; // si
  bool v21; // dl
  bool v22; // r10
  bool v23; // r13
  bool v24; // r15
  bool v25; // di
  bool v26; // bl
  bool v27; // si
  bool v28; // cl
  bool v29; // dl
  bool v30; // r9
  bool v31; // r11
  bool v32; // di
  bool v33; // r8
  bool v34; // r14
  bool v35; // dl
  bool v36; // bp
  bool v37; // r12
  char v38; // [rsp+0h] [rbp-6Eh]
  bool v39; // [rsp+1h] [rbp-6Dh]
  bool v40; // [rsp+2h] [rbp-6Ch]
  char v41; // [rsp+3h] [rbp-6Bh]
  char v42; // [rsp+4h] [rbp-6Ah]
  bool v43; // [rsp+5h] [rbp-69h]
  char v44; // [rsp+6h] [rbp-68h]
  char v45; // [rsp+7h] [rbp-67h]
  char v46; // [rsp+8h] [rbp-66h]
  char v47; // [rsp+9h] [rbp-65h]
  bool v48; // [rsp+Ah] [rbp-64h]
  char v49; // [rsp+Bh] [rbp-63h]
  bool v50; // [rsp+Ch] [rbp-62h]
  char v51; // [rsp+Dh] [rbp-61h]
  char v52; // [rsp+Eh] [rbp-60h]
  char v53; // [rsp+16h] [rbp-58h]
  char v54; // [rsp+1Eh] [rbp-50h]
  char v55; // [rsp+26h] [rbp-48h]
  char v56; // [rsp+2Eh] [rbp-40h]
  char v57; // [rsp+36h] [rbp-38h]

  result = a1;
  v47 = *a2;
  v4 = *a2 != 0;
  v46 = *a3;
  if ( *a2 && *a3 )
    v4 = a2[1] - 1 == a3[1];
  v5 = a3[7];
  v44 = a2[6];
  v6 = v44 != 0;
  v50 = v4;
  v42 = a3[6];
  if ( v44 && a3[6] )
    v6 = a2[7] - 1 == v5;
  v48 = v6;
  v56 = a2[7];
  v7 = a2[4];
  v8 = a3[4];
  v9 = v7 != 0;
  if ( v7 && v8 )
    v9 = a2[5] - 1 == a3[5];
  v43 = v9;
  v10 = a2[2];
  v11 = a3[2];
  v12 = a3[3];
  v13 = v10 != 0;
  v57 = a2[1];
  v51 = a3[1];
  v55 = a2[5];
  v45 = a3[5];
  if ( v10 && v11 )
    v13 = a2[3] - 1 == v12;
  v54 = a2[3];
  v14 = a2[8];
  v52 = a2[9];
  v15 = a3[8];
  v16 = a3[9];
  v17 = v14 != 0;
  v40 = v13;
  if ( v14 && v15 )
    v17 = v52 - 1 == v16;
  v18 = a2[10];
  v19 = a2[11];
  v20 = a3[10];
  v38 = a3[11];
  v21 = v18 != 0;
  v49 = v5;
  v41 = v12;
  if ( v18 && v20 )
    v21 = v19 - 1 == v38;
  v39 = v21;
  v22 = v20 != 0;
  v53 = v19;
  v23 = v18 != 0;
  v24 = v15 != 0;
  v25 = v14 != 0;
  v26 = v11 != 0;
  v27 = v10 != 0;
  v28 = v8 != 0;
  v29 = v7 != 0;
  v30 = v42 != 0;
  v31 = v46 != 0;
  if ( v17 )
    v24 = v25;
  v32 = v16;
  if ( v17 )
    v32 = v52;
  if ( v40 )
    v26 = v27;
  v33 = v41;
  if ( v40 )
    v33 = v54;
  if ( v43 )
    v28 = v29;
  v34 = v45;
  if ( v43 )
    v34 = v55;
  if ( v48 )
    v30 = v44 != 0;
  v35 = v49;
  if ( v48 )
    v35 = v56;
  if ( v50 )
    v31 = v47 != 0;
  v36 = v51;
  if ( v50 )
    v36 = v57;
  v37 = v38;
  if ( v39 )
  {
    v37 = v53;
    v22 = v23;
  }
  *result = v31;
  result[1] = v36;
  result[2] = v26;
  result[3] = v33;
  result[4] = v28;
  result[5] = v34;
  result[6] = v30;
  result[7] = v35;
  result[8] = v24;
  result[9] = v32;
  result[10] = v22;
  result[11] = v37;
  return result;
}
