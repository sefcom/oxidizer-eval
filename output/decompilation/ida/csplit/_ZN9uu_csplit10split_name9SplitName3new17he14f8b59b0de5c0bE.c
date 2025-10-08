__int64 __fastcall uu_csplit::split_name::SplitName::new(__int64 a1, __int64 *a2, __int64 *a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int128 v14; // xmm0
  _BYTE v16[88]; // [rsp+0h] [rbp-128h] BYREF
  __int64 v17; // [rsp+58h] [rbp-D0h]
  __int64 v18; // [rsp+68h] [rbp-C0h]
  __int64 v19; // [rsp+70h] [rbp-B8h] BYREF
  __m256i v20; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+98h] [rbp-90h]
  __int128 v22; // [rsp+A8h] [rbp-80h]
  __int64 v23; // [rsp+B8h] [rbp-70h]
  __int128 v24; // [rsp+C0h] [rbp-68h] BYREF
  __int64 v25; // [rsp+D0h] [rbp-58h]
  __int64 v26; // [rsp+E0h] [rbp-48h] BYREF
  __int128 v27; // [rsp+E8h] [rbp-40h]

  v6 = *a2;
  if ( __OFSUB__(-*a2, 1LL) )
  {
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v16, aXx, 2LL);
    v7 = *(_QWORD *)&v16[8];
    v6 = *(_QWORD *)v16;
    v8 = *(_QWORD *)&v16[16];
  }
  else
  {
    v7 = a2[1];
    v8 = a2[2];
  }
  v18 = v8;
  v9 = *(_QWORD *)a4;
  v10 = 2LL;
  if ( *(_QWORD *)a4 == 0x8000000000000000LL
    || (*(_OWORD *)&v20.m256i_u64[1] = *(_OWORD *)(a4 + 8),
        v20.m256i_i64[0] = v9,
        uu_csplit::split_name::SplitName::new::{{closure}}(v16, &v20),
        v10 = *(_QWORD *)&v16[8],
        v11 = *(_QWORD *)v16,
        v12 = *(_OWORD *)&v16[8],
        v24 = *(_OWORD *)&v16[24],
        *(_QWORD *)v16 == 13LL) )
  {
    v19 = v10;
    v13 = *a3;
    if ( *a3 == 0x8000000000000000LL )
    {
      v20.m256i_i64[0] = (__int64)&v19;
      v20.m256i_i64[1] = (__int64)core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
      *(_QWORD *)v16 = &off_242C28;
      *(_QWORD *)&v16[8] = 2LL;
      *(_QWORD *)&v16[16] = &v20;
      *(_OWORD *)&v16[24] = 1uLL;
      core::option::Option<T>::map_or_else(&v26, v16);
    }
    else
    {
      v27 = *(_OWORD *)(a3 + 1);
      v26 = v13;
    }
    uucore::features::format::Format<F,T>::parse(v16, &v26);
    if ( *(_QWORD *)v16 == 0x8000000000000000LL )
    {
      *(_QWORD *)(a1 + 8) = (*(_QWORD *)&v16[8] == 0x800000000000000FLL) + 9LL;
      *(_QWORD *)a1 = 0x8000000000000000LL;
      core::ptr::drop_in_place<core::result::Result<uucore::features::format::Format<uucore::features::format::num_format::UnsignedInt,u64>,uucore::features::format::FormatError>>(v16);
    }
    else
    {
      v23 = *(_QWORD *)&v16[64];
      v22 = *(_OWORD *)&v16[48];
      v20 = *(__m256i *)v16;
      v21 = *(_OWORD *)&v16[32];
      <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v24, v7, v18);
      v17 = v23;
      *(_OWORD *)&v16[72] = v22;
      *(_OWORD *)&v16[56] = v21;
      *(__m256i *)&v16[24] = v20;
      *(_QWORD *)&v16[16] = v25;
      v14 = v24;
      *(_OWORD *)v16 = v24;
      *(_QWORD *)(a1 + 80) = *((_QWORD *)&v22 + 1);
      *(_QWORD *)(a1 + 88) = v17;
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v16[64];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v16[48];
      *(_OWORD *)(a1 + 32) = *(_OWORD *)&v16[32];
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&v16[16];
      *(_QWORD *)(a1 + 24) = *(_QWORD *)&v16[24];
      *(_OWORD *)a1 = v14;
    }
    return core::ptr::drop_in_place<alloc::string::String>(v6, v7);
  }
  else
  {
    *(_OWORD *)(a1 + 32) = v24;
    *(_QWORD *)(a1 + 8) = v11;
    *(_OWORD *)(a1 + 16) = v12;
    *(_QWORD *)a1 = 0x8000000000000000LL;
    core::ptr::drop_in_place<alloc::string::String>(v6, v7);
    return core::ptr::drop_in_place<alloc::borrow::Cow<str>>(*a3, a3[1]);
  }
}