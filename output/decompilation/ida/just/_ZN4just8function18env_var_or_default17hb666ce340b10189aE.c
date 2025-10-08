__int64 __fastcall just::function::env_var_or_default(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int128 v11; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v12; // [rsp+10h] [rbp-D8h]
  _QWORD v13[2]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v14[4]; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v15; // [rsp+50h] [rbp-98h] BYREF
  __int64 v16; // [rsp+60h] [rbp-88h]
  _QWORD v17[6]; // [rsp+68h] [rbp-80h] BYREF
  _BYTE v18[8]; // [rsp+98h] [rbp-50h] BYREF
  __int128 v19; // [rsp+A0h] [rbp-48h]
  __int64 v20; // [rsp+B0h] [rbp-38h]

  v13[0] = a3;
  v13[1] = a4;
  v8 = alloc::collections::btree::map::BTreeMap<K,V,A>::get(
         **(_QWORD **)(*(_QWORD *)a2 + 8LL),
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 8LL));
  if ( v8 )
  {
    <alloc::string::String as core::clone::Clone>::clone(a1 + 8, v8);
  }
  else
  {
    std::env::var(v18, a3, a4);
    if ( (v18[0] & 1) != 0 )
    {
      if ( !__OFSUB__(0LL, (_QWORD)v19) )
      {
        v12 = v20;
        v11 = v19;
        v14[0] = v13;
        v14[1] = <&T as core::fmt::Display>::fmt;
        v14[2] = &v11;
        v14[3] = <std::sys::os_str::bytes::Buf as core::fmt::Debug>::fmt;
        v17[0] = &off_42FE68;
        v17[1] = 2LL;
        v17[4] = 0LL;
        v17[2] = v14;
        v17[3] = 2LL;
        core::option::Option<T>::map_or_else(&v15, 0LL, v9, v17);
        *(_QWORD *)(a1 + 24) = v16;
        *(_OWORD *)(a1 + 8) = v15;
        *(_QWORD *)a1 = 1LL;
        core::ptr::drop_in_place<std::ffi::os_str::OsString>(&v11);
        return a1;
      }
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(a1 + 8, a5);
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v20;
      *(_OWORD *)(a1 + 8) = v19;
    }
  }
  *(_QWORD *)a1 = 0LL;
  return a1;
}