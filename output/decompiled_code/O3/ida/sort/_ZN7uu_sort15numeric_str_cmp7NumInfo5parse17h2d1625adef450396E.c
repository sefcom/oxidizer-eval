__int64 __fastcall uu_sort::numeric_str_cmp::NumInfo::parse(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rdx
  __int64 v13; // r15
  unsigned int v14; // r12d
  int v15; // r14d
  unsigned int v16; // ebp
  char v17; // bl
  __int64 v18; // r13
  unsigned int v19; // edx
  unsigned int v20; // edx
  __int64 is_invalid_char; // rax
  bool v22; // al
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  char v26; // cl
  unsigned int v27; // edx
  unsigned __int64 v29; // r12
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // cl
  char v34; // [rsp+3h] [rbp-85h] BYREF
  int v35; // [rsp+4h] [rbp-84h]
  __int64 v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+10h] [rbp-78h]
  __int64 v38; // [rsp+18h] [rbp-70h]
  __int64 v39; // [rsp+20h] [rbp-68h]
  __int64 v40; // [rsp+28h] [rbp-60h]
  __int64 v41; // [rsp+30h] [rbp-58h]
  _QWORD v42[3]; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v43; // [rsp+50h] [rbp-38h]

  v5 = a3;
  v6 = a1;
  v34 = 0;
  v42[0] = a2;
  v42[1] = a3 + a2;
  v42[2] = 0LL;
  v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v42);
  if ( v8 == 1114112 )
  {
    LOBYTE(v9) = 0;
LABEL_3:
    v10 = 0LL;
    if ( (v9 & 1) == 0 )
      v5 = 0LL;
    v11 = 1;
    v12 = v5;
    goto LABEL_59;
  }
  v13 = v7;
  v14 = v8;
  v41 = v5;
  v39 = a1;
  v15 = *a4;
  v43 = a4;
  v16 = a4[1];
  LOBYTE(v7) = 1;
  v35 = v7;
  v36 = -1LL;
  v9 = 0LL;
  v17 = 1;
  v18 = 0LL;
LABEL_7:
  v38 = v18;
  if ( v18 != 1 )
  {
    v40 = v9;
    while ( 1 )
    {
      if ( (v17 & 1) != 0 )
      {
        if ( v14 - 9 < 5 || v14 == 32 )
          goto LABEL_27;
        if ( v14 < 0x80 )
        {
          if ( v14 == 45 )
          {
            v17 = 0;
            v35 = 0;
            goto LABEL_27;
          }
        }
        else if ( (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v14) )
        {
          goto LABEL_27;
        }
      }
      if ( v15 == 1114112 || v15 != v14 )
      {
        is_invalid_char = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v14, &v34, v16);
        if ( (_BYTE)is_invalid_char )
        {
          if ( v38 )
          {
LABEL_62:
            v6 = v39;
            if ( *((_BYTE *)v43 + 8) )
            {
              v29 = v14 - 69;
              if ( (unsigned int)v29 <= 0x26 )
              {
                v30 = 0x4000308945LL;
                if ( _bittest64(&v30, v29) )
                  ++v13;
              }
            }
            v31 = v36;
            v32 = v37;
            v33 = v35 & 1;
          }
          else
          {
            v31 = 0LL;
            if ( (v40 & 1) == 0 )
              v13 = 0LL;
            v33 = 1;
            v32 = v13;
            v6 = v39;
          }
          *(_QWORD *)v6 = v31;
          *(_BYTE *)(v6 + 8) = v33;
          *(_QWORD *)(v6 + 16) = v32;
          *(_QWORD *)(v6 + 24) = v13;
          return v6;
        }
        if ( v16 == 1114112 || v14 != v16 )
        {
          if ( v14 != 48 )
          {
            v22 = 0;
LABEL_46:
            v23 = v36;
            v24 = v37;
            v25 = v38;
            v26 = v34;
LABEL_48:
            v36 = ((unsigned __int8)v26 ^ 1u) + v23;
            if ( v22 )
              v13 = v24;
            if ( v25 != 1 )
              v24 = v13;
            v37 = v24;
            v18 = !v22 | (unsigned __int8)(v25 == 1);
            v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v42);
            v14 = v27;
            LOBYTE(v9) = 1;
            v17 = 0;
            if ( v27 == 1114112 )
            {
LABEL_55:
              v6 = v39;
              v5 = v41;
              if ( v18 )
                goto LABEL_58;
              goto LABEL_3;
            }
            goto LABEL_7;
          }
          if ( v34 )
          {
            v23 = v36 - 1;
            v26 = 1;
            v22 = 1;
            v24 = v37;
            v25 = v38;
            goto LABEL_48;
          }
          LOBYTE(is_invalid_char) = 1;
          v40 = is_invalid_char;
        }
      }
      v17 = 0;
LABEL_27:
      v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v42);
      v14 = v20;
      if ( v20 == 1114112 )
      {
        v18 = v38;
        LOBYTE(v9) = v40;
        goto LABEL_55;
      }
    }
  }
  do
  {
    if ( (v17 & 1) != 0 )
    {
      if ( v14 - 9 < 5 || v14 == 32 )
        goto LABEL_10;
      if ( v14 <= 0x7F )
      {
        if ( v14 == 45 )
        {
          v17 = 0;
          v35 = 0;
          goto LABEL_10;
        }
      }
      else if ( (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v14) )
      {
        goto LABEL_10;
      }
    }
    if ( v15 == 1114112 || v15 != v14 )
    {
      if ( (unsigned __int8)uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v14, &v34, v16) )
        goto LABEL_62;
      if ( v16 == 1114112 || v14 != v16 )
      {
        v22 = v14 == 48;
        goto LABEL_46;
      }
    }
    v17 = 0;
LABEL_10:
    v13 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v42);
    v14 = v19;
  }
  while ( v19 != 1114112 );
  v6 = v39;
  v5 = v41;
LABEL_58:
  v11 = v35 & 1;
  v10 = v36;
  v12 = v37;
LABEL_59:
  *(_QWORD *)v6 = v10;
  *(_BYTE *)(v6 + 8) = v11;
  *(_QWORD *)(v6 + 16) = v12;
  *(_QWORD *)(v6 + 24) = v5;
  return v6;
}
