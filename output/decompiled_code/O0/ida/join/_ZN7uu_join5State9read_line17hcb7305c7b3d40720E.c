__int64 __fastcall uu_join::State::read_line(int a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // rax
  int v8; // [rsp+0h] [rbp-198h]
  int v9; // [rsp+8h] [rbp-190h]
  int v10; // [rsp+10h] [rbp-188h]
  __int64 v11; // [rsp+18h] [rbp-180h]
  int v12[2]; // [rsp+20h] [rbp-178h]
  void *dest; // [rsp+28h] [rbp-170h]
  int v14[2]; // [rsp+30h] [rbp-168h]
  int v15[2]; // [rsp+38h] [rbp-160h] BYREF
  int v16[2]; // [rsp+40h] [rbp-158h]
  struct _Unwind_Exception *v17; // [rsp+48h] [rbp-150h]
  int v18[4]; // [rsp+50h] [rbp-148h]
  struct _Unwind_Exception *v19; // [rsp+60h] [rbp-138h]
  int v20[12]; // [rsp+68h] [rbp-130h] BYREF
  __int128 v21; // [rsp+98h] [rbp-100h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-F0h]
  __int128 v23; // [rsp+B0h] [rbp-E8h] BYREF
  struct _Unwind_Exception *v24; // [rsp+C0h] [rbp-D8h]
  int v25[4]; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+E0h] [rbp-B8h]
  _BYTE v27[48]; // [rsp+F0h] [rbp-A8h] BYREF
  _BYTE v28[48]; // [rsp+120h] [rbp-78h] BYREF
  unsigned __int64 src[6]; // [rsp+150h] [rbp-48h] BYREF
  char v30; // [rsp+187h] [rbp-11h]

  v30 = 0;
  <std::io::Split<B> as core::iter::traits::iterator::Iterator>::next(
    (int)v15,
    a2 + 40,
    a3,
    a4,
    a5,
    a6,
    v8,
    v9,
    v10,
    a3,
    a2,
    a1,
    a1,
    v15[0],
    v16[0],
    (int)v17,
    v18[0],
    v18[2],
    (int)v19,
    v20[0],
    v20[2],
    v20[4],
    v20[6],
    v20[8],
    v20[10],
    v21,
    SDWORD2(v21),
    v22,
    (struct _Unwind_Exception *)v23,
    SDWORD2(v23));
  if ( *(_QWORD *)v15 == 0x8000000000000001LL )
  {
    src[0] = 0x8000000000000000LL;
    memcpy(dest, src, 0x30uLL);
  }
  else
  {
    v30 = 1;
    *(_QWORD *)v18 = *(_QWORD *)v15;
    *(_QWORD *)&v18[2] = *(_QWORD *)v16;
    v19 = v17;
    v6 = *(_QWORD *)(*(_QWORD *)v12 + 80LL);
    if ( v6 == -1 )
      core::panicking::panic_const::panic_const_add_overflow(&off_12E4B0);
    *(_QWORD *)(*(_QWORD *)v12 + 80LL) = v6 + 1;
    v30 = 0;
    v24 = v19;
    v23 = *(_OWORD *)v18;
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v21, &v23);
    if ( (_QWORD)v21 == 0x8000000000000000LL )
    {
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
        dest,
        *((_QWORD *)&v21 + 1),
        &off_12E4C8);
      v30 = 0;
    }
    else
    {
      v26 = v22;
      *(_OWORD *)v25 = v21;
      uu_join::Line::new(v20, (__int64 *)v25, v11, *(_QWORD *)(*(_QWORD *)v12 + 72LL));
      if ( (unsigned __int64)alloc::vec::Vec<T,A>::len(v20) > *(_QWORD *)(*(_QWORD *)v12 + 72LL) )
        *(_QWORD *)(*(_QWORD *)v12 + 72LL) = alloc::vec::Vec<T,A>::len(v20);
      memcpy(v28, v20, sizeof(v28));
      memcpy(v27, v28, sizeof(v27));
      memcpy(dest, v27, 0x30uLL);
      v30 = 0;
    }
  }
  return *(_QWORD *)v14;
}
