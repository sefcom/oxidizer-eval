__int64 __fastcall just::function::dir(__int64 a1, __int64 a2, __int64 a3, void (__fastcall *a4)(__int64 *))
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  _BYTE v9[24]; // [rsp+8h] [rbp-80h] BYREF
  __int64 v10; // [rsp+20h] [rbp-68h]
  __int64 v11; // [rsp+28h] [rbp-60h]
  _QWORD v12[2]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v13; // [rsp+48h] [rbp-40h] BYREF
  __int64 v14; // [rsp+50h] [rbp-38h]
  __int64 v15; // [rsp+58h] [rbp-30h]
  _QWORD v16[5]; // [rsp+60h] [rbp-28h] BYREF

  v12[0] = a2;
  v12[1] = a3;
  a4(&v13);
  if ( __OFSUB__(0LL, v13) )
  {
    v16[0] = v12;
    v16[1] = <&T as core::fmt::Display>::fmt;
    *(_QWORD *)v9 = &unk_42FE08;
    *(_QWORD *)&v9[8] = 2LL;
    v11 = 0LL;
    *(_QWORD *)&v9[16] = v16;
    v10 = 1LL;
    result = core::option::Option<T>::map_or_else(a1 + 8, 0LL, v4, v9);
    *(_QWORD *)a1 = 1LL;
  }
  else
  {
    v6 = v14;
    v7 = v15;
    core::str::converts::from_utf8(v9, v14, v15);
    if ( *(_DWORD *)v9 == 1 )
    {
      just::function::dir::{{closure}}(v9, v6, v7, v12);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v9[16];
      *(_OWORD *)(a1 + 8) = *(_OWORD *)v9;
      *(_QWORD *)a1 = 1LL;
    }
    else
    {
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, *(_QWORD *)&v9[8]);
      v8 = *(_QWORD *)v9;
      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v9[8];
      *(_QWORD *)(a1 + 8) = v8;
      *(_QWORD *)a1 = 0LL;
    }
    return core::ptr::drop_in_place<std::path::PathBuf>(&v13);
  }
  return result;
}