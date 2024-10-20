unsigned __int64 __fastcall uu_cat::write_end(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r14
  char v7; // al
  unsigned __int64 v8; // r12
  int v9; // eax
  __int64 v10; // rax
  unsigned __int8 v11; // al
  const char *v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r12
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdi
  const char *v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rbp
  int v22; // r12d
  unsigned __int64 v23; // r13
  unsigned int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  bool v28; // cf
  __int64 v29; // rcx
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // r14
  bool v32; // sf
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v36; // rbp
  __int64 v37; // [rsp+8h] [rbp-50h] BYREF
  char v38; // [rsp+16h] [rbp-42h] BYREF
  _BYTE v39[2]; // [rsp+17h] [rbp-41h] BYREF
  _BYTE v40[3]; // [rsp+19h] [rbp-3Fh] BYREF
  char v41; // [rsp+1Ch] [rbp-3Ch]
  __int16 v42; // [rsp+1Dh] [rbp-3Bh] BYREF
  char v43; // [rsp+1Fh] [rbp-39h]
  __int64 v44; // [rsp+20h] [rbp-38h]

  v4 = a3;
  v5 = a2;
  v7 = *(_BYTE *)(a4 + 1);
  if ( (*(_BYTE *)(a4 + 3) & 1) == 0 )
  {
    if ( (v7 & 1) != 0 )
    {
      if ( a3 >= 0 )
      {
        v20 = a2 + a3;
        v21 = 0LL;
        v22 = 9728;
        while ( 1 )
        {
          if ( !v4 )
          {
LABEL_51:
            v33 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, v5, v4);
            if ( v33 )
            {
              v37 = v33;
              core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v37, &off_108820, &off_108B38);
            }
            return v4;
          }
          v23 = 0LL;
          while ( 1 )
          {
            if ( !(v23 + v5) )
              goto LABEL_51;
            v24 = *(unsigned __int8 *)(v23 + v5);
            if ( v24 <= 0xD )
            {
              if ( _bittest(&v22, v24) )
                break;
            }
            if ( v23 == -1LL )
              core::panicking::panic_const::panic_const_add_overflow(&off_108880);
            v25 = v5 + v23++ + 1;
            if ( v25 == v20 )
              goto LABEL_51;
          }
          if ( v23 >= v4 )
            goto LABEL_63;
          v26 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, v5, v23);
          if ( v26 )
          {
            v37 = v26;
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v37, &off_108820, &off_108B50);
          }
          if ( *(_BYTE *)(v5 + v23) != 9 )
            break;
          v27 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, aI, 2LL);
          if ( v27 )
          {
            v37 = v27;
            core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v37, &off_108820, &off_108B68);
          }
          v28 = __CFADD__(v23 + 1, v21);
          v21 += v23 + 1;
          if ( v28 )
            core::panicking::panic_const::panic_const_add_overflow(&off_108B80);
          v29 = v5 + v23 + 1;
          v30 = ~v23;
          v31 = v4 + v5;
          v32 = (__int64)(v30 + v4) < 0;
          v4 += v30;
          v20 = v31;
          v5 = v29;
          if ( v32 )
            goto LABEL_50;
        }
        v28 = __CFADD__(v23, v21);
        v36 = v23 + v21;
        if ( v28 )
          core::panicking::panic_const::panic_const_add_overflow(&off_108B98);
        return v36;
      }
    }
    else if ( a3 >= 0 )
    {
      if ( a3 )
      {
        v8 = 0LL;
        while ( 1 )
        {
          if ( !(v8 + a2) )
            goto LABEL_10;
          v9 = *(unsigned __int8 *)(v8 + a2);
          if ( v9 == 10 || v9 == 13 )
            break;
          if ( a3 == ++v8 )
            goto LABEL_10;
        }
        if ( v8 >= a3 )
LABEL_63:
          core::panicking::panic_nounwind(aUnsafePrecondi_6, 104LL);
        v34 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, a2, v8);
        v4 = v8;
        if ( v34 )
        {
          v37 = v34;
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v37, &off_108820, &off_108B20);
        }
      }
      else
      {
LABEL_10:
        v10 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(a1, a2, a3);
        if ( v10 )
        {
          v37 = v10;
          core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v37, &off_108820, &off_108B08);
        }
      }
      return v4;
    }
LABEL_50:
    core::panicking::panic_nounwind(aUnsafePrecondi, 71LL);
  }
  v11 = v7 & 1;
  v12 = aI;
  if ( !v11 )
    v12 = asc_1EBD6;
  if ( !a3 )
    return 0LL;
  v13 = v11 + 1LL;
  v44 = -a2;
  v14 = 0LL;
  while ( v14 + v5 )
  {
    v15 = *(unsigned __int8 *)(v14 + v5);
    switch ( v15 )
    {
      case 9:
        v17 = a1;
        v18 = v12;
        v16 = v13;
        break;
      case 127:
        v16 = 2LL;
        v17 = a1;
        v18 = asc_1EDD5;
        break;
      case 10:
        return v14;
      default:
        if ( (unsigned __int8)v15 >= 0x20u )
        {
          if ( (unsigned __int8)v15 >= 0x7Fu )
          {
            if ( (unsigned __int8)v15 >= 0xA0u )
            {
              if ( (unsigned __int8)(v15 + 1) > 0xA0u )
              {
                v42 = 11597;
                v43 = v15 & 0x7F;
                v16 = 3LL;
                v17 = a1;
                v18 = (const char *)&v42;
              }
              else
              {
                v16 = 4LL;
                v17 = a1;
                v18 = aM;
              }
            }
            else
            {
              qmemcpy(v40, "M-^", sizeof(v40));
              v41 = v15 - 64;
              v16 = 4LL;
              v17 = a1;
              v18 = v40;
            }
          }
          else
          {
            v38 = *(_BYTE *)(v14 + v5);
            v16 = 1LL;
            v17 = a1;
            v18 = &v38;
          }
        }
        else
        {
          v39[0] = 94;
          v39[1] = v15 | 0x40;
          v16 = 2LL;
          v17 = a1;
          v18 = v39;
        }
        break;
    }
    v19 = <std::io::stdio::StdoutLock as std::io::Write>::write_all(v17, v18, v16);
    if ( v19 )
    {
      v37 = v19;
      core::result::unwrap_failed(aCalledResultUn_2, 43LL, &v37, &off_108820, &off_108BB0);
    }
    if ( v4 == ++v14 )
      return v4;
  }
  return v44;
}
