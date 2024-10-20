__int64 *__fastcall uu_tr::operation::Sequence::parse_backslash(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // r15
  unsigned __int8 *v4; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned __int8 *v8; // r14
  _QWORD v10[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int8 *v12; // [rsp+18h] [rbp-40h]
  unsigned __int8 *v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]

  v10[0] = anon_75bed6b1e406cad44fd0f567e878a3a0_50_llvm_3640059315831376190;
  v10[1] = 1LL;
  <F as nom::internal::Parser<I,O,E>>::parse(&v11, v10, a2, a3);
  v3 = v12;
  v4 = v13;
  if ( v11 )
  {
    v5 = v14;
    v6 = v15;
    v7 = (__int64)v12;
    if ( v12 == (_BYTE *)&dword_0 + 3 )
      goto LABEL_3;
LABEL_9:
    *a1 = v7;
    a1[1] = (__int64)v4;
    a1[2] = v5;
    a1[3] = v6;
    return a1;
  }
  if ( v13 )
  {
    core::slice::raw::from_raw_parts::precondition_check(v12, 1LL, 1LL, 1LL);
    v8 = v4 - 1;
    core::slice::raw::from_raw_parts::precondition_check(v3 + 1, 1LL, 1LL, v8);
    v6 = *v3;
    v7 = 3LL;
    ++v3;
    v5 = (__int64)v8;
  }
  else
  {
    v7 = 1LL;
    v6 = 23LL;
    v5 = 0LL;
  }
  v4 = v3;
  if ( v7 != 3 )
    goto LABEL_9;
LABEL_3:
  switch ( (char)v6 )
  {
    case 'a':
      LOBYTE(v6) = 7;
      break;
    case 'b':
      LOBYTE(v6) = 8;
      break;
    case 'f':
      LOBYTE(v6) = 12;
      break;
    case 'n':
      LOBYTE(v6) = 10;
      break;
    case 'r':
      LOBYTE(v6) = 13;
      break;
    case 't':
      LOBYTE(v6) = 9;
      break;
    case 'v':
      LOBYTE(v6) = 11;
      break;
    default:
      break;
  }
  a1[1] = (__int64)v4;
  a1[2] = v5;
  *((_BYTE *)a1 + 24) = v6;
  *a1 = 3LL;
  return a1;
}
