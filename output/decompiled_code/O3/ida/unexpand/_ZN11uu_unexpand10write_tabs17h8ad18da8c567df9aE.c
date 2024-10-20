        unsigned __int8 a8)
{
  unsigned __int64 v9; // r15
  unsigned __int64 result; // rax
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r15
  _QWORD *v18; // rdi
  __int64 v19; // rax
  bool v20; // cc
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 (__fastcall *v24)(); // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 (__fastcall *v27)(); // rdx
  unsigned __int64 v28; // [rsp+0h] [rbp-88h] BYREF
  unsigned __int64 *v29; // [rsp+8h] [rbp-80h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+10h] [rbp-78h]
  void *v31; // [rsp+18h] [rbp-70h] BYREF
  __int64 v32; // [rsp+20h] [rbp-68h]
  unsigned __int64 **v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+30h] [rbp-58h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 **v36; // [rsp+48h] [rbp-40h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+50h] [rbp-38h]

  v9 = a4;
  result = a7;
  if ( a7 )
  {
    LOBYTE(a4) = 1;
  }
  else
  {
    a4 = a8;
    if ( !a8 )
      goto LABEL_6;
  }
  if ( a6 || v9 + 1 >= a5 )
  {
LABEL_6:
    if ( a5 <= v9 )
      goto LABEL_23;
    LOBYTE(a4) = a7 | a6 & a4;
    if ( !(_BYTE)a4 )
      goto LABEL_23;
  }
  if ( a3 == 1 )
  {
    v12 = *a2;
    if ( !*a2 )
      core::panicking::panic_const::panic_const_rem_by_zero(&off_E6C70, a2, 1LL, a4);
    if ( (v12 | v9) >> 32 )
      v13 = v9 % v12;
    else
      v13 = (unsigned int)v9 % (unsigned int)v12;
    for ( result = v9 + v12 - v13; result <= a5; result = v9 + v12 - v25 )
    {
      v9 = result;
      v26 = a1[2];
      if ( (unsigned __int64)(*a1 - v26) <= 1 )
      {
        v18 = a1;
        a2 = (unsigned __int64 *)&unk_19746;
        v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &unk_19746, 1LL);
        if ( v19 )
          goto LABEL_39;
      }
      else
      {
        *(_BYTE *)(a1[1] + v26) = 9;
        a1[2] = v26 + 1;
      }
      if ( (v12 | v9) >> 32 )
        v25 = v9 % v12;
      else
        v25 = (unsigned int)v9 % (unsigned int)v12;
    }
  }
  else
  {
    v14 = 8 * a3;
LABEL_13:
    result = 0LL;
    while ( v14 != result )
    {
      v15 = *(unsigned __int64 *)((char *)a2 + result);
      result += 8LL;
      if ( v15 > v9 )
      {
        if ( v15 > a5 )
          break;
        v16 = a1[2];
        if ( (unsigned __int64)(*a1 - v16) <= 1 )
        {
          v17 = v14;
          v18 = a1;
          v19 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &unk_19746, 1LL);
          v14 = v17;
          v9 = v15;
          if ( v19 )
          {
LABEL_39:
            v28 = v19;
            v29 = (unsigned __int64 *)uucore::util_name(v18, a2, v14);
            v30 = v27;
            v36 = &v29;
            v37 = <&T as core::fmt::Display>::fmt;
            v31 = &unk_E6C88;
            v32 = 2LL;
            v35 = 0LL;
            v33 = (unsigned __int64 **)&v36;
            v34 = 1LL;
            std::io::stdio::_eprint(&v31);
            v29 = &v28;
            v30 = <std::io::error::Error as core::fmt::Display>::fmt;
            v31 = &unk_E6CA8;
            v32 = 2LL;
            v35 = 0LL;
            v33 = &v29;
            v34 = 1LL;
            std::io::stdio::_eprint(&v31);
            std::process::exit(1);
          }
        }
        else
        {
          *(_BYTE *)(a1[1] + v16) = 9;
          a1[2] = v16 + 1;
          v9 = v15;
        }
        goto LABEL_13;
      }
    }
  }
LABEL_23:
  v20 = a5 <= v9;
  v21 = a5 - v9;
  if ( !v20 )
  {
    do
    {
      v22 = a1[2];
      if ( (unsigned __int64)(*a1 - v22) <= 1 )
      {
        result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &unk_1974A, 1LL);
        if ( result )
        {
          v28 = result;
          v29 = (unsigned __int64 *)uucore::util_name(a1, &unk_1974A, v23);
          v30 = v24;
          v36 = &v29;
          v37 = <&T as core::fmt::Display>::fmt;
          v31 = &unk_E6C88;
          v32 = 2LL;
          v35 = 0LL;
          v33 = (unsigned __int64 **)&v36;
          v34 = 1LL;
          std::io::stdio::_eprint(&v31);
          v29 = &v28;
          v30 = <std::io::error::Error as core::fmt::Display>::fmt;
          v31 = &unk_E6CA8;
          v32 = 2LL;
          v35 = 0LL;
          v33 = &v29;
          v34 = 1LL;
          std::io::stdio::_eprint(&v31);
          std::process::exit(1);
        }
      }
      else
      {
        *(_BYTE *)(a1[1] + v22) = 32;
        result = v22 + 1;
        a1[2] = result;
      }
      --v21;
    }
    while ( v21 );
  }
  return result;
}
