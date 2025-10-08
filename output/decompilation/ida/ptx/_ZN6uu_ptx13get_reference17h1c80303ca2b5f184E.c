void __fastcall uu_ptx::get_reference(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int128 v8; // xmm0
  _QWORD *v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD *v17; // [rsp+18h] [rbp-90h]
  __int64 v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v21[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h] BYREF
  __int128 v23; // [rsp+68h] [rbp-40h]
  char v24; // [rsp+78h] [rbp-30h]

  if ( (a2 & 1) != 0 )
  {
    v8 = *(_OWORD *)(a4 + 32);
    v22 = 0LL;
    v23 = v8;
    v24 = 0;
    v20 = *(_QWORD *)(a4 + 56) + 1LL;
    v21[0] = &v22;
    v21[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v21[2] = &v20;
    v21[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v16 = &unk_2518C0;
    *((_QWORD *)&v16 + 1) = 2LL;
    v19 = 0LL;
    v17 = v21;
    v18 = 2LL;
    core::option::Option<T>::map_or_else(a1, &v16);
  }
  else if ( (a3 & 1) != 0 )
  {
    regex::regex::string::Regex::find_at(&v16, a7, a8, a5, a6);
    v11 = (_QWORD *)v16;
    v12 = v16;
    if ( (_QWORD)v16 )
    {
      v11 = v17;
      v12 = v18;
    }
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v11,
            v12,
            a5,
            a6);
    if ( !v13 )
      core::str::slice_error_fail(a5, a6, v11, v12, &off_2518E0);
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(&v16, v13, v14, v15);
    *(_QWORD *)(a1 + 16) = v17;
    *(_OWORD *)a1 = v16;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}