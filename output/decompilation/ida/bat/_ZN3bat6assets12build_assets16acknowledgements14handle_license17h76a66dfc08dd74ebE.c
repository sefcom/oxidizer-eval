__int64 __fastcall bat::assets::build_assets::acknowledgements::handle_license(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int128 v8; // kr10_16
  __m256i v9; // [rsp+0h] [rbp-98h] BYREF
  __int64 v10; // [rsp+20h] [rbp-78h]
  __int128 v11; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+40h] [rbp-58h]
  _QWORD v13[2]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v15; // [rsp+68h] [rbp-30h] BYREF
  __int64 v16; // [rsp+78h] [rbp-20h]

  v13[0] = a2;
  v13[1] = a3;
  std::fs::read_to_string(&v9);
  v5 = v9.m256i_i64[1];
  result = v9.m256i_i64[0];
  if ( __OFSUB__(-v9.m256i_i64[0], 1LL) )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 8) = v5;
  }
  else
  {
    v6 = v9.m256i_i64[2];
    v11 = *(_OWORD *)v9.m256i_i8;
    v12 = v9.m256i_i64[2];
    if ( (unsigned __int8)bat::assets::build_assets::acknowledgements::include_license_in_acknowledgments(
                            v9.m256i_i64[1],
                            v9.m256i_i64[2],
                            v3,
                            -v9.m256i_i64[0]) )
    {
      result = v12;
      *(_QWORD *)(a1 + 24) = v12;
      *(_OWORD *)(a1 + 8) = v11;
      *(_BYTE *)a1 = 13;
    }
    else
    {
      if ( (unsigned __int8)bat::assets::build_assets::acknowledgements::license_not_needed_in_acknowledgements(v5, v6) )
      {
        *(_QWORD *)(a1 + 8) = 0x8000000000000000LL;
        *(_BYTE *)a1 = 13;
      }
      else
      {
        v14[0] = v13;
        v14[1] = <&T as core::fmt::Debug>::fmt;
        v9.m256i_i64[0] = (__int64)&off_6CDFA8;
        v9.m256i_i64[1] = 1LL;
        v10 = 0LL;
        v9.m256i_i64[2] = (__int64)v14;
        v9.m256i_i64[3] = 1LL;
        core::option::Option<T>::map_or_else(&v15, 0LL, v7, &v9);
        *(_OWORD *)((char *)&v9.m256i_u32[1] + 3) = v15;
        *(__int64 *)((char *)&v9.m256i_i64[2] + 7) = v16;
        *(_BYTE *)a1 = 11;
        v8 = *(_OWORD *)((char *)&v9.m256i_u64[1] + 7);
        *(_OWORD *)(a1 + 1) = *(_OWORD *)v9.m256i_i8;
        *(_OWORD *)(a1 + 16) = v8;
      }
      return core::ptr::drop_in_place<alloc::string::String>(&v11);
    }
  }
  return result;
}