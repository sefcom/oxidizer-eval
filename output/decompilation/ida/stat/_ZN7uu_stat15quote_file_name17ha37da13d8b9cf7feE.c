__int64 __fastcall uu_stat::quote_file_name(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int128 v5; // [rsp+8h] [rbp-90h] BYREF
  __int64 v6; // [rsp+18h] [rbp-80h]
  void *v7; // [rsp+20h] [rbp-78h] BYREF
  __int64 v8; // [rsp+28h] [rbp-70h]
  __int128 *v9; // [rsp+30h] [rbp-68h]
  __int64 v10; // [rsp+38h] [rbp-60h]
  __int64 v11; // [rsp+40h] [rbp-58h]
  _QWORD v12[2]; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+60h] [rbp-38h] BYREF
  _BYTE v14[40]; // [rsp+70h] [rbp-28h] BYREF

  v12[0] = a2;
  v12[1] = a3;
  if ( a4 >= 2u )
  {
    if ( a4 == 2 )
    {
      *(_QWORD *)&v5 = v12;
      *((_QWORD *)&v5 + 1) = <&T as core::fmt::Display>::fmt;
      v7 = &off_119BE8;
      v8 = 2LL;
      v11 = 0LL;
      v9 = &v5;
      v10 = 1LL;
      return core::option::Option<T>::map_or_else(a1, &v7);
    }
    else
    {
      return <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec();
    }
  }
  else
  {
    alloc::str::<impl str>::replace(v14);
    v13[0] = v14;
    v13[1] = <alloc::string::String as core::fmt::Display>::fmt;
    v7 = &off_119BC8;
    v8 = 2LL;
    v11 = 0LL;
    v9 = (__int128 *)v13;
    v10 = 1LL;
    core::option::Option<T>::map_or_else(&v5, &v7);
    *(_QWORD *)(a1 + 16) = v6;
    *(_OWORD *)a1 = v5;
    return core::ptr::drop_in_place<alloc::string::String>(v14);
  }
}