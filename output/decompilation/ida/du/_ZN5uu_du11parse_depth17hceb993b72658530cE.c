__int64 *__fastcall uu_du::parse_depth(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v10[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v6 = 0LL;
    goto LABEL_10;
  }
  core::num::<impl usize>::from_ascii_radix(&v9);
  if ( !(_BYTE)v9 )
  {
    if ( a4 )
      goto LABEL_7;
    v4 = v10[0];
    v6 = 1LL;
LABEL_10:
    a1[1] = v6;
    a1[2] = v4;
    v7 = 0LL;
    goto LABEL_11;
  }
  if ( a4 )
  {
LABEL_7:
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, a2);
    v9 = 1LL;
    goto LABEL_8;
  }
  <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v10, a2);
  v9 = 0LL;
LABEL_8:
  a1[1] = alloc::boxed::Box<T>::new(&v9);
  a1[2] = (__int64)&off_145D90;
  v7 = 1LL;
LABEL_11:
  *a1 = v7;
  return a1;
}