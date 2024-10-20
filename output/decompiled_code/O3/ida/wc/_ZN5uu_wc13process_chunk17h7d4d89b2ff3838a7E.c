void __fastcall uu_wc::process_chunk(_QWORD *a1, unsigned __int8 *a2, __int64 a3, char *a4)
{
  unsigned __int8 *v4; // rax
  char v5; // bl
  __int64 v6; // r8
  __int64 v7; // r10
  __int64 v8; // r9
  unsigned int v9; // r14d
  int v10; // ebp
  int v11; // r12d
  int v12; // r15d
  unsigned __int8 v13; // r14
  unsigned int v14; // ebp
  bool v15; // zf
  char v16; // bp

  if ( a3 )
  {
    v4 = &a2[a3];
    v5 = *a4;
    v6 = a1[3];
    v7 = a1[2];
    v8 = a1[1] + 1LL;
    do
    {
      v9 = *a2;
      if ( (v9 & 0x80u) != 0 )
      {
        v10 = v9 & 0x1F;
        v11 = a2[1] & 0x3F;
        if ( (unsigned __int8)v9 <= 0xDFu )
        {
          a2 += 2;
          v9 = v11 | (v10 << 6);
        }
        else
        {
          v12 = (v11 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v9 < 0xF0u )
          {
            a2 += 3;
            v9 = (v10 << 12) | v12;
          }
          else
          {
            v13 = a2[3];
            a2 += 4;
            v9 = ((v10 & 7) << 18) | (v12 << 6) | v13 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v9 - 9 < 5 || v9 == 32 )
        goto LABEL_12;
      if ( v9 < 0x80 )
        goto LABEL_29;
      v14 = v9 >> 8;
      if ( v9 >> 8 > 0x1F )
      {
        if ( v14 != 32 )
        {
          if ( v14 != 48 )
            goto LABEL_29;
          v15 = v9 == 12288;
LABEL_24:
          if ( !v15 )
            goto LABEL_29;
          goto LABEL_12;
        }
        v16 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v9] >> 1;
      }
      else
      {
        if ( v14 )
        {
          if ( v14 != 22 )
            goto LABEL_29;
          v15 = v9 == 5760;
          goto LABEL_24;
        }
        v16 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v9];
      }
      if ( (v16 & 1) == 0 )
      {
LABEL_29:
        if ( !v5 )
        {
          *a4 = 1;
          a1[3] = ++v6;
          v5 = 1;
        }
        goto LABEL_13;
      }
LABEL_12:
      *a4 = 0;
      v5 = 0;
LABEL_13:
      if ( v9 == 10 )
        a1[2] = ++v7;
      a1[1] = v8++;
    }
    while ( a2 != v4 );
  }
  *a1 += a3;
}
