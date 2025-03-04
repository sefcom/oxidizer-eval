__int64 *__fastcall uu_du::parse_depth(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v7 = 0LL;
    goto LABEL_10;
  }
  core::num::<impl core::str::traits::FromStr for usize>::from_str(&v10);
  if ( !(_BYTE)v10 )
  {
    if ( a4 )
      goto LABEL_7;
    v4 = v11[0];
    v7 = 1LL;
LABEL_10:
    a1[1] = v7;
    a1[2] = v4;
    v8 = 0LL;
    goto LABEL_11;
  }
  if ( a4 )
  {
LABEL_7:
    <T as alloc::slice::hack::ConvertVec>::to_vec(v11, a2, a3);
    v10 = 1LL;
    goto LABEL_8;
  }
  <T as alloc::slice::hack::ConvertVec>::to_vec(v11, a2, a3);
  v10 = 0LL;
LABEL_8:
  a1[1] = alloc::boxed::Box<T>::new(&v10);
  a1[2] = (__int64)&off_184558;
  v8 = 1LL;
LABEL_11:
  *a1 = v8;
  return a1;
}
