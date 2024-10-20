void __fastcall uu_wc::process_chunk(_QWORD *a1, unsigned __int8 *a2, __int64 a3, char *a4)
{
  unsigned __int8 *v4; // rax
  char v5; // r10
  __int64 v6; // r8
  unsigned int v7; // r11d
  int v8; // ebx
  int v9; // r14d
  int v10; // ebp
  unsigned __int8 v11; // r11
  unsigned int v12; // ebx
  bool v13; // zf
  char v14; // r11

  if ( a3 )
  {
    v4 = &a2[a3];
    v5 = *a4;
    v6 = a1[3];
    do
    {
      v7 = *a2;
      if ( (v7 & 0x80u) != 0 )
      {
        v8 = v7 & 0x1F;
        v9 = a2[1] & 0x3F;
        if ( (unsigned __int8)v7 <= 0xDFu )
        {
          a2 += 2;
          v7 = v9 | (v8 << 6);
        }
        else
        {
          v10 = (v9 << 6) | a2[2] & 0x3F;
          if ( (unsigned __int8)v7 < 0xF0u )
          {
            a2 += 3;
            v7 = (v8 << 12) | v10;
          }
          else
          {
            v11 = a2[3];
            a2 += 4;
            v7 = ((v8 & 7) << 18) | (v10 << 6) | v11 & 0x3F;
          }
        }
      }
      else
      {
        ++a2;
      }
      if ( v7 - 9 < 5 || v7 == 32 )
        goto LABEL_3;
      if ( v7 < 0x80 )
        goto LABEL_27;
      v12 = v7 >> 8;
      if ( v7 >> 8 > 0x1F )
      {
        if ( v12 != 32 )
        {
          if ( v12 != 48 )
            goto LABEL_27;
          v13 = v7 == 12288;
LABEL_22:
          if ( !v13 )
            goto LABEL_27;
          goto LABEL_3;
        }
        v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v7] >> 1;
      }
      else
      {
        if ( v12 )
        {
          if ( v12 != 22 )
            goto LABEL_27;
          v13 = v7 == 5760;
          goto LABEL_22;
        }
        v14 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v7];
      }
      if ( (v14 & 1) == 0 )
      {
LABEL_27:
        if ( !v5 )
        {
          *a4 = 1;
          a1[3] = ++v6;
          v5 = 1;
        }
        continue;
      }
LABEL_3:
      *a4 = 0;
      v5 = 0;
    }
    while ( a2 != v4 );
  }
  *a1 += a3;
}
