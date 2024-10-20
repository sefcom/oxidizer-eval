__int64 __fastcall uu_sort::numeric_str_cmp::NumInfo::parse(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // r15
  int v7; // eax
  int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  _BYTE *v13; // rsi
  unsigned int v14; // ecx
  char v15; // cl
  char v16; // cl
  int v17; // ecx
  __int64 v18; // rcx
  bool v19; // of
  __int64 v20; // rsi
  bool v21; // zf
  __int64 v22; // rcx
  __int64 v23; // rsi
  char v24; // cl
  __int64 v25; // rdx
  bool v26; // zf
  unsigned __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned int v30; // [rsp+4h] [rbp-84h]
  __int64 v31; // [rsp+8h] [rbp-80h]
  int v32; // [rsp+10h] [rbp-78h]
  __int64 v33; // [rsp+18h] [rbp-70h]
  __int64 v34; // [rsp+20h] [rbp-68h]
  char v35; // [rsp+28h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-40h]
  __int64 v40; // [rsp+50h] [rbp-38h]

  v5 = a2;
  v6 = a2 + a3;
  v38 = a2;
  v39 = a2 + a3;
  v40 = 0LL;
  v33 = -1LL;
  LOBYTE(v4) = 1;
  v34 = 0LL;
  v35 = 0;
  v7 = 0;
  while ( 2 )
  {
    v30 = v4;
LABEL_3:
    v8 = v7;
LABEL_4:
    v32 = v8;
LABEL_5:
    if ( v6 < v5 )
LABEL_62:
      core::panicking::panic_nounwind(anon_ff3add0fc2121d489142e144a6a370f6_24_llvm_5182399808099546885, 71LL);
    while ( 1 )
    {
      do
      {
        if ( !(unsigned int)core::str::validations::next_code_point(&v38) )
        {
LABEL_46:
          if ( v34 == 1 )
          {
            v12 = a3;
            goto LABEL_48;
          }
          v23 = 0LL;
          v26 = v35 == 0;
          v12 = a3;
          goto LABEL_51;
        }
        if ( ((unsigned int)v9 ^ 0xD800) - 2048 >= (unsigned int)&loc_10F800 )
          core::panicking::panic_nounwind(anon_106514630be1c9ef1de9e84b8238e531_0_llvm_16179947721019886102, 57LL);
        v10 = v6;
        v11 = v5;
        v5 = v38;
        v6 = v39;
        if ( v39 < v38 )
          goto LABEL_62;
        v12 = v40;
        v13 = (_BYTE *)(v39 + v11);
        v40 += v38 + v10 - (_QWORD)v13;
        if ( (_DWORD)v9 == 1114112 )
          goto LABEL_46;
        if ( !(_BYTE)v4 )
          goto LABEL_27;
      }
      while ( (unsigned int)(v9 - 9) < 5 || (_DWORD)v9 == 32 );
      if ( (unsigned int)v9 < 0x80 )
        break;
      v14 = (unsigned int)v9 >> 8;
      if ( (unsigned int)v9 >> 8 > 0x1F )
      {
        if ( v14 != 32 )
        {
          if ( v14 != 48 )
            goto LABEL_27;
          v15 = (_DWORD)v9 == 12288;
          goto LABEL_24;
        }
        v13 = core::unicode::unicode_data::white_space::WHITESPACE_MAP;
        v16 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v9] >> 1;
      }
      else
      {
        if ( v14 )
        {
          if ( v14 != 22 )
            goto LABEL_27;
          v15 = (_DWORD)v9 == 5760;
          goto LABEL_24;
        }
        v13 = core::unicode::unicode_data::white_space::WHITESPACE_MAP;
        v16 = core::unicode::unicode_data::white_space::WHITESPACE_MAP[(unsigned __int8)v9];
      }
      v15 = v16 & 1;
LABEL_24:
      if ( !v15 )
        goto LABEL_27;
    }
    if ( (_DWORD)v9 == 45 )
    {
      v4 = 0;
      v7 = v32;
      continue;
    }
    break;
  }
LABEL_27:
  if ( *(_DWORD *)a4 != 1114112 )
  {
    LOBYTE(v4) = 0;
    if ( *(_DWORD *)a4 == (_DWORD)v9 )
      goto LABEL_5;
  }
  v17 = a4;
  if ( *(_DWORD *)(a4 + 4) != (_DWORD)v9 )
  {
    v18 = (unsigned int)(v9 - 58);
    if ( (unsigned int)v18 <= 0xFFFFFFF5 )
      goto LABEL_55;
    LOBYTE(v18) = (_DWORD)v9 == 48;
    if ( v34 == 1 || (_DWORD)v9 != 48 )
    {
      if ( !(_BYTE)v32 )
      {
        v19 = __OFADD__(1LL, v33++);
        if ( v19 )
          core::panicking::panic_const::panic_const_add_overflow(&off_1D28C0, v13, v9, v18);
      }
    }
    else
    {
      v35 = 1;
      LOBYTE(v4) = 0;
      v8 = 0;
      if ( !(_BYTE)v32 )
        goto LABEL_4;
      v19 = __OFSUB__(v33--, 1LL);
      if ( v19 )
        core::panicking::panic_const::panic_const_sub_overflow(&off_1D28A8, v13, v9, 0LL);
      LOBYTE(v18) = 1;
    }
    v20 = v34;
    v21 = ((unsigned __int8)v18 | (v34 == 1)) == 0;
    v22 = v31;
    if ( v21 )
      v22 = v12;
    v31 = v22;
    if ( v21 )
      v20 = 1LL;
    v34 = v20;
    v35 = 1;
    LOBYTE(v4) = 0;
    v7 = v32;
    goto LABEL_3;
  }
  LOBYTE(v4) = 0;
  v21 = (_BYTE)v32 == 0;
  LOBYTE(v17) = 1;
  v32 = v17;
  if ( v21 )
    goto LABEL_5;
LABEL_55:
  if ( v34 == 1 )
  {
    if ( (*(_BYTE *)(a4 + 8) & 1) != 0 )
    {
      v28 = (unsigned int)(v9 - 69);
      v23 = v33;
      if ( (unsigned int)v28 <= 0x26 )
      {
        v29 = 0x4000308945LL;
        if ( _bittest64(&v29, v28) )
        {
          ++v12;
          v24 = v30;
          v25 = v31;
          if ( !v12 )
            core::panicking::panic_const::panic_const_add_overflow(&off_1D28D8, v33, v31, v30);
          goto LABEL_54;
        }
      }
LABEL_49:
      v24 = v30;
      v25 = v31;
      goto LABEL_54;
    }
LABEL_48:
    v23 = v33;
    goto LABEL_49;
  }
  v23 = 0LL;
  v26 = v35 == 0;
LABEL_51:
  if ( v26 )
    v12 = 0LL;
  v24 = 1;
  v25 = v12;
LABEL_54:
  *(_QWORD *)a1 = v23;
  *(_BYTE *)(a1 + 8) = v24;
  *(_QWORD *)(a1 + 16) = v25;
  *(_QWORD *)(a1 + 24) = v12;
  return a1;
}
