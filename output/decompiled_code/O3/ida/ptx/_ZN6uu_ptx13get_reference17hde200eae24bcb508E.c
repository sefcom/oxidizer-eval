        __int64 a8)
{
  __int128 v8; // xmm0
  _QWORD *v11; // r15
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // [rsp+8h] [rbp-A0h] BYREF
  _QWORD *v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+28h] [rbp-80h]
  __int64 v19; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v21; // [rsp+60h] [rbp-48h] BYREF
  __int128 v22; // [rsp+68h] [rbp-40h]
  char v23; // [rsp+78h] [rbp-30h]

  if ( a2 )
  {
    v8 = *(_OWORD *)(a4 + 32);
    v21 = 0LL;
    v22 = v8;
    v23 = 0;
    v19 = *(_QWORD *)(a4 + 56) + 1LL;
    v20[0] = &v21;
    v20[1] = <os_display::Quoted as core::fmt::Display>::fmt;
    v20[2] = &v19;
    v20[3] = core::fmt::num::imp::<impl core::fmt::Display for usize>::fmt;
    *(_QWORD *)&v15 = &unk_2EDDD0;
    *((_QWORD *)&v15 + 1) = 2LL;
    v18 = 0LL;
    v16 = v20;
    v17 = 2LL;
    core::option::Option<T>::map_or_else(a1, &v15, a3, a4, a5, a6);
  }
  else if ( (_BYTE)a3 )
  {
    regex::regex::string::Regex::find_at(&v15, a7, a8, a5, a6);
    v11 = (_QWORD *)v15;
    v12 = v15;
    if ( (_QWORD)v15 )
    {
      v11 = v16;
      v12 = v17;
    }
    v13 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(
            v11,
            v12,
            a5,
            a6);
    if ( !v13 )
      core::str::slice_error_fail(a5, a6, v11, v12, &off_2EDDF0);
    <T as alloc::slice::hack::ConvertVec>::to_vec(&v15, v13, v14);
    *(_QWORD *)(a1 + 16) = v16;
    *(_OWORD *)a1 = v15;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 1LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
