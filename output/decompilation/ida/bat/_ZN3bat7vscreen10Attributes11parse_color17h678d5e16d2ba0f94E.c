__int64 __fastcall bat::vscreen::Attributes::parse_color(__int64 a1, __int16 a2, __int64 a3)
{
  char v3; // al
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v7; // rdx
  __int16 v8; // [rsp+Eh] [rbp-9Ah] BYREF
  __int16 *v9; // [rsp+10h] [rbp-98h] BYREF
  __int64 (__fastcall *v10)(); // [rsp+18h] [rbp-90h]
  _WORD *v11; // [rsp+20h] [rbp-88h]
  __int64 (__fastcall *v12)(); // [rsp+28h] [rbp-80h]
  char **v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 v14; // [rsp+38h] [rbp-70h]
  __int16 **v15; // [rsp+40h] [rbp-68h]
  __int64 v16; // [rsp+48h] [rbp-60h]
  __int64 v17; // [rsp+50h] [rbp-58h]
  __int128 v18; // [rsp+60h] [rbp-48h] BYREF
  __int64 v19; // [rsp+70h] [rbp-38h]
  _WORD v20[24]; // [rsp+78h] [rbp-30h] BYREF

  v8 = a2;
  v3 = a2 - 5 * (((unsigned __int8)a2 / 5u) & 0xFE);
  if ( v3 != 8 )
  {
    if ( v3 == 9 )
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1);
    v9 = &v8;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v13 = &off_6CEE00;
    v14 = 2LL;
    v17 = 0LL;
    v15 = &v9;
    v16 = 1LL;
    return core::option::Option<T>::map_or_else(a1, 0LL, a3, &v13);
  }
  if ( (<core::iter::adapters::map::Map<I,F> as core::iter::traits::iterator::Iterator>::next(a3) & 1) == 0 )
    return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1);
  if ( (_WORD)a3 == 2 )
  {
    bat::vscreen::join(v20, 3LL, a3);
    v9 = &v8;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v11 = v20;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &off_6CEDA0;
    v14 = 3LL;
    v17 = 0LL;
    v15 = &v9;
    v16 = 2LL;
    core::option::Option<T>::map_or_else(&v18, 0LL, v7, &v13);
  }
  else
  {
    if ( (unsigned __int16)a3 != 5 )
    {
      v20[0] = a3;
      v9 = &v8;
      v10 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v11 = v20;
      v12 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
      v13 = &off_6CEDD0;
      v14 = 3LL;
      v17 = 0LL;
      v15 = &v9;
      v16 = 2LL;
      return core::option::Option<T>::map_or_else(a1, 0LL, a3, &v13);
    }
    bat::vscreen::join(v20, 1LL, a3);
    v9 = &v8;
    v10 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v11 = v20;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &off_6CED70;
    v14 = 3LL;
    v17 = 0LL;
    v15 = &v9;
    v16 = 2LL;
    core::option::Option<T>::map_or_else(&v18, 0LL, v5, &v13);
  }
  core::ptr::drop_in_place<alloc::string::String>(v20);
  result = v19;
  *(_QWORD *)(a1 + 16) = v19;
  *(_OWORD *)a1 = v18;
  return result;
}