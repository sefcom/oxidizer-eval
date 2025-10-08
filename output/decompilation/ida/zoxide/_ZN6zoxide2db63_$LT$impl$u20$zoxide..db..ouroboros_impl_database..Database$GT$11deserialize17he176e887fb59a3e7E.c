__int64 __fastcall zoxide::db::<impl zoxide::db::ouroboros_impl_database::Database>::deserialize(
        int **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 result; // rax
  int *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-C0h] BYREF
  int v14; // [rsp+14h] [rbp-B4h] BYREF
  char **v15; // [rsp+18h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+20h] [rbp-A8h]
  int **v17; // [rsp+28h] [rbp-A0h]
  __int128 v18; // [rsp+30h] [rbp-98h]
  int *v19; // [rsp+48h] [rbp-80h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+50h] [rbp-78h]
  int *v21; // [rsp+58h] [rbp-70h]
  __int64 (__fastcall *v22)(); // [rsp+60h] [rbp-68h]
  _QWORD v23[4]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v24[64]; // [rsp+88h] [rbp-40h] BYREF

  v13 = 0x2000000LL;
  v4 = bincode::internal::serialized_size(&v13);
  v6 = core::result::Result<T,E>::unwrap(v4, v5);
  if ( a3 < v6 )
  {
    v15 = &off_134AF0;
    v16 = 1LL;
    v17 = (int **)&byte_8;
    v18 = 0LL;
    v12 = anyhow::__private::format_err(&v15);
    goto LABEL_8;
  }
  core::slice::<impl [T]>::split_at_unchecked(v23, a2, a3, v6);
  v7 = v23[2];
  v8 = v23[3];
  bincode::internal::deserialize_seed(&v15, v23[0], v23[1], &v13);
  if ( (_DWORD)v15 == 1 )
  {
    v12 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v16);
LABEL_8:
    a1[1] = (int *)v12;
    result = 0x8000000000000000LL;
    *a1 = (int *)0x8000000000000000LL;
    return result;
  }
  if ( HIDWORD(v15) != 3 )
  {
    v14 = HIDWORD(v15);
    v19 = &v14;
    v20 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v21 = (int *)&unk_18E14;
    v22 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
    v15 = &off_134B00;
    v16 = 3LL;
    v17 = &v19;
    v18 = 2uLL;
    core::option::Option<T>::map_or_else(v24, 0LL, v9, &v15);
    result = anyhow::error::<impl anyhow::Error>::msg(v24);
    goto LABEL_5;
  }
  bincode::internal::deserialize_seed(&v15, v7, v8, &v13);
  anyhow::context::<impl anyhow::Context<T,E> for core::result::Result<T,E>>::context(&v19, &v15);
  result = (__int64)v20;
  if ( v19 == (int *)0x8000000000000000LL )
  {
LABEL_5:
    a1[1] = (int *)result;
    *a1 = (int *)0x8000000000000000LL;
    return result;
  }
  v11 = v21;
  *a1 = v19;
  a1[1] = (int *)result;
  a1[2] = v11;
  return result;
}