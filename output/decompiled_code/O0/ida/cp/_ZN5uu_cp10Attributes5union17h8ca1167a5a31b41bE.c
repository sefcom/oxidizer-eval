char *__fastcall uu_cp::Attributes::union(char *a1, _BYTE *a2, char *a3)
{
  char *result; // rax
  char v4; // di
  char v5; // cl
  char v6; // di
  char v7; // r9
  char v8; // r8
  char v9; // r9
  char v10; // r11
  char v11; // r10
  char v12; // r11
  char v13; // bp
  char v14; // bl
  char v15; // bp
  char v16; // r15
  char v17; // r14
  char v18; // r15
  char v19; // r12
  char v20; // dl
  char v21; // r12
  char v22; // si

  result = a1;
  v4 = *a3;
  v5 = a3[1];
  if ( (*a2 & 1) != 0 )
  {
    if ( (v4 & 1) == 0 || (v6 = 1, (a2[1] & 1) - (v5 & 1) == 1) )
    {
      v6 = 1;
      v5 = a2[1];
    }
  }
  else
  {
    v6 = v4 & 1;
  }
  v7 = a3[6];
  v8 = a3[7];
  if ( (a2[6] & 1) != 0 )
  {
    if ( (v7 & 1) == 0 || (v9 = 1, (a2[7] & 1) - (v8 & 1) == 1) )
    {
      v9 = 1;
      v8 = a2[7];
    }
  }
  else
  {
    v9 = v7 & 1;
  }
  v10 = a3[4];
  v11 = a3[5];
  if ( (a2[4] & 1) != 0 )
  {
    if ( (v10 & 1) == 0 || (v12 = 1, (a2[5] & 1) - (v11 & 1) == 1) )
    {
      v12 = 1;
      v11 = a2[5];
    }
  }
  else
  {
    v12 = v10 & 1;
  }
  v13 = a3[2];
  v14 = a3[3];
  if ( (a2[2] & 1) != 0 )
  {
    if ( (v13 & 1) == 0 || (v15 = 1, (a2[3] & 1) - (v14 & 1) == 1) )
    {
      v15 = 1;
      v14 = a2[3];
    }
  }
  else
  {
    v15 = v13 & 1;
  }
  v16 = a3[8];
  v17 = a3[9];
  if ( (a2[8] & 1) != 0 )
  {
    if ( (v16 & 1) == 0 || (v18 = 1, (a2[9] & 1) - (v17 & 1) == 1) )
    {
      v18 = 1;
      v17 = a2[9];
    }
  }
  else
  {
    v18 = v16 & 1;
  }
  v19 = a3[10];
  v20 = a3[11];
  if ( (a2[10] & 1) != 0 )
  {
    v22 = a2[11];
    if ( (v19 & 1) == 0 || (v21 = 1, (v22 & 1) - (v20 & 1) == 1) )
    {
      v21 = 1;
      v20 = v22;
    }
  }
  else
  {
    v21 = v19 & 1;
  }
  *result = v6;
  result[1] = v5;
  result[2] = v15;
  result[3] = v14;
  result[4] = v12;
  result[5] = v11;
  result[6] = v9;
  result[7] = v8;
  result[8] = v18;
  result[9] = v17;
  result[10] = v21;
  result[11] = v20;
  return result;
}
