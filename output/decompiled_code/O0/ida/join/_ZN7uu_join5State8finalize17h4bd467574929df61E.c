__int64 __fastcall uu_join::State::finalize(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 line; // rax
  __int64 v6; // [rsp+30h] [rbp-218h]
  __int64 v8; // [rsp+58h] [rbp-1F0h]
  __int64 v9; // [rsp+68h] [rbp-1E0h]
  int v10[4]; // [rsp+70h] [rbp-1D8h] BYREF
  int v11[4]; // [rsp+80h] [rbp-1C8h]
  int v12[4]; // [rsp+90h] [rbp-1B8h]
  _QWORD src[6]; // [rsp+A0h] [rbp-1A8h] BYREF
  int v14[12]; // [rsp+D0h] [rbp-178h] BYREF
  _QWORD v15[3]; // [rsp+100h] [rbp-148h] BYREF
  _BYTE dest[48]; // [rsp+118h] [rbp-130h] BYREF
  __int64 v17; // [rsp+148h] [rbp-100h]
  int v18[4]; // [rsp+150h] [rbp-F8h] BYREF
  int v19[4]; // [rsp+160h] [rbp-E8h]
  int v20[4]; // [rsp+170h] [rbp-D8h]
  __int64 v21; // [rsp+180h] [rbp-C8h] BYREF
  __int128 v22; // [rsp+188h] [rbp-C0h]
  __int64 v23; // [rsp+198h] [rbp-B0h]
  int v24[12]; // [rsp+1B0h] [rbp-98h] BYREF
  __int128 v25; // [rsp+1E0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+1F0h] [rbp-58h]
  _BYTE v27[55]; // [rsp+200h] [rbp-48h] BYREF
  char v28; // [rsp+237h] [rbp-11h]

  v28 = 0;
  if ( (uu_join::State::has_line(a1) & 1) == 0 )
    return 0LL;
  if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
  {
    line = uu_join::State::print_first_line(a1, a2, a4);
    v9 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(line);
    if ( v9 )
      return <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
               v9,
               &off_12E420);
  }
  uu_join::State::next_line(v14);
  <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v14);
  if ( src[0] == 0x8000000000000001LL )
  {
    v15[0] = src[1];
    v15[1] = src[2];
    v15[2] = src[3];
    v8 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           v15,
           &off_12E408);
  }
  else
  {
    memcpy(dest, src, sizeof(dest));
    v28 = 1;
    memcpy(v10, dest, 0x30uLL);
    while ( 1 )
    {
      if ( *(_QWORD *)v10 == 0x8000000000000000LL )
      {
        core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(v10);
        v28 = 0;
        return 0LL;
      }
      if ( (*(_BYTE *)(a1 + 89) & 1) != 0 )
      {
        v6 = uu_join::State::print_line(a1, a2, (__int64)v10, a4);
        v17 = <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(v6);
        if ( v17 )
        {
          v8 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
                 v17,
                 &off_12E3F0);
          goto LABEL_19;
        }
      }
      v28 = 0;
      *(_OWORD *)v20 = *(_OWORD *)v12;
      *(_OWORD *)v19 = *(_OWORD *)v11;
      *(_OWORD *)v18 = *(_OWORD *)v10;
      uu_join::State::reset(a1, v18);
      uu_join::State::next_line(v24);
      <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(&v21, v24);
      if ( v21 == 0x8000000000000001LL )
        break;
      memcpy(v27, &v21, 0x30uLL);
      v28 = 1;
      memcpy(v10, v27, 0x30uLL);
    }
    v26 = v23;
    v25 = v22;
    v8 = <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual(
           &v25,
           &off_12E3D8);
LABEL_19:
    if ( (v28 & 1) != 0 )
      core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(v10);
  }
  v28 = 0;
  return v8;
}
