void __fastcall uu_wc::process_chunk(_QWORD *a1, unsigned __int8 *a2, __int64 a3, char *a4)
{
  unsigned __int8 *v4; // rax
  char v5; // r11
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // ebp
  int v10; // r15d
  int v11; // r14d
  unsigned __int8 v12; // bl
  unsigned int v13; // ebp
  bool v14; // zf
  char v15; // bp

  if ( a3 )
  {
    v4 = &a2[a3];
    v5 = *a4;
    v6 = a1[2];
    v7 = a1[3];
    do
    {
      v8 = *a2;
      if ( (v8 & 0x80u) != 0 )
      {
        v9 = v8 & 0x1F;
        v10 = a2[1] & 0x3F;
        if ( (unsigned __int8)v8 <= 0xDFu )
        {
          a2 += 2;
          v8 = v10 | (v9 << 6);
        }
        else
        {
          v11 = (v10 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v8 < 0xF0u )
          {
            a2 += 3;
            v8 = (v9 << 12) | v11;
          }
          else
          {
            v12 = a2[3];
            a2 += 4;
            v8 = ((v9 & 7) << 18) | (v11 << 6) | v12 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v8 - 9 < 5 || v8 == 32 )
        goto LABEL_12;
      if ( v8 < 0x80 )
        goto LABEL_29;
      v13 = v8 >> 8;
      if ( v8 >> 8 > 0x1F )
      {
        if ( v13 != 32 )
        {
          if ( v13 != 48 )
            goto LABEL_29;
          v14 = v8 == 12288;
LABEL_24:
          if ( !v14 )
            goto LABEL_29;
          goto LABEL_12;
        }
        v15 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8] >> 1;
      }
      else
      {
        if ( v13 )
        {
          if ( v13 != 22 )
            goto LABEL_29;
          v14 = v8 == 5760;
          goto LABEL_24;
        }
        v15 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v8];
      }
      if ( (v15 & 1) == 0 )
      {
LABEL_29:
        if ( !v5 )
        {
          *a4 = 1;
          a1[3] = ++v7;
          v5 = 1;
        }
        goto LABEL_13;
      }
LABEL_12:
      *a4 = 0;
      v5 = 0;
LABEL_13:
      if ( v8 == 10 )
        a1[2] = ++v6;
    }
    while ( a2 != v4 );
  }
  *a1 += a3;
}
