void *__fastcall uu_join::State::extend(void *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 field; // rax
  __int64 v5; // rdx
  __int64 current_key; // [rsp+8h] [rbp-240h]
  __int64 v8; // [rsp+10h] [rbp-238h]
  _OWORD v10[3]; // [rsp+58h] [rbp-1F0h] BYREF
  _QWORD src[6]; // [rsp+88h] [rbp-1C0h] BYREF
  int v12[12]; // [rsp+B8h] [rbp-190h] BYREF
  __int64 v13; // [rsp+E8h] [rbp-160h]
  __int64 v14; // [rsp+F0h] [rbp-158h]
  __int64 v15; // [rsp+F8h] [rbp-150h]
  _BYTE dest[48]; // [rsp+100h] [rbp-148h] BYREF
  __int128 v17; // [rsp+130h] [rbp-118h] BYREF
  __int128 v18; // [rsp+140h] [rbp-108h]
  __int128 v19; // [rsp+150h] [rbp-F8h]
  char v20; // [rsp+16Fh] [rbp-D9h] BYREF
  _OWORD v21[3]; // [rsp+170h] [rbp-D8h] BYREF
  _BYTE v22[48]; // [rsp+1A0h] [rbp-A8h] BYREF
  _BYTE v23[48]; // [rsp+1D0h] [rbp-78h] BYREF
  unsigned __int64 v24[6]; // [rsp+200h] [rbp-48h] BYREF
  char i; // [rsp+237h] [rbp-11h]

  for ( i = 0; ; i = 0 )
  {
    uu_join::State::next_line(v12);
    <core::result::Result<T,E> as core::ops::try_trait::Try>::branch(src, v12);
    if ( src[0] == 0x8000000000000001LL )
    {
      v13 = src[1];
      v14 = src[2];
      v15 = src[3];
      <core::result::Result<T,F> as core::ops::try_trait::FromResidual<core::result::Result<core::convert::Infallible,E>>>::from_residual((__int64)a1);
      return a1;
    }
    memcpy(dest, src, sizeof(dest));
    memcpy(v10, dest, sizeof(v10));
    if ( *(_QWORD *)&v10[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place<core::option::Option<uu_join::Line>>(v10);
      v24[0] = 0x8000000000000000LL;
      memcpy(a1, v24, 0x30uLL);
      return a1;
    }
    i = 1;
    v19 = v10[2];
    v18 = v10[1];
    v17 = v10[0];
    current_key = uu_join::State::get_current_key(a2);
    v8 = v3;
    field = uu_join::Line::get_field(&v17, *(_QWORD *)(a2 + 64));
    v20 = uu_join::Input<Sep>::compare(a3, current_key, v8, field, v5);
    if ( (<core::cmp::Ordering as core::cmp::PartialEq>::eq(&v20, &byte_EC8E) & 1) == 0 )
      break;
    i = 0;
    v21[2] = v19;
    v21[1] = v18;
    v21[0] = v17;
    alloc::vec::Vec<T,A>::push(a2, v21);
  }
  i = 0;
  memcpy(v23, &v17, sizeof(v23));
  memcpy(v22, v23, sizeof(v22));
  memcpy(a1, v22, 0x30uLL);
  i = 0;
  return a1;
}
