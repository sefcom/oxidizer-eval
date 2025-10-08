__int64 __fastcall sniffnet::gui::pages::overview_page::get_bars_length(char a1, __int128 *a2, __int128 *a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  unsigned __int128 v12; // kr00_16
  double v13; // xmm0_8
  double v14; // xmm0_8
  double v15; // xmm0_8
  double v16; // xmm0_8
  float v17; // xmm3_4
  double v18; // xmm0_8
  unsigned int v19; // ebx
  __int64 v20; // rcx
  float v22; // [rsp+Ch] [rbp-3Ch]
  float v23; // [rsp+Ch] [rbp-3Ch]
  float v24; // [rsp+Ch] [rbp-3Ch]
  float v25; // [rsp+10h] [rbp-38h]
  float v26; // [rsp+14h] [rbp-34h]

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v3 = *((_QWORD *)a3 + 4);
      v4 = *((_QWORD *)a3 + 5);
      v5 = *((_QWORD *)a3 + 7);
      v6 = *((_QWORD *)a3 + 6);
      v7 = *((_QWORD *)a2 + 4);
      v8 = *((_QWORD *)a2 + 5);
      v9 = *((_QWORD *)a2 + 7);
      v10 = *((_QWORD *)a2 + 6);
    }
    else
    {
      v4 = a3[2] >> 61;
      v5 = a3[3] >> 61;
      v3 = 8LL * *((_QWORD *)a3 + 4);
      v6 = 8LL * *((_QWORD *)a3 + 6);
      v8 = a2[2] >> 61;
      v7 = 8LL * *((_QWORD *)a2 + 4);
      v9 = a2[3] >> 61;
      v10 = 8LL * *((_QWORD *)a2 + 6);
    }
  }
  else
  {
    v3 = *(_QWORD *)a3;
    v4 = *((_QWORD *)a3 + 1);
    v5 = *((_QWORD *)a3 + 3);
    v6 = *((_QWORD *)a3 + 2);
    v7 = *(_QWORD *)a2;
    v8 = *((_QWORD *)a2 + 1);
    v9 = *((_QWORD *)a2 + 3);
    v10 = *((_QWORD *)a2 + 2);
  }
  v11 = v5 + __CFADD__(v6, v3) + v4;
  if ( __PAIR128__(v11, v6 + v3) != 0 )
  {
    v12 = __PAIR128__(v8, v10) + __PAIR128__(v9, v7);
    v13 = _floatuntisf(v6 + v3, v11);
    v26 = *(float *)&v13;
    v22 = 100.0 * *(float *)&v13;
    v14 = _floatuntisf(v12, *((_QWORD *)&v12 + 1));
    v23 = v22 / *(float *)&v14;
    v15 = _floatuntisf(v3, v4);
    v25 = (float)(*(float *)&v15 * v23) / v26;
    v16 = _floatuntisf(v6, v5);
    v17 = (float)(*(float *)&v16 * v23) / v26;
    if ( v23 <= 4.0 )
    {
      v20 = 0LL;
      *(_QWORD *)&v18 = LODWORD(v25);
      if ( v4 | v3 )
      {
        LOBYTE(v20) = (v5 | v6) == 0;
        *(_QWORD *)&v18 = *((unsigned int *)&unk_275108 + v20);
      }
      if ( v5 | v6 )
      {
        v24 = *((float *)&unk_275108 + ((v4 | v3) == 0));
        goto LABEL_19;
      }
    }
    else
    {
      *(_QWORD *)&v18 = LODWORD(v25);
      if ( v25 < 2.0 && (v4 | v3) != 0 )
      {
        *(float *)&v18 = v25 + (float)(2.0 - v25);
        v17 = v17 - (float)(2.0 - v25);
      }
      if ( v5 | v6 && v17 < 2.0 )
      {
        v24 = v17 + (float)(2.0 - v17);
        *(float *)&v18 = *(float *)&v18 - (float)(2.0 - v17);
LABEL_19:
        v19 = (int)fminf(65535.0, fmaxf(0.0, roundf(v18)));
        fmaxf(0.0, roundf(COERCE_DOUBLE((unsigned __int64)LODWORD(v24))));
        return v19;
      }
    }
    v24 = v17;
    goto LABEL_19;
  }
  return 0;
}