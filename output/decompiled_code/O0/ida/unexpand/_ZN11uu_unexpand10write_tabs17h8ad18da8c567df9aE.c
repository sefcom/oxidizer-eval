        unsigned __int8 a8)
{
  __int64 v9; // r15
  __int64 v11; // rax
  char *v12; // rsi
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // rdx
  unsigned __int64 v16; // r13
  bool v17; // cc
  unsigned __int64 v18; // r13
  bool v19; // cf
  unsigned __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  __int64 v26; // r13
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v30; // [rsp+8h] [rbp-170h] BYREF
  __int64 v31; // [rsp+10h] [rbp-168h] BYREF
  __int64 v32; // [rsp+18h] [rbp-160h]
  __int64 v33; // [rsp+20h] [rbp-158h]
  _QWORD v34[2]; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v35[2]; // [rsp+38h] [rbp-140h] BYREF
  _QWORD v36[2]; // [rsp+48h] [rbp-130h] BYREF
  _QWORD v37[2]; // [rsp+58h] [rbp-120h] BYREF
  _QWORD v38[2]; // [rsp+68h] [rbp-110h] BYREF
  _QWORD v39[2]; // [rsp+78h] [rbp-100h] BYREF
  _QWORD v40[6]; // [rsp+88h] [rbp-F0h] BYREF
  _QWORD v41[6]; // [rsp+B8h] [rbp-C0h] BYREF
  _QWORD v42[6]; // [rsp+E8h] [rbp-90h] BYREF
  _QWORD v43[12]; // [rsp+118h] [rbp-60h] BYREF

  v9 = a3;
  LOBYTE(v11) = a8;
  v12 = (char *)a7;
  LOBYTE(v12) = a8 | a7;
  if ( (a8 | a7) == 1 && !a6 )
  {
    v12 = (char *)(a4 + 1);
    if ( a4 == -1LL )
      core::panicking::panic_const::panic_const_add_overflow(&off_10AFC0, v12);
    if ( (unsigned __int64)v12 < a5 )
      goto LABEL_7;
  }
  if ( a4 < a5 )
  {
    LOBYTE(v11) = a6 & a8;
    if ( (unsigned __int8)(a6 & a8) | a7 )
    {
LABEL_7:
      v32 = 8 * a3;
      v33 = a3;
      while ( v9 == 1 )
      {
        v13 = *a2;
        if ( !*a2 )
          core::panicking::panic_const::panic_const_rem_by_zero(&off_10AFA8);
        if ( (v13 | a4) >> 32 )
        {
          v11 = a4 / v13;
          v14 = a4 % v13;
        }
        else
        {
          v14 = (unsigned int)a4 % (unsigned int)v13;
          LODWORD(v11) = (unsigned int)a4 / (unsigned int)v13;
        }
        v18 = v13 - v14;
LABEL_19:
        v19 = __CFADD__(a4, v18);
        v20 = a4 + v18;
        if ( v19 )
          core::panicking::panic_const::panic_const_add_overflow(&off_10AFD8, v12);
        if ( v20 > a5 )
          goto LABEL_25;
        v21 = a1[2];
        if ( (unsigned __int64)(*a1 - v21) < 2 )
        {
          v12 = "\t: \n ";
          v22 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, "\t: \n ", 1LL);
          a4 = v20;
          if ( v22 )
          {
            v30 = v22;
            v35[0] = uucore::util_name(a1, "\t: \n ", v23, v20);
            v35[1] = v24;
            v34[0] = v35;
            v34[1] = <&T as core::fmt::Display>::fmt;
            v40[0] = &unk_10AFF0;
            v40[1] = 2LL;
            v40[4] = 0LL;
            v40[2] = v34;
            v40[3] = 1LL;
            std::io::stdio::_eprint(v40);
            v36[0] = &v30;
            v36[1] = <std::io::error::Error as core::fmt::Display>::fmt;
            v41[0] = &unk_10B010;
            v41[1] = 2LL;
            v41[4] = 0LL;
            v41[2] = v36;
            v41[3] = 1LL;
            std::io::stdio::_eprint(v41);
            std::process::exit(1);
          }
        }
        else
        {
          v12 = (char *)(a1[1] + v21);
          core::intrinsics::copy_nonoverlapping::precondition_check("\t: \n ", v12, 1LL, 1LL, 1LL);
          *v12 = 9;
          v9 = v33;
          a1[2] = v21 + 1;
          a4 = v20;
        }
      }
      v11 = v32;
      v15 = a2;
      while ( v11 && v15 )
      {
        v16 = *v15++;
        v11 -= 8LL;
        v17 = v16 <= a4;
        v18 = v16 - a4;
        if ( !v17 )
          goto LABEL_19;
      }
    }
  }
LABEL_25:
  v17 = a5 <= a4;
  v25 = a5 - a4;
  if ( !v17 )
  {
    do
    {
      v26 = a1[2];
      if ( (unsigned __int64)(*a1 - v26) < 2 )
      {
        v11 = std::io::buffered::bufwriter::BufWriter<W>::write_all_cold(a1, " ", 1LL);
        if ( v11 )
        {
          v31 = v11;
          v38[0] = ((__int64 (*)(void))uucore::util_name)();
          v38[1] = v28;
          v37[0] = v38;
          v37[1] = <&T as core::fmt::Display>::fmt;
          v42[0] = &unk_10AFF0;
          v42[1] = 2LL;
          v42[4] = 0LL;
          v42[2] = v37;
          v42[3] = 1LL;
          std::io::stdio::_eprint(v42);
          v39[0] = &v31;
          v39[1] = <std::io::error::Error as core::fmt::Display>::fmt;
          v43[0] = &unk_10B010;
          v43[1] = 2LL;
          v43[4] = 0LL;
          v43[2] = v39;
          v43[3] = 1LL;
          std::io::stdio::_eprint(v43);
          std::process::exit(1);
        }
      }
      else
      {
        v27 = a1[1];
        LOBYTE(v11) = core::intrinsics::copy_nonoverlapping::precondition_check(" ", v26 + v27, 1LL, 1LL, 1LL);
        *(_BYTE *)(v27 + v26) = 32;
        a1[2] = v26 + 1;
      }
      --v25;
    }
    while ( v25 );
  }
  return v11;
}
