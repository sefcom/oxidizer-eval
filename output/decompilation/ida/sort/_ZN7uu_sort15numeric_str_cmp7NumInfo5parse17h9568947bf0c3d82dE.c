__int64 __fastcall uu_sort::numeric_str_cmp::NumInfo::parse(__int64 *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 result; // rax
  __int64 v9; // rdx
  char v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r15
  unsigned int v13; // r13d
  unsigned int v14; // ebp
  char v15; // r12
  __int64 v16; // rcx
  int v17; // ebx
  unsigned int v18; // edx
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned __int8 v21; // cl
  bool v22; // al
  __int64 v23; // rsi
  __int64 v24; // r12
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // edx
  __int64 v29; // rdx
  unsigned __int64 v30; // r13
  __int64 v31; // rax
  unsigned __int8 v32; // [rsp+3h] [rbp-85h] BYREF
  int v33; // [rsp+4h] [rbp-84h]
  __int64 v34; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  __int64 v37; // [rsp+20h] [rbp-68h]
  __int64 *v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  _QWORD v40[3]; // [rsp+38h] [rbp-50h] BYREF
  _DWORD *v41; // [rsp+50h] [rbp-38h]

  v32 = 0;
  v40[0] = a2;
  v39 = a3;
  v40[1] = a3 + a2;
  v40[2] = 0LL;
  v6 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v40);
  if ( v7 == 1114112 )
  {
    v36 = 0LL;
    goto LABEL_3;
  }
  v12 = v6;
  v13 = v7;
  v33 = *a4;
  v41 = a4;
  v14 = a4[1];
  LOBYTE(a4) = 1;
  v34 = -1LL;
  v36 = 0LL;
  v15 = 1;
  v16 = 0LL;
  do
  {
    v35 = v16;
    if ( v16 )
    {
      v38 = a1;
      if ( v33 != 1114112 )
      {
        while ( 1 )
        {
          v17 = (int)a4;
          if ( (v15 & 1) == 0 )
            goto LABEL_17;
          v15 = 1;
          if ( v13 - 9 < 5 || v13 == 32 )
            goto LABEL_22;
          if ( v13 > 0x7F )
            break;
          v15 = 0;
          LODWORD(a4) = 0;
          if ( v13 != 45 )
            goto LABEL_17;
LABEL_23:
          v12 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v40);
          v13 = v18;
          if ( v18 == 1114112 )
            goto LABEL_67;
        }
        if ( !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v13) )
        {
LABEL_17:
          if ( v33 != v13 )
          {
            if ( (unsigned __int8)uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v13, &v32, v14) )
              goto LABEL_70;
            if ( v14 == 1114112 || v13 != v14 )
              goto LABEL_57;
          }
          v15 = 0;
        }
LABEL_22:
        LODWORD(a4) = v17;
        goto LABEL_23;
      }
      while ( 1 )
      {
        v17 = (int)a4;
        if ( (v15 & 1) == 0 )
          goto LABEL_32;
        v15 = 1;
        if ( v13 - 9 < 5 || v13 == 32 )
          goto LABEL_36;
        if ( v13 > 0x7F )
          break;
        v15 = 0;
        LODWORD(a4) = 0;
        if ( v13 != 45 )
          goto LABEL_32;
LABEL_37:
        v12 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v40);
        v13 = v19;
        if ( v19 == 1114112 )
        {
LABEL_67:
          a1 = v38;
          LOBYTE(v16) = v35;
          goto LABEL_68;
        }
      }
      if ( !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v13) )
      {
LABEL_32:
        if ( (unsigned __int8)uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v13, &v32, v14) )
        {
LABEL_70:
          v29 = v37;
          if ( *((_BYTE *)v41 + 8) )
          {
            v30 = v13 - 69;
            if ( (unsigned int)v30 <= 0x26 )
            {
              v31 = 0x400030B945LL;
              if ( _bittest64(&v31, v30) )
                ++v12;
            }
          }
          result = (__int64)v38;
          *v38 = v34;
          *(_BYTE *)(result + 8) = v17 & 1;
          a1 = (__int64 *)result;
          goto LABEL_78;
        }
        if ( v14 == 1114112 || v13 != v14 )
        {
LABEL_57:
          v22 = v13 == 48;
          LODWORD(a4) = v17;
          a1 = v38;
          goto LABEL_58;
        }
        v15 = 0;
      }
LABEL_36:
      LODWORD(a4) = v17;
      goto LABEL_37;
    }
    while ( 1 )
    {
      if ( (v15 & 1) != 0 )
      {
        v15 = 1;
        if ( v13 - 9 < 5 || v13 == 32 )
          goto LABEL_40;
        if ( v13 < 0x80 )
        {
          v15 = 0;
          if ( v13 == 45 )
          {
            LODWORD(a4) = 0;
            goto LABEL_40;
          }
        }
        else if ( (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v13) )
        {
          goto LABEL_40;
        }
      }
      if ( v33 == 1114112 || v33 != v13 )
      {
        result = uu_sort::numeric_str_cmp::NumInfo::is_invalid_char(v13, &v32, v14);
        if ( (_BYTE)result )
        {
          v29 = 0LL;
          if ( (v36 & 1) != 0 )
            v29 = v12;
          *a1 = 0LL;
          *((_BYTE *)a1 + 8) = 1;
          v12 = v29;
LABEL_78:
          a1[2] = v29;
          a1[3] = v12;
          return result;
        }
        if ( v14 == 1114112 || v13 != v14 )
          break;
      }
LABEL_39:
      v15 = 0;
LABEL_40:
      v12 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v40);
      v13 = v20;
      if ( v20 == 1114112 )
        goto LABEL_3;
    }
    if ( v13 == 48 )
    {
      v21 = v32;
      if ( v32 == 1 )
      {
        v23 = v34 - 1;
        v22 = 1;
        v24 = v35;
        goto LABEL_59;
      }
      LOBYTE(result) = 1;
      v36 = result;
      goto LABEL_39;
    }
    v22 = 0;
LABEL_58:
    v23 = v34;
    v24 = v35;
    v21 = v32;
LABEL_59:
    v34 = (v21 ^ 1u) + v23;
    v25 = !v22 && v24 == 0;
    v26 = v37;
    if ( v25 )
      v26 = v12;
    v37 = v26;
    if ( v25 )
      v24 = 1LL;
    v27 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v40);
    v12 = v27;
    v13 = v28;
    LOBYTE(v27) = 1;
    v36 = v27;
    v16 = v24;
    v15 = 0;
  }
  while ( v28 != 1114112 );
LABEL_68:
  if ( (v16 & 1) != 0 )
  {
    v10 = (unsigned __int8)a4 & 1;
    result = v34;
    v11 = v37;
    v9 = v39;
    goto LABEL_6;
  }
LABEL_3:
  result = 0LL;
  v9 = v39;
  if ( (v36 & 1) == 0 )
    v9 = 0LL;
  v10 = 1;
  v11 = v9;
LABEL_6:
  *a1 = result;
  *((_BYTE *)a1 + 8) = v10;
  a1[2] = v11;
  a1[3] = v9;
  return result;
}