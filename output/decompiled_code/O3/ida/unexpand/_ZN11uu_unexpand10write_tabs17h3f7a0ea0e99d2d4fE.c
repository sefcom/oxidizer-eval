        char a8)
{
  __int64 result; // rax
  char v12; // cl
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 (__fastcall *v17)(); // rdx
  bool v18; // cc
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  __int64 (__fastcall *v21)(); // rdx
  __int64 v22; // [rsp+0h] [rbp-88h] BYREF
  __int64 *v23; // [rsp+8h] [rbp-80h] BYREF
  __int64 (__fastcall *v24)(); // [rsp+10h] [rbp-78h]
  void *v25; // [rsp+18h] [rbp-70h] BYREF
  __int64 v26; // [rsp+20h] [rbp-68h]
  __int64 **v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h]
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 **v30; // [rsp+48h] [rbp-40h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+50h] [rbp-38h]

  result = a7;
  if ( a7 )
  {
    v12 = 1;
LABEL_4:
    if ( !a6 && a4 + 1 < a5 )
      goto LABEL_8;
    goto LABEL_6;
  }
  v12 = a8;
  if ( a8 )
    goto LABEL_4;
LABEL_6:
  if ( a5 <= a4 || !(a7 | (unsigned __int8)(a6 & v12)) )
    goto LABEL_16;
LABEL_8:
  result = uu_unexpand::next_tabstop(a2, a3, a4);
  if ( result != 1 )
  {
LABEL_16:
    v14 = a4;
    goto LABEL_17;
  }
  do
  {
    v14 = a4;
    a4 += v13;
    if ( a4 > a5 )
      break;
    v15 = a1[2];
    if ( (unsigned __int64)(*a1 - v15) <= 1 )
    {
      v16 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &unk_1D851, 1LL);
      if ( v16 )
      {
        v22 = v16;
        v23 = (__int64 *)uucore::util_name(a1);
        v24 = v17;
        v30 = &v23;
        v31 = <&T as core::fmt::Display>::fmt;
        v25 = &unk_11EC60;
        v26 = 2LL;
        v29 = 0LL;
        v27 = (__int64 **)&v30;
        v28 = 1LL;
        std::io::stdio::_eprint(&v25);
        v23 = &v22;
        v24 = <std::io::error::Error as core::fmt::Display>::fmt;
        v25 = &unk_11EC80;
        v26 = 2LL;
        v29 = 0LL;
        v27 = &v23;
        v28 = 1LL;
        std::io::stdio::_eprint(&v25);
        std::process::exit(1);
      }
    }
    else
    {
      *(_BYTE *)(a1[1] + v15) = 9;
      a1[2] = v15 + 1;
    }
    result = uu_unexpand::next_tabstop(a2, a3, a4);
    v14 = a4;
  }
  while ( result == 1 );
LABEL_17:
  v18 = a5 <= v14;
  v19 = a5 - v14;
  if ( !v18 )
  {
    do
    {
      v20 = a1[2];
      if ( (unsigned __int64)(*a1 - v20) <= 1 )
      {
        result = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, &unk_1D855, 1LL);
        if ( result )
        {
          v22 = result;
          v23 = (__int64 *)uucore::util_name(a1);
          v24 = v21;
          v30 = &v23;
          v31 = <&T as core::fmt::Display>::fmt;
          v25 = &unk_11EC60;
          v26 = 2LL;
          v29 = 0LL;
          v27 = (__int64 **)&v30;
          v28 = 1LL;
          std::io::stdio::_eprint(&v25);
          v23 = &v22;
          v24 = <std::io::error::Error as core::fmt::Display>::fmt;
          v25 = &unk_11EC80;
          v26 = 2LL;
          v29 = 0LL;
          v27 = &v23;
          v28 = 1LL;
          std::io::stdio::_eprint(&v25);
          std::process::exit(1);
        }
      }
      else
      {
        *(_BYTE *)(a1[1] + v20) = 32;
        result = v20 + 1;
        a1[2] = result;
      }
      --v19;
    }
    while ( v19 );
  }
  return result;
}
