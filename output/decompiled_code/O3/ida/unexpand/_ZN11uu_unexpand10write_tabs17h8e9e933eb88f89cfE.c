        char a8)
{
  __int64 result; // rax
  char v13; // cl
  bool v14; // cc
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int64 (__fastcall *v17)(); // rdx
  __int64 v18; // rax
  _QWORD *v19; // rdi
  __int64 v20; // rdx
  unsigned __int64 v21; // r13
  __int64 v22; // rax
  __int64 (__fastcall *v23)(); // rdx
  __int64 v24; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v25; // [rsp+8h] [rbp-80h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+10h] [rbp-78h]
  void *v27; // [rsp+18h] [rbp-70h] BYREF
  __int64 v28; // [rsp+20h] [rbp-68h]
  __int64 **v29; // [rsp+28h] [rbp-60h]
  __int64 v30; // [rsp+30h] [rbp-58h]
  __int64 v31; // [rsp+38h] [rbp-50h]
  __int64 **v32; // [rsp+48h] [rbp-40h] BYREF
  __int64 (__fastcall *v33)(); // [rsp+50h] [rbp-38h]

  result = a7;
  if ( a7 )
  {
    v13 = 1;
  }
  else
  {
    v13 = a8;
    if ( !a8 )
      goto LABEL_6;
  }
  if ( a6 || a4 + 1 >= a5 )
  {
LABEL_6:
    if ( a5 <= a4 || !(a7 | (unsigned __int8)(a6 & v13)) )
      goto LABEL_8;
  }
  while ( 1 )
  {
    v19 = a2;
    result = uu_unexpand::next_tabstop(a2, a3, a4);
    if ( result != 1 )
      break;
    v21 = a4 + v20;
    if ( a4 + v20 > a5 )
      break;
    v22 = a1[2];
    if ( (unsigned __int64)(*a1 - v22) > 1 )
    {
      *(_BYTE *)(a1[1] + v22) = 9;
      a1[2] = v22 + 1;
      v18 = 0LL;
    }
    else
    {
      v19 = a1;
      v18 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, asc_1D55C, 1LL);
    }
    a4 = v21;
    if ( v18 )
    {
      v24 = v18;
      v25 = (__int64 *)uucore::util_name(v19);
      v26 = v23;
      v32 = &v25;
      v33 = <&T as core::fmt::Display>::fmt;
      v27 = &unk_11D100;
      v28 = 2LL;
      v31 = 0LL;
      v29 = (__int64 **)&v32;
      v30 = 1LL;
      std::io::stdio::_eprint(&v27);
      v25 = &v24;
      v26 = <std::io::error::Error as core::fmt::Display>::fmt;
      v27 = &unk_11D120;
      v28 = 2LL;
      v31 = 0LL;
      v29 = &v25;
      v30 = 1LL;
      std::io::stdio::_eprint(&v27);
      std::process::exit(1);
    }
  }
LABEL_8:
  v14 = a5 <= a4;
  v15 = a5 - a4;
  if ( !v14 )
  {
    do
    {
      v16 = a1[2];
      if ( (unsigned __int64)(*a1 - v16) < 2 )
      {
        result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &unk_1D55D, 1LL);
        if ( result )
        {
          v24 = result;
          v25 = (__int64 *)uucore::util_name(a1);
          v26 = v17;
          v32 = &v25;
          v33 = <&T as core::fmt::Display>::fmt;
          v27 = &unk_11D100;
          v28 = 2LL;
          v31 = 0LL;
          v29 = (__int64 **)&v32;
          v30 = 1LL;
          std::io::stdio::_eprint(&v27);
          v25 = &v24;
          v26 = <std::io::error::Error as core::fmt::Display>::fmt;
          v27 = &unk_11D120;
          v28 = 2LL;
          v31 = 0LL;
          v29 = &v25;
          v30 = 1LL;
          std::io::stdio::_eprint(&v27);
          std::process::exit(1);
        }
      }
      else
      {
        *(_BYTE *)(a1[1] + v16) = 32;
        result = v16 + 1;
        a1[2] = result;
      }
      --v15;
    }
    while ( v15 );
  }
  return result;
}
