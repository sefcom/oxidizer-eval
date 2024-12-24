__int64 __fastcall uu_sort::numeric_str_cmp::NumInfo::parse(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 v7; // rax
  unsigned int v8; // edx
  char v9; // cl
  _DWORD *v11; // r12
  unsigned int v12; // r13d
  int v13; // ecx
  char v14; // bl
  unsigned int v15; // edx
  __int64 v16; // r14
  __int64 v17; // r15
  char v18; // bp
  unsigned int v19; // edx
  char v20; // bp
  char v21; // cl
  __int64 v22; // rax
  unsigned int v23; // edx
  char v24; // cl
  unsigned int v25; // edx
  __int64 v26; // r15
  char v27; // bp
  __int64 v28; // rax
  char v29; // bp
  unsigned int v30; // edx
  char v31; // bp
  char v32; // cl
  unsigned int v33; // edx
  char v34; // cl
  unsigned int v35; // edx
  __int64 v36; // r15
  unsigned int v37; // edx
  unsigned int v38; // edx
  unsigned int v39; // edx
  __int64 v40; // r15
  bool v41; // zf
  unsigned int v42; // edx
  unsigned int v43; // edx
  unsigned __int64 v44; // r13
  __int64 v45; // rcx
  char v46; // cl
  char v47; // [rsp+8h] [rbp-80h]
  char v48; // [rsp+10h] [rbp-78h]
  unsigned int v49; // [rsp+14h] [rbp-74h]
  int v50; // [rsp+18h] [rbp-70h]
  char v51; // [rsp+18h] [rbp-70h]
  _QWORD v52[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v53; // [rsp+38h] [rbp-50h]
  __int64 v54; // [rsp+40h] [rbp-48h]
  __int64 v55; // [rsp+48h] [rbp-40h]
  _DWORD *v56; // [rsp+50h] [rbp-38h]

  v5 = a3;
  v6 = a1;
  v52[0] = a2;
  v52[1] = a3 + a2;
  v52[2] = 0LL;
  v7 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
  if ( v8 == (_DWORD)&loc_110000 )
  {
    v9 = 0;
    goto LABEL_3;
  }
  v11 = (_DWORD *)v7;
  v12 = v8;
  v13 = *a4;
  v49 = a4[1];
  v50 = *a4;
  v56 = a4;
  v54 = v5;
  if ( v49 != (_DWORD)&loc_110000 )
  {
    v55 = a1;
    if ( v13 == (_DWORD)&loc_110000 )
    {
      v48 = 1;
      v16 = -1LL;
      v51 = 0;
      v47 = 0;
      v17 = 0LL;
      v18 = 1;
      while ( 1 )
      {
        if ( (v18 & 1) == 0 )
          goto LABEL_28;
        if ( v12 - 9 >= 5 && v12 != 32 )
          break;
LABEL_26:
        v11 = (_DWORD *)<core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
        v12 = v19;
        if ( v19 == (_DWORD)&loc_110000 )
          goto LABEL_145;
      }
      if ( v12 <= 0x7F )
      {
        if ( v12 == 45 )
        {
          v18 = 0;
          v48 = 0;
          goto LABEL_26;
        }
      }
      else if ( (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v12) )
      {
        goto LABEL_26;
      }
LABEL_28:
      if ( v12 == v49 )
      {
        if ( (v51 & 1) == 0 )
        {
          v51 = 1;
          v18 = 0;
          goto LABEL_26;
        }
LABEL_156:
        v22 = (__int64)v11;
        goto LABEL_157;
      }
      if ( v12 - 58 < 0xFFFFFFF6 )
      {
LABEL_151:
        v22 = (__int64)v11;
        goto LABEL_158;
      }
      v20 = v51 & 1;
      if ( v12 != 48 || v17 == 1 )
      {
        v21 = v51 & 1;
      }
      else
      {
        if ( !v20 )
        {
          v47 = 1;
          v18 = 0;
          goto LABEL_26;
        }
        --v16;
        v21 = 1;
      }
      v16 += (unsigned __int8)v21 ^ 1u;
      if ( v17 == 1 )
        v11 = a4;
      if ( v12 == 48 )
        v11 = a4;
      v17 = (v17 == 1) | (unsigned __int8)(v12 != 48);
      v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
      if ( v23 != (_DWORD)&loc_110000 )
      {
        v12 = v23;
        while ( 1 )
        {
          a4 = v11;
          if ( v12 == v49 )
            break;
          if ( v12 - 58 < 0xFFFFFFF6 )
            goto LABEL_110;
          v26 = v17 - 1;
          if ( v12 == 48 && v26 )
          {
            if ( !v20 )
            {
              v47 = 1;
              v17 = 0LL;
              v18 = 0;
              goto LABEL_26;
            }
            --v16;
            v24 = 1;
          }
          else
          {
            v24 = v51 & 1;
          }
          v16 += (unsigned __int8)v24 ^ 1u;
          if ( !v26 )
            v22 = (__int64)v11;
          v11 = (_DWORD *)v22;
          if ( v12 == 48 )
            v11 = a4;
          v17 = (v26 == 0) | (unsigned __int8)(v12 != 48);
          v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
          v12 = v25;
          if ( v25 == (_DWORD)&loc_110000 )
            goto LABEL_144;
        }
        v47 = 1;
        if ( !v20 )
        {
          v18 = 0;
          v51 = 1;
          goto LABEL_26;
        }
        goto LABEL_157;
      }
LABEL_144:
      v47 = 1;
      a4 = v11;
LABEL_145:
      v11 = a4;
      v41 = v17 == 0;
      v6 = v55;
      v5 = v54;
      v9 = v47;
      if ( !v41 )
        goto LABEL_146;
LABEL_3:
      if ( (v9 & 1) == 0 )
        v5 = 0LL;
      *(_QWORD *)v6 = 0LL;
      *(_BYTE *)(v6 + 8) = 1;
      *(_QWORD *)(v6 + 16) = v5;
      goto LABEL_6;
    }
    v48 = 1;
    v16 = -1LL;
    v53 = 0LL;
    v28 = 0LL;
    v47 = 0;
    v17 = 0LL;
    v29 = 1;
LABEL_70:
    if ( (v29 & 1) != 0 )
    {
      v28 = v12 - 9;
      if ( (unsigned int)v28 < 5 || v12 == 32 )
        goto LABEL_69;
      if ( v12 <= 0x7F )
      {
        if ( v12 == 45 )
        {
          v29 = 0;
          v48 = 0;
          goto LABEL_69;
        }
      }
      else
      {
        v28 = core::unicode::unicode_data::white_space::lookup(v12);
        if ( (_BYTE)v28 )
          goto LABEL_69;
      }
    }
    if ( v50 == v12 )
      goto LABEL_68;
    if ( v12 == v49 )
    {
      if ( (v53 & 1) == 0 )
      {
        LOBYTE(v28) = 1;
        v53 = v28;
        goto LABEL_68;
      }
      goto LABEL_156;
    }
    if ( v12 - 58 < 0xFFFFFFF6 )
      goto LABEL_151;
    v31 = v53 & 1;
    if ( v12 != 48 || v17 == 1 )
    {
      v32 = v53 & 1;
    }
    else
    {
      if ( !v31 )
      {
LABEL_67:
        v47 = 1;
        goto LABEL_68;
      }
      --v16;
      v32 = 1;
    }
    v16 += (unsigned __int8)v32 ^ 1u;
    if ( v17 == 1 )
      v11 = a4;
    if ( v12 == 48 )
      v11 = a4;
    v17 = (v17 == 1) | (unsigned __int8)(v12 != 48);
    v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
    if ( v33 == (_DWORD)&loc_110000 )
      goto LABEL_144;
    v12 = v33;
    while ( 1 )
    {
      a4 = v11;
      if ( v50 == v12 )
        goto LABEL_67;
      if ( v12 == v49 )
      {
        v47 = 1;
        if ( !v31 )
        {
          v29 = 0;
          LOBYTE(v22) = 1;
          v53 = v22;
          goto LABEL_69;
        }
LABEL_157:
        v12 = v49;
LABEL_158:
        v11 = (_DWORD *)v22;
        v41 = v17 == 1;
        v6 = v55;
        if ( v41 )
        {
LABEL_159:
          if ( *((_BYTE *)v56 + 8) )
          {
            v44 = v12 - 69;
            if ( (unsigned int)v44 <= 0x26 )
            {
              v45 = 0x4000308945LL;
              if ( _bittest64(&v45, v44) )
                ++v22;
            }
          }
          v46 = v48 & 1;
        }
        else
        {
LABEL_164:
          v16 = 0LL;
          if ( (v47 & 1) == 0 )
            v11 = 0LL;
          v46 = 1;
          a4 = v11;
          v22 = (__int64)v11;
        }
        *(_QWORD *)v6 = v16;
        *(_BYTE *)(v6 + 8) = v46;
        *(_QWORD *)(v6 + 16) = a4;
        *(_QWORD *)(v6 + 24) = v22;
        return v6;
      }
      if ( v12 - 58 < 0xFFFFFFF6 )
      {
LABEL_110:
        v47 = 1;
        goto LABEL_158;
      }
      v36 = v17 - 1;
      if ( v12 == 48 && v36 )
      {
        if ( !v31 )
        {
          v47 = 1;
          v17 = 0LL;
LABEL_68:
          v29 = 0;
LABEL_69:
          v28 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
          v11 = (_DWORD *)v28;
          v12 = v30;
          if ( v30 == (_DWORD)&loc_110000 )
            goto LABEL_145;
          goto LABEL_70;
        }
        --v16;
        v34 = 1;
      }
      else
      {
        v34 = v31;
      }
      v16 += (unsigned __int8)v34 ^ 1u;
      if ( !v36 )
        v22 = (__int64)v11;
      v11 = (_DWORD *)v22;
      if ( v12 == 48 )
        v11 = a4;
      v17 = (v36 == 0) | (unsigned __int8)(v12 != 48);
      v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
      v12 = v35;
      if ( v35 == (_DWORD)&loc_110000 )
        goto LABEL_144;
    }
  }
  if ( v13 != (_DWORD)&loc_110000 )
  {
    v55 = a1;
    v48 = 1;
    v16 = -1LL;
    v47 = 0;
    v17 = 0LL;
    v27 = 1;
    while ( 1 )
    {
      if ( (v27 & 1) != 0 )
      {
        if ( v12 - 9 < 5 || v12 == 32 )
          goto LABEL_113;
        if ( v12 <= 0x7F )
        {
          if ( v12 == 45 )
          {
            v27 = 0;
            v48 = 0;
            goto LABEL_113;
          }
        }
        else if ( (unsigned __int8)core::unicode::unicode_data::white_space::lookup(v12) )
        {
          goto LABEL_113;
        }
      }
      if ( v50 == v12 )
        goto LABEL_112;
      if ( v12 - 58 < 0xFFFFFFF6 )
        goto LABEL_151;
      if ( v12 == 48 && v17 != 1 )
      {
        v27 = 0;
        v47 = 1;
        goto LABEL_113;
      }
      ++v16;
      if ( v17 == 1 )
        v11 = a4;
      if ( v12 == 48 )
        v11 = a4;
      v17 = (v17 == 1) | (unsigned __int8)(v12 != 48);
      v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
      if ( v38 == (_DWORD)&loc_110000 )
        goto LABEL_144;
      v12 = v38;
      while ( 1 )
      {
        if ( v50 == v12 )
        {
          v47 = 1;
          v27 = 0;
          a4 = v11;
          goto LABEL_113;
        }
        if ( v12 - 58 < 0xFFFFFFF6 )
        {
          v47 = 1;
          a4 = v11;
          goto LABEL_158;
        }
        v40 = v17 - 1;
        if ( v12 == 48 )
        {
          if ( v40 )
            break;
        }
        ++v16;
        if ( !v40 )
          v22 = (__int64)v11;
        if ( v12 != 48 )
          v11 = (_DWORD *)v22;
        v17 = (v40 == 0) | (unsigned __int8)(v12 != 48);
        v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
        v12 = v39;
        if ( v39 == (_DWORD)&loc_110000 )
          goto LABEL_144;
      }
      v17 = 0LL;
      v47 = 1;
      a4 = v11;
LABEL_112:
      v27 = 0;
LABEL_113:
      v11 = (_DWORD *)<core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
      v12 = v37;
      if ( v37 == (_DWORD)&loc_110000 )
        goto LABEL_145;
    }
  }
  v48 = 1;
  v47 = 0;
  v14 = 1;
  while ( 1 )
  {
    if ( (v14 & 1) != 0 )
    {
      if ( v12 - 9 < 5 || v12 == 32 )
        goto LABEL_12;
      if ( v12 > 0x7F )
      {
        if ( !(unsigned __int8)core::unicode::unicode_data::white_space::lookup(v12) )
          goto LABEL_164;
        goto LABEL_12;
      }
      if ( v12 == 45 )
      {
        v14 = 0;
        v48 = 0;
        goto LABEL_12;
      }
    }
    if ( v12 - 58 < 0xFFFFFFF6 )
      goto LABEL_164;
    if ( v12 != 48 )
      break;
    v47 = 1;
    v14 = 0;
LABEL_12:
    v11 = (_DWORD *)<core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
    v12 = v15;
    if ( v15 == (_DWORD)&loc_110000 )
    {
      v5 = v54;
      v9 = v47;
      goto LABEL_3;
    }
  }
  v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
  if ( v42 == (_DWORD)&loc_110000 )
  {
    v16 = 0LL;
    goto LABEL_150;
  }
  v12 = v42;
  v16 = 0LL;
  if ( v42 - 58 < 0xFFFFFFF6 )
  {
LABEL_155:
    a4 = v11;
    goto LABEL_159;
  }
  while ( 1 )
  {
    ++v16;
    v22 = <core::str::iter::CharIndices as core::iter::traits::iterator::Iterator>::next(v52);
    if ( v43 == (_DWORD)&loc_110000 )
      break;
    v12 = v43;
    if ( v43 - 58 < 0xFFFFFFF6 )
      goto LABEL_155;
  }
LABEL_150:
  v5 = v54;
LABEL_146:
  *(_QWORD *)v6 = v16;
  *(_BYTE *)(v6 + 8) = v48 & 1;
  *(_QWORD *)(v6 + 16) = v11;
LABEL_6:
  *(_QWORD *)(v6 + 24) = v5;
  return v6;
}
